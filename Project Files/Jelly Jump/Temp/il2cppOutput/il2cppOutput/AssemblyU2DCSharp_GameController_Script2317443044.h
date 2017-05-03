#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// JellyScript
struct JellyScript_t450260415;
// UnityEngine.GUIText
struct GUIText_t2411476300;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController_Script
struct  GameController_Script_t2317443044  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] GameController_Script::Hazards
	GameObjectU5BU5D_t3057952154* ___Hazards_2;
	// UnityEngine.Vector3 GameController_Script::LastHazardPos
	Vector3_t2243707580  ___LastHazardPos_3;
	// System.Single GameController_Script::TempPos
	float ___TempPos_4;
	// UnityEngine.GameObject GameController_Script::NewObj
	GameObject_t1756533147 * ___NewObj_5;
	// UnityEngine.GameObject GameController_Script::OldObj
	GameObject_t1756533147 * ___OldObj_6;
	// System.Single GameController_Script::SpawnRepeat
	float ___SpawnRepeat_7;
	// System.Single GameController_Script::NextSpawn
	float ___NextSpawn_8;
	// UnityEngine.GameObject GameController_Script::Player
	GameObject_t1756533147 * ___Player_9;
	// JellyScript GameController_Script::jellyscript
	JellyScript_t450260415 * ___jellyscript_10;
	// System.Int32 GameController_Script::Score
	int32_t ___Score_11;
	// UnityEngine.GUIText GameController_Script::ScoreDisplay
	GUIText_t2411476300 * ___ScoreDisplay_12;
	// UnityEngine.GUIText GameController_Script::BestScoreDisplay
	GUIText_t2411476300 * ___BestScoreDisplay_13;
	// System.Int32 GameController_Script::RandomIndex
	int32_t ___RandomIndex_14;
	// System.Boolean GameController_Script::CanSpawn
	bool ___CanSpawn_15;
	// System.Single GameController_Script::NewSpawnPos
	float ___NewSpawnPos_16;
	// UnityEngine.GUIText GameController_Script::Restart
	GUIText_t2411476300 * ___Restart_17;
	// UnityEngine.Camera GameController_Script::cam
	Camera_t189460977 * ___cam_19;

