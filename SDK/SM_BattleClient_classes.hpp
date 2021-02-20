#pragma once

// SMITE (8.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SM_BattleClient_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BattleClient.BattleHUD
// 0x0000 (0x05F0 - 0x05F0)
class ABattleHUD : public ATgClientHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleClient.BattleHUD");
		return ptr;
	}


	void STATIC_BattleHUDFunction();
};


// Class BattleClient.BattleLaunch
// 0x0000 (0x04D0 - 0x04D0)
class ABattleLaunch : public ATgGameLaunch
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleClient.BattleLaunch");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
