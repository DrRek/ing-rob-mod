using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IndipendentCamera : MonoBehaviour {


    protected int parameterHashVector;
    protected int parameterHashFloat;
    public Vector3 leftEye = new Vector4(0f,0f,0f);
    public Vector3 rightEye = new Vector4(0f,0f,0f);
    protected Camera cam;

    void Awake()
    {
        parameterHashVector = Shader.PropertyToID("_EyeTransformVector");
        parameterHashFloat = Shader.PropertyToID("_EyeFloatFlag");
        cam = GetComponent<Camera>();
    }

    void OnPreRender() 
    {
        Vector3 position = cam.stereoActiveEye == Camera.MonoOrStereoscopicEye.Left ? rightEye : leftEye;
        cam.transform.position = position;
    }

}
