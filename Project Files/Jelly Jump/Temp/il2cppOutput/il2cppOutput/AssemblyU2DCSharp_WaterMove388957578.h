#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_JellyScript450260415.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// WaterMove
struct WaterMove_t388957578;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaterMove
struct  WaterMove_t388957578  : public JellyScript_t450260415
{
public:
	// UnityEngine.Vector3 WaterMove::TempPos
	Vector3_t2243707580  ___TempPos_14;
	// System.Single WaterMove::MoveSpeed
	float ___MoveSpeed_15;
	// System.Single WaterMove::MoveAmount
	float ___MoveAmount_16;
	// WaterMove WaterMove::watemove
	WaterMove_t388957578 * ___watemove_17;

public:
	inline static int32_t get_offset_of_TempPos_14() { return static_cast<int32_t>(offsetof(WaterMove_t388957578, ___TempPos_14)); }
	inline Vector3_t2243707580  get_TempPos_14() const { return ___TempPos_14; }
	inline Vector3_t2243707580 * get_address_of_TempPos_14() { return &___TempPos_14; }
	inline void set_TempPos_14(Vector3_t2243707580  value)
	{
		___TempPos_14 = value;
	}

	inline static int32_t get_offset_of_MoveSpeed_15() { return static_cast<int32_t>(offsetof(WaterMove_t388957578, ___MoveSpeed_15)); }
	inline float get_MoveSpeed_15() const { return ___MoveSpeed_15; }
	inline float* get_address_of_MoveSpeed_15() { return &___MoveSpeed_15; }
	inline void set_MoveSpeed_15(float value)
	{
		___MoveSpeed_15 = value;
	}

	inline static int32_t get_offset_of_MoveAmount_16() { return static_cast<int32_t>(offsetof(WaterMove_t388957578, ___MoveAmount_16)); }
	inline float get_MoveAmount_16() const { return ___MoveAmount_16; }
	inline float* get_address_of_MoveAmount_16() { return &___MoveAmount_16; }
	inline void set_MoveAmount_16(float value)
	{
		___MoveAmount_16 = value;
	}

	inline static int32_t get_offset_of_watemove_17() { return static_cast<int32_t>(offsetof(WaterMove_t388957578, ___watemove_17)); }
	inline WaterMove_t388957578 * get_watemove_17() const { return ___watemove_17; }
	inline WaterMove_t388957578 ** get_address_of_watemove_17() { return &___watemove_17; }
	inline void set_watemove_17(WaterMove_t388957578 * value)
	{
		___watemove_17 = value;
		Il2CppCodeGenWriteBarrier(&___watemove_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
