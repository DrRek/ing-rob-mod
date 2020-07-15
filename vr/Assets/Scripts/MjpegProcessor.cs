using UnityEngine;
using System.Collections;
using System;
using System.Text;
using System.Net;
using System.IO;
using System.Threading;
// If you see the error "The type or namespace name `Drawing' does not exist in the namespace `System'. Are you missing an assembly reference?"
// Then you need to copy "System.Drawing.dll" from the Mono directory into your Unity Project Directory
using System.Drawing;

public class MjpegProcessor {

    // 2 byte header for JPEG images
    private readonly byte[] JpegHeader = new byte[] { 0xff, 0xd8 };
    // pull down 1024 bytes at a time
    private int _chunkSize = 1024*4;
    // used to cancel reading the stream
    private bool _streamActive;
    // current encoded JPEG image
    public byte[] CurrentFrame { get; private set; }
    // WPF, Silverlight
    //public BitmapImage BitmapImage { get; set; }
    // used to marshal back to UI thread
    private SynchronizationContext _context;
    public byte[] latestFrame = null;
    private bool responseReceived = false;

    // event to get the buffer above handed to you
    public event EventHandler<FrameReadyEventArgs> FrameReady;
    public event EventHandler<ErrorEventArgs> Error;

    public MjpegProcessor(int chunkSize = 4 * 1024)
    {
        _context = SynchronizationContext.Current;
        _chunkSize = chunkSize;
    }


    public void ParseStream(Uri uri)
    {
        ParseStream(uri, null, null);
    }

    public void ParseStream(Uri uri, string username, string password)
    {
        Debug.Log("Parsing Stream " + uri.ToString());
        HttpWebRequest request = (HttpWebRequest)WebRequest.Create(uri);
        if (!string.IsNullOrEmpty(username) || !string.IsNullOrEmpty(password))
            request.Credentials = new NetworkCredential(username, password);
        // asynchronously get a response
        request.BeginGetResponse(OnGetResponse, request);
    }

    public void StopStream()
    {
        _streamActive = false;
    }
    public static int FindBytes(byte[] buff, byte[] search, int startPos = 0)
    {
        // enumerate the buffer but don't overstep the bounds
        for (int start = startPos; start < buff.Length - search.Length; start++)
        {
            // we found the first character
            if (buff[start] == search[0])
            {
                int next;

                // traverse the rest of the bytes
                for (next = 1; next < search.Length; next++)
                {
                    // if we don't match, bail
                    if (buff[start + next] != search[next])
                        break;
                }

                if (next == search.Length)
                    return start;
            }
        }
        // not found
        return -1;
    }
    public static int FindBytesInReverse(byte[] buff, byte[] search)
    {
        // enumerate the buffer but don't overstep the bounds
        for (int start = buff.Length - search.Length - 1; start > 0; start--)
        {
            // we found the first character
            if (buff[start] == search[0])
            {
                int next;

                // traverse the rest of the bytes
                for (next = 1; next < search.Length; next++)
                {
                    // if we don't match, bail
                    if (buff[start + next] != search[next])
                        break;
                }

                if (next == search.Length)
                    return start;
            }
        }
        // not found
        return -1;
    }

    private void OnGetResponse(IAsyncResult asyncResult)
    {
        responseReceived = true;
        Debug.Log("OnGetResponse");
        byte[] imageBuffer = new byte[1024 * 1024];

        Debug.Log("Starting request");
        // get the response
        HttpWebRequest req = (HttpWebRequest)asyncResult.AsyncState;

        try
        {
            Debug.Log("OnGetResponse try entered.");
            HttpWebResponse resp = (HttpWebResponse)req.EndGetResponse(asyncResult);
            Debug.Log("response received");
            // find our magic boundary value
            string contentType = resp.Headers["Content-Type"];
            if (!string.IsNullOrEmpty(contentType) && !contentType.Contains("="))
            {
                Debug.Log("MJPEG Exception thrown");
                throw new Exception("Invalid content-type header.  The camera is likely not returning a proper MJPEG stream.");
            }

            string boundary = resp.Headers["Content-Type"].Split('=')[1].Replace("\"", "");
            byte[] boundaryBytes = Encoding.UTF8.GetBytes(boundary.StartsWith("--") ? boundary : "--" + boundary);

            Stream s = resp.GetResponseStream();
            BinaryReader br = new BinaryReader(s);

            _streamActive = true;
            while(_streamActive){
                byte[] prova = br.ReadBytes(100);

                int lengthOffset = 54;
                String result = "";
                while(true){
                    byte c = prova[lengthOffset];
                    if(c < 48 || c > 57)
                        break;
                    result += (c-48);
                    lengthOffset++;
                }
                int imageLength = Convert.ToInt32(result);

                int startImage = FindBytes(prova, JpegHeader);
                int copiedToImage = prova.Length-startImage;
                Array.Copy(prova, startImage, imageBuffer, 0, copiedToImage);

                int restOfImageLength = imageLength - copiedToImage + 2;
                byte[] restOfImage = br.ReadBytes(restOfImageLength);

                Array.Copy(restOfImage, 0, imageBuffer, prova.Length-startImage, restOfImage.Length);
                CurrentFrame = imageBuffer;
                if (FrameReady != null)
                    FrameReady(this, new FrameReadyEventArgs());

                if (!_streamActive){
                    Debug.Log("CLOSING");
                    resp.Close();
                    break;
                }
            }

            resp.Close();
        }
        catch (Exception ex)
        {
            Debug.Log($"Errore {ex.StackTrace}");
            if (Error != null)
                _context.Post(delegate { Error(this, new ErrorEventArgs() { Message = ex.Message }); }, null);

            return;
        }
    }
}

