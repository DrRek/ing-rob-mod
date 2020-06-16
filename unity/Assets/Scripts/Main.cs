using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main : MonoBehaviour
{
    public GameObject rearPiston, leftPiston, rightPiston;

    private LinearActuator rearPistonScript, leftPistonScript, rightPistonScript;


    // Start is called before the first frame update
    void Start(){
        rearPistonScript = rearPiston.GetComponent<LinearActuator>();
    }

    // Update is called once per frame
    void Update(){
        float direction = Input.GetAxis("Vertical");
        if(direction > 0){
            Debug.Log("vengo chiamtao");
            rearPistonScript.pistonExtend(1);
        } else if(direction < 0){
            rearPistonScript.pistonRetract(1);
        }
    }
}
