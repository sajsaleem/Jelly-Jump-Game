using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowScript : MonoBehaviour {
	private Transform Player;
	private Vector3 ViewPortPos;
	private Vector3 CameraPoas;
	private float HoldTempPos;
	public float Ysmoothspeed;
	private float CamIntialPos;
	private Camera cam;
	public static bool AddScoreNow;
	private GameController_Script gamecontroller;
	public float AddScoreDelay;
	private float AddScoreTime;
	// Use this for initialization
	void Start () {
		AddScoreNow = false;
		Player = GameObject.FindWithTag ("Player").transform;
		CamIntialPos = transform.position.y + 1.5f;
		cam = GetComponent <Camera> ();
		GameObject GameControl = GameObject.FindWithTag ("GameController");
		gamecontroller = GameControl.GetComponent <GameController_Script> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (PlayerYPosCheck ()) {
			HoldTempPos = transform.position.y + CamIntialPos * Time.deltaTime * Ysmoothspeed;
			transform.position = new Vector3 (transform.position.x, HoldTempPos, transform.position.z);
		}
	}

	// Returns true if player position is more than 0.5 value in ViewPort
	bool PlayerYPosCheck(){
		ViewPortPos = cam.WorldToViewportPoint (Player.position);
		if (ViewPortPos.y > 0.5f) {
			if (Time.time > AddScoreTime) {
				AddScoreTime= Time.time + AddScoreDelay;
				gamecontroller.AddScore ();
			}
			return true;
		}
		else
			return false;
	}
}
