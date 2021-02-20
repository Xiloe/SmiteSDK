#pragma once

// SMITE (8.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SM_TgGameContent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TgGameContent.tgflagcontentdata_content
// 0x0000 (0x0070 - 0x0070)
class Utgflagcontentdata_content : public UTgFlagContentData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgGameContent.tgflagcontentdata_content");
		return ptr;
	}

};


// Class TgGameContent.tgmenucontentdata_content
// 0x0000 (0x0070 - 0x0070)
class Utgmenucontentdata_content : public UTgMenuContentData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgGameContent.tgmenucontentdata_content");
		return ptr;
	}

};


// Class TgGameContent.tgmenucontentdataconsole_content
// 0x0000 (0x0070 - 0x0070)
class Utgmenucontentdataconsole_content : public UTgMenuContentData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgGameContent.tgmenucontentdataconsole_content");
		return ptr;
	}

};


// Class TgGameContent.tgmenutransitionactor_content
// 0x0000 (0x0278 - 0x0278)
class Atgmenutransitionactor_content : public ATgMenuTransitionActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgGameContent.tgmenutransitionactor_content");
		return ptr;
	}

};


// Class TgGameContent.tgmenutransitionactor_pedestal
// 0x0000 (0x0278 - 0x0278)
class Atgmenutransitionactor_pedestal : public ATgMenuTransitionActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgGameContent.tgmenutransitionactor_pedestal");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
