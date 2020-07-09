using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LargeMesh : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Mesh mesh = GetComponent<MeshFilter>().mesh;
        mesh.bounds = new Bounds(new Vector3(-20f,-20f, 5), new Vector3(20f,20f, 5));
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
