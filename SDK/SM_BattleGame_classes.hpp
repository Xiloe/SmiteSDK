#pragma once

// SMITE (8.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SM_BattleGame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BattleGame.BattleObject
// 0x0000 (0x0060 - 0x0060)
class UBattleObject : public UTgObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleGame.BattleObject");
		return ptr;
	}

};


// Class BattleGame.BattlePlayerController
// 0x0000 (0x154C - 0x154C)
class ABattlePlayerController : public ATgPlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleGame.BattlePlayerController");
		return ptr;
	}


	void STATIC_BattlePlayerControllerFunction();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
