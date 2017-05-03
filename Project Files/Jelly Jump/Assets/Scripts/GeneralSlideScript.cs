using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GeneralSlideScript : MonoBehaviour {

	public float dist; // var to set distance between two sides
	protected GameObject Right; // holds GamObject reference for child "Right" moving right to left 
	protected GameObject Left; // holds GameObject referencefor child "Left" moving left to right
	public float movespeed;
	public float MoveAmount=1.5f;
	protected Vector3 RightStartPos;
	protected Vector3 LeftStartPos;
	private GameObject SlidingHazard;

	protected Camera Cam;
	private GameObject MainCam;

	protected Vector3 RightCurPos;
	private Vector3 LeftCurPos;
	public virtual void Start(){
		Right = gameObject.transform.FindChild ("Right").gameObject;
		Left= gameObject.transform.FindChild ("Left").gameObject;

		RightStartPos = Right.transform.position;
		LeftStartPos = Left.transform.position;

		GameObject MainCam = GameObject.FindWithTag ("MainCamera");
		Cam = MainCam.GetComponent <Camera> ();

		//RightStartPos = Cam.WorldToViewportPoint (Right.transform.position);
		//LeftStartPos = Cam.WorldToViewportPoint (Left.transform.position);
	}

	public virtual void Update (){
		//if ((Right.transform.position.x - Left.transform.position.x) <= dist) {
		if (RightPosCheck ()){
			movespeed = 0.0f;
			MoveAmount = 0.0f;
			SliderMovement ();
		} 
		else {
			SliderMovement ();
		}
	}

	public virtual void SliderMovement(){
		RightStartPos.x -= MoveAmount * Time.deltaTime * movespeed;
		LeftStartPos.x += MoveAmount * Time.deltaTime * movespeed;

		Right.transform.position = RightStartPos;
		Left.transform.position = LeftStartPos;
	}

	bool RightPosCheck (){
		RightCurPos = Cam.WorldToViewportPoint (Right.transform.position);
		if(RightCurPos.x < 1.0f)//0.98f)
				return true;
			else
				return false;
	}

	/*bool LeftPosCheck (){
		LeftCurPos = Cam.WorldToViewportPoint (Left.transform.position);
		if (LeftCurPos.x > 0.0f)//0.02f)
			return true;
		else
			return false;
	}*/
}