public class FrameReadyEventArgs : EventArgs
{
  
}

public sealed class ErrorEventArgs : EventArgs

{
    public string Message { get; set; }
    public int ErrorCode { get; set; }
}



/*
OLD CODE
Debug.Log("Ora inizia il mio algoritmo!");
_streamActive = true;
int copiedToImageBuffer = 0;
byte[] buff = null;
_chunkSize = 460800;
while(_streamActive){
    if(buff == null){
        buff = br.ReadBytes(_chunkSize);
    }

    if(copiedToImageBuffer == 0){
        int imageStart = FindBytes(buff, JpegHeader);
        if(imageStart == -1){
            continue;
        } else {
            Array.Copy(buff, imageStart, buff, 0, buff.Length - imageStart);
            Array.Resize(ref buff, buff.Length - imageStart);
        }
    }

    int imageEnd = FindBytes(buff, boundaryBytes);
    if(imageEnd == -1){
        Array.Copy(buff, 0, imageBuffer, copiedToImageBuffer, buff.Length);
        copiedToImageBuffer+=buff.Length;
        buff = null; //next iteration will take data from the stream
    } else {
        Array.Copy(buff, 0, imageBuffer, copiedToImageBuffer, imageEnd);

        //Debug.Log(copiedToImageBuffer+imageEnd);
        CurrentFrame = imageBuffer;
        if (FrameReady != null)
            FrameReady(this, new FrameReadyEventArgs());
        copiedToImageBuffer = 0;

        Array.Copy(buff, imageEnd, buff, 0, buff.Length-imageEnd);
        Array.Resize(ref buff, buff.Length-imageEnd);
    }
}


/*_streamActive = true;
byte[] buff = br.ReadBytes(_chunkSize);

while (_streamActive)
{
    // find the JPEG header
    int imageStart = FindBytes(buff, JpegHeader);// buff.Find(JpegHeader);

    if (imageStart != -1)
    {
        // copy the start of the JPEG image to the imageBuffer
        int size = buff.Length - imageStart;
        Array.Copy(buff, imageStart, imageBuffer, 0, size);
        Debug.Log("qua 1");

        int problema = FindBytes(imageBuffer, boundaryBytes);
        Debug.Log(problema);

        while (true)
        {
            buff = br.ReadBytes(_chunkSize);

            // Find the end of the jpeg
            int imageEnd = FindBytes(buff, boundaryBytes);
            if (imageEnd != -1)
            {
                // copy the remainder of the JPEG to the imageBuffer
        Debug.Log($"qua 2.1 {size} {imageEnd} {imageBuffer.Length}");
                Array.Copy(buff, 0, imageBuffer, size, imageEnd);
        Debug.Log("qua 2");
                size += imageEnd;

                // Copy the latest frame into `CurrentFrame`
                byte[] frame = new byte[size];
                Array.Copy(imageBuffer, 0, frame, 0, size);
        Debug.Log("qua 3");
                CurrentFrame = frame;

                // tell whoever's listening that we have a frame to draw
                if (FrameReady != null)
                    FrameReady(this, new FrameReadyEventArgs());
                // copy the leftover data to the start
                Array.Copy(buff, imageEnd, buff, 0, buff.Length - imageEnd);
        Debug.Log("qua 4");

                // fill the remainder of the buffer with new data and start over
                byte[] temp = br.ReadBytes(imageEnd);

                Array.Copy(temp, 0, buff, buff.Length - imageEnd, temp.Length);
        Debug.Log("qua 5");
                break;
            }

            // copy all of the data to the imageBuffer
            Array.Copy(buff, 0, imageBuffer, size, buff.Length);
        Debug.Log("qua 6");
            size += buff.Length;

            if (!_streamActive)
            {
                Debug.Log("CLOSING");
                resp.Close();
                break;
            }
        }
    }
}*/