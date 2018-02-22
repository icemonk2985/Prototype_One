using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arrow : MonoBehaviour {

    private bool isFired = false;

    void OnTriggerStay(Collider _other) {
        AttachArrow();
    }

    void OnTriggerEnter(Collider _other) {
        AttachArrow();
    }


    void Update() {
        if (isFired) {
            transform.LookAt(transform.position + transform.GetComponent<Rigidbody>().velocity);
        }

    }

    public void Fired() {
        isFired = true;
    }

    private void AttachArrow() {
        var device = SteamVR_Controller.Input((int)ArrowManager.Instance.trackedObj.index);
        if (device.GetTouch(SteamVR_Controller.ButtonMask.Trigger))
        {
            ArrowManager.Instance.AttachBowToArrow();
        } 
    }
}
