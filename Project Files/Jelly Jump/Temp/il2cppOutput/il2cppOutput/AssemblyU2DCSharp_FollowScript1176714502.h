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

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;
// GameController_Script
struct GameController_Script_t2317443044;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowScript
struct  FollowScript_t1176714502  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform FollowScript::Player
	Transform_t3275118058 * ___Player_2;
	// UnityEngine.Vector3 FollowScript::ViewPortPos
	Vector3_t2243707580  ___ViewPortPos_3;
	// UnityEngine.Vector3 FollowScript::CameraPoas
	Vector3_t2243707580  ___CameraPoas_4;
	// System.Single FollowScript::HoldTempPos
	float ___HoldTempPos_5;
	// System.Single FollowScript::Ysmoothspeed
	float ___Ysmoothspeed_6;
	// System.Single FollowScript::CamIntialPos
	float ___CamIntialPos_7;
	// UnityEngine.Camera FollowScript::cam
	Camera_t189460977 * ___cam_8;
	// GameController_Script FollowScript::gamecontroller
	GameController_Script_t2317443044 * ___gamecontroller_10;
	// System.Single FollowScript::AddScoreDelay
	float ___AddScoreDelay_11;
	// System.Single FollowScript::AddScoreTime
	float ___AddScoreTime_12;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(FollowScript_t1176714502, ___Player_2)); }
	inline Transform_t3275118058 * get_Player_2() const { return ___Player_2; }
	inline Transform_t3275118058 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(Transform_t3275118058 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier(&___Player_2, value);
	}

	inline static int32_t get_offset_of_ViewPortPos_3() { return static_cast<int32_t>(offsetof(FollowScript_t1176714502, ___ViewPortPos_3)); }
	inline Vector3_t2243707580  get_ViewPortPos_3() const { return ___ViewPortPos_3; }
	inline Vector3_t2243707580 * get_address_of_ViewPortPos_3() { return &___ViewPortPos_3; }
	inline void set_ViewPortPos_3(Vector3_t2243707580  value)
	{
		___ViewPortPos_3 = value;
	}

	inline static int32_t get_offset_of_CameraPoas_4() { return static_cast<int32_t>(offsetof(FollowScript_t1176714502, ___CameraPoas_4)); }
	inline Vector3_t2243707580  get_CameraPoas_4() const { return ___CameraPoas_4; }
	inline Vector3_t2243707580 * get_address_of_CameraPoas_4() { return &___CameraPoas_4; }
	inline void set_CameraPoas_4(Vector3_t2243707580  value)
	{
		___CameraPoas_4 = value;
	}

	inline static int32_t get_offset_of_HoldTempPos_5() { return static_cast<int32_t>(offsetof(FollowScript_t1176714502, ___HoldTempPos_5)); }
	inline float get_HoldTempPos_5() const { return ___HoldTempPos_5; }
	inline float* get_address_of_HoldTempPos_5() { return &___HoldTempPos_5; }
	inline void set_HoldTempPos_5(float value)
	{
		___HoldTempPos_5 = value;
	}

	inline static int32_t get_offset_of_Ysmoothspeed_6() { return static_cast<int32_t>(offsetof(FollowScript_t1176714502, ___Ysmoothspeed_6)); }
	inline float get_Ysmoothspeed_6() const { return ___Ysmoothspeed_6; }
	inline float* get_address_of_Ysmoothspeed_6() { return &___Ysmoothspeed_6; }
	inline void set_Ysmoothspeed_6(float value)
	{
		___Ysmoothspeed_6 = value;
	}

	inline static int32_t get_offset_of_CamIntialPos_7() { return static_cast<int32_t>(offsetof(FollowScript_t1176714502, ___CamIntialPos_7)); }
	inline float get_CamIntialPos_7() const { return ___CamIntialPos_7; }
	inline float* get_address_of_CamIntialPos_7() { return &___CamIntialPos_7; }
	inline void set_CamIntialPos_7(float value)
	{
		___CamIntialPos_7 = value;
	}

	inline static int32_t get_offset_of_cam_8() { return static_cast<int32_t>(offsetof(FollowScript_t1176714502, ___cam_8)); }
	inline Camera_t189460977 * get_cam_8() const { return ___cam_8; }
	inline Camera_t189460977 ** get_address_of_cam_8() { return &___cam_8; }
	inline void set_cam_8(Camera_t189460977 * value)
	{
		___cam_8 = value;
		Il2CppCodeGenWriteBarrier(&___cam_8, value);
	}

	inline static int32_t get_offset_of_gamecontroller_10() { return static_cast<int32_t>(offsetof(FollowScript_t1176714502, ___gamecontroller_10)); }
	inline GameController_Script_t2317443044 * get_gamecontroller_10() const { return ___gamecontroller_10; }
	inline GameController_Script_t2317443044 ** get_address_of_gamecontroller_10() { return &___gamecontroller_10; }
	inline void set_gamecontroller_10(GameController_Script_t2317443044 * value)
	{
		___gamecontroller_10 = value;
		Il2CppCodeGenWriteBarrier(&___gamecontroller_10, value);
	}

	inline static int32_t get_offset_of_AddScoreDelay_11() { return static_cast<int32_t>(offsetof(FollowScript_t1176714502, ___AddScoreDelay_11)); }
	inline float get_AddScoreDelay_11() const { return ___AddScoreDelay_11; }
	inline float* get_address_of_AddScoreDelay_11() { return &___AddScoreDelay_11; }
	inline void set_AddScoreDelay_11(float value)
	{
		___AddScoreDelay_11 = value;
	}

	inline static int32_t get_offset_of_AddScoreTime_12() { return static_cast<int32_t>(offsetof(FollowScript_t1176714502, ___AddScoreTime_12)); }
	inline float get_AddScoreTime_12() const { return ___AddScoreTime_12; }
	inline float* get_address_of_AddScoreTime_12() { return &___AddScoreTime_12; }
	inline void set_AddScoreTime_12(float value)
	{
		___AddScoreTime_12 = value;
	}
};

struct FollowScript_t1176714502_StaticFields
{
public:
	// System.Boolean FollowScript::AddScoreNow
	bool ___AddScoreNow_9;

public:
	inline static int32_t get_offset_of_AddScoreNow_9() { return static_cast<int32_t>(offsetof(FollowScript_t1176714502_StaticFields, ___AddScoreNow_9)); }
	inline bool get_AddScoreNow_9() const { return ___AddScoreNow_9; }
	inline bool* get_address_of_AddScoreNow_9() { return &___AddScoreNow_9; }
	inline void set_AddScoreNow_9(bool value)
	{
		___AddScoreNow_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
