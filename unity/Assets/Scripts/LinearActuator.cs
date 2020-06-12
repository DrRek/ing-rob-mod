using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LinearActuator : MonoBehaviour
{
    public GameObject staticPiston, movingPiston;
    public int stepsNumber = 100;

    private float min, max, stepSize;
    private Vector3 minForceForUpdateBug;
    private ConfigurableJoint joint;
    private Rigidbody movingRigidbody;

    // Start is called before the first frame update
    void Start(){
        min=-1f;
        max=1f;
        stepSize=(max-min)/stepsNumber;

        joint=movingPiston.GetComponent<ConfigurableJoint>();
        movingRigidbody=movingPiston.GetComponent<Rigidbody>();

        minForceForUpdateBug = new Vector3(0f,-0.1f,0f);
    }

    // Update is called once per frame
    void Update(){
        float direction = Input.GetAxis("Vertical");
        if(direction > 0){
            pistonExtend(1);
        } else if(direction < 0){
            pistonRetract(1);
        }
    }

    void pistonExtend(int multiplicator){
        Vector3 anchor = joint.connectedAnchor;
        anchor.y = Mathf.Min(anchor.y+multiplicator*stepSize, max);
        updateMovingAnchor(anchor);
    }

    void pistonRetract(int multiplicator){
        Vector3 anchor = joint.connectedAnchor;
        anchor.y = Mathf.Max(anchor.y-multiplicator*stepSize, min);
        updateMovingAnchor(anchor);
    }

    void updateMovingAnchor(Vector3 anchor){
        joint.connectedAnchor = anchor;
        movingRigidbody.AddForce(minForceForUpdateBug);
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