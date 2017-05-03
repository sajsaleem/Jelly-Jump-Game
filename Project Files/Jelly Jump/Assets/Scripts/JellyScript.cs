using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[System.Serializable]
public class PlayerBoundary {
	public float xmin,xmax,zmin,zmax;
}

public class JellyScript : MonoBehaviour {

	private Rigidbody rb;
	public float Jumpforce;
	private float TempJumpVal;
	private bool JumpNow;
	public bool Onground;
	private bool IsStuck;
	private Collider ObjColl;
	private GameObject HazFace;
	private Transform currentCollPos;
	public static bool JellyDestroyed;
	private int count= 0;
	public PlayerBoundary boundary;

	// Use this for initialization
	void Start () {
		rb = GetComponent <Rigidbody> ();
		ObjColl = GetComponent <Collider> ();
		Onground = false;
		IsStuck = false;
		HazFace = GameObject.FindWithTag ("HazardFace").gameObject;
		JellyDestroyed = false;
		TempJumpVal = Jumpforce;
	}
	
	// Update is called once per frame
	void Update () {
		//GetInput ();
		GetTouchInput ();
		JellyStuck ();
	}

	void FixedUpdate (){
		SetPlayerBoundary ();
		if (JumpNow) {
			rb.velocity= Vector3.zero;
			rb.AddForce (0.0f, Jumpforce, 0.0f); // Player will only jump one direction i.e is upwards.
			JumpNow = false;
			StartCoroutine (EnableTrigger ());
		}
		if (JellyDestroyed)
			StartCoroutine (DestroyPlayer ());
		    
	}
		
	void OnCollisionStay (Collision coll){
		if (coll.transform.tag == "Ground") {
			Onground = true;
		}
		if (coll.transform.tag == "HazardFace") {
			IsStuck = true;
			currentCollPos = coll.transform;
		}

	}

	void OnCollisionExit (Collision coll){
		Onground = false;
	}

	/*#if UNITY_EDITOR
	void GetInput(){
		if (Input.GetMouseButtonDown (0) && Onground) {
			JumpNow = true;
		}

		if (Input.GetMouseButtonUp (0)) {
			JumpNow = false;
		}
	}
	#endif*/

	// Function detects if player has touched the screen.
	void GetTouchInput(){
		if (Input.touchCount > 0) {
			for (int i = 0; i < Input.touchCount; i++) {
				Touch touch = Input.GetTouch (i);
				if (touch.phase == TouchPhase.Began && Onground) {
					JumpNow = true;
				}
				if (touch.phase == TouchPhase.Ended) {
					JumpNow = false;
				}
			}
		}
	}

	IEnumerator EnableTrigger () {
		yield return new WaitForSeconds (0.25f);
		ObjColl.isTrigger = false;
	}

	/*#if UNITY_EDITOR
	void JellyStuck(){
		if (IsStuck) {
			Onground = false;
			ObjColl.isTrigger = true;
			Jumpforce = 0.0f;
			rb.useGravity = false;
			rb.isKinematic = true;
			Vector3 tempPos = transform.position;
			tempPos.y = currentCollPos.position.y;
			transform.position = tempPos;
			//transform.position = HazFace.transform.position;
			if (Input.GetMouseButtonDown (0)) {
				count++;
				if (count == 3) {
					count = 0;
					Debug.Log (TempJumpVal);
					Jumpforce = TempJumpVal;
					rb.useGravity = true;
					JumpNow = true;
					IsStuck = false;
					rb.isKinematic = false;
				}
			}
		}
	}

	#endif*/
	// Function holds functionality for case when jelly gets stuck in between two hazards.
		void JellyStuck (){
		if (IsStuck) {
			Onground = false;
			ObjColl.isTrigger = true;
			Jumpforce = 0.0f;
			rb.useGravity = false;
			rb.isKinematic = true;
			Vector3 tempPos = transform.position;
			tempPos.y = currentCollPos.position.y;
			transform.position = tempPos;
			if (Input.touchCount > 0) {
				for (int i = 0; i < Input.touchCount; i++) {
					Touch touch = Input.GetTouch (i);
					if (touch.phase == TouchPhase.Began) {
						count++;
						if (count == 3) {
							count = 0;
							Debug.Log (TempJumpVal);
							Jumpforce = TempJumpVal;
							rb.useGravity = true;
							JumpNow = true;
							IsStuck = false;
							rb.isKinematic = false;
						}
					}
				}
			}
		}
	}

	//This function sets boundaries for jelly in x and z direction so that jelly couldn't divert from path due to collision.
		void SetPlayerBoundary(){
		transform.position= new Vector3 (
			Mathf.Clamp (transform.position.x, boundary.xmin, boundary.xmax),
			transform.position.y,
			Mathf.Clamp (transform.position.z, boundary.zmin, boundary.zmax)
		);
	}

	// Function sets JellDestroyed value to be true when jelly enters inside water.
	void OnTriggerEnter (Collider col){
		if (col.transform.tag == "Water") {
			JellyDestroyed = true;
		}
	}

	// Function will disable jelly GameObject if jelly falls in water
	IEnumerator DestroyPlayer (){
		yield return new WaitForSeconds (1f);
		//Destroy (gameObject);
		gameObject.SetActive(false);
	}
		
}
