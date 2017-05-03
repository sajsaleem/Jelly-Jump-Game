#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// PlayerBoundary
struct PlayerBoundary_t3752480833;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JellyScript
struct  JellyScript_t450260415  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody JellyScript::rb
	Rigidbody_t4233889191 * ___rb_2;
	// System.Single JellyScript::Jumpforce
	float ___Jumpforce_3;
	// System.Single JellyScript::TempJumpVal
	float ___TempJumpVal_4;
	// System.Boolean JellyScript::JumpNow
	bool ___JumpNow_5;
	// System.Boolean JellyScript::Onground
	bool ___Onground_6;
	// System.Boolean JellyScript::IsStuck
	bool ___IsStuck_7;
	// UnityEngine.Collider JellyScript::ObjColl
	Collider_t3497673348 * ___ObjColl_8;
	// UnityEngine.GameObject JellyScript::HazFace
	GameObject_t1756533147 * ___HazFace_9;
	// UnityEngine.Transform JellyScript::currentCollPos
	Transform_t3275118058 * ___currentCollPos_10;
	// System.Int32 JellyScript::count
	int32_t ___count_12;
	// PlayerBoundary JellyScript::boundary
	PlayerBoundary_t3752480833 * ___boundary_13;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(JellyScript_t450260415, ___rb_2)); }
	inline Rigidbody_t4233889191 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody_t4233889191 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb_2, value);
	}

	inline static int32_t get_offset_of_Jumpforce_3() { return static_cast<int32_t>(offsetof(JellyScript_t450260415, ___Jumpforce_3)); }
	inline float get_Jumpforce_3() const { return ___Jumpforce_3; }
	inline float* get_address_of_Jumpforce_3() { return &___Jumpforce_3; }
	inline void set_Jumpforce_3(float value)
	{
		___Jumpforce_3 = value;
	}

	inline static int32_t get_offset_of_TempJumpVal_4() { return static_cast<int32_t>(offsetof(JellyScript_t450260415, ___TempJumpVal_4)); }
	inline float get_TempJumpVal_4() const { return ___TempJumpVal_4; }
	inline float* get_address_of_TempJumpVal_4() { return &___TempJumpVal_4; }
	inline void set_TempJumpVal_4(float value)
	{
		___TempJumpVal_4 = value;
	}

	inline static int32_t get_offset_of_JumpNow_5() { return static_cast<int32_t>(offsetof(JellyScript_t450260415, ___JumpNow_5)); }
	inline bool get_JumpNow_5() const { return ___JumpNow_5; }
	inline bool* get_address_of_JumpNow_5() { return &___JumpNow_5; }
	inline void set_JumpNow_5(bool value)
	{
		___JumpNow_5 = value;
	}

	inline static int32_t get_offset_of_Onground_6() { return static_cast<int32_t>(offsetof(JellyScript_t450260415, ___Onground_6)); }
	inline bool get_Onground_6() const { return ___Onground_6; }
	inline bool* get_address_of_Onground_6() { return &___Onground_6; }
	inline void set_Onground_6(bool value)
	{
		___Onground_6 = value;
	}

	inline static int32_t get_offset_of_IsStuck_7() { return static_cast<int32_t>(offsetof(JellyScript_t450260415, ___IsStuck_7)); }
	inline bool get_IsStuck_7() const { return ___IsStuck_7; }
	inline bool* get_address_of_IsStuck_7() { return &___IsStuck_7; }
	inline void set_IsStuck_7(bool value)
	{
		___IsStuck_7 = value;
	}

	inline static int32_t get_offset_of_ObjColl_8() { return static_cast<int32_t>(offsetof(JellyScript_t450260415, ___ObjColl_8)); }
	inline Collider_t3497673348 * get_ObjColl_8() const { return ___ObjColl_8; }
	inline Collider_t3497673348 ** get_address_of_ObjColl_8() { return &___ObjColl_8; }
	inline void set_ObjColl_8(Collider_t3497673348 * value)
	{
		___ObjColl_8 = value;
		Il2CppCodeGenWriteBarrier(&___ObjColl_8, value);
	}

	inline static int32_t get_offset_of_HazFace_9() { return static_cast<int32_t>(offsetof(JellyScript_t450260415, ___HazFace_9)); }
	inline GameObject_t1756533147 * get_HazFace_9() const { return ___HazFace_9; }
	inline GameObject_t1756533147 ** get_address_of_HazFace_9() { return &___HazFace_9; }
	inline void set_HazFace_9(GameObject_t1756533147 * value)
	{
		___HazFace_9 = value;
		Il2CppCodeGenWriteBarrier(&___HazFace_9, value);
	}

	inline static int32_t get_offset_of_currentCollPos_10() { return static_cast<int32_t>(offsetof(JellyScript_t450260415, ___currentCollPos_10)); }
	inline Transform_t3275118058 * get_currentCollPos_10() const { return ___currentCollPos_10; }
	inline Transform_t3275118058 ** get_address_of_currentCollPos_10() { return &___currentCollPos_10; }
	inline void set_currentCollPos_10(Transform_t3275118058 * value)
	{
		___currentCollPos_10 = value;
		Il2CppCodeGenWriteBarrier(&___currentCollPos_10, value);
	}

	inline static int32_t get_offset_of_count_12() { return static_cast<int32_t>(offsetof(JellyScript_t450260415, ___count_12)); }
	inline int32_t get_count_12() const { return ___count_12; }
	inline int32_t* get_address_of_count_12() { return &___count_12; }
	inline void set_count_12(int32_t value)
	{
		___count_12 = value;
	}

	inline static int32_t get_offset_of_boundary_13() { return static_cast<int32_t>(offsetof(JellyScript_t450260415, ___boundary_13)); }
	inline PlayerBoundary_t3752480833 * get_boundary_13() const { return ___boundary_13; }
	inline PlayerBoundary_t3752480833 ** get_address_of_boundary_13() { return &___boundary_13; }
	inline void set_boundary_13(PlayerBoundary_t3752480833 * value)
	{
		___boundary_13 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_13, value);
	}
};

struct JellyScript_t450260415_StaticFields
{
public:
	// System.Boolean JellyScript::JellyDestroyed
	bool ___JellyDestroyed_11;

public:
	inline static int32_t get_offset_of_JellyDestroyed_11() { return static_cast<int32_t>(offsetof(JellyScript_t450260415_StaticFields, ___JellyDestroyed_11)); }
	inline bool get_JellyDestroyed_11() const { return ___JellyDestroyed_11; }
	inline bool* get_address_of_JellyDestroyed_11() { return &___JellyDestroyed_11; }
	inline void set_JellyDestroyed_11(bool value)
	{
		___JellyDestroyed_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
