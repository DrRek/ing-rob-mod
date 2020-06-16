using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DraggablePoint : PropertyAttribute {}

public class LinearActuator : MonoBehaviour
{
    public GameObject staticPiston, movingPiston;
    public int stepsNumber = 100;

    public GameObject topObject, attachPoint;
    [DraggablePoint] public Vector3 attachPointPosition;

    private float min, max, stepSize;
    private Vector3 minForceForUpdateBug;
    private ConfigurableJoint joint;
    private Rigidbody movingRigidbody;

    private int currentStep;

    void Start(){
        joint=movingPiston.GetComponent<ConfigurableJoint>();
        movingRigidbody=movingPiston.GetComponent<Rigidbody>();

        minForceForUpdateBug = new Vector3(0f,-0.1f,0f);

        //Setup anchor to custom object
        ConfigurableJoint confJoin = topObject.AddComponent(typeof(ConfigurableJoint)) as ConfigurableJoint;
        confJoin.connectedBody = attachPoint.GetComponent<Rigidbody>();
        confJoin.autoConfigureConnectedAnchor = false;
        confJoin.anchor = new Vector3(0f, -3f, 0f);
        confJoin.connectedAnchor = attachPoint.transform.InverseTransformPoint(attachPointPosition);
        confJoin.xMotion = ConfigurableJointMotion.Locked;
        confJoin.yMotion = ConfigurableJointMotion.Locked;
        confJoin.zMotion = ConfigurableJointMotion.Locked;

        //Initialize costants used to calculate the steps
        min=-1f;
        max=1f;
        stepSize=(max-min)/stepsNumber;

        //Initialize current position to avoid some flickr
        Vector3 anchor = joint.connectedAnchor;
        //(anchor.y - min) : (max - min) = x : stepsNumber
        currentStep =  Mathf.RoundToInt((anchor.y - min)*stepsNumber/(max - min));
        updateAnchorStep();
    }

    void updateAnchorStep(){
        Vector3 anchor = joint.connectedAnchor;
        anchor.y = min+currentStep*stepSize;

        //This is in order to update the anchor
        joint.connectedAnchor = anchor;
        movingRigidbody.AddForce(minForceForUpdateBug);
    }

    public void pistonExtend(int steps){
        currentStep = Mathf.Min(currentStep + steps, stepsNumber);
        updateAnchorStep();
    }

    public void pistonRetract(int steps){
        currentStep = Mathf.Max(currentStep - steps, 0);
        updateAnchorStep();   
    }

    public int getCurrentStep(){
        return currentStep;
    }
}





/*float extensionDistance = transform.localScale.y * 10;
        Vector3 minPosition=staticPiston.transform.position;
        Vector3 maxPosition=staticPiston.transform.position + staticPiston.transform.up*extensionDistance;

        float distance = Vector3.Distance(minPosition, movingPiston.transform.position);
        
        float direction = Input.GetAxis("Vertical");
        if(direction > 0)
        if((direction > 0 &&  distance <=extensionDistance) || (direction < 0 && distance > 0)){
            movingPiston.transform.Translate(0f, Input.GetAxis("Vertical")*Time.deltaTime*20, 0f);
            
            //Serve per evitare che possa scappare
            if(Vector3.Distance(minPosition, movingPiston.transform.position) > extensionDistance)
                movingPiston.transform.position = maxPosition;
            else if(Vector3.Distance(maxPosition, movingPiston.transform.position) > extensionDistance)
                movingPiston.transform.position = minPosition;
        }*/