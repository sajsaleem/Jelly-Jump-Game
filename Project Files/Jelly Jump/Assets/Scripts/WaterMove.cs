using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterMove : JellyScript {
	private Vector3 TempPos;
	public float MoveSpeed;
	public float MoveAmount;
	private WaterMove watemove;
	// Use this for initialization
	void Start () {
		watemove = GetComponent <WaterMove> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (JellyDestroyed == true) {
			watemove.enabled = false;
		}
			TempPos = gameObject.transform.position;
			TempPos.y += MoveAmount * Time.deltaTime * MoveSpeed;
			transform.position = TempPos;
	}
}
