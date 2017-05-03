#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_GeneralSlideScript1309649390.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShutScript
struct  ShutScript_t3070888671  : public GeneralSlideScript_t1309649390
{
public:
	// UnityEngine.GameObject ShutScript::RightRotHaz
	GameObject_t1756533147 * ___RightRotHaz_14;
	// UnityEngine.GameObject ShutScript::LeftRotHaz
	GameObject_t1756533147 * ___LeftRotHaz_15;
	// System.Single ShutScript::RightRot
	float ___RightRot_16;
	// System.Single ShutScript::LeftRot
	float ___LeftRot_17;
	// UnityEngine.Quaternion ShutScript::RotationRight
	Quaternion_t4030073918  ___RotationRight_18;
	// UnityEngine.Quaternion ShutScript::RotationLeft
	Quaternion_t4030073918  ___RotationLeft_19;
	// System.Single ShutScript::RotationAmount
	float ___RotationAmount_20;
	// System.Single ShutScript::RotSpeed
	float ___RotSpeed_21;

public:
	inline static int32_t get_offset_of_RightRotHaz_14() { return static_cast<int32_t>(offsetof(ShutScript_t3070888671, ___RightRotHaz_14)); }
	inline GameObject_t1756533147 * get_RightRotHaz_14() const { return ___RightRotHaz_14; }
	inline GameObject_t1756533147 ** get_address_of_RightRotHaz_14() { return &___RightRotHaz_14; }
	inline void set_RightRotHaz_14(GameObject_t1756533147 * value)
	{
		___RightRotHaz_14 = value;
		Il2CppCodeGenWriteBarrier(&___RightRotHaz_14, value);
	}

	inline static int32_t get_offset_of_LeftRotHaz_15() { return static_cast<int32_t>(offsetof(ShutScript_t3070888671, ___LeftRotHaz_15)); }
	inline GameObject_t1756533147 * get_LeftRotHaz_15() const { return ___LeftRotHaz_15; }
	inline GameObject_t1756533147 ** get_address_of_LeftRotHaz_15() { return &___LeftRotHaz_15; }
	inline void set_LeftRotHaz_15(GameObject_t1756533147 * value)
	{
		___LeftRotHaz_15 = value;
		Il2CppCodeGenWriteBarrier(&___LeftRotHaz_15, value);
	}

	inline static int32_t get_offset_of_RightRot_16() { return static_cast<int32_t>(offsetof(ShutScript_t3070888671, ___RightRot_16)); }
	inline float get_RightRot_16() const { return ___RightRot_16; }
	inline float* get_address_of_RightRot_16() { return &___RightRot_16; }
	inline void set_RightRot_16(float value)
	{
		___RightRot_16 = value;
	}

	inline static int32_t get_offset_of_LeftRot_17() { return static_cast<int32_t>(offsetof(ShutScript_t3070888671, ___LeftRot_17)); }
	inline float get_LeftRot_17() const { return ___LeftRot_17; }
	inline float* get_address_of_LeftRot_17() { return &___LeftRot_17; }
	inline void set_LeftRot_17(float value)
	{
		___LeftRot_17 = value;
	}

	inline static int32_t get_offset_of_RotationRight_18() { return static_cast<int32_t>(offsetof(ShutScript_t3070888671, ___RotationRight_18)); }
	inline Quaternion_t4030073918  get_RotationRight_18() const { return ___RotationRight_18; }
	inline Quaternion_t4030073918 * get_address_of_RotationRight_18() { return &___RotationRight_18; }
	inline void set_RotationRight_18(Quaternion_t4030073918  value)
	{
		___RotationRight_18 = value;
	}

	inline static int32_t get_offset_of_RotationLeft_19() { return static_cast<int32_t>(offsetof(ShutScript_t3070888671, ___RotationLeft_19)); }
	inline Quaternion_t4030073918  get_RotationLeft_19() const { return ___RotationLeft_19; }
	inline Quaternion_t4030073918 * get_address_of_RotationLeft_19() { return &___RotationLeft_19; }
	inline void set_RotationLeft_19(Quaternion_t4030073918  value)
	{
		___RotationLeft_19 = value;
	}

	inline static int32_t get_offset_of_RotationAmount_20() { return static_cast<int32_t>(offsetof(ShutScript_t3070888671, ___RotationAmount_20)); }
	inline float get_RotationAmount_20() const { return ___RotationAmount_20; }
	inline float* get_address_of_RotationAmount_20() { return &___RotationAmount_20; }
	inline void set_RotationAmount_20(float value)
	{
		___RotationAmount_20 = value;
	}

	inline static int32_t get_offset_of_RotSpeed_21() { return static_cast<int32_t>(offsetof(ShutScript_t3070888671, ___RotSpeed_21)); }
	inline float get_RotSpeed_21() const { return ___RotSpeed_21; }
	inline float* get_address_of_RotSpeed_21() { return &___RotSpeed_21; }
	inline void set_RotSpeed_21(float value)
	{
		___RotSpeed_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
