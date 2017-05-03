using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShutScript : GeneralSlideScript {
	private GameObject RightRotHaz;
	private GameObject LeftRotHaz;
	private float RightRot;
	private float LeftRot;

	private Quaternion RotationRight;
	private Quaternion RotationLeft;
	public float RotationAmount;
	public float RotSpeed;
	// Use this for initialization
	public override void Start () {
		movespeed = 2.25f;
		Right = gameObject.transform.FindChild ("RightPart").gameObject;
		Left = gameObject.transform.FindChild ("LeftPart").gameObject;
		RightRotHaz = Right.transform.FindChild ("RightRotHaz").gameObject;
		LeftRotHaz = Left.transform.FindChild ("LeftRotHaz").gameObject;
		RightStartPos = Right.transform.position;
		LeftStartPos = Left.transform.position;
		RotationRight = RightRotHaz.transform.rotation;
		RotationLeft = LeftRotHaz.transform.rotation;
		GameObject MainCam = GameObject.FindWithTag ("MainCamera");
		Cam = MainCam.GetComponent <Camera> ();
	}
	
	// Update is called once per frame
	public override void Update () {
		

		if (CheckCurPos ()) {
			movespeed = 0.0f;
			MoveAmount = 0.0f;
			if (CheckRotation()) {
				RotSpeed = 0.0f;
				RotationAmount = 0.0f;
			}
			HazardRotate ();
		}
		SliderMovement ();
	}

	bool CheckRotation(){
		if (RotationRight.z < 0.001f) {
			return true;
		}
		else
			return false;
	}

	bool CheckCurPos(){
		//float RightCurPos = Right.transform.position.x;
		//float LeftCurPos = Left.transform.position.x;
		RightCurPos=Cam.WorldToViewportPoint(Right.transform.position);

		if (RightCurPos.x < 0.25f)
			return true;
		else
			return false;
	}

	void HazardRotate(){
		RotationRight.z -= RotationAmount * Time.deltaTime * RotSpeed;
		RotationLeft.z += RotationAmount * Time.deltaTime * RotSpeed;
		RightRotHaz.transform.rotation = RotationRight;
		LeftRotHaz.transform.rotation = RotationLeft;

	}
}
