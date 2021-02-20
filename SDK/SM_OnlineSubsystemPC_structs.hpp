#pragma once

// SMITE (8.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SM_Basic.hpp"
#include "SM_IpDrv_classes.hpp"
#include "SM_Engine_classes.hpp"
#include "SM_Core_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemPC.OnlineVoiceInterfacePC.EMuteType
enum class EMuteType : uint8_t
{
	MUTE_None                      = 0,
	MUTE_AllButFriends             = 1,
	MUTE_All                       = 2,
	MUTE_MAX                       = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemPC.OnlineVoiceInterfacePC.LocalTalkerPC
// 0x0005
struct FLocalTalkerPC
{
	unsigned long                                      bHasVoice : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bHasNetworkedVoice : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bIsRecognizingSpeech : 1;                                 // 0x0000(0x0004)
	unsigned long                                      bWasTalking : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bIsTalking : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bIsRegistered : 1;                                        // 0x0000(0x0004)
	TEnumAsByte<EMuteType>                             MuteType;                                                 // 0x0004(0x0001)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
