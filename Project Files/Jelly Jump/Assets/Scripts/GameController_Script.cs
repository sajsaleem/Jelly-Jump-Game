using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController_Script : MonoBehaviour {
	public GameObject [] Hazards;
	//List <GameObject> TempHazards;
	private Vector3 LastHazardPos;
	public float TempPos;
	private GameObject NewObj;
	private GameObject OldObj;
	public float SpawnRepeat;
	private float NextSpawn;
	private GameObject Player;
	private JellyScript jellyscript;
	private int Score;
	public GUIText ScoreDisplay;
	public GUIText BestScoreDisplay;
	private int RandomIndex;
	private bool CanSpawn;
	private float NewSpawnPos;
	public GUIText Restart;
	private bool GameNotStarted;
	private Camera cam;
	void Awake (){
		Time.timeScale = 0;
		GameNotStarted = true;
		ScoreDisplay.enabled = true;
		ScoreDisplay.text= "Tap to Start";
		NewObj=Instantiate(Hazards[1]);
		NewSpawnPos = 4.0f;
		BestScoreDisplay.enabled = false;
		Restart.enabled = false;
		cam = GetComponent <Camera> ();
	}
	// Use this for initialization
	void Start () {
		Score = 0;
		Player = GameObject.FindWithTag ("Player");
		jellyscript = Player.GetComponent <JellyScript> ();
		CanSpawn = false;
		OldObj=NewObj;
	}

	void Update(){
		if (GameNotStarted) {
			if (Input.touchCount > 0) {
				Touch touch = Input.GetTouch (0);
				if (touch.phase == TouchPhase.Began) {
			//if (Input.GetMouseButtonDown(0)){
					Time.timeScale = 1;
					ScoreDisplay.text = Score.ToString ();
				GameNotStarted = false;
				}
			}
		}
		
		RandomIndex = Random.Range (0,Hazards.Length);

		if (Player.transform.position.y > OldObj.transform.position.y) {
			if (Time.time > NextSpawn) {
				NextSpawn = Time.time + SpawnRepeat;
				Debug.Log (NewSpawnPos);
				NewSpawnPos = NewSpawnPos + TempPos;
				NewObj = (GameObject)Instantiate (Hazards [RandomIndex]);
				NewObj.transform.position = new Vector3 (Hazards [RandomIndex].transform.position.x, NewSpawnPos, Hazards [RandomIndex].transform.position.z);
				NewObj.transform.rotation = Quaternion.identity;
				if (OldObj != null)
					Destroy (OldObj, 6f);
				OldObj = NewObj;
			}
		}

		if (JellyScript.JellyDestroyed) {
			GameRestartMenu ();
		}
	}

	public void AddScore(){
		Score += 1;
		UpdateScore ();
	}
	public void UpdateScore(){
		ScoreDisplay.text = Score.ToString ();
		BestScore ();
	}

	public void BestScore(){
		if (PlayerPrefs.GetInt ("BestScore") > 0) {
			if (PlayerPrefs.GetInt ("BestScore") < Score) {
				PlayerPrefs.SetInt ("BestScore", Score);
			}
		} 
		else
			PlayerPrefs.SetInt ("BestScore", Score);
	}

	public void GameRestartMenu(){
		BestScoreDisplay.enabled = true;
		BestScoreDisplay.text = "Best Score:" + " " + PlayerPrefs.GetInt ("BestScore").ToString ();
		ScoreDisplay.text = "Your Score:" + " " + Score;
		Restart.enabled = true;
		if (Input.GetMouseButtonDown (0)) {
			//Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			if (Restart.HitTest (Input.mousePosition, cam)) {
				Application.LoadLevel (Application.loadedLevel);
			}
		}
	}
}