public:
	inline static int32_t get_offset_of_Hazards_2() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___Hazards_2)); }
	inline GameObjectU5BU5D_t3057952154* get_Hazards_2() const { return ___Hazards_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_Hazards_2() { return &___Hazards_2; }
	inline void set_Hazards_2(GameObjectU5BU5D_t3057952154* value)
	{
		___Hazards_2 = value;
		Il2CppCodeGenWriteBarrier(&___Hazards_2, value);
	}

	inline static int32_t get_offset_of_LastHazardPos_3() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___LastHazardPos_3)); }
	inline Vector3_t2243707580  get_LastHazardPos_3() const { return ___LastHazardPos_3; }
	inline Vector3_t2243707580 * get_address_of_LastHazardPos_3() { return &___LastHazardPos_3; }
	inline void set_LastHazardPos_3(Vector3_t2243707580  value)
	{
		___LastHazardPos_3 = value;
	}

	inline static int32_t get_offset_of_TempPos_4() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___TempPos_4)); }
	inline float get_TempPos_4() const { return ___TempPos_4; }
	inline float* get_address_of_TempPos_4() { return &___TempPos_4; }
	inline void set_TempPos_4(float value)
	{
		___TempPos_4 = value;
	}

	inline static int32_t get_offset_of_NewObj_5() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___NewObj_5)); }
	inline GameObject_t1756533147 * get_NewObj_5() const { return ___NewObj_5; }
	inline GameObject_t1756533147 ** get_address_of_NewObj_5() { return &___NewObj_5; }
	inline void set_NewObj_5(GameObject_t1756533147 * value)
	{
		___NewObj_5 = value;
		Il2CppCodeGenWriteBarrier(&___NewObj_5, value);
	}

	inline static int32_t get_offset_of_OldObj_6() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___OldObj_6)); }
	inline GameObject_t1756533147 * get_OldObj_6() const { return ___OldObj_6; }
	inline GameObject_t1756533147 ** get_address_of_OldObj_6() { return &___OldObj_6; }
	inline void set_OldObj_6(GameObject_t1756533147 * value)
	{
		___OldObj_6 = value;
		Il2CppCodeGenWriteBarrier(&___OldObj_6, value);
	}

	inline static int32_t get_offset_of_SpawnRepeat_7() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___SpawnRepeat_7)); }
	inline float get_SpawnRepeat_7() const { return ___SpawnRepeat_7; }
	inline float* get_address_of_SpawnRepeat_7() { return &___SpawnRepeat_7; }
	inline void set_SpawnRepeat_7(float value)
	{
		___SpawnRepeat_7 = value;
	}

	inline static int32_t get_offset_of_NextSpawn_8() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___NextSpawn_8)); }
	inline float get_NextSpawn_8() const { return ___NextSpawn_8; }
	inline float* get_address_of_NextSpawn_8() { return &___NextSpawn_8; }
	inline void set_NextSpawn_8(float value)
	{
		___NextSpawn_8 = value;
	}

	inline static int32_t get_offset_of_Player_9() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___Player_9)); }
	inline GameObject_t1756533147 * get_Player_9() const { return ___Player_9; }
	inline GameObject_t1756533147 ** get_address_of_Player_9() { return &___Player_9; }
	inline void set_Player_9(GameObject_t1756533147 * value)
	{
		___Player_9 = value;
		Il2CppCodeGenWriteBarrier(&___Player_9, value);
	}

	inline static int32_t get_offset_of_jellyscript_10() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___jellyscript_10)); }
	inline JellyScript_t450260415 * get_jellyscript_10() const { return ___jellyscript_10; }
	inline JellyScript_t450260415 ** get_address_of_jellyscript_10() { return &___jellyscript_10; }
	inline void set_jellyscript_10(JellyScript_t450260415 * value)
	{
		___jellyscript_10 = value;
		Il2CppCodeGenWriteBarrier(&___jellyscript_10, value);
	}

	inline static int32_t get_offset_of_Score_11() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___Score_11)); }
	inline int32_t get_Score_11() const { return ___Score_11; }
	inline int32_t* get_address_of_Score_11() { return &___Score_11; }
	inline void set_Score_11(int32_t value)
	{
		___Score_11 = value;
	}

	inline static int32_t get_offset_of_ScoreDisplay_12() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___ScoreDisplay_12)); }
	inline GUIText_t2411476300 * get_ScoreDisplay_12() const { return ___ScoreDisplay_12; }
	inline GUIText_t2411476300 ** get_address_of_ScoreDisplay_12() { return &___ScoreDisplay_12; }
	inline void set_ScoreDisplay_12(GUIText_t2411476300 * value)
	{
		___ScoreDisplay_12 = value;
		Il2CppCodeGenWriteBarrier(&___ScoreDisplay_12, value);
	}

	inline static int32_t get_offset_of_BestScoreDisplay_13() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___BestScoreDisplay_13)); }
	inline GUIText_t2411476300 * get_BestScoreDisplay_13() const { return ___BestScoreDisplay_13; }
	inline GUIText_t2411476300 ** get_address_of_BestScoreDisplay_13() { return &___BestScoreDisplay_13; }
	inline void set_BestScoreDisplay_13(GUIText_t2411476300 * value)
	{
		___BestScoreDisplay_13 = value;
		Il2CppCodeGenWriteBarrier(&___BestScoreDisplay_13, value);
	}

	inline static int32_t get_offset_of_RandomIndex_14() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___RandomIndex_14)); }
	inline int32_t get_RandomIndex_14() const { return ___RandomIndex_14; }
	inline int32_t* get_address_of_RandomIndex_14() { return &___RandomIndex_14; }
	inline void set_RandomIndex_14(int32_t value)
	{
		___RandomIndex_14 = value;
	}

	inline static int32_t get_offset_of_CanSpawn_15() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___CanSpawn_15)); }
	inline bool get_CanSpawn_15() const { return ___CanSpawn_15; }
	inline bool* get_address_of_CanSpawn_15() { return &___CanSpawn_15; }
	inline void set_CanSpawn_15(bool value)
	{
		___CanSpawn_15 = value;
	}

	inline static int32_t get_offset_of_NewSpawnPos_16() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___NewSpawnPos_16)); }
	inline float get_NewSpawnPos_16() const { return ___NewSpawnPos_16; }
	inline float* get_address_of_NewSpawnPos_16() { return &___NewSpawnPos_16; }
	inline void set_NewSpawnPos_16(float value)
	{
		___NewSpawnPos_16 = value;
	}

	inline static int32_t get_offset_of_Restart_17() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___Restart_17)); }
	inline GUIText_t2411476300 * get_Restart_17() const { return ___Restart_17; }
	inline GUIText_t2411476300 ** get_address_of_Restart_17() { return &___Restart_17; }
	inline void set_Restart_17(GUIText_t2411476300 * value)
	{
		___Restart_17 = value;
		Il2CppCodeGenWriteBarrier(&___Restart_17, value);
	}

	inline static int32_t get_offset_of_cam_19() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044, ___cam_19)); }
	inline Camera_t189460977 * get_cam_19() const { return ___cam_19; }
	inline Camera_t189460977 ** get_address_of_cam_19() { return &___cam_19; }
	inline void set_cam_19(Camera_t189460977 * value)
	{
		___cam_19 = value;
		Il2CppCodeGenWriteBarrier(&___cam_19, value);
	}
};

struct GameController_Script_t2317443044_StaticFields
{
public:
	// System.Boolean GameController_Script::GameNotStarted
	bool ___GameNotStarted_18;

public:
	inline static int32_t get_offset_of_GameNotStarted_18() { return static_cast<int32_t>(offsetof(GameController_Script_t2317443044_StaticFields, ___GameNotStarted_18)); }
	inline bool get_GameNotStarted_18() const { return ___GameNotStarted_18; }
	inline bool* get_address_of_GameNotStarted_18() { return &___GameNotStarted_18; }
	inline void set_GameNotStarted_18(bool value)
	{
		___GameNotStarted_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
