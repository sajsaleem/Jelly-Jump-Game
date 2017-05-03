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

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GeneralSlideScript
struct  GeneralSlideScript_t1309649390  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GeneralSlideScript::dist
	float ___dist_2;
	// UnityEngine.GameObject GeneralSlideScript::Right
	GameObject_t1756533147 * ___Right_3;
	// UnityEngine.GameObject GeneralSlideScript::Left
	GameObject_t1756533147 * ___Left_4;
	// System.Single GeneralSlideScript::movespeed
	float ___movespeed_5;
	// System.Single GeneralSlideScript::MoveAmount
	float ___MoveAmount_6;
	// UnityEngine.Vector3 GeneralSlideScript::RightStartPos
	Vector3_t2243707580  ___RightStartPos_7;
	// UnityEngine.Vector3 GeneralSlideScript::LeftStartPos
	Vector3_t2243707580  ___LeftStartPos_8;
	// UnityEngine.GameObject GeneralSlideScript::SlidingHazard
	GameObject_t1756533147 * ___SlidingHazard_9;
	// UnityEngine.Camera GeneralSlideScript::Cam
	Camera_t189460977 * ___Cam_10;
	// UnityEngine.GameObject GeneralSlideScript::MainCam
	GameObject_t1756533147 * ___MainCam_11;
	// UnityEngine.Vector3 GeneralSlideScript::RightCurPos
	Vector3_t2243707580  ___RightCurPos_12;
	// UnityEngine.Vector3 GeneralSlideScript::LeftCurPos
	Vector3_t2243707580  ___LeftCurPos_13;

public:
	inline static int32_t get_offset_of_dist_2() { return static_cast<int32_t>(offsetof(GeneralSlideScript_t1309649390, ___dist_2)); }
	inline float get_dist_2() const { return ___dist_2; }
	inline float* get_address_of_dist_2() { return &___dist_2; }
	inline void set_dist_2(float value)
	{
		___dist_2 = value;
	}

	inline static int32_t get_offset_of_Right_3() { return static_cast<int32_t>(offsetof(GeneralSlideScript_t1309649390, ___Right_3)); }
	inline GameObject_t1756533147 * get_Right_3() const { return ___Right_3; }
	inline GameObject_t1756533147 ** get_address_of_Right_3() { return &___Right_3; }
	inline void set_Right_3(GameObject_t1756533147 * value)
	{
		___Right_3 = value;
		Il2CppCodeGenWriteBarrier(&___Right_3, value);
	}

	inline static int32_t get_offset_of_Left_4() { return static_cast<int32_t>(offsetof(GeneralSlideScript_t1309649390, ___Left_4)); }
	inline GameObject_t1756533147 * get_Left_4() const { return ___Left_4; }
	inline GameObject_t1756533147 ** get_address_of_Left_4() { return &___Left_4; }
	inline void set_Left_4(GameObject_t1756533147 * value)
	{
		___Left_4 = value;
		Il2CppCodeGenWriteBarrier(&___Left_4, value);
	}

	inline static int32_t get_offset_of_movespeed_5() { return static_cast<int32_t>(offsetof(GeneralSlideScript_t1309649390, ___movespeed_5)); }
	inline float get_movespeed_5() const { return ___movespeed_5; }
	inline float* get_address_of_movespeed_5() { return &___movespeed_5; }
	inline void set_movespeed_5(float value)
	{
		___movespeed_5 = value;
	}

	inline static int32_t get_offset_of_MoveAmount_6() { return static_cast<int32_t>(offsetof(GeneralSlideScript_t1309649390, ___MoveAmount_6)); }
	inline float get_MoveAmount_6() const { return ___MoveAmount_6; }
	inline float* get_address_of_MoveAmount_6() { return &___MoveAmount_6; }
	inline void set_MoveAmount_6(float value)
	{
		___MoveAmount_6 = value;
	}

	inline static int32_t get_offset_of_RightStartPos_7() { return static_cast<int32_t>(offsetof(GeneralSlideScript_t1309649390, ___RightStartPos_7)); }
	inline Vector3_t2243707580  get_RightStartPos_7() const { return ___RightStartPos_7; }
	inline Vector3_t2243707580 * get_address_of_RightStartPos_7() { return &___RightStartPos_7; }
	inline void set_RightStartPos_7(Vector3_t2243707580  value)
	{
		___RightStartPos_7 = value;
	}

	inline static int32_t get_offset_of_LeftStartPos_8() { return static_cast<int32_t>(offsetof(GeneralSlideScript_t1309649390, ___LeftStartPos_8)); }
	inline Vector3_t2243707580  get_LeftStartPos_8() const { return ___LeftStartPos_8; }
	inline Vector3_t2243707580 * get_address_of_LeftStartPos_8() { return &___LeftStartPos_8; }
	inline void set_LeftStartPos_8(Vector3_t2243707580  value)
	{
		___LeftStartPos_8 = value;
	}

	inline static int32_t get_offset_of_SlidingHazard_9() { return static_cast<int32_t>(offsetof(GeneralSlideScript_t1309649390, ___SlidingHazard_9)); }
	inline GameObject_t1756533147 * get_SlidingHazard_9() const { return ___SlidingHazard_9; }
	inline GameObject_t1756533147 ** get_address_of_SlidingHazard_9() { return &___SlidingHazard_9; }
	inline void set_SlidingHazard_9(GameObject_t1756533147 * value)
	{
		___SlidingHazard_9 = value;
		Il2CppCodeGenWriteBarrier(&___SlidingHazard_9, value);
	}

	inline static int32_t get_offset_of_Cam_10() { return static_cast<int32_t>(offsetof(GeneralSlideScript_t1309649390, ___Cam_10)); }
	inline Camera_t189460977 * get_Cam_10() const { return ___Cam_10; }
	inline Camera_t189460977 ** get_address_of_Cam_10() { return &___Cam_10; }
	inline void set_Cam_10(Camera_t189460977 * value)
	{
		___Cam_10 = value;
		Il2CppCodeGenWriteBarrier(&___Cam_10, value);
	}

	inline static int32_t get_offset_of_MainCam_11() { return static_cast<int32_t>(offsetof(GeneralSlideScript_t1309649390, ___MainCam_11)); }
	inline GameObject_t1756533147 * get_MainCam_11() const { return ___MainCam_11; }
	inline GameObject_t1756533147 ** get_address_of_MainCam_11() { return &___MainCam_11; }
	inline void set_MainCam_11(GameObject_t1756533147 * value)
	{
		___MainCam_11 = value;
		Il2CppCodeGenWriteBarrier(&___MainCam_11, value);
	}

	inline static int32_t get_offset_of_RightCurPos_12() { return static_cast<int32_t>(offsetof(GeneralSlideScript_t1309649390, ___RightCurPos_12)); }
	inline Vector3_t2243707580  get_RightCurPos_12() const { return ___RightCurPos_12; }
	inline Vector3_t2243707580 * get_address_of_RightCurPos_12() { return &___RightCurPos_12; }
	inline void set_RightCurPos_12(Vector3_t2243707580  value)
	{
		___RightCurPos_12 = value;
	}

	inline static int32_t get_offset_of_LeftCurPos_13() { return static_cast<int32_t>(offsetof(GeneralSlideScript_t1309649390, ___LeftCurPos_13)); }
	inline Vector3_t2243707580  get_LeftCurPos_13() const { return ___LeftCurPos_13; }
	inline Vector3_t2243707580 * get_address_of_LeftCurPos_13() { return &___LeftCurPos_13; }
	inline void set_LeftCurPos_13(Vector3_t2243707580  value)
	{
		___LeftCurPos_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
