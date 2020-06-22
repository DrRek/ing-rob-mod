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
        leftPistonScript = leftPiston.GetComponent<LinearActuator>();
        rightPistonScript = rightPiston.GetComponent<LinearActuator>();
    }

    // Update is called once per frame
    void Update(){
        if (Input.GetKey(KeyCode.Q))
            leftPistonScript.pistonExtend(1);
        else if (Input.GetKey(KeyCode.A))
            leftPistonScript.pistonRetract(1);

        if (Input.GetKey(KeyCode.E))
            rightPistonScript.pistonExtend(1);
        else if (Input.GetKey(KeyCode.D))
            rightPistonScript.pistonRetract(1);

        if (Input.GetKey(KeyCode.W))
            rearPistonScript.pistonExtend(1);
        else if (Input.GetKey(KeyCode.S))
            rearPistonScript.pistonRetract(1);
    }
}
