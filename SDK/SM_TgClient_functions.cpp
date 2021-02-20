// SMITE (8.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SM_TgClient_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TgClient.TgGfxAchievementPopup.QueueAchievement
// (Iterator, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxAchievementPopup::QueueAchievement()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAchievementPopup.QueueAchievement");

	UTgGfxAchievementPopup_QueueAchievement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAchievementPopup.asc_QueueAchievement
// (Defined, Iterator, Latent, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxAchievementPopup::STATIC_asc_QueueAchievement()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAchievementPopup.asc_QueueAchievement");

	UTgGfxAchievementPopup_asc_QueueAchievement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAchievementPopup.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          pMoviePlayer                   (Parm)

void UTgGfxAchievementPopup::STATIC_Initialize(class UTgMoviePlayer* pMoviePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAchievementPopup.Initialize");

	UTgGfxAchievementPopup_Initialize_Params params;
	params.pMoviePlayer = pMoviePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAchievementSelection.UpdateSelectedAchievements
// (Final, Iterator, Latent, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxAchievementSelection::UpdateSelectedAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAchievementSelection.UpdateSelectedAchievements");

	UTgGfxAchievementSelection_UpdateSelectedAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAchievementSelection.ASC_UpdateSelectedAchievements
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxAchievementSelection::STATIC_ASC_UpdateSelectedAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAchievementSelection.ASC_UpdateSelectedAchievements");

	UTgGfxAchievementSelection_ASC_UpdateSelectedAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAchievementSelection.UpdateScreen
// (Iterator, Latent, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxAchievementSelection::UpdateScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAchievementSelection.UpdateScreen");

	UTgGfxAchievementSelection_UpdateScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAchievementSelection.ASC_UpdateScreen
// (Iterator, Singular, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxAchievementSelection::STATIC_ASC_UpdateScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAchievementSelection.ASC_UpdateScreen");

	UTgGfxAchievementSelection_ASC_UpdateScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAchievementSelection.USC_ApplySelections
// (Defined, Latent, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            as1                            (Parm)
// int                            as2                            (Parm)
// int                            as3                            (Parm)
// int                            as4                            (Parm)

void UTgGfxAchievementSelection::STATIC_USC_ApplySelections(int as1, int as2, int as3, int as4)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAchievementSelection.USC_ApplySelections");

	UTgGfxAchievementSelection_USC_ApplySelections_Params params;
	params.as1 = as1;
	params.as2 = as2;
	params.as3 = as3;
	params.as4 = as4;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAchievementSelection.USC_ApplySelections_Delegate
// (Defined, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            as1                            (Parm)
// int                            as2                            (Parm)
// int                            as3                            (Parm)
// int                            as4                            (Parm)

void UTgGfxAchievementSelection::USC_ApplySelections_Delegate(int as1, int as2, int as3, int as4)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAchievementSelection.USC_ApplySelections_Delegate");

	UTgGfxAchievementSelection_USC_ApplySelections_Delegate_Params params;
	params.as1 = as1;
	params.as2 = as2;
	params.as3 = as3;
	params.as4 = as4;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAchievementSelection.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxAchievementSelection::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAchievementSelection.Uninitialize");

	UTgGfxAchievementSelection_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAchievementSelection.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxAchievementSelection::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAchievementSelection.Initialize");

	UTgGfxAchievementSelection_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgress.OnAcquisition
// (Iterator, Latent, PreOperator, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxAdventureProgress::STATIC_OnAcquisition(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgress.OnAcquisition");

	UTgGfxAdventureProgress_OnAcquisition_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgress.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxAdventureProgress::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgress.Uninitialize");

	UTgGfxAdventureProgress_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgress.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxAdventureProgress::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgress.ReceiveGFxData");

	UTgGfxAdventureProgress_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgress.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxAdventureProgress::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgress.Initialize");

	UTgGfxAdventureProgress_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgressDungeon2.OnAcquisition
// (Iterator, Latent, PreOperator, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxAdventureProgressDungeon2::STATIC_OnAcquisition(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgressDungeon2.OnAcquisition");

	UTgGfxAdventureProgressDungeon2_OnAcquisition_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgressDungeon2.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxAdventureProgressDungeon2::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgressDungeon2.Uninitialize");

	UTgGfxAdventureProgressDungeon2_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgressDungeon2.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxAdventureProgressDungeon2::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgressDungeon2.ReceiveGFxData");

	UTgGfxAdventureProgressDungeon2_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgressDungeon2.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxAdventureProgressDungeon2::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgressDungeon2.Initialize");

	UTgGfxAdventureProgressDungeon2_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgressFox.OnAcquisition
// (Iterator, Latent, PreOperator, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxAdventureProgressFox::STATIC_OnAcquisition(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgressFox.OnAcquisition");

	UTgGfxAdventureProgressFox_OnAcquisition_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgressFox.SetupChestPurchaseFox
// (Final, Singular, Net, NetReliable, Simulated, Exec, Static, Public)

void UTgGfxAdventureProgressFox::STATIC_SetupChestPurchaseFox()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgressFox.SetupChestPurchaseFox");

	UTgGfxAdventureProgressFox_SetupChestPurchaseFox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgressFox.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxAdventureProgressFox::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgressFox.Uninitialize");

	UTgGfxAdventureProgressFox_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgressFox.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxAdventureProgressFox::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgressFox.ReceiveGFxData");

	UTgGfxAdventureProgressFox_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgressFox.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxAdventureProgressFox::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgressFox.Initialize");

	UTgGfxAdventureProgressFox_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgressMMO.OnAcquisition
// (Iterator, Latent, PreOperator, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxAdventureProgressMMO::STATIC_OnAcquisition(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgressMMO.OnAcquisition");

	UTgGfxAdventureProgressMMO_OnAcquisition_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgressMMO.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxAdventureProgressMMO::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgressMMO.Uninitialize");

	UTgGfxAdventureProgressMMO_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgressMMO.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxAdventureProgressMMO::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgressMMO.ReceiveGFxData");

	UTgGfxAdventureProgressMMO_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventureProgressMMO.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxAdventureProgressMMO::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventureProgressMMO.Initialize");

	UTgGfxAdventureProgressMMO_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.SceneTick
// (Latent, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// float                          Delta                          (Parm)

void UTgGfxAdventuresHub::SceneTick(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.SceneTick");

	UTgGfxAdventuresHub_SceneTick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.OnAcquisition
// (Iterator, Latent, PreOperator, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxAdventuresHub::STATIC_OnAcquisition(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.OnAcquisition");

	UTgGfxAdventuresHub_OnAcquisition_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.SetBundleOwnership
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Public)

void UTgGfxAdventuresHub::STATIC_SetBundleOwnership()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.SetBundleOwnership");

	UTgGfxAdventuresHub_SetBundleOwnership_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.TriggerLobbyEventHub
// (Latent, PreOperator, Singular, Operator, Static, Public)
// Parameters:
// int                            nType                          (Parm)
// int                            nTarget                        (Parm)

void UTgGfxAdventuresHub::STATIC_TriggerLobbyEventHub(int nType, int nTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.TriggerLobbyEventHub");

	UTgGfxAdventuresHub_TriggerLobbyEventHub_Params params;
	params.nType = nType;
	params.nTarget = nTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.TriggerLobbyCamEvent
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Event, Public)
// Parameters:
// int                            nType                          (Parm)
// int                            nTarget                        (Parm)

void UTgGfxAdventuresHub::TriggerLobbyCamEvent(int nType, int nTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.TriggerLobbyCamEvent");

	UTgGfxAdventuresHub_TriggerLobbyCamEvent_Params params;
	params.nType = nType;
	params.nTarget = nTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxAdventuresHub::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.Uninitialize");

	UTgGfxAdventuresHub_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxAdventuresHub::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.ReceiveGFxData");

	UTgGfxAdventuresHub_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxAdventuresHub::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.Initialize");

	UTgGfxAdventuresHub_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.LeaveQueue
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Event, Static, Public)

void UTgGfxAdventuresHub::STATIC_LeaveQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.LeaveQueue");

	UTgGfxAdventuresHub_LeaveQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.PopulateGoalData
// (Final, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Public)

void UTgGfxAdventuresHub::STATIC_PopulateGoalData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.PopulateGoalData");

	UTgGfxAdventuresHub_PopulateGoalData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.USC_OpenEventCam
// (Defined, PreOperator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// bool                           isSmall                        (Parm)

void UTgGfxAdventuresHub::STATIC_USC_OpenEventCam(bool isSmall)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.USC_OpenEventCam");

	UTgGfxAdventuresHub_USC_OpenEventCam_Params params;
	params.isSmall = isSmall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.USC_GotoVault
// (Defined, Latent, Net, NetReliable, Operator, Static, Public)
// Parameters:
// bool                           bIsSmall                       (Parm)

void UTgGfxAdventuresHub::STATIC_USC_GotoVault(bool bIsSmall)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.USC_GotoVault");

	UTgGfxAdventuresHub_USC_GotoVault_Params params;
	params.bIsSmall = bIsSmall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.USC_SetUserViewedEvent
// (Final, Defined, Latent, Singular, Net, NetReliable, Operator, Static, Public)

void UTgGfxAdventuresHub::STATIC_USC_SetUserViewedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.USC_SetUserViewedEvent");

	UTgGfxAdventuresHub_USC_SetUserViewedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.USC_GetAdventureLeaderboard
// (Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            nEventId                       (Parm)

void UTgGfxAdventuresHub::STATIC_USC_GetAdventureLeaderboard(int nEventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.USC_GetAdventureLeaderboard");

	UTgGfxAdventuresHub_USC_GetAdventureLeaderboard_Params params;
	params.nEventId = nEventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.USC_OpenEventCam_Delegate
// (Defined, Latent, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxAdventuresHub::USC_OpenEventCam_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.USC_OpenEventCam_Delegate");

	UTgGfxAdventuresHub_USC_OpenEventCam_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.USC_GotoVault_Delegate
// (Latent, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxAdventuresHub::USC_GotoVault_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.USC_GotoVault_Delegate");

	UTgGfxAdventuresHub_USC_GotoVault_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.USC_GetAdventureLeaderboard_Delegate
// (Iterator, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxAdventuresHub::USC_GetAdventureLeaderboard_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.USC_GetAdventureLeaderboard_Delegate");

	UTgGfxAdventuresHub_USC_GetAdventureLeaderboard_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxAdventuresHub.USC_SetUserViewedEvent_Delegate
// (Final, Latent, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxAdventuresHub::USC_SetUserViewedEvent_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxAdventuresHub.USC_SetUserViewedEvent_Delegate");

	UTgGfxAdventuresHub_USC_SetUserViewedEvent_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxBooster.UpdateBoosterTime
// (Final, Defined, Iterator, PreOperator, NetReliable, Operator, Static, Public)

void UTgGfxBooster::STATIC_UpdateBoosterTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxBooster.UpdateBoosterTime");

	UTgGfxBooster_UpdateBoosterTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxBooster.USC_ShowPurchasePopup
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            ItemId                         (Parm)
// int                            nQuantity                      (Parm)

void UTgGfxBooster::STATIC_USC_ShowPurchasePopup(int ItemId, int nQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxBooster.USC_ShowPurchasePopup");

	UTgGfxBooster_USC_ShowPurchasePopup_Params params;
	params.ItemId = ItemId;
	params.nQuantity = nQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxBooster.USC_ShowPurchasePopup_Delegate
// (Iterator, Latent, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            ItemId                         (Parm)
// int                            nQuantity                      (Parm)

void UTgGfxBooster::USC_ShowPurchasePopup_Delegate(int ItemId, int nQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxBooster.USC_ShowPurchasePopup_Delegate");

	UTgGfxBooster_USC_ShowPurchasePopup_Delegate_Params params;
	params.ItemId = ItemId;
	params.nQuantity = nQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxBooster.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxBooster::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxBooster.Initialize");

	UTgGfxBooster_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxCharacterBuilder.HasVendorData
// (Defined, Latent, PreOperator, Net, Simulated, Native, Event, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGfxCharacterBuilder::STATIC_HasVendorData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxCharacterBuilder.HasVendorData");

	UTgGfxCharacterBuilder_HasVendorData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGfxCharacterBuilder.GetVendorData
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Native, Event, Static, Public)
// Parameters:
// class UTgVendorData*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UTgVendorData* UTgGfxCharacterBuilder::STATIC_GetVendorData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxCharacterBuilder.GetVendorData");

	UTgGfxCharacterBuilder_GetVendorData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGfxCharacterBuilder.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxCharacterBuilder::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxCharacterBuilder.ReceiveGFxData");

	UTgGfxCharacterBuilder_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxCharacterBuilder.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxCharacterBuilder::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxCharacterBuilder.Uninitialize");

	UTgGfxCharacterBuilder_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxCharacterBuilder.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxCharacterBuilder::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxCharacterBuilder.Initialize");

	UTgGfxCharacterBuilder_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxClanAdmin::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.Initialize");

	UTgGfxClanAdmin_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.UpdateClanNameChange
// (Defined, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxClanAdmin::UpdateClanNameChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.UpdateClanNameChange");

	UTgGfxClanAdmin_UpdateClanNameChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.ASC_UpdateClanNameChange
// (Final, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxClanAdmin::STATIC_ASC_UpdateClanNameChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.ASC_UpdateClanNameChange");

	UTgGfxClanAdmin_ASC_UpdateClanNameChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.UpdateApplicationData
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxClanAdmin::UpdateApplicationData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.UpdateApplicationData");

	UTgGfxClanAdmin_UpdateApplicationData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.ASC_UpdateApplicationData
// (Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxClanAdmin::STATIC_ASC_UpdateApplicationData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.ASC_UpdateApplicationData");

	UTgGfxClanAdmin_ASC_UpdateApplicationData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.UpdatePlayerInvites
// (Final, Latent, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxClanAdmin::UpdatePlayerInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.UpdatePlayerInvites");

	UTgGfxClanAdmin_UpdatePlayerInvites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.ASC_UpdatePlayerInvites
// (Singular, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxClanAdmin::STATIC_ASC_UpdatePlayerInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.ASC_UpdatePlayerInvites");

	UTgGfxClanAdmin_ASC_UpdatePlayerInvites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.UpdateClanData
// (Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxClanAdmin::UpdateClanData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.UpdateClanData");

	UTgGfxClanAdmin_UpdateClanData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.ASC_UpdateClanData
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxClanAdmin::STATIC_ASC_UpdateClanData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.ASC_UpdateClanData");

	UTgGfxClanAdmin_ASC_UpdateClanData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.USC_BanClanApp
// (Final, Iterator, Latent, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sPlayerId                      (Parm, NeedCtorLink)

void UTgGfxClanAdmin::STATIC_USC_BanClanApp(const struct FString& sPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.USC_BanClanApp");

	UTgGfxClanAdmin_USC_BanClanApp_Params params;
	params.sPlayerId = sPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.USC_DeclineClanApp
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            nAppId                         (Parm)

void UTgGfxClanAdmin::STATIC_USC_DeclineClanApp(int nAppId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.USC_DeclineClanApp");

	UTgGfxClanAdmin_USC_DeclineClanApp_Params params;
	params.nAppId = nAppId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.USC_AcceptClanApp
// (Final, Iterator, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            nAppId                         (Parm)

void UTgGfxClanAdmin::STATIC_USC_AcceptClanApp(int nAppId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.USC_AcceptClanApp");

	UTgGfxClanAdmin_USC_AcceptClanApp_Params params;
	params.nAppId = nAppId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.USC_UpdateJoinTypeRegion
// (Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            nJoinTypeId                    (Parm)
// int                            nRegionId                      (Parm)

void UTgGfxClanAdmin::STATIC_USC_UpdateJoinTypeRegion(int nJoinTypeId, int nRegionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.USC_UpdateJoinTypeRegion");

	UTgGfxClanAdmin_USC_UpdateJoinTypeRegion_Params params;
	params.nJoinTypeId = nJoinTypeId;
	params.nRegionId = nRegionId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanAdmin.USC_UpdateClanNameAndTag
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)
// struct FString                 sTag                           (Parm, NeedCtorLink)

void UTgGfxClanAdmin::STATIC_USC_UpdateClanNameAndTag(const struct FString& sName, const struct FString& sTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanAdmin.USC_UpdateClanNameAndTag");

	UTgGfxClanAdmin_USC_UpdateClanNameAndTag_Params params;
	params.sName = sName;
	params.sTag = sTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanCreation.Reinit
// (Final, Defined, Iterator, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxClanCreation::Reinit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanCreation.Reinit");

	UTgGfxClanCreation_Reinit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanCreation.ASC_Reinit
// (PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxClanCreation::STATIC_ASC_Reinit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanCreation.ASC_Reinit");

	UTgGfxClanCreation_ASC_Reinit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanCreation.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxClanCreation::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanCreation.Initialize");

	UTgGfxClanCreation_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanCreation.USC_GotoClanList
// (Final, Latent, Net, NetReliable, Operator, Static, Public)

void UTgGfxClanCreation::STATIC_USC_GotoClanList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanCreation.USC_GotoClanList");

	UTgGfxClanCreation_USC_GotoClanList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanCreation.USC_GetRegionListData
// (Defined, Iterator, Net, NetReliable, Operator, Static, Public)

void UTgGfxClanCreation::STATIC_USC_GetRegionListData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanCreation.USC_GetRegionListData");

	UTgGfxClanCreation_USC_GetRegionListData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanCreation.USC_CancelClanRequest
// (Defined, Iterator, Latent, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            nClanId                        (Parm)

void UTgGfxClanCreation::STATIC_USC_CancelClanRequest(int nClanId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanCreation.USC_CancelClanRequest");

	UTgGfxClanCreation_USC_CancelClanRequest_Params params;
	params.nClanId = nClanId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanCreation.USC_AcceptClanRequest
// (Defined, Iterator, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            nClanId                        (Parm)

void UTgGfxClanCreation::STATIC_USC_AcceptClanRequest(int nClanId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanCreation.USC_AcceptClanRequest");

	UTgGfxClanCreation_USC_AcceptClanRequest_Params params;
	params.nClanId = nClanId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanCreation.USC_GetInvitesData
// (Final, Net, NetReliable, Operator, Static, Public)

void UTgGfxClanCreation::STATIC_USC_GetInvitesData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanCreation.USC_GetInvitesData");

	UTgGfxClanCreation_USC_GetInvitesData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanCreation.USC_CreateClan
// (Defined, Iterator, PreOperator, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sClanName                      (Parm, NeedCtorLink)
// struct FString                 sClanTag                       (Parm, NeedCtorLink)
// int                            nRegionId                      (Parm)
// int                            nRecruitmentType               (Parm)

void UTgGfxClanCreation::STATIC_USC_CreateClan(const struct FString& sClanName, const struct FString& sClanTag, int nRegionId, int nRecruitmentType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanCreation.USC_CreateClan");

	UTgGfxClanCreation_USC_CreateClan_Params params;
	params.sClanName = sClanName;
	params.sClanTag = sClanTag;
	params.nRegionId = nRegionId;
	params.nRecruitmentType = nRecruitmentType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanIconPicker.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          pMP                            (Parm)

void UTgGfxClanIconPicker::STATIC_Initialize(class UTgMoviePlayer* pMP)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanIconPicker.Initialize");

	UTgGfxClanIconPicker_Initialize_Params params;
	params.pMP = pMP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanIconPicker.USC_SelectIcon
// (Final, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            nIconItemId                    (Parm)

void UTgGfxClanIconPicker::STATIC_USC_SelectIcon(int nIconItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanIconPicker.USC_SelectIcon");

	UTgGfxClanIconPicker_USC_SelectIcon_Params params;
	params.nIconItemId = nIconItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanIconPicker.USC_SelectIcon_Delegate
// (Final, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxClanIconPicker::USC_SelectIcon_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanIconPicker.USC_SelectIcon_Delegate");

	UTgGfxClanIconPicker_USC_SelectIcon_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanList.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxClanList::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanList.Initialize");

	UTgGfxClanList_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanList.UpdateApplicationData
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxClanList::UpdateApplicationData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanList.UpdateApplicationData");

	UTgGfxClanList_UpdateApplicationData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanList.ASC_UpdateApplicationData
// (Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxClanList::STATIC_ASC_UpdateApplicationData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanList.ASC_UpdateApplicationData");

	UTgGfxClanList_ASC_UpdateApplicationData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanList.UpdateClanList
// (Final, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxClanList::UpdateClanList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanList.UpdateClanList");

	UTgGfxClanList_UpdateClanList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanList.ASC_UpdateClanList
// (Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxClanList::STATIC_ASC_UpdateClanList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanList.ASC_UpdateClanList");

	UTgGfxClanList_ASC_UpdateClanList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanList.USC_ApplyToClan
// (Final, Defined, Latent, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            nClanId                        (Parm)
// bool                           bWithMessage                   (Parm)

void UTgGfxClanList::STATIC_USC_ApplyToClan(int nClanId, bool bWithMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanList.USC_ApplyToClan");

	UTgGfxClanList_USC_ApplyToClan_Params params;
	params.nClanId = nClanId;
	params.bWithMessage = bWithMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanList.USC_SearchClans
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sSearchString                  (Parm, NeedCtorLink)
// int                            nJoinTypeId                    (Parm)
// int                            nRegionId                      (Parm)
// bool                           bRecommendedOnly               (Parm)

void UTgGfxClanList::STATIC_USC_SearchClans(const struct FString& sSearchString, int nJoinTypeId, int nRegionId, bool bRecommendedOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanList.USC_SearchClans");

	UTgGfxClanList_USC_SearchClans_Params params;
	params.sSearchString = sSearchString;
	params.nJoinTypeId = nJoinTypeId;
	params.nRegionId = nRegionId;
	params.bRecommendedOnly = bRecommendedOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanManagement.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxClanManagement::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanManagement.Initialize");

	UTgGfxClanManagement_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanManagement.OnInviteToClanSelect
// (Final, Defined, PreOperator, Net, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxClanManagement::STATIC_OnInviteToClanSelect(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanManagement.OnInviteToClanSelect");

	UTgGfxClanManagement_OnInviteToClanSelect_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanManagement.OnInviteToClanQuery
// (Defined, PreOperator, Net, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// struct FPointer                pEvent                         (Parm)

void UTgGfxClanManagement::STATIC_OnInviteToClanQuery(const struct FPointer& pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanManagement.OnInviteToClanQuery");

	UTgGfxClanManagement_OnInviteToClanQuery_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanManagement.USC_ModifyLeader
// (PreOperator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sPlayerId                      (Parm, NeedCtorLink)

void UTgGfxClanManagement::STATIC_USC_ModifyLeader(const struct FString& sPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanManagement.USC_ModifyLeader");

	UTgGfxClanManagement_USC_ModifyLeader_Params params;
	params.sPlayerId = sPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanManagement.USC_ViewProfile
// (Final, Simulated, Operator, Static, Public)
// Parameters:
// struct FString                 sPlayerId                      (Parm, NeedCtorLink)

void UTgGfxClanManagement::STATIC_USC_ViewProfile(const struct FString& sPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanManagement.USC_ViewProfile");

	UTgGfxClanManagement_USC_ViewProfile_Params params;
	params.sPlayerId = sPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanManagement.USC_InviteToClanByName
// (Final, Defined, Latent, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)

void UTgGfxClanManagement::STATIC_USC_InviteToClanByName(const struct FString& sName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanManagement.USC_InviteToClanByName");

	UTgGfxClanManagement_USC_InviteToClanByName_Params params;
	params.sName = sName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanManagement.USC_UpdateClanTag
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)

void UTgGfxClanManagement::STATIC_USC_UpdateClanTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanManagement.USC_UpdateClanTag");

	UTgGfxClanManagement_USC_UpdateClanTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanManagement.USC_QuitClan
// (Final, Latent, PreOperator, Net, NetReliable, Operator, Static, Public)

void UTgGfxClanManagement::STATIC_USC_QuitClan()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanManagement.USC_QuitClan");

	UTgGfxClanManagement_USC_QuitClan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxClanManagement.USC_CancelPlayerInvite
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sPlayerId                      (Parm, NeedCtorLink)

void UTgGfxClanManagement::STATIC_USC_CancelPlayerInvite(const struct FString& sPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxClanManagement.USC_CancelPlayerInvite");

	UTgGfxClanManagement_USC_CancelPlayerInvite_Params params;
	params.sPlayerId = sPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGFxDungeonCurrencies.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGFxDungeonCurrencies::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGFxDungeonCurrencies.Uninitialize");

	UTgGFxDungeonCurrencies_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGFxDungeonCurrencies.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGFxDungeonCurrencies::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGFxDungeonCurrencies.Initialize");

	UTgGFxDungeonCurrencies_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEOMLobby.OnAcquisition
// (Iterator, Latent, PreOperator, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxEOMLobby::STATIC_OnAcquisition(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEOMLobby.OnAcquisition");

	UTgGfxEOMLobby_OnAcquisition_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEOMLobby.OnStats
// (Final, Defined, Iterator, PreOperator, Net, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// struct FString                 instanceId                     (Parm, NeedCtorLink)

void UTgGfxEOMLobby::STATIC_OnStats(const struct FString& instanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEOMLobby.OnStats");

	UTgGfxEOMLobby_OnStats_Params params;
	params.instanceId = instanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEOMLobby.OnFeedback
// (Final, PreOperator, Net, Simulated, Exec, Native, Event, Static, Public)

void UTgGfxEOMLobby::STATIC_OnFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEOMLobby.OnFeedback");

	UTgGfxEOMLobby_OnFeedback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEOMLobby.OnTwitter
// (Latent, PreOperator, Net, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// struct FString                 instanceId                     (Parm, NeedCtorLink)

void UTgGfxEOMLobby::STATIC_OnTwitter(const struct FString& instanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEOMLobby.OnTwitter");

	UTgGfxEOMLobby_OnTwitter_Params params;
	params.instanceId = instanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEOMLobby.OnFacebook
// (PreOperator, Net, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// struct FString                 instanceId                     (Parm, NeedCtorLink)

void UTgGfxEOMLobby::STATIC_OnFacebook(const struct FString& instanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEOMLobby.OnFacebook");

	UTgGfxEOMLobby_OnFacebook_Params params;
	params.instanceId = instanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEOMLobby.OnSendPlayerGift
// (Final, Iterator, PreOperator, Net, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxEOMLobby::STATIC_OnSendPlayerGift(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEOMLobby.OnSendPlayerGift");

	UTgGfxEOMLobby_OnSendPlayerGift_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEOMLobby.OnSendGiftPoints
// (Iterator, PreOperator, Net, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// class UGFxObject*              pData                          (Parm)

void UTgGfxEOMLobby::STATIC_OnSendGiftPoints(class UGFxObject* pData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEOMLobby.OnSendGiftPoints");

	UTgGfxEOMLobby_OnSendGiftPoints_Params params;
	params.pData = pData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEOMLobby.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxEOMLobby::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEOMLobby.ReceiveGFxData");

	UTgGfxEOMLobby_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEOMLobby.USC_SendPlayerGift
// (Iterator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 PlayerName                     (OptionalParm, Parm, NeedCtorLink)
// struct FString                 nPlayerId                      (OptionalParm, Parm, NeedCtorLink)

void UTgGfxEOMLobby::STATIC_USC_SendPlayerGift(const struct FString& PlayerName, const struct FString& nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEOMLobby.USC_SendPlayerGift");

	UTgGfxEOMLobby_USC_SendPlayerGift_Params params;
	params.PlayerName = PlayerName;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEOMLobby.ReceiveGiftedPoints
// (Defined, Iterator, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UGFxObject*              Data                           (Parm)

void UTgGfxEOMLobby::ReceiveGiftedPoints(class UGFxObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEOMLobby.ReceiveGiftedPoints");

	UTgGfxEOMLobby_ReceiveGiftedPoints_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEOMLobby.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxEOMLobby::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEOMLobby.Uninitialize");

	UTgGfxEOMLobby_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEOMLobby.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          pMoviePlayer                   (Parm)

void UTgGfxEOMLobby::STATIC_Initialize(class UTgMoviePlayer* pMoviePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEOMLobby.Initialize");

	UTgGfxEOMLobby_Initialize_Params params;
	params.pMoviePlayer = pMoviePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventAchievements.CheckBundleOwned
// (Latent, Net, Native, Event, Static, Public)

void UTgGfxEventAchievements::STATIC_CheckBundleOwned()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventAchievements.CheckBundleOwned");

	UTgGfxEventAchievements_CheckBundleOwned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventAchievements.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxEventAchievements::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventAchievements.ReceiveGFxData");

	UTgGfxEventAchievements_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventAchievements.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxEventAchievements::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventAchievements.Initialize");

	UTgGfxEventAchievements_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventLeaderboard.USC_RequestEventLeaderboard
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            EventIdx                       (Parm)

void UTgGfxEventLeaderboard::STATIC_USC_RequestEventLeaderboard(int EventIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventLeaderboard.USC_RequestEventLeaderboard");

	UTgGfxEventLeaderboard_USC_RequestEventLeaderboard_Params params;
	params.EventIdx = EventIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventLeaderboard.Chunk
// (Iterator, Latent, Net, Native, Event, Static, Public)
// Parameters:
// struct FString                 dataIdx                        (Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UTgGfxEventLeaderboard::STATIC_Chunk(const struct FString& dataIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventLeaderboard.Chunk");

	UTgGfxEventLeaderboard_Chunk_Params params;
	params.dataIdx = dataIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGfxEventLeaderboard.CreateChunk
// (Singular, Net, Native, Event, Static, Public)
// Parameters:
// struct FString                 dataIdx                        (Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UTgGfxEventLeaderboard::STATIC_CreateChunk(const struct FString& dataIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventLeaderboard.CreateChunk");

	UTgGfxEventLeaderboard_CreateChunk_Params params;
	params.dataIdx = dataIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGfxEventLeaderboard.UpdateFromChunk
// (Final, Defined, Latent, PreOperator, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 dataIdx                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGfxEventLeaderboard::STATIC_UpdateFromChunk(const struct FString& dataIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventLeaderboard.UpdateFromChunk");

	UTgGfxEventLeaderboard_UpdateFromChunk_Params params;
	params.dataIdx = dataIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGfxEventLeaderboard.OnReceivePlayerNames
// (Iterator, Latent, Simulated, Static, Public)

void UTgGfxEventLeaderboard::STATIC_OnReceivePlayerNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventLeaderboard.OnReceivePlayerNames");

	UTgGfxEventLeaderboard_OnReceivePlayerNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventLeaderboard.ReceivedAllData
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Event, Static, Public)

void UTgGfxEventLeaderboard::STATIC_ReceivedAllData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventLeaderboard.ReceivedAllData");

	UTgGfxEventLeaderboard_ReceivedAllData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventLeaderboard.PopulateDropdown
// (Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// TArray<int>                    arrEventIds                    (Parm, NeedCtorLink)

void UTgGfxEventLeaderboard::STATIC_PopulateDropdown(TArray<int> arrEventIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventLeaderboard.PopulateDropdown");

	UTgGfxEventLeaderboard_PopulateDropdown_Params params;
	params.arrEventIds = arrEventIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventLeaderboard.ShowLeaderboard
// (Defined, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// int                            nStartIndex                    (Parm)
// int                            nEndIndex                      (Parm)

void UTgGfxEventLeaderboard::STATIC_ShowLeaderboard(int nStartIndex, int nEndIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventLeaderboard.ShowLeaderboard");

	UTgGfxEventLeaderboard_ShowLeaderboard_Params params;
	params.nStartIndex = nStartIndex;
	params.nEndIndex = nEndIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventLeaderboard.RequestFriendAndWorldPlayerNames
// (Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Public)

void UTgGfxEventLeaderboard::STATIC_RequestFriendAndWorldPlayerNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventLeaderboard.RequestFriendAndWorldPlayerNames");

	UTgGfxEventLeaderboard_RequestFriendAndWorldPlayerNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventLeaderboard.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxEventLeaderboard::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventLeaderboard.Initialize");

	UTgGfxEventLeaderboard_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFeedback.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxFeedback::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxFeedback.ReceiveGFxData");

	UTgGfxFeedback_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxFeedback.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxFeedback::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxFeedback.Initialize");

	UTgGfxFeedback_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGlossary.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxGlossary::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGlossary.Uninitialize");

	UTgGfxGlossary_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGlossary.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          pMP                            (Parm)

void UTgGfxGlossary::STATIC_Initialize(class UTgMoviePlayer* pMP)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGlossary.Initialize");

	UTgGfxGlossary_Initialize_Params params;
	params.pMP = pMP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGlossary.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxGlossary::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGlossary.ReceiveGFxData");

	UTgGfxGlossary_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGods.OnAcquisition
// (Iterator, Latent, PreOperator, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxGods::STATIC_OnAcquisition(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGods.OnAcquisition");

	UTgGfxGods_OnAcquisition_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGods.UpdateUGPValue
// (Iterator, Latent, NetReliable, Exec, Native, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxGods::STATIC_UpdateUGPValue(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGods.UpdateUGPValue");

	UTgGfxGods_UpdateUGPValue_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGods.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxGods::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGods.ReceiveGFxData");

	UTgGfxGods_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGods.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxGods::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGods.Uninitialize");

	UTgGfxGods_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGods.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxGods::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGods.Initialize");

	UTgGfxGods_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGods.USC_PlayGodVideo
// (Latent, PreOperator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            abilityNumber                  (Parm)

void UTgGfxGods::STATIC_USC_PlayGodVideo(int abilityNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGods.USC_PlayGodVideo");

	UTgGfxGods_USC_PlayGodVideo_Params params;
	params.abilityNumber = abilityNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGods.USC_PlayGodVideo_Delegate
// (Defined, Iterator, Latent, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxGods::USC_PlayGodVideo_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGods.USC_PlayGodVideo_Delegate");

	UTgGfxGods_USC_PlayGodVideo_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGods.USC_UpdateEmoteSelection
// (Final, Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 emoteName                      (Parm, NeedCtorLink)

void UTgGfxGods::STATIC_USC_UpdateEmoteSelection(const struct FString& emoteName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGods.USC_UpdateEmoteSelection");

	UTgGfxGods_USC_UpdateEmoteSelection_Params params;
	params.emoteName = emoteName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGods.USC_UpdateEmoteSelection_Delegate
// (Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 emoteName                      (Parm, NeedCtorLink)

void UTgGfxGods::USC_UpdateEmoteSelection_Delegate(const struct FString& emoteName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGods.USC_UpdateEmoteSelection_Delegate");

	UTgGfxGods_USC_UpdateEmoteSelection_Delegate_Params params;
	params.emoteName = emoteName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGodsHistory.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxGodsHistory::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGodsHistory.Initialize");

	UTgGfxGodsHistory_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGodsHistory.UpdateGodHistory
// (Defined, Iterator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxGodsHistory::UpdateGodHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGodsHistory.UpdateGodHistory");

	UTgGfxGodsHistory_UpdateGodHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGodsHistory.ASC_UpdateGodHistory
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxGodsHistory::STATIC_ASC_UpdateGodHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGodsHistory.ASC_UpdateGodHistory");

	UTgGfxGodsHistory_ASC_UpdateGodHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGodsHistory.UpdateQueueData
// (Final, Defined, Latent, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxGodsHistory::UpdateQueueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGodsHistory.UpdateQueueData");

	UTgGfxGodsHistory_UpdateQueueData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGodsHistory.ASC_UpdateQueueData
// (Final, Defined, Singular, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxGodsHistory::STATIC_ASC_UpdateQueueData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGodsHistory.ASC_UpdateQueueData");

	UTgGfxGodsHistory_ASC_UpdateQueueData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails
// (Final, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            pMatchID                       (Parm)

void UTgGfxGodsHistory::STATIC_USC_ShowMatchDetails(int pMatchID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails");

	UTgGfxGodsHistory_USC_ShowMatchDetails_Params params;
	params.pMatchID = pMatchID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGodsHistory.USC_GetHistoryData
// (Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            queueId                        (Parm)

void UTgGfxGodsHistory::STATIC_USC_GetHistoryData(int queueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGodsHistory.USC_GetHistoryData");

	UTgGfxGodsHistory_USC_GetHistoryData_Params params;
	params.queueId = queueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown
// (Final, Iterator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            godId                          (Parm)

void UTgGfxGodsHistory::STATIC_USC_GetQueuesDropdown(int godId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown");

	UTgGfxGodsHistory_USC_GetQueuesDropdown_Params params;
	params.godId = godId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails_Delegate
// (Final, Defined, Latent, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            pMatchID                       (Parm)

void UTgGfxGodsHistory::USC_ShowMatchDetails_Delegate(int pMatchID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails_Delegate");

	UTgGfxGodsHistory_USC_ShowMatchDetails_Delegate_Params params;
	params.pMatchID = pMatchID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGodsHistory.USC_GetHistoryData_Delegate
// (Final, Iterator, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            queueId                        (Parm)

void UTgGfxGodsHistory::USC_GetHistoryData_Delegate(int queueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGodsHistory.USC_GetHistoryData_Delegate");

	UTgGfxGodsHistory_USC_GetHistoryData_Delegate_Params params;
	params.queueId = queueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown_Delegate
// (Final, Defined, Iterator, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            godId                          (Parm)

void UTgGfxGodsHistory::USC_GetQueuesDropdown_Delegate(int godId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown_Delegate");

	UTgGfxGodsHistory_USC_GetQueuesDropdown_Delegate_Params params;
	params.godId = godId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxGuides.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxGuides::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxGuides.Initialize");

	UTgGfxGuides_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudItems.UpdateGlow
// (Final, Iterator, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)
// bool                           Visibility                     (Parm)

void UTgGfxHudItems::UpdateGlow(int Index, bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudItems.UpdateGlow");

	UTgGfxHudItems_UpdateGlow_Params params;
	params.Index = Index;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudItems.ASC_UpdateGlow
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)
// Parameters:
// int                            Index                          (Parm)
// bool                           Visibility                     (Parm)

void UTgGfxHudItems::STATIC_ASC_UpdateGlow(int Index, bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudItems.ASC_UpdateGlow");

	UTgGfxHudItems_ASC_UpdateGlow_Params params;
	params.Index = Index;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudItems.USC_SetupItemDisplay
// (Defined, Latent, Singular, Net, NetReliable, Operator, Static, Public)

void UTgGfxHudItems::STATIC_USC_SetupItemDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudItems.USC_SetupItemDisplay");

	UTgGfxHudItems_USC_SetupItemDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudItems.USC_SetupItemDisplay_Delegate
// (Latent, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxHudItems::USC_SetupItemDisplay_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudItems.USC_SetupItemDisplay_Delegate");

	UTgGfxHudItems_USC_SetupItemDisplay_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudItems.CheckCurrency
// (Defined, Iterator, Net, Simulated, Operator, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxHudItems::CheckCurrency(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudItems.CheckCurrency");

	UTgGfxHudItems_CheckCurrency_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudItems.CheckWishList
// (Defined, Latent, Net, Native, Event, Static, Public)
// Parameters:
// bool                           bPurge                         (Parm)

void UTgGfxHudItems::STATIC_CheckWishList(bool bPurge)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudItems.CheckWishList");

	UTgGfxHudItems_CheckWishList_Params params;
	params.bPurge = bPurge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudItems.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxHudItems::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudItems.ReceiveGFxData");

	UTgGfxHudItems_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudItems.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxHudItems::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudItems.Initialize");

	UTgGfxHudItems_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudNotify.OnGameUIEvent
// (Latent, Net, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxHudNotify::STATIC_OnGameUIEvent(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudNotify.OnGameUIEvent");

	UTgGfxHudNotify_OnGameUIEvent_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudNotify.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxHudNotify::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudNotify.Uninitialize");

	UTgGfxHudNotify_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudNotify.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          pMP                            (Parm)

void UTgGfxHudNotify::STATIC_Initialize(class UTgMoviePlayer* pMP)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudNotify.Initialize");

	UTgGfxHudNotify_Initialize_Params params;
	params.pMP = pMP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudNotify.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxHudNotify::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudNotify.ReceiveGFxData");

	UTgGfxHudNotify_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudUpgrade.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          pMP                            (Parm)

void UTgGfxHudUpgrade::STATIC_Initialize(class UTgMoviePlayer* pMP)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudUpgrade.Initialize");

	UTgGfxHudUpgrade_Initialize_Params params;
	params.pMP = pMP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxHudUpgrade.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxHudUpgrade::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxHudUpgrade.ReceiveGFxData");

	UTgGfxHudUpgrade_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxIntro.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxIntro::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxIntro.Initialize");

	UTgGfxIntro_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxItemToast.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxItemToast::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxItemToast.Uninitialize");

	UTgGfxItemToast_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxItemToast.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxItemToast::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxItemToast.Initialize");

	UTgGfxItemToast_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxItemToast.ToastItem
// (Final, Defined, Latent, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            ItemId                         (Parm)

void UTgGfxItemToast::ToastItem(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxItemToast.ToastItem");

	UTgGfxItemToast_ToastItem_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxItemToast.ASC_ToastItem
// (Defined, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)
// Parameters:
// int                            ItemId                         (Parm)

void UTgGfxItemToast::STATIC_ASC_ToastItem(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxItemToast.ASC_ToastItem");

	UTgGfxItemToast_ASC_ToastItem_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxLeaderboard.RequestCharacterLeaderboard
// (Final, Defined, Latent, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// int                            classId                        (Parm)
// int                            rankType                       (Parm)

void UTgGfxLeaderboard::STATIC_RequestCharacterLeaderboard(int classId, int rankType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxLeaderboard.RequestCharacterLeaderboard");

	UTgGfxLeaderboard_RequestCharacterLeaderboard_Params params;
	params.classId = classId;
	params.rankType = rankType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxLeaderboard.ShowLeaderboard
// (Defined, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// struct FString                 boardName                      (Parm, NeedCtorLink)
// int                            aValue                         (OptionalParm, Parm)
// int                            Option                         (OptionalParm, Parm)

void UTgGfxLeaderboard::STATIC_ShowLeaderboard(const struct FString& boardName, int aValue, int Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxLeaderboard.ShowLeaderboard");

	UTgGfxLeaderboard_ShowLeaderboard_Params params;
	params.boardName = boardName;
	params.aValue = aValue;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxLeaderboard.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxLeaderboard::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxLeaderboard.ReceiveGFxData");

	UTgGfxLeaderboard_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxLeaderboard.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxLeaderboard::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxLeaderboard.Uninitialize");

	UTgGfxLeaderboard_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxLeaderboard.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxLeaderboard::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxLeaderboard.Initialize");

	UTgGfxLeaderboard_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxLoadouts.OnAcquisition
// (Iterator, Latent, PreOperator, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxLoadouts::STATIC_OnAcquisition(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxLoadouts.OnAcquisition");

	UTgGfxLoadouts_OnAcquisition_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxLoadouts.RefreshBoosterTimer
// (Final, Defined, Iterator, Singular, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxLoadouts::STATIC_RefreshBoosterTimer(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxLoadouts.RefreshBoosterTimer");

	UTgGfxLoadouts_RefreshBoosterTimer_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxLoadouts.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxLoadouts::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxLoadouts.ReceiveGFxData");

	UTgGfxLoadouts_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxLoadouts.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxLoadouts::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxLoadouts.Uninitialize");

	UTgGfxLoadouts_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxLoadouts.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxLoadouts::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxLoadouts.Initialize");

	UTgGfxLoadouts_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxLobbyMain.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxLobbyMain::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxLobbyMain.Uninitialize");

	UTgGfxLobbyMain_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxLobbyMain.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxLobbyMain::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxLobbyMain.Initialize");

	UTgGfxLobbyMain_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxMatchDetails.MatchDataUpdated
// (PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxMatchDetails::MatchDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxMatchDetails.MatchDataUpdated");

	UTgGfxMatchDetails_MatchDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxMatchDetails.ASC_MatchDataUpdated
// (Defined, Latent, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxMatchDetails::STATIC_ASC_MatchDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxMatchDetails.ASC_MatchDataUpdated");

	UTgGfxMatchDetails_ASC_MatchDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId
// (Final, Iterator, Latent, PreOperator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 matchId                        (Parm, NeedCtorLink)

void UTgGfxMatchDetails::STATIC_USC_SearchByMatchId(const struct FString& matchId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId");

	UTgGfxMatchDetails_USC_SearchByMatchId_Params params;
	params.matchId = matchId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId_Delegate
// (Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 matchId                        (Parm, NeedCtorLink)

void UTgGfxMatchDetails::USC_SearchByMatchId_Delegate(const struct FString& matchId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId_Delegate");

	UTgGfxMatchDetails_USC_SearchByMatchId_Delegate_Params params;
	params.matchId = matchId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxMatchDetails.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxMatchDetails::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxMatchDetails.Initialize");

	UTgGfxMatchDetails_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxPartyManagement.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxPartyManagement::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxPartyManagement.Uninitialize");

	UTgGfxPartyManagement_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxPartyManagement.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxPartyManagement::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxPartyManagement.ReceiveGFxData");

	UTgGfxPartyManagement_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxPartyManagement.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          pMP                            (Parm)

void UTgGfxPartyManagement::STATIC_Initialize(class UTgMoviePlayer* pMP)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxPartyManagement.Initialize");

	UTgGfxPartyManagement_Initialize_Params params;
	params.pMP = pMP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxPlayerProfile.OnFriendSelector
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pBaseEvent                     (Parm)

void UTgGfxPlayerProfile::STATIC_OnFriendSelector(class UTgEventDataItem* pBaseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxPlayerProfile.OnFriendSelector");

	UTgGfxPlayerProfile_OnFriendSelector_Params params;
	params.pBaseEvent = pBaseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxPlayerProfile.PlayerNameUpdated
// (Defined, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxPlayerProfile::PlayerNameUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxPlayerProfile.PlayerNameUpdated");

	UTgGfxPlayerProfile_PlayerNameUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxPlayerProfile.ASC_PlayerNameUpdated
// (Iterator, Latent, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxPlayerProfile::STATIC_ASC_PlayerNameUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxPlayerProfile.ASC_PlayerNameUpdated");

	UTgGfxPlayerProfile_ASC_PlayerNameUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxPlayerProfile.DropDownUpdated
// (Iterator, Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            Index                          (Parm)

void UTgGfxPlayerProfile::DropDownUpdated(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxPlayerProfile.DropDownUpdated");

	UTgGfxPlayerProfile_DropDownUpdated_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxPlayerProfile.ASC_DropDownUpdated
// (Defined, Iterator, Net, NetReliable, Simulated, Exec, Event, Static, Public)
// Parameters:
// int                            Index                          (Parm)

void UTgGfxPlayerProfile::STATIC_ASC_DropDownUpdated(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxPlayerProfile.ASC_DropDownUpdated");

	UTgGfxPlayerProfile_ASC_DropDownUpdated_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxPlayerProfile.USC_TabSelected
// (Final, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            Index                          (Parm)

void UTgGfxPlayerProfile::STATIC_USC_TabSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxPlayerProfile.USC_TabSelected");

	UTgGfxPlayerProfile_USC_TabSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxPlayerProfile.USC_SearchByName
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 PlayerName                     (Parm, NeedCtorLink)

void UTgGfxPlayerProfile::STATIC_USC_SearchByName(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxPlayerProfile.USC_SearchByName");

	UTgGfxPlayerProfile_USC_SearchByName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxPlayerProfile.USC_SetFilter
// (Final, Iterator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            filterIndex                    (Parm)
// int                            val                            (Parm)

void UTgGfxPlayerProfile::STATIC_USC_SetFilter(int filterIndex, int val)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxPlayerProfile.USC_SetFilter");

	UTgGfxPlayerProfile_USC_SetFilter_Params params;
	params.filterIndex = filterIndex;
	params.val = val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxPlayerProfile.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxPlayerProfile::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxPlayerProfile.Uninitialize");

	UTgGfxPlayerProfile_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxPlayerProfile.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxPlayerProfile::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxPlayerProfile.Initialize");

	UTgGfxPlayerProfile_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileAccolade.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxProfileAccolade::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileAccolade.Initialize");

	UTgGfxProfileAccolade_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileAccolade.AccoladeDataUpdated
// (Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfileAccolade::AccoladeDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileAccolade.AccoladeDataUpdated");

	UTgGfxProfileAccolade_AccoladeDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileAccolade.ASC_AccoladeDataUpdated
// (Final, Defined, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfileAccolade::STATIC_ASC_AccoladeDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileAccolade.ASC_AccoladeDataUpdated");

	UTgGfxProfileAccolade_ASC_AccoladeDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileAchievements.CheckIfHasMasterList
// (Final, Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfileAchievements::CheckIfHasMasterList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileAchievements.CheckIfHasMasterList");

	UTgGfxProfileAchievements_CheckIfHasMasterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileAchievements.ASC_CheckIfHasMasterList
// (Iterator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfileAchievements::STATIC_ASC_CheckIfHasMasterList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileAchievements.ASC_CheckIfHasMasterList");

	UTgGfxProfileAchievements_ASC_CheckIfHasMasterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileAchievements.UpdateAchievements
// (Iterator, Latent, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfileAchievements::UpdateAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileAchievements.UpdateAchievements");

	UTgGfxProfileAchievements_UpdateAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileAchievements.ASC_UpdateAchievements
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfileAchievements::STATIC_ASC_UpdateAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileAchievements.ASC_UpdateAchievements");

	UTgGfxProfileAchievements_ASC_UpdateAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileAchievements.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxProfileAchievements::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileAchievements.Initialize");

	UTgGfxProfileAchievements_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileHistory.QueueDataUpdated
// (Final, Iterator, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfileHistory::QueueDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileHistory.QueueDataUpdated");

	UTgGfxProfileHistory_QueueDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileHistory.ASC_QueueDataUpdated
// (Final, Defined, Iterator, Latent, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfileHistory::STATIC_ASC_QueueDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileHistory.ASC_QueueDataUpdated");

	UTgGfxProfileHistory_ASC_QueueDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileHistory.MatchesDataUpdated
// (Final, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfileHistory::MatchesDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileHistory.MatchesDataUpdated");

	UTgGfxProfileHistory_MatchesDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileHistory.ASC_MatchesDataUpdated
// (Final, Defined, Latent, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfileHistory::STATIC_ASC_MatchesDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileHistory.ASC_MatchesDataUpdated");

	UTgGfxProfileHistory_ASC_MatchesDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileHistory.USC_ShowDetails
// (Iterator, Latent, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 matchId                        (Parm, NeedCtorLink)

void UTgGfxProfileHistory::STATIC_USC_ShowDetails(const struct FString& matchId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileHistory.USC_ShowDetails");

	UTgGfxProfileHistory_USC_ShowDetails_Params params;
	params.matchId = matchId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter
// (Final, Latent, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            queueId                        (Parm)

void UTgGfxProfileHistory::STATIC_USC_SetQueueFilter(int queueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter");

	UTgGfxProfileHistory_USC_SetQueueFilter_Params params;
	params.queueId = queueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter
// (Final, Defined, Iterator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sFilterGod                     (Parm, NeedCtorLink)

void UTgGfxProfileHistory::STATIC_USC_SetGodsFilter(const struct FString& sFilterGod)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter");

	UTgGfxProfileHistory_USC_SetGodsFilter_Params params;
	params.sFilterGod = sFilterGod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileHistory.USC_ShowDetails_Delegate
// (Defined, Latent, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 matchId                        (Parm, NeedCtorLink)

void UTgGfxProfileHistory::USC_ShowDetails_Delegate(const struct FString& matchId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileHistory.USC_ShowDetails_Delegate");

	UTgGfxProfileHistory_USC_ShowDetails_Delegate_Params params;
	params.matchId = matchId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter_Delegate
// (Final, Defined, Iterator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            queueId                        (Parm)

void UTgGfxProfileHistory::USC_SetQueueFilter_Delegate(int queueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter_Delegate");

	UTgGfxProfileHistory_USC_SetQueueFilter_Delegate_Params params;
	params.queueId = queueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter_Delegate
// (Final, Iterator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 sFilterGod                     (Parm, NeedCtorLink)

void UTgGfxProfileHistory::USC_SetGodsFilter_Delegate(const struct FString& sFilterGod)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter_Delegate");

	UTgGfxProfileHistory_USC_SetGodsFilter_Delegate_Params params;
	params.sFilterGod = sFilterGod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileHistory.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxProfileHistory::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileHistory.Initialize");

	UTgGfxProfileHistory_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileLeagueStats.UpdateLeagueStats
// (Final, Defined, Iterator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfileLeagueStats::UpdateLeagueStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileLeagueStats.UpdateLeagueStats");

	UTgGfxProfileLeagueStats_UpdateLeagueStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileLeagueStats.ASC_UpdateLeagueStats
// (Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfileLeagueStats::STATIC_ASC_UpdateLeagueStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileLeagueStats.ASC_UpdateLeagueStats");

	UTgGfxProfileLeagueStats_ASC_UpdateLeagueStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileLeagueStats.UpdateQueueLeagues
// (Final, Defined, Iterator, Latent, PreOperator, NetReliable, Operator, Static, Public)

void UTgGfxProfileLeagueStats::STATIC_UpdateQueueLeagues()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileLeagueStats.UpdateQueueLeagues");

	UTgGfxProfileLeagueStats_UpdateQueueLeagues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileLeagueStats.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxProfileLeagueStats::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileLeagueStats.Initialize");

	UTgGfxProfileLeagueStats_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileMastery.UpdateAll
// (Final, Iterator, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfileMastery::UpdateAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileMastery.UpdateAll");

	UTgGfxProfileMastery_UpdateAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileMastery.asc_updateAll
// (Final, Iterator, PreOperator, Operator, Public)

void UTgGfxProfileMastery::asc_updateAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileMastery.asc_updateAll");

	UTgGfxProfileMastery_asc_updateAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileMastery.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxProfileMastery::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileMastery.Initialize");

	UTgGfxProfileMastery_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileOverview.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxProfileOverview::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileOverview.Uninitialize");

	UTgGfxProfileOverview_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileOverview.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxProfileOverview::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileOverview.Initialize");

	UTgGfxProfileOverview_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileOverview.UpdateSelectedAchievements
// (Final, Iterator, Latent, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfileOverview::UpdateSelectedAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileOverview.UpdateSelectedAchievements");

	UTgGfxProfileOverview_UpdateSelectedAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileOverview.ASC_UpdateSelectedAchievements
// (Final, Iterator, Singular, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfileOverview::STATIC_ASC_UpdateSelectedAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileOverview.ASC_UpdateSelectedAchievements");

	UTgGfxProfileOverview_ASC_UpdateSelectedAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileOverview.LeagueDataUpdated
// (Final, Defined, Iterator, Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfileOverview::LeagueDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileOverview.LeagueDataUpdated");

	UTgGfxProfileOverview_LeagueDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileOverview.ASC_LeagueDataUpdated
// (Final, Latent, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfileOverview::STATIC_ASC_LeagueDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileOverview.ASC_LeagueDataUpdated");

	UTgGfxProfileOverview_ASC_LeagueDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileOverview.ProfileDataUpdated
// (Final, Defined, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfileOverview::ProfileDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileOverview.ProfileDataUpdated");

	UTgGfxProfileOverview_ProfileDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileOverview.ASC_ProfileDataUpdated
// (Final, Iterator, Latent, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfileOverview::STATIC_ASC_ProfileDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileOverview.ASC_ProfileDataUpdated");

	UTgGfxProfileOverview_ASC_ProfileDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileOverview.USC_NavigateToClan
// (Final, PreOperator, Net, NetReliable, Operator, Static, Public)

void UTgGfxProfileOverview::STATIC_USC_NavigateToClan()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileOverview.USC_NavigateToClan");

	UTgGfxProfileOverview_USC_NavigateToClan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileOverview.USC_NavigateToClan_Delegate
// (Final, Latent, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfileOverview::USC_NavigateToClan_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileOverview.USC_NavigateToClan_Delegate");

	UTgGfxProfileOverview_USC_NavigateToClan_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.OnFriendSelector
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pBaseEvent                     (Parm)

void UTgGfxProfilePage::STATIC_OnFriendSelector(class UTgEventDataItem* pBaseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.OnFriendSelector");

	UTgGfxProfilePage_OnFriendSelector_Params params;
	params.pBaseEvent = pBaseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.UpdateAvailable
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           vis                            (Parm)

void UTgGfxProfilePage::UpdateAvailable(bool vis)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.UpdateAvailable");

	UTgGfxProfilePage_UpdateAvailable_Params params;
	params.vis = vis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.ASC_UpdateAvailable
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)
// Parameters:
// bool                           vis                            (Parm)

void UTgGfxProfilePage::STATIC_ASC_UpdateAvailable(bool vis)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.ASC_UpdateAvailable");

	UTgGfxProfilePage_ASC_UpdateAvailable_Params params;
	params.vis = vis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.UpdateCallout
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfilePage::UpdateCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.UpdateCallout");

	UTgGfxProfilePage_UpdateCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.ASC_UpdateCallout
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfilePage::STATIC_ASC_UpdateCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.ASC_UpdateCallout");

	UTgGfxProfilePage_ASC_UpdateCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.UpdatePlayer
// (Latent, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfilePage::UpdatePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.UpdatePlayer");

	UTgGfxProfilePage_UpdatePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.ASC_UpdatePlayer
// (Final, Defined, Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfilePage::STATIC_ASC_UpdatePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.ASC_UpdatePlayer");

	UTgGfxProfilePage_ASC_UpdatePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.UpdateTab
// (Final, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfilePage::UpdateTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.UpdateTab");

	UTgGfxProfilePage_UpdateTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.ASC_UpdateTab
// (Final, Latent, Singular, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfilePage::STATIC_ASC_UpdateTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.ASC_UpdateTab");

	UTgGfxProfilePage_ASC_UpdateTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.USC_GiftPlayer
// (Latent, Net, NetReliable, Operator, Static, Public)
// Parameters:
// bool                           isYourself                     (Parm)

void UTgGfxProfilePage::STATIC_USC_GiftPlayer(bool isYourself)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.USC_GiftPlayer");

	UTgGfxProfilePage_USC_GiftPlayer_Params params;
	params.isYourself = isYourself;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.USC_TwitchLink
// (Defined, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)

void UTgGfxProfilePage::STATIC_USC_TwitchLink()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.USC_TwitchLink");

	UTgGfxProfilePage_USC_TwitchLink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.USC_UpdatePrivacy
// (Iterator, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)

void UTgGfxProfilePage::STATIC_USC_UpdatePrivacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.USC_UpdatePrivacy");

	UTgGfxProfilePage_USC_UpdatePrivacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.USC_AddFriend
// (Final, Iterator, Singular, NetReliable, Exec, Native, Static, Public)

void UTgGfxProfilePage::STATIC_USC_AddFriend()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.USC_AddFriend");

	UTgGfxProfilePage_USC_AddFriend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.USC_TabSelected
// (Final, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            tabId                          (Parm)

void UTgGfxProfilePage::STATIC_USC_TabSelected(int tabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.USC_TabSelected");

	UTgGfxProfilePage_USC_TabSelected_Params params;
	params.tabId = tabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.USC_SearchPlayerByName
// (Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 PlayerName                     (Parm, NeedCtorLink)

void UTgGfxProfilePage::STATIC_USC_SearchPlayerByName(const struct FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.USC_SearchPlayerByName");

	UTgGfxProfilePage_USC_SearchPlayerByName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfilePage.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxProfilePage::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfilePage.Initialize");

	UTgGfxProfilePage_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileWorshiper.FilterDataUpdated
// (Final, Iterator, Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfileWorshiper::FilterDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileWorshiper.FilterDataUpdated");

	UTgGfxProfileWorshiper_FilterDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileWorshiper.ASC_FilterDataUpdated
// (Final, Defined, Iterator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfileWorshiper::STATIC_ASC_FilterDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileWorshiper.ASC_FilterDataUpdated");

	UTgGfxProfileWorshiper_ASC_FilterDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileWorshiper.GodMasteryUpdated
// (Defined, Iterator, Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxProfileWorshiper::GodMasteryUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileWorshiper.GodMasteryUpdated");

	UTgGfxProfileWorshiper_GodMasteryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileWorshiper.ASC_GodMasteryUpdated
// (Latent, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxProfileWorshiper::STATIC_ASC_GodMasteryUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileWorshiper.ASC_GodMasteryUpdated");

	UTgGfxProfileWorshiper_ASC_GodMasteryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileWorshiper.USC_Search
// (Defined, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Static, Public)
// Parameters:
// struct FString                 searchText                     (Parm, NeedCtorLink)

void UTgGfxProfileWorshiper::STATIC_USC_Search(const struct FString& searchText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileWorshiper.USC_Search");

	UTgGfxProfileWorshiper_USC_Search_Params params;
	params.searchText = searchText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileWorshiper.USC_Search_Delegate
// (Final, Defined, Iterator, Latent, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 searchText                     (Parm, NeedCtorLink)

void UTgGfxProfileWorshiper::USC_Search_Delegate(const struct FString& searchText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileWorshiper.USC_Search_Delegate");

	UTgGfxProfileWorshiper_USC_Search_Delegate_Params params;
	params.searchText = searchText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter
// (Defined, Iterator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            filterId                       (Parm)

void UTgGfxProfileWorshiper::STATIC_USC_SetGodMasteryFilter(int filterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter");

	UTgGfxProfileWorshiper_USC_SetGodMasteryFilter_Params params;
	params.filterId = filterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter_Delegate
// (Iterator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            filterId                       (Parm)

void UTgGfxProfileWorshiper::USC_SetGodMasteryFilter_Delegate(int filterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter_Delegate");

	UTgGfxProfileWorshiper_USC_SetGodMasteryFilter_Delegate_Params params;
	params.filterId = filterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxProfileWorshiper.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxProfileWorshiper::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxProfileWorshiper.Initialize");

	UTgGfxProfileWorshiper_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxQuestWindow.UpdateQuest
// (Final, Iterator, PreOperator, Net, NetReliable, Simulated, Operator, HasOptionalParms)
// Parameters:
// int                            Id                             (Parm)
// int                            Count                          (Parm)
// int                            Goal                           (Parm)
// struct FString                 msg                            (Parm, NeedCtorLink)

void UTgGfxQuestWindow::UpdateQuest(int Id, int Count, int Goal, const struct FString& msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxQuestWindow.UpdateQuest");

	UTgGfxQuestWindow_UpdateQuest_Params params;
	params.Id = Id;
	params.Count = Count;
	params.Goal = Goal;
	params.msg = msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxQuestWindow.ASC_UpdateQuest
// (Defined, Singular, Net, NetReliable, Simulated, Exec, Event, Static, Public)
// Parameters:
// int                            Id                             (Parm)
// int                            Count                          (Parm)
// int                            Goal                           (Parm)
// struct FString                 msg                            (Parm, NeedCtorLink)

void UTgGfxQuestWindow::STATIC_ASC_UpdateQuest(int Id, int Count, int Goal, const struct FString& msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxQuestWindow.ASC_UpdateQuest");

	UTgGfxQuestWindow_ASC_UpdateQuest_Params params;
	params.Id = Id;
	params.Count = Count;
	params.Goal = Goal;
	params.msg = msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxQuestWindow.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxQuestWindow::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxQuestWindow.Initialize");

	UTgGfxQuestWindow_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxRacerDispatcher.USC_CheckForUpdates
// (Final, PreOperator, Singular, NetReliable, Operator, Static, Public)

void UTgGfxRacerDispatcher::STATIC_USC_CheckForUpdates()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxRacerDispatcher.USC_CheckForUpdates");

	UTgGfxRacerDispatcher_USC_CheckForUpdates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxRacerDispatcher.USC_CheckForUpdates_Delegate
// (Final, Defined, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxRacerDispatcher::USC_CheckForUpdates_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxRacerDispatcher.USC_CheckForUpdates_Delegate");

	UTgGfxRacerDispatcher_USC_CheckForUpdates_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxRacerDispatcher.DataChange
// (Defined, Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UGFxObject*              Data                           (Parm)

void UTgGfxRacerDispatcher::DataChange(class UGFxObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxRacerDispatcher.DataChange");

	UTgGfxRacerDispatcher_DataChange_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxRacerDispatcher.ASC_DataChange
// (Final, Iterator, Net, NetReliable, Simulated, Exec, Event, Static, Public)
// Parameters:
// class UGFxObject*              Obj                            (Parm)

void UTgGfxRacerDispatcher::STATIC_ASC_DataChange(class UGFxObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxRacerDispatcher.ASC_DataChange");

	UTgGfxRacerDispatcher_ASC_DataChange_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxRacerDispatcher.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxRacerDispatcher::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxRacerDispatcher.Initialize");

	UTgGfxRacerDispatcher_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferralPopup.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxReferralPopup::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferralPopup.Initialize");

	UTgGfxReferralPopup_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferralPopup.UpdateFriendList
// (Iterator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxReferralPopup::UpdateFriendList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferralPopup.UpdateFriendList");

	UTgGfxReferralPopup_UpdateFriendList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferralPopup.ASC_UpdateFriendList
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxReferralPopup::STATIC_ASC_UpdateFriendList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferralPopup.ASC_UpdateFriendList");

	UTgGfxReferralPopup_ASC_UpdateFriendList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral
// (Final, Defined, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sQQId                          (Parm, NeedCtorLink)
// struct FString                 sMessage                       (Parm, NeedCtorLink)
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)

void UTgGfxReferralPopup::STATIC_USC_SendFriendReferral(const struct FString& sQQId, const struct FString& sMessage, const struct FString& sPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral");

	UTgGfxReferralPopup_USC_SendFriendReferral_Params params;
	params.sQQId = sQQId;
	params.sMessage = sMessage;
	params.sPlayerName = sPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral_Delegate
// (Final, Defined, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxReferralPopup::USC_SendFriendReferral_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral_Delegate");

	UTgGfxReferralPopup_USC_SendFriendReferral_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Operator, Static, Public)

void UTgGfxReferralReward::STATIC_USC_OpenReferFriendReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward");

	UTgGfxReferralReward_USC_OpenReferFriendReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward_Delegate
// (Final, Iterator, Latent, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxReferralReward::USC_OpenReferFriendReward_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward_Delegate");

	UTgGfxReferralReward_USC_OpenReferFriendReward_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferralReward.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxReferralReward::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferralReward.Initialize");

	UTgGfxReferralReward_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferrals.UpdateAchievements
// (Iterator, Latent, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxReferrals::UpdateAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferrals.UpdateAchievements");

	UTgGfxReferrals_UpdateAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferrals.ASC_UpdateAchievements
// (Final, Defined, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxReferrals::STATIC_ASC_UpdateAchievements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferrals.ASC_UpdateAchievements");

	UTgGfxReferrals_ASC_UpdateAchievements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferrals.UpdatePlayerList
// (Defined, Latent, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxReferrals::UpdatePlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferrals.UpdatePlayerList");

	UTgGfxReferrals_UpdatePlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferrals.ASC_UpdatePlayerList
// (Final, Singular, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxReferrals::STATIC_ASC_UpdatePlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferrals.ASC_UpdatePlayerList");

	UTgGfxReferrals_ASC_UpdatePlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferrals.USC_OpenReferFriend
// (Defined, Iterator, PreOperator, Net, NetReliable, Operator, Static, Public)

void UTgGfxReferrals::STATIC_USC_OpenReferFriend()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferrals.USC_OpenReferFriend");

	UTgGfxReferrals_USC_OpenReferFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferrals.USC_OpenReferFriend_Delegate
// (Iterator, Latent, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxReferrals::USC_OpenReferFriend_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferrals.USC_OpenReferFriend_Delegate");

	UTgGfxReferrals_USC_OpenReferFriend_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferrals.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxReferrals::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferrals.Initialize");

	UTgGfxReferrals_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferralSelector.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxReferralSelector::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferralSelector.Initialize");

	UTgGfxReferralSelector_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferralSelector.UpdateFriendList
// (Iterator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxReferralSelector::UpdateFriendList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferralSelector.UpdateFriendList");

	UTgGfxReferralSelector_UpdateFriendList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferralSelector.ASC_UpdateFriendList
// (Final, Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxReferralSelector::STATIC_ASC_UpdateFriendList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferralSelector.ASC_UpdateFriendList");

	UTgGfxReferralSelector_ASC_UpdateFriendList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferralSelector.USC_SelectReferral
// (Defined, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sQQId                          (Parm, NeedCtorLink)

void UTgGfxReferralSelector::STATIC_USC_SelectReferral(const struct FString& sQQId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferralSelector.USC_SelectReferral");

	UTgGfxReferralSelector_USC_SelectReferral_Params params;
	params.sQQId = sQQId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxReferralSelector.USC_SelectReferral_Delegate
// (Defined, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxReferralSelector::USC_SelectReferral_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxReferralSelector.USC_SelectReferral_Delegate");

	UTgGfxReferralSelector_USC_SelectReferral_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSettingsMenu.USC_OpenQueueWarning
// (Final, Iterator, PreOperator, Net, NetReliable, Operator, Static, Public)

void UTgGfxSettingsMenu::STATIC_USC_OpenQueueWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSettingsMenu.USC_OpenQueueWarning");

	UTgGfxSettingsMenu_USC_OpenQueueWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSettingsMenu.USC_OpenQueueWarning_Delegate
// (Final, Defined, Latent, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxSettingsMenu::USC_OpenQueueWarning_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSettingsMenu.USC_OpenQueueWarning_Delegate");

	UTgGfxSettingsMenu_USC_OpenQueueWarning_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSettingsMenu.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxSettingsMenu::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSettingsMenu.Uninitialize");

	UTgGfxSettingsMenu_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSettingsMenu.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          pMoviePlayer                   (Parm)

void UTgGfxSettingsMenu::STATIC_Initialize(class UTgMoviePlayer* pMoviePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSettingsMenu.Initialize");

	UTgGfxSettingsMenu_Initialize_Params params;
	params.pMoviePlayer = pMoviePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSocial.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxSocial::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSocial.Initialize");

	UTgGfxSocial_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSocial.SetSelectedAdminTab
// (Defined, Latent, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            nIndex                         (Parm)

void UTgGfxSocial::SetSelectedAdminTab(int nIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSocial.SetSelectedAdminTab");

	UTgGfxSocial_SetSelectedAdminTab_Params params;
	params.nIndex = nIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSocial.ASC_SetSelectedAdminTab
// (Final, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)
// Parameters:
// int                            nIndex                         (Parm)

void UTgGfxSocial::STATIC_ASC_SetSelectedAdminTab(int nIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSocial.ASC_SetSelectedAdminTab");

	UTgGfxSocial_ASC_SetSelectedAdminTab_Params params;
	params.nIndex = nIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSocial.UpdateSelectedTab
// (Defined, Iterator, Latent, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 tabLabel                       (Parm, NeedCtorLink)

void UTgGfxSocial::UpdateSelectedTab(const struct FString& tabLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSocial.UpdateSelectedTab");

	UTgGfxSocial_UpdateSelectedTab_Params params;
	params.tabLabel = tabLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSocial.ASC_UpdateSelectedTab
// (Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Event, Static, Public)
// Parameters:
// struct FString                 tabLabel                       (Parm, NeedCtorLink)

void UTgGfxSocial::STATIC_ASC_UpdateSelectedTab(const struct FString& tabLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSocial.ASC_UpdateSelectedTab");

	UTgGfxSocial_ASC_UpdateSelectedTab_Params params;
	params.tabLabel = tabLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSocial.UpdateClanQuestData
// (Final, Defined, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxSocial::UpdateClanQuestData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSocial.UpdateClanQuestData");

	UTgGfxSocial_UpdateClanQuestData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSocial.ASC_UpdateClanQuestData
// (Defined, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxSocial::STATIC_ASC_UpdateClanQuestData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSocial.ASC_UpdateClanQuestData");

	UTgGfxSocial_ASC_UpdateClanQuestData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSocial.UpdateSocialTabLabels
// (Final, Defined, Iterator, Latent, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxSocial::UpdateSocialTabLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSocial.UpdateSocialTabLabels");

	UTgGfxSocial_UpdateSocialTabLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSocial.ASC_UpdateSocialTabLabels
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxSocial::STATIC_ASC_UpdateSocialTabLabels()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSocial.ASC_UpdateSocialTabLabels");

	UTgGfxSocial_ASC_UpdateSocialTabLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSocial.USC_TabSelected
// (Final, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 tabSelected                    (Parm, NeedCtorLink)

void UTgGfxSocial::STATIC_USC_TabSelected(const struct FString& tabSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSocial.USC_TabSelected");

	UTgGfxSocial_USC_TabSelected_Params params;
	params.tabSelected = tabSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSpectatorHud.SendGraphData
// (Final, Latent, PreOperator, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UGFxObject*              Obj                            (Parm)

void UTgGfxSpectatorHud::SendGraphData(class UGFxObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSpectatorHud.SendGraphData");

	UTgGfxSpectatorHud_SendGraphData_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// class UGFxObject*              pPlayerList                    (Parm)
// int                            nLength                        (Parm)

void UTgGfxSpectatorHud::STATIC_USC_UpdatePlayerList(class UGFxObject* pPlayerList, int nLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList");

	UTgGfxSpectatorHud_USC_UpdatePlayerList_Params params;
	params.pPlayerList = pPlayerList;
	params.nLength = nLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList_Delegate
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UGFxObject*              pPlayerList                    (Parm)
// int                            nLength                        (Parm)

void UTgGfxSpectatorHud::USC_UpdatePlayerList_Delegate(class UGFxObject* pPlayerList, int nLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList_Delegate");

	UTgGfxSpectatorHud_USC_UpdatePlayerList_Delegate_Params params;
	params.pPlayerList = pPlayerList;
	params.nLength = nLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen
// (Latent, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// bool                           bOpen                          (Parm)

void UTgGfxSpectatorHud::STATIC_USC_SetMenuIsOpen(bool bOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen");

	UTgGfxSpectatorHud_USC_SetMenuIsOpen_Params params;
	params.bOpen = bOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen_Delegate
// (Defined, Iterator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           bOpen                          (Parm)

void UTgGfxSpectatorHud::USC_SetMenuIsOpen_Delegate(bool bOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen_Delegate");

	UTgGfxSpectatorHud_USC_SetMenuIsOpen_Delegate_Params params;
	params.bOpen = bOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSpectatorHud.USC_UpdateStat
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            pawnId                         (Parm)

void UTgGfxSpectatorHud::STATIC_USC_UpdateStat(int pawnId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSpectatorHud.USC_UpdateStat");

	UTgGfxSpectatorHud_USC_UpdateStat_Params params;
	params.pawnId = pawnId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSpectatorHud.USC_UpdateStat_Delegate
// (PreOperator, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            pawnId                         (Parm)

void UTgGfxSpectatorHud::USC_UpdateStat_Delegate(int pawnId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSpectatorHud.USC_UpdateStat_Delegate");

	UTgGfxSpectatorHud_USC_UpdateStat_Delegate_Params params;
	params.pawnId = pawnId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSpectatorHud.OnGameHUDEvent
// (Iterator, Net, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxSpectatorHud::STATIC_OnGameHUDEvent(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSpectatorHud.OnGameHUDEvent");

	UTgGfxSpectatorHud_OnGameHUDEvent_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSpectatorHud.OnSpectatorEvent
// (Defined, Iterator, PreOperator, Net, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxSpectatorHud::STATIC_OnSpectatorEvent(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSpectatorHud.OnSpectatorEvent");

	UTgGfxSpectatorHud_OnSpectatorEvent_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSpectatorHud.UpdateGraph
// (Iterator, Latent, PreOperator, NetReliable, Operator, Static, Public)

void UTgGfxSpectatorHud::STATIC_UpdateGraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSpectatorHud.UpdateGraph");

	UTgGfxSpectatorHud_UpdateGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSpectatorHud.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxSpectatorHud::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSpectatorHud.Uninitialize");

	UTgGfxSpectatorHud_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxSpectatorHud.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          pParentMovie                   (Parm)

void UTgGfxSpectatorHud::STATIC_Initialize(class UTgMoviePlayer* pParentMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxSpectatorHud.Initialize");

	UTgGfxSpectatorHud_Initialize_Params params;
	params.pParentMovie = pParentMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxStoreChestPC.OnAcquisition
// (Iterator, Latent, PreOperator, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGfxStoreChestPC::STATIC_OnAcquisition(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxStoreChestPC.OnAcquisition");

	UTgGfxStoreChestPC_OnAcquisition_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxStoreChestPC.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxStoreChestPC::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxStoreChestPC.ReceiveGFxData");

	UTgGfxStoreChestPC_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxStoreChestPC.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxStoreChestPC::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxStoreChestPC.Initialize");

	UTgGfxStoreChestPC_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxTreasurePicker.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxTreasurePicker::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxTreasurePicker.ReceiveGFxData");

	UTgGfxTreasurePicker_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxTreasurePicker.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxTreasurePicker::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxTreasurePicker.Uninitialize");

	UTgGfxTreasurePicker_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxTreasurePicker.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          pMoviePlayer                   (Parm)

void UTgGfxTreasurePicker::STATIC_Initialize(class UTgMoviePlayer* pMoviePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxTreasurePicker.Initialize");

	UTgGfxTreasurePicker_Initialize_Params params;
	params.pMoviePlayer = pMoviePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxWisdomMain.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxWisdomMain::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxWisdomMain.Initialize");

	UTgGfxWisdomMain_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxWisdomWeb.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxWisdomWeb::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxWisdomWeb.Uninitialize");

	UTgGfxWisdomWeb_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxWisdomWeb.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxWisdomWeb::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxWisdomWeb.Initialize");

	UTgGfxWisdomWeb_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxWisdomWeb.ASC_UpdateStreamList
// (Latent, Singular, Net, NetReliable, Simulated, Exec, Event, Static, Public)

void UTgGfxWisdomWeb::STATIC_ASC_UpdateStreamList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxWisdomWeb.ASC_UpdateStreamList");

	UTgGfxWisdomWeb_ASC_UpdateStreamList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxWisdomWeb.UpdateStreamList
// (PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxWisdomWeb::UpdateStreamList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxWisdomWeb.UpdateStreamList");

	UTgGfxWisdomWeb_UpdateStreamList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxWisdomWeb.USC_StartStreamData
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            streamId                       (Parm)
// bool                           external                       (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          Width                          (Parm)
// float                          Height                         (Parm)
// float                          widthReal                      (Parm)
// float                          heightReal                     (Parm)

void UTgGfxWisdomWeb::STATIC_USC_StartStreamData(int streamId, bool external, float X, float Y, float Width, float Height, float widthReal, float heightReal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxWisdomWeb.USC_StartStreamData");

	UTgGfxWisdomWeb_USC_StartStreamData_Params params;
	params.streamId = streamId;
	params.external = external;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;
	params.widthReal = widthReal;
	params.heightReal = heightReal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxWisdomWeb.USC_StartStreamData_Delegate
// (Final, Iterator, Latent, Singular, Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgGfxWisdomWeb::USC_StartStreamData_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxWisdomWeb.USC_StartStreamData_Delegate");

	UTgGfxWisdomWeb_USC_StartStreamData_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgStreamManager.OpenStream
// (Final, Iterator, Latent, Net, Simulated, Static, Public)
// Parameters:
// int                            surfaceId                      (Parm)
// struct FString                 URL                            (Parm, NeedCtorLink)
// bool                           external                       (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          Width                          (Parm)
// float                          Height                         (Parm)
// float                          widthReal                      (Parm)
// float                          heightReal                     (Parm)
// bool                           joinChat                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgStreamManager::STATIC_OpenStream(int surfaceId, const struct FString& URL, bool external, float X, float Y, float Width, float Height, float widthReal, float heightReal, bool joinChat)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgStreamManager.OpenStream");

	UTgStreamManager_OpenStream_Params params;
	params.surfaceId = surfaceId;
	params.URL = URL;
	params.external = external;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;
	params.widthReal = widthReal;
	params.heightReal = heightReal;
	params.joinChat = joinChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameDataHandler.ChatInput_SetReplyName
// (Iterator, Net, Simulated, Operator, Public)
// Parameters:
// struct FString                 sSenderName                    (Parm, NeedCtorLink)

void UTgGameDataHandler::ChatInput_SetReplyName(const struct FString& sSenderName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDataHandler.ChatInput_SetReplyName");

	UTgGameDataHandler_ChatInput_SetReplyName_Params params;
	params.sSenderName = sSenderName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDataHandler.DispatchEvent_VendorStore_UpdateInventory
// (Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Public)

void UTgGameDataHandler::DispatchEvent_VendorStore_UpdateInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDataHandler.DispatchEvent_VendorStore_UpdateInventory");

	UTgGameDataHandler_DispatchEvent_VendorStore_UpdateInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDataHandler.DispatchEvent_VendorStore_UpdateStats
// (Final, Defined, Iterator, PreOperator, Net, NetReliable, Simulated, Operator, Public)

void UTgGameDataHandler::DispatchEvent_VendorStore_UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDataHandler.DispatchEvent_VendorStore_UpdateStats");

	UTgGameDataHandler_DispatchEvent_VendorStore_UpdateStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameDataHandler.InitializeDataHandler
// (Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Operator, Public)

void UTgGameDataHandler::InitializeDataHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameDataHandler.InitializeDataHandler");

	UTgGameDataHandler_InitializeDataHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.DelegateGFxList
// (Final, Defined, Latent, Singular, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// class UGFxObject*              List                           (Parm)

void UTgGameMoviePlayer::DelegateGFxList(class UGFxObject* List)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.DelegateGFxList");

	UTgGameMoviePlayer_DelegateGFxList_Params params;
	params.List = List;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_rotate_lobby_model
// (Iterator, Latent, PreOperator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// float                          fValue                         (Parm)

void UTgGameMoviePlayer::STATIC_usc_rotate_lobby_model(float fValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_rotate_lobby_model");

	UTgGameMoviePlayer_usc_rotate_lobby_model_Params params;
	params.fValue = fValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_activate_key
// (Final, Defined, Iterator, Singular, NetReliable, Operator, Static, Public)

void UTgGameMoviePlayer::STATIC_usc_activate_key()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_activate_key");

	UTgGameMoviePlayer_usc_activate_key_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.CacheLoggedInGamepad
// (Final, Net, Native, Event, HasOptionalParms)

void UTgGameMoviePlayer::CacheLoggedInGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.CacheLoggedInGamepad");

	UTgGameMoviePlayer_CacheLoggedInGamepad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.SetUISetting
// (Iterator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// struct FString                 Setting                        (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_SetUISetting(const struct FString& Setting, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.SetUISetting");

	UTgGameMoviePlayer_SetUISetting_Params params;
	params.Setting = Setting;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.CheckSpecialInput
// (Final, Latent, Net, Native, Event, Static, Public)
// Parameters:
// class ATgPlayerController*     TgPC                           (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)

void UTgGameMoviePlayer::STATIC_CheckSpecialInput(class ATgPlayerController* TgPC, const struct FName& ButtonName, TEnumAsByte<EInputEvent> Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.CheckSpecialInput");

	UTgGameMoviePlayer_CheckSpecialInput_Params params;
	params.TgPC = TgPC;
	params.ButtonName = ButtonName;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.FilterButtonInput
// (Final, Defined, Iterator, Singular, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.FilterButtonInput");

	UTgGameMoviePlayer_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.WidgetUnloaded
// (Iterator, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.WidgetUnloaded");

	UTgGameMoviePlayer_WidgetUnloaded_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.WidgetInitialized
// (Final, Defined, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Event, HasOptionalParms)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.WidgetInitialized");

	UTgGameMoviePlayer_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.GetBrowserType
// (Iterator, Latent, PreOperator, Singular, Simulated, Native, Event, Static, Public)
// Parameters:
// int                            nURLType                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::STATIC_GetBrowserType(int nURLType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.GetBrowserType");

	UTgGameMoviePlayer_GetBrowserType_Params params;
	params.nURLType = nURLType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.usc_forceFlushActionLog
// (Final, Latent, PreOperator, Singular, NetReliable, Operator, Static, Public)

void UTgGameMoviePlayer::STATIC_usc_forceFlushActionLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_forceFlushActionLog");

	UTgGameMoviePlayer_usc_forceFlushActionLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.ToggleCombatLog
// (Final, Iterator, Singular, Operator, Static, Public)

void UTgGameMoviePlayer::STATIC_ToggleCombatLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.ToggleCombatLog");

	UTgGameMoviePlayer_ToggleCombatLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_get_ui_display_mode
// (Final, Iterator, Latent, PreOperator, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UTgGameMoviePlayer::STATIC_usc_get_ui_display_mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_get_ui_display_mode");

	UTgGameMoviePlayer_usc_get_ui_display_mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.NativeTick
// (Defined, PreOperator, Singular, Net, Simulated, Exec, Native, Event, Operator, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UTgGameMoviePlayer::NativeTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.NativeTick");

	UTgGameMoviePlayer_NativeTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.UpdateTutorialImage
// (Final, Defined, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// bool                           show                           (Parm)
// int                            HeaderMsgId                    (Parm)
// int                            ImageId                        (Parm)
// int                            msgId                          (Parm)

void UTgGameMoviePlayer::STATIC_UpdateTutorialImage(bool show, int HeaderMsgId, int ImageId, int msgId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.UpdateTutorialImage");

	UTgGameMoviePlayer_UpdateTutorialImage_Params params;
	params.show = show;
	params.HeaderMsgId = HeaderMsgId;
	params.ImageId = ImageId;
	params.msgId = msgId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.HandleEscapeKey
// (Final, Defined, PreOperator, Singular, Net, Simulated, Exec, Native, Operator, Public)

void UTgGameMoviePlayer::HandleEscapeKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.HandleEscapeKey");

	UTgGameMoviePlayer_HandleEscapeKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.PostInit
// (Final, Defined, Iterator, Latent, Net, NetReliable, Exec, Event, HasOptionalParms)

void UTgGameMoviePlayer::PostInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.PostInit");

	UTgGameMoviePlayer_PostInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.UpdateQuestUI
// (Defined, Iterator, Latent, PreOperator, NetReliable, Operator, Static, Public)
// Parameters:
// int                            Id                             (OptionalParm, Parm)
// int                            Count                          (OptionalParm, Parm)
// int                            Goal                           (OptionalParm, Parm)
// int                            msgId                          (OptionalParm, Parm)

void UTgGameMoviePlayer::STATIC_UpdateQuestUI(int Id, int Count, int Goal, int msgId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.UpdateQuestUI");

	UTgGameMoviePlayer_UpdateQuestUI_Params params;
	params.Id = Id;
	params.Count = Count;
	params.Goal = Goal;
	params.msgId = msgId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_allowSpaceBar
// (Latent, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// bool                           bAllow                         (Parm)

void UTgGameMoviePlayer::STATIC_usc_allowSpaceBar(bool bAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_allowSpaceBar");

	UTgGameMoviePlayer_usc_allowSpaceBar_Params params;
	params.bAllow = bAllow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_getPassiveMeterPath
// (Iterator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            BotID                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTgGameMoviePlayer::STATIC_usc_getPassiveMeterPath(int BotID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_getPassiveMeterPath");

	UTgGameMoviePlayer_usc_getPassiveMeterPath_Params params;
	params.BotID = BotID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.RunIntroMovie
// (Defined, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// bool                           bRun                           (Parm)

void UTgGameMoviePlayer::STATIC_RunIntroMovie(bool bRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.RunIntroMovie");

	UTgGameMoviePlayer_RunIntroMovie_Params params;
	params.bRun = bRun;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.InvokeRenderTargetReady
// (Final, Defined, Latent, Singular, Net, Simulated, Native, Event, Static, Public)

void UTgGameMoviePlayer::STATIC_InvokeRenderTargetReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.InvokeRenderTargetReady");

	UTgGameMoviePlayer_InvokeRenderTargetReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.SetRenderTargetCallback
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// class UGFxObject*              targetObj                      (Parm)
// bool                           addObj                         (OptionalParm, Parm)

void UTgGameMoviePlayer::STATIC_SetRenderTargetCallback(class UGFxObject* targetObj, bool addObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.SetRenderTargetCallback");

	UTgGameMoviePlayer_SetRenderTargetCallback_Params params;
	params.targetObj = targetObj;
	params.addObj = addObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_autoConfigureSettings
// (Iterator, Latent, Singular, NetReliable, Operator, Static, Public)

void UTgGameMoviePlayer::STATIC_usc_autoConfigureSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_autoConfigureSettings");

	UTgGameMoviePlayer_usc_autoConfigureSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_goto_item
// (Final, Defined, Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Static, Public)
// Parameters:
// int                            nItemId                        (Parm)
// bool                           bUseAltRedirect                (OptionalParm, Parm)

void UTgGameMoviePlayer::STATIC_usc_goto_item(int nItemId, bool bUseAltRedirect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_goto_item");

	UTgGameMoviePlayer_usc_goto_item_Params params;
	params.nItemId = nItemId;
	params.bUseAltRedirect = bUseAltRedirect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_send_chat
// (Final, Defined, Iterator, NetReliable, Simulated, Exec, Native, Static, Public)
// Parameters:
// int                            nChannel                       (Parm)
// struct FString                 msg                            (Parm, NeedCtorLink)
// struct FString                 Recipient                      (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::STATIC_usc_send_chat(int nChannel, const struct FString& msg, const struct FString& Recipient)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_send_chat");

	UTgGameMoviePlayer_usc_send_chat_Params params;
	params.nChannel = nChannel;
	params.msg = msg;
	params.Recipient = Recipient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.usc_toggle_player_mute
// (Final, Defined, Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native, Static, Public)
// Parameters:
// struct FString                 sPlayerName                    (Parm, NeedCtorLink)
// struct FString                 sUnused                        (OptionalParm, Parm, NeedCtorLink)
// struct FString                 nPlayerId                      (OptionalParm, Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_usc_toggle_player_mute(const struct FString& sPlayerName, const struct FString& sUnused, const struct FString& nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_toggle_player_mute");

	UTgGameMoviePlayer_usc_toggle_player_mute_Params params;
	params.sPlayerName = sPlayerName;
	params.sUnused = sUnused;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_lobbyFeaturesShouldShow
// (Final, Defined, Iterator, Latent, Net, NetReliable, Operator, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::STATIC_usc_lobbyFeaturesShouldShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_lobbyFeaturesShouldShow");

	UTgGameMoviePlayer_usc_lobbyFeaturesShouldShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.usc_isPlayingTutorial
// (Iterator, Latent, Net, NetReliable, Operator, Static, Public)
// Parameters:
// bool                           Toggle                         (Parm)

void UTgGameMoviePlayer::STATIC_usc_isPlayingTutorial(bool Toggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_isPlayingTutorial");

	UTgGameMoviePlayer_usc_isPlayingTutorial_Params params;
	params.Toggle = Toggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_stopSoundCue
// (PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 soundTheme                     (Parm, NeedCtorLink)
// struct FString                 SoundEventName                 (Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_usc_stopSoundCue(const struct FString& soundTheme, const struct FString& SoundEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_stopSoundCue");

	UTgGameMoviePlayer_usc_stopSoundCue_Params params;
	params.soundTheme = soundTheme;
	params.SoundEventName = SoundEventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_join_channel
// (Final, Iterator, Latent, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            Id                             (Parm)

void UTgGameMoviePlayer::STATIC_usc_join_channel(int Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_join_channel");

	UTgGameMoviePlayer_usc_join_channel_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_GetWinningTeamName
// (Final, Defined, Iterator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTgGameMoviePlayer::STATIC_usc_GetWinningTeamName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_GetWinningTeamName");

	UTgGameMoviePlayer_usc_GetWinningTeamName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.usc_get_device_tooltip
// (Iterator, Latent, PreOperator, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            nItemId                        (Parm)
// int                            nRank                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTgGameMoviePlayer::STATIC_usc_get_device_tooltip(int nItemId, int nRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_get_device_tooltip");

	UTgGameMoviePlayer_usc_get_device_tooltip_Params params;
	params.nItemId = nItemId;
	params.nRank = nRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.usc_force_purchase_current_item
// (Latent, PreOperator, Singular, NetReliable, Operator, Static, Public)

void UTgGameMoviePlayer::STATIC_usc_force_purchase_current_item()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_force_purchase_current_item");

	UTgGameMoviePlayer_usc_force_purchase_current_item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_forward_feature2
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            pItemType                      (Parm)
// struct FString                 pItemData                      (Parm, NeedCtorLink)
// struct FString                 pItemData2                     (Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_usc_forward_feature2(int pItemType, const struct FString& pItemData, const struct FString& pItemData2)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_forward_feature2");

	UTgGameMoviePlayer_usc_forward_feature2_Params params;
	params.pItemType = pItemType;
	params.pItemData = pItemData;
	params.pItemData2 = pItemData2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_forward_feature
// (Defined, Latent, PreOperator, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            pItemType                      (Parm)
// struct FString                 pItemData                      (Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_usc_forward_feature(int pItemType, const struct FString& pItemData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_forward_feature");

	UTgGameMoviePlayer_usc_forward_feature_Params params;
	params.pItemType = pItemType;
	params.pItemData = pItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_class_loading_resume
// (Final, Defined, PreOperator, Singular, NetReliable, Operator, Static, Public)

void UTgGameMoviePlayer::STATIC_usc_class_loading_resume()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_class_loading_resume");

	UTgGameMoviePlayer_usc_class_loading_resume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_class_loading_suspend
// (Iterator, PreOperator, Singular, NetReliable, Operator, Static, Public)

void UTgGameMoviePlayer::STATIC_usc_class_loading_suspend()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_class_loading_suspend");

	UTgGameMoviePlayer_usc_class_loading_suspend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_clearReferral
// (Final, Iterator, PreOperator, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sExtId                         (Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_usc_clearReferral(const struct FString& sExtId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_clearReferral");

	UTgGameMoviePlayer_usc_clearReferral_Params params;
	params.sExtId = sExtId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_ListenNextVivoxBtn
// (Defined, Iterator, Latent, Net, NetReliable, Operator, Static, Public)

void UTgGameMoviePlayer::STATIC_usc_ListenNextVivoxBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_ListenNextVivoxBtn");

	UTgGameMoviePlayer_usc_ListenNextVivoxBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_GetLocalPlayerId
// (Defined, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UTgGameMoviePlayer::STATIC_usc_GetLocalPlayerId()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_GetLocalPlayerId");

	UTgGameMoviePlayer_usc_GetLocalPlayerId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.usc_request_account_info
// (Defined, Latent, PreOperator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            nType                          (Parm)

void UTgGameMoviePlayer::STATIC_usc_request_account_info(int nType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_request_account_info");

	UTgGameMoviePlayer_usc_request_account_info_Params params;
	params.nType = nType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.OnHUDStateChange
// (Defined, Latent, Net, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGameMoviePlayer::STATIC_OnHUDStateChange(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.OnHUDStateChange");

	UTgGameMoviePlayer_OnHUDStateChange_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.OnGameUIEvent
// (Latent, Net, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvent                         (Parm)

void UTgGameMoviePlayer::STATIC_OnGameUIEvent(class UTgEventDataItem* pEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.OnGameUIEvent");

	UTgGameMoviePlayer_OnGameUIEvent_Params params;
	params.pEvent = pEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.ProcessUIEvents
// (Defined, Latent, PreOperator, Singular, Exec, Static, Public)

void UTgGameMoviePlayer::STATIC_ProcessUIEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.ProcessUIEvents");

	UTgGameMoviePlayer_ProcessUIEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.SetRenderTargetEnabled
// (Net, NetReliable, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// bool                           bEnabled                       (Parm)
// int                            surfaceId                      (Parm)
// int                            X                              (Parm)
// int                            Y                              (Parm)
// float                          widthReal                      (Parm)
// float                          heightReal                     (Parm)
// float                          Width                          (Parm)
// float                          Height                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::STATIC_SetRenderTargetEnabled(bool bEnabled, int surfaceId, int X, int Y, float widthReal, float heightReal, float Width, float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.SetRenderTargetEnabled");

	UTgGameMoviePlayer_SetRenderTargetEnabled_Params params;
	params.bEnabled = bEnabled;
	params.surfaceId = surfaceId;
	params.X = X;
	params.Y = Y;
	params.widthReal = widthReal;
	params.heightReal = heightReal;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.GetClanData
// (Final, Iterator, Singular, NetReliable, Exec, Native, Operator, Public)
// Parameters:
// class UTgDataGroup_Clan*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UTgDataGroup_Clan* UTgGameMoviePlayer::GetClanData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.GetClanData");

	UTgGameMoviePlayer_GetClanData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.SetLoginReady
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Static, Public)
// Parameters:
// bool                           fromIntro                      (OptionalParm, Parm)

void UTgGameMoviePlayer::STATIC_SetLoginReady(bool fromIntro)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.SetLoginReady");

	UTgGameMoviePlayer_SetLoginReady_Params params;
	params.fromIntro = fromIntro;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.ShowLoginUI
// (Latent, PreOperator, Singular, Net, Simulated, Native, Event, Operator, Static, HasOptionalParms)

void UTgGameMoviePlayer::STATIC_ShowLoginUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.ShowLoginUI");

	UTgGameMoviePlayer_ShowLoginUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.ShowNormalUI
// (Final, Defined, Iterator, Latent, Native, Static, Public)

void UTgGameMoviePlayer::STATIC_ShowNormalUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.ShowNormalUI");

	UTgGameMoviePlayer_ShowNormalUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.SetHUDVisiblity
// (Defined, Iterator, Singular, NetReliable, Simulated, Exec, Static, Public)

void UTgGameMoviePlayer::STATIC_SetHUDVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.SetHUDVisiblity");

	UTgGameMoviePlayer_SetHUDVisiblity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.USC_ShowLeaderboard
// (Final, Singular, NetReliable, Simulated, Exec, Native, Static, Public)
// Parameters:
// struct FString                 sName                          (OptionalParm, Parm, NeedCtorLink)
// int                            nValue                         (OptionalParm, Parm)
// int                            nOption                        (OptionalParm, Parm)

void UTgGameMoviePlayer::STATIC_USC_ShowLeaderboard(const struct FString& sName, int nValue, int nOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.USC_ShowLeaderboard");

	UTgGameMoviePlayer_USC_ShowLeaderboard_Params params;
	params.sName = sName;
	params.nValue = nValue;
	params.nOption = nOption;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Unloaded
// (Final, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Static, Public)
// Parameters:
// struct FString                 sSceneName                     (Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_usc_Scene_Manager_Scene_Unloaded(const struct FString& sSceneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Unloaded");

	UTgGameMoviePlayer_usc_Scene_Manager_Scene_Unloaded_Params params;
	params.sSceneName = sSceneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Loaded
// (Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Static, Public)
// Parameters:
// struct FString                 sSceneName                     (Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_usc_Scene_Manager_Scene_Loaded(const struct FString& sSceneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Loaded");

	UTgGameMoviePlayer_usc_Scene_Manager_Scene_Loaded_Params params;
	params.sSceneName = sSceneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_getItemData
// (Final, Iterator, PreOperator, Singular, Net, NetReliable, Exec, Native, Static, Public)
// Parameters:
// int                            ItemId                         (Parm)
// int                            quantityCount                  (OptionalParm, Parm)
// int                            vendorId                       (OptionalParm, Parm)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UTgGameMoviePlayer::STATIC_usc_getItemData(int ItemId, int quantityCount, int vendorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_getItemData");

	UTgGameMoviePlayer_usc_getItemData_Params params;
	params.ItemId = ItemId;
	params.quantityCount = quantityCount;
	params.vendorId = vendorId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.usc_resize_browser
// (Final, Defined, Iterator, Latent, Singular, Net, Simulated, Exec, Native, Static, Public)
// Parameters:
// int                            surfaceId                      (Parm)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          Width                          (Parm)
// float                          Height                         (Parm)
// float                          widthReal                      (Parm)
// float                          heightReal                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::STATIC_usc_resize_browser(int surfaceId, float X, float Y, float Width, float Height, float widthReal, float heightReal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_resize_browser");

	UTgGameMoviePlayer_usc_resize_browser_Params params;
	params.surfaceId = surfaceId;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;
	params.widthReal = widthReal;
	params.heightReal = heightReal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.usc_enable_browser_input
// (Final, Defined, PreOperator, Net, NetReliable, Exec, Native, Static, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void UTgGameMoviePlayer::STATIC_usc_enable_browser_input(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_enable_browser_input");

	UTgGameMoviePlayer_usc_enable_browser_input_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.UnloadHudSection
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Exec, Operator, HasOptionalParms)
// Parameters:
// struct FString                 Section                        (Parm, NeedCtorLink)

void UTgGameMoviePlayer::UnloadHudSection(const struct FString& Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.UnloadHudSection");

	UTgGameMoviePlayer_UnloadHudSection_Params params;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_rejectNotification
// (Final, Defined, Latent, PreOperator, Net, Simulated, Exec, Native, Static, Public)
// Parameters:
// int                            nNotificationType              (Parm)
// int                            nId                            (Parm)

void UTgGameMoviePlayer::STATIC_usc_rejectNotification(int nNotificationType, int nId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_rejectNotification");

	UTgGameMoviePlayer_usc_rejectNotification_Params params;
	params.nNotificationType = nNotificationType;
	params.nId = nId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_acceptNotification
// (Singular, NetReliable, Exec, Native, Static, Public)
// Parameters:
// int                            nNotificationType              (Parm)
// int                            nId                            (Parm)

void UTgGameMoviePlayer::STATIC_usc_acceptNotification(int nNotificationType, int nId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_acceptNotification");

	UTgGameMoviePlayer_usc_acceptNotification_Params params;
	params.nNotificationType = nNotificationType;
	params.nId = nId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_test_voice_pack
// (Iterator, Latent, Singular, NetReliable, Simulated, Exec, Native, Static, Public)
// Parameters:
// int                            nVoicePackId                   (Parm)
// int                            nSkinId                        (Parm)

void UTgGameMoviePlayer::STATIC_usc_test_voice_pack(int nVoicePackId, int nSkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_test_voice_pack");

	UTgGameMoviePlayer_usc_test_voice_pack_Params params;
	params.nVoicePackId = nVoicePackId;
	params.nSkinId = nSkinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_show_skin
// (Iterator, Latent, PreOperator, NetReliable, Simulated, Exec, Native, Static, Public)
// Parameters:
// int                            nSkinId                        (Parm)

void UTgGameMoviePlayer::STATIC_usc_show_skin(int nSkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_show_skin");

	UTgGameMoviePlayer_usc_show_skin_Params params;
	params.nSkinId = nSkinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_request_treasure_roll
// (Defined, Singular, Net, Simulated, Exec, Native, Static, Public)
// Parameters:
// int                            nItemId                        (Parm)
// int                            CurrencyType                   (OptionalParm, Parm)

void UTgGameMoviePlayer::STATIC_usc_request_treasure_roll(int nItemId, int CurrencyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_request_treasure_roll");

	UTgGameMoviePlayer_usc_request_treasure_roll_Params params;
	params.nItemId = nItemId;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.is_item_owned
// (Iterator, PreOperator, Net, NetReliable, Simulated, Exec, Native, Operator, Public)
// Parameters:
// int                            ItemId                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::is_item_owned(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.is_item_owned");

	UTgGameMoviePlayer_is_item_owned_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.usc_is_item_owned
// (Final, Latent, Simulated, Exec, Native, Static, Public)
// Parameters:
// struct FString                 ItemId                         (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::STATIC_usc_is_item_owned(const struct FString& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_is_item_owned");

	UTgGameMoviePlayer_usc_is_item_owned_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.usc_unregister_mouse_region
// (Final, Defined, Latent, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Static, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_usc_unregister_mouse_region(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_unregister_mouse_region");

	UTgGameMoviePlayer_usc_unregister_mouse_region_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_register_mouse_region
// (Final, Latent, PreOperator, Net, Simulated, Exec, Native, Static, Public)
// Parameters:
// struct FString                 Key                            (Parm, NeedCtorLink)
// int                            X                              (Parm)
// int                            Y                              (Parm)
// int                            Width                          (Parm)
// int                            Height                         (Parm)

void UTgGameMoviePlayer::STATIC_usc_register_mouse_region(const struct FString& Key, int X, int Y, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_register_mouse_region");

	UTgGameMoviePlayer_usc_register_mouse_region_Params params;
	params.Key = Key;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_is_in_game
// (Latent, Simulated, Exec, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::STATIC_usc_is_in_game()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_is_in_game");

	UTgGameMoviePlayer_usc_is_in_game_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.EndLobbyPlayback
// (Final, Defined, NetReliable, Simulated, Exec, Operator, Public)

void UTgGameMoviePlayer::EndLobbyPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.EndLobbyPlayback");

	UTgGameMoviePlayer_EndLobbyPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.CancelPlayback
// (Final, Defined, Iterator, PreOperator, Simulated, Operator, Public)

void UTgGameMoviePlayer::CancelPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.CancelPlayback");

	UTgGameMoviePlayer_CancelPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.OnDemoReady
// (Defined, PreOperator, Singular, NetReliable, Static, Public)

void UTgGameMoviePlayer::STATIC_OnDemoReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.OnDemoReady");

	UTgGameMoviePlayer_OnDemoReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_match_can_purchase_random_class
// (Final, Iterator, Singular, Simulated, Exec, Native, Static, Public)
// Parameters:
// int                            nQueueId                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::STATIC_usc_match_can_purchase_random_class(int nQueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_match_can_purchase_random_class");

	UTgGameMoviePlayer_usc_match_can_purchase_random_class_Params params;
	params.nQueueId = nQueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.usc_viewStatsOnline
// (Iterator, Latent, Net, NetReliable, Simulated, Exec, Native, Static, Public)
// Parameters:
// struct FString                 sInstanceId                    (Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_usc_viewStatsOnline(const struct FString& sInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_viewStatsOnline");

	UTgGameMoviePlayer_usc_viewStatsOnline_Params params;
	params.sInstanceId = sInstanceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_close_eom_lobby
// (Final, Defined, Net, NetReliable, Exec, Native, Static, Public)
// Parameters:
// int                            nNavigationTarget              (OptionalParm, Parm)

void UTgGameMoviePlayer::STATIC_usc_close_eom_lobby(int nNavigationTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_close_eom_lobby");

	UTgGameMoviePlayer_usc_close_eom_lobby_Params params;
	params.nNavigationTarget = nNavigationTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_can_play_again
// (Final, PreOperator, Singular, NetReliable, Exec, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::STATIC_usc_can_play_again()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_can_play_again");

	UTgGameMoviePlayer_usc_can_play_again_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.usc_match_choose_skin
// (Final, Latent, Singular, Simulated, Exec, Native, Static, Public)
// Parameters:
// int                            nSkinId                        (Parm)

void UTgGameMoviePlayer::STATIC_usc_match_choose_skin(int nSkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_match_choose_skin");

	UTgGameMoviePlayer_usc_match_choose_skin_Params params;
	params.nSkinId = nSkinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_match_choose_class
// (Latent, Singular, Simulated, Exec, Native, Static, Public)
// Parameters:
// int                            nClassId                       (Parm)

void UTgGameMoviePlayer::STATIC_usc_match_choose_class(int nClassId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_match_choose_class");

	UTgGameMoviePlayer_usc_match_choose_class_Params params;
	params.nClassId = nClassId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.USC_SelectedPopup
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Exec, Native, Static, Public)
// Parameters:
// int                            nActionId                      (Parm)
// struct FString                 sInputValue                    (Parm, NeedCtorLink)
// struct FString                 sSecondaryInputValue           (Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_USC_SelectedPopup(int nActionId, const struct FString& sInputValue, const struct FString& sSecondaryInputValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.USC_SelectedPopup");

	UTgGameMoviePlayer_USC_SelectedPopup_Params params;
	params.nActionId = nActionId;
	params.sInputValue = sInputValue;
	params.sSecondaryInputValue = sSecondaryInputValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.FakeItemToast
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Native, Operator, Public)
// Parameters:
// int                            nItemId                        (Parm)

void UTgGameMoviePlayer::FakeItemToast(int nItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.FakeItemToast");

	UTgGameMoviePlayer_FakeItemToast_Params params;
	params.nItemId = nItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.CloseChatTab
// (Iterator, Latent, Singular, Net, Simulated, Operator, Public)
// Parameters:
// int                            nChannel                       (Parm)
// struct FString                 sSender                        (OptionalParm, Parm, NeedCtorLink)

void UTgGameMoviePlayer::CloseChatTab(int nChannel, const struct FString& sSender)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.CloseChatTab");

	UTgGameMoviePlayer_CloseChatTab_Params params;
	params.nChannel = nChannel;
	params.sSender = sSender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.OpenChatTab
// (Final, Iterator, Net, Simulated, Static, Public)
// Parameters:
// int                            nChannel                       (Parm)
// bool                           bForce                         (OptionalParm, Parm)

void UTgGameMoviePlayer::STATIC_OpenChatTab(int nChannel, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.OpenChatTab");

	UTgGameMoviePlayer_OpenChatTab_Params params;
	params.nChannel = nChannel;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.ShowGodPackPurchase
// (Latent, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGameMoviePlayer::STATIC_ShowGodPackPurchase()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.ShowGodPackPurchase");

	UTgGameMoviePlayer_ShowGodPackPurchase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.usc_CheckForLoginErrorMsg
// (PreOperator, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UTgGameMoviePlayer::STATIC_usc_CheckForLoginErrorMsg()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_CheckForLoginErrorMsg");

	UTgGameMoviePlayer_usc_CheckForLoginErrorMsg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.LeavePartyNotification
// (Defined, Iterator, Latent, PreOperator, Singular, Net, Simulated, Native, Event, Static, Public)

void UTgGameMoviePlayer::STATIC_LeavePartyNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.LeavePartyNotification");

	UTgGameMoviePlayer_LeavePartyNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.DisbandPartyNotification
// (Defined, Iterator, Latent, Singular, Net, Native, Event, Static, Public)

void UTgGameMoviePlayer::STATIC_DisbandPartyNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.DisbandPartyNotification");

	UTgGameMoviePlayer_DisbandPartyNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.GotoSendGift
// (Iterator, Latent, Singular, Net, Simulated, Exec, Native, Operator, Public)
// Parameters:
// struct FPointer                pPID                           (Parm)

void UTgGameMoviePlayer::GotoSendGift(const struct FPointer& pPID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.GotoSendGift");

	UTgGameMoviePlayer_GotoSendGift_Params params;
	params.pPID = pPID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.GotoItem
// (Final, Defined, Latent, Singular, Net, Simulated, Exec, Native, Operator, Public)
// Parameters:
// int                            nItemId                        (Parm)
// int                            nReturnToTarget                (OptionalParm, Parm)
// int                            nReturnToEvent                 (OptionalParm, Parm)
// bool                           bUseAltRedirect                (OptionalParm, Parm)

void UTgGameMoviePlayer::GotoItem(int nItemId, int nReturnToTarget, int nReturnToEvent, bool bUseAltRedirect)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.GotoItem");

	UTgGameMoviePlayer_GotoItem_Params params;
	params.nItemId = nItemId;
	params.nReturnToTarget = nReturnToTarget;
	params.nReturnToEvent = nReturnToEvent;
	params.bUseAltRedirect = bUseAltRedirect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.usc_getBoostedTime
// (Final, Defined, Iterator, Latent, PreOperator, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UTgGameMoviePlayer::STATIC_usc_getBoostedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.usc_getBoostedTime");

	UTgGameMoviePlayer_usc_getBoostedTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.UnregisterWebPageRegion
// (Defined, Iterator, PreOperator, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_UnregisterWebPageRegion(const struct FString& sName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.UnregisterWebPageRegion");

	UTgGameMoviePlayer_UnregisterWebPageRegion_Params params;
	params.sName = sName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.RegisterWebPageRegion
// (Latent, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)
// bool                           bWidescreen                    (Parm)
// int                            nStreamId                      (Parm)
// struct FString                 sUrl                           (Parm, NeedCtorLink)
// float                          X                              (Parm)
// float                          Y                              (Parm)
// float                          Width                          (Parm)
// float                          Height                         (Parm)
// float                          realWidth                      (Parm)
// float                          realHeight                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UTgGameMoviePlayer::STATIC_RegisterWebPageRegion(const struct FString& sName, bool bWidescreen, int nStreamId, const struct FString& sUrl, float X, float Y, float Width, float Height, float realWidth, float realHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.RegisterWebPageRegion");

	UTgGameMoviePlayer_RegisterWebPageRegion_Params params;
	params.sName = sName;
	params.bWidescreen = bWidescreen;
	params.nStreamId = nStreamId;
	params.sUrl = sUrl;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;
	params.realWidth = realWidth;
	params.realHeight = realHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGameMoviePlayer.USC_OpenInternalBrowser
// (Iterator, PreOperator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_USC_OpenInternalBrowser(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.USC_OpenInternalBrowser");

	UTgGameMoviePlayer_USC_OpenInternalBrowser_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.USC_OpenExternalBrowser
// (Final, Defined, PreOperator, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 externalURL                    (Parm, NeedCtorLink)

void UTgGameMoviePlayer::STATIC_USC_OpenExternalBrowser(const struct FString& externalURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.USC_OpenExternalBrowser");

	UTgGameMoviePlayer_USC_OpenExternalBrowser_Params params;
	params.externalURL = externalURL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGameMoviePlayer.LoadBrowserScene
// (Final, Defined, Iterator, NetReliable, Simulated, Native, Event, Static, Public)

void UTgGameMoviePlayer::STATIC_LoadBrowserScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGameMoviePlayer.LoadBrowserScene");

	UTgGameMoviePlayer_LoadBrowserScene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxChatInput.OnGameUIEvent
// (Latent, Net, NetReliable, Static, Public)
// Parameters:
// class UTgEventDataItem*        pEvt                           (Parm)

void UTgGfxChatInput::STATIC_OnGameUIEvent(class UTgEventDataItem* pEvt)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxChatInput.OnGameUIEvent");

	UTgGfxChatInput_OnGameUIEvent_Params params;
	params.pEvt = pEvt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxChatInput.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              pObj                           (Parm)

void UTgGfxChatInput::STATIC_ReceiveGFxData(class UGFxObject* pObj)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxChatInput.ReceiveGFxData");

	UTgGfxChatInput_ReceiveGFxData_Params params;
	params.pObj = pObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxChatInput.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGfxChatInput::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxChatInput.Uninitialize");

	UTgGfxChatInput_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxChatInput.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          pMP                            (Parm)

void UTgGfxChatInput::STATIC_Initialize(class UTgMoviePlayer* pMP)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxChatInput.Initialize");

	UTgGfxChatInput_Initialize_Params params;
	params.pMP = pMP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleHUD
// (Final, Iterator, Singular, Exec, Const)

void ATgSpectatorHUD::ToggleHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ToggleHUD");

	ATgSpectatorHUD_ToggleHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.Tick
// (Final, Iterator, Latent, PreOperator, Singular, Simulated)
// Parameters:
// float                          DeltaTime                      (Parm)

void ATgSpectatorHUD::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.Tick");

	ATgSpectatorHUD_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.GetGameState
// (Defined, PreOperator, Singular, Net, Exec, Operator, HasOptionalParms)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ATgSpectatorHUD::GetGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.GetGameState");

	ATgSpectatorHUD_GetGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgSpectatorHUD.SetVisibilityMode
// (Final, Iterator, Net, NetReliable, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// TEnumAsByte<ETgClientVisibilityMode> Mode                           (Parm)

void ATgSpectatorHUD::STATIC_SetVisibilityMode(TEnumAsByte<ETgClientVisibilityMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.SetVisibilityMode");

	ATgSpectatorHUD_SetVisibilityMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleVisibilityMode
// (Final, Defined, Iterator, Latent, Singular, Operator, Static, Public)

void ATgSpectatorHUD::STATIC_ToggleVisibilityMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ToggleVisibilityMode");

	ATgSpectatorHUD_ToggleVisibilityMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ShowPreviousInfoPanel
// (Defined, Latent, Net, Simulated, Exec, Native, Operator, Static, HasOptionalParms, Const)

void ATgSpectatorHUD::STATIC_ShowPreviousInfoPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ShowPreviousInfoPanel");

	ATgSpectatorHUD_ShowPreviousInfoPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ShowNextInfoPanel
// (Defined, Iterator, Net, Simulated, Exec, Native, Operator, Static, HasOptionalParms, Const)

void ATgSpectatorHUD::STATIC_ShowNextInfoPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ShowNextInfoPanel");

	ATgSpectatorHUD_ShowNextInfoPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleStatPanel
// (Final, Latent, PreOperator, NetReliable, Event, Public)

void ATgSpectatorHUD::ToggleStatPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ToggleStatPanel");

	ATgSpectatorHUD_ToggleStatPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ShowPreviousStatPanel
// (Final, Defined, Latent, Net, Simulated, Exec, Native, Operator, Static, HasOptionalParms, Const)

void ATgSpectatorHUD::STATIC_ShowPreviousStatPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ShowPreviousStatPanel");

	ATgSpectatorHUD_ShowPreviousStatPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ShowNextStatPanel
// (Final, Defined, Iterator, Net, Simulated, Exec, Native, Operator, Static, HasOptionalParms, Const)

void ATgSpectatorHUD::STATIC_ShowNextStatPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ShowNextStatPanel");

	ATgSpectatorHUD_ShowNextStatPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.UpdatePlayerStatUI
// (Defined, PreOperator, Net, NetReliable, Simulated, Exec, Event, Public)
// Parameters:
// class ATgPawn*                 changedPawn                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgSpectatorHUD::UpdatePlayerStatUI(class ATgPawn* changedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.UpdatePlayerStatUI");

	ATgSpectatorHUD_UpdatePlayerStatUI_Params params;
	params.changedPawn = changedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgSpectatorHUD.SetStatIndex
// (Defined, Net, NetReliable, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// int                            StatIndex                      (Parm)

void ATgSpectatorHUD::STATIC_SetStatIndex(int StatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.SetStatIndex");

	ATgSpectatorHUD_SetStatIndex_Params params;
	params.StatIndex = StatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.SpectatorShowAll
// (Final, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Public)

void ATgSpectatorHUD::STATIC_SpectatorShowAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.SpectatorShowAll");

	ATgSpectatorHUD_SpectatorShowAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.SpectatorHideBottomHalf
// (Final, Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Public)

void ATgSpectatorHUD::STATIC_SpectatorHideBottomHalf()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.SpectatorHideBottomHalf");

	ATgSpectatorHUD_SpectatorHideBottomHalf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.SpectatorHideAll
// (Defined, Iterator, Latent, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Static, Public)

void ATgSpectatorHUD::STATIC_SpectatorHideAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.SpectatorHideAll");

	ATgSpectatorHUD_SpectatorHideAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleSpectatorGameStats
// (Latent, Singular, Operator, Static, Public)

void ATgSpectatorHUD::STATIC_ToggleSpectatorGameStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ToggleSpectatorGameStats");

	ATgSpectatorHUD_ToggleSpectatorGameStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleSpectatorMinimap
// (Final, Latent, Singular, Operator, Static, Public)

void ATgSpectatorHUD::STATIC_ToggleSpectatorMinimap()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ToggleSpectatorMinimap");

	ATgSpectatorHUD_ToggleSpectatorMinimap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerPanels
// (Iterator, Latent, Singular, Operator, Static, Public)

void ATgSpectatorHUD::STATIC_ToggleSpectatorPlayerPanels()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerPanels");

	ATgSpectatorHUD_ToggleSpectatorPlayerPanels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleSpectatorObjectives
// (Defined, Latent, Singular, Operator, Static, Public)

void ATgSpectatorHUD::STATIC_ToggleSpectatorObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ToggleSpectatorObjectives");

	ATgSpectatorHUD_ToggleSpectatorObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleSpectatorTimeline
// (Defined, Iterator, Latent, Singular, Operator, Static, Public)

void ATgSpectatorHUD::STATIC_ToggleSpectatorTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ToggleSpectatorTimeline");

	ATgSpectatorHUD_ToggleSpectatorTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleSecretMessage
// (Defined, Iterator, Singular, Operator, Static, Public)

void ATgSpectatorHUD::STATIC_ToggleSecretMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ToggleSecretMessage");

	ATgSpectatorHUD_ToggleSecretMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleSpectatorControls
// (Final, Defined, Iterator, Singular, Operator, Static, Public)

void ATgSpectatorHUD::STATIC_ToggleSpectatorControls()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ToggleSpectatorControls");

	ATgSpectatorHUD_ToggleSpectatorControls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerInformation
// (Final, Defined, Latent, Singular, Operator, Static, Public)

void ATgSpectatorHUD::STATIC_ToggleSpectatorPlayerInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerInformation");

	ATgSpectatorHUD_ToggleSpectatorPlayerInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleSpectatorTicker
// (Final, Iterator, Latent, Singular, Operator, Static, Public)

void ATgSpectatorHUD::STATIC_ToggleSpectatorTicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ToggleSpectatorTicker");

	ATgSpectatorHUD_ToggleSpectatorTicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.SetSpectatorMode
// (Final, Net, NetReliable, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// int                            nNum                           (Parm)

void ATgSpectatorHUD::STATIC_SetSpectatorMode(int nNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.SetSpectatorMode");

	ATgSpectatorHUD_SetSpectatorMode_Params params;
	params.nNum = nNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.ToggleBans
// (Iterator, Singular, Operator, Static, Public)

void ATgSpectatorHUD::STATIC_ToggleBans()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.ToggleBans");

	ATgSpectatorHUD_ToggleBans_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.EndMission
// (Final, Defined, Iterator, PreOperator, Singular, Exec, Operator, Static, Const)
// Parameters:
// bool                           bPlayerAttacker                (Parm)
// TEnumAsByte<EGAME_WIN_STATE>   finalWinState                  (Parm)

void ATgSpectatorHUD::STATIC_EndMission(bool bPlayerAttacker, TEnumAsByte<EGAME_WIN_STATE> finalWinState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.EndMission");

	ATgSpectatorHUD_EndMission_Params params;
	params.bPlayerAttacker = bPlayerAttacker;
	params.finalWinState = finalWinState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewMode
// (Defined, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// TEnumAsByte<ETgClientVisibilityMode> Mode                           (Parm)

void ATgSpectatorHUD::STATIC_UpdateSpectatorViewMode(TEnumAsByte<ETgClientVisibilityMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.UpdateSpectatorViewMode");

	ATgSpectatorHUD_UpdateSpectatorViewMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewTarget
// (Final, Iterator, NetReliable, Exec, Native, Static, Public)
// Parameters:
// class AActor*                  Target                         (Parm)

void ATgSpectatorHUD::STATIC_UpdateSpectatorViewTarget(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.UpdateSpectatorViewTarget");

	ATgSpectatorHUD_UpdateSpectatorViewTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgSpectatorHUD.GetVisibilityMode
// (Final, Defined, PreOperator, Singular, Simulated, Exec, Native, Operator, Public)
// Parameters:
// TEnumAsByte<ETgClientVisibilityMode> ReturnValue                    (Parm, OutParm, ReturnParm)

TEnumAsByte<ETgClientVisibilityMode> ATgSpectatorHUD::GetVisibilityMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgSpectatorHUD.GetVisibilityMode");

	ATgSpectatorHUD_GetVisibilityMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgClanDC_ClanStats.usc_UpdateClanNameFormat
// (Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// int                            nIndex                         (Parm)

void UTgClanDC_ClanStats::STATIC_usc_UpdateClanNameFormat(int nIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_ClanStats.usc_UpdateClanNameFormat");

	UTgClanDC_ClanStats_usc_UpdateClanNameFormat_Params params;
	params.nIndex = nIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_ClanStats.usc_UpdateTag
// (Simulated, Operator, Static, Public)
// Parameters:
// struct FString                 sMessage                       (Parm, NeedCtorLink)

void UTgClanDC_ClanStats::STATIC_usc_UpdateTag(const struct FString& sMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_ClanStats.usc_UpdateTag");

	UTgClanDC_ClanStats_usc_UpdateTag_Params params;
	params.sMessage = sMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_ClanStats.usc_ApplicationAction
// (Final, Latent, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            nAction                        (Parm)
// struct FString                 sPlayerId                      (Parm, NeedCtorLink)

void UTgClanDC_ClanStats::STATIC_usc_ApplicationAction(int nAction, const struct FString& sPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_ClanStats.usc_ApplicationAction");

	UTgClanDC_ClanStats_usc_ApplicationAction_Params params;
	params.nAction = nAction;
	params.sPlayerId = sPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_ClanStats.usc_UpdateRecruiting
// (Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sMessage                       (Parm, NeedCtorLink)
// bool                           bIsRecruiting                  (Parm)

void UTgClanDC_ClanStats::STATIC_usc_UpdateRecruiting(const struct FString& sMessage, bool bIsRecruiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_ClanStats.usc_UpdateRecruiting");

	UTgClanDC_ClanStats_usc_UpdateRecruiting_Params params;
	params.sMessage = sMessage;
	params.bIsRecruiting = bIsRecruiting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_ClanStats.usc_UpdateMessage
// (Defined, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sMessage                       (Parm, NeedCtorLink)
// bool                           bIsDaily                       (Parm)

void UTgClanDC_ClanStats::STATIC_usc_UpdateMessage(const struct FString& sMessage, bool bIsDaily)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_ClanStats.usc_UpdateMessage");

	UTgClanDC_ClanStats_usc_UpdateMessage_Params params;
	params.sMessage = sMessage;
	params.bIsDaily = bIsDaily;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_ClanStats.OnFilterResult
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Static, Public)
// Parameters:
// struct FString                 sOriginal                      (Parm, NeedCtorLink)
// struct FString                 sFiltered                      (Parm, NeedCtorLink)
// bool                           bTotalCensor                   (Parm)

void UTgClanDC_ClanStats::STATIC_OnFilterResult(const struct FString& sOriginal, const struct FString& sFiltered, bool bTotalCensor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_ClanStats.OnFilterResult");

	UTgClanDC_ClanStats_OnFilterResult_Params params;
	params.sOriginal = sOriginal;
	params.sFiltered = sFiltered;
	params.bTotalCensor = bTotalCensor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_ClanStats.UpdateRecruiting
// (Final, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sDesc                          (Parm, NeedCtorLink)
// bool                           bIsRecruiting                  (Parm)

void UTgClanDC_ClanStats::STATIC_UpdateRecruiting(const struct FString& sDesc, bool bIsRecruiting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_ClanStats.UpdateRecruiting");

	UTgClanDC_ClanStats_UpdateRecruiting_Params params;
	params.sDesc = sDesc;
	params.bIsRecruiting = bIsRecruiting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_ClanStats.UpdateClanMOTD
// (Final, Latent, PreOperator, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sMessage                       (Parm, NeedCtorLink)

void UTgClanDC_ClanStats::STATIC_UpdateClanMOTD(const struct FString& sMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_ClanStats.UpdateClanMOTD");

	UTgClanDC_ClanStats_UpdateClanMOTD_Params params;
	params.sMessage = sMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_ClanStats.UpdateClanDesc
// (Latent, PreOperator, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sMessage                       (Parm, NeedCtorLink)

void UTgClanDC_ClanStats::STATIC_UpdateClanDesc(const struct FString& sMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_ClanStats.UpdateClanDesc");

	UTgClanDC_ClanStats_UpdateClanDesc_Params params;
	params.sMessage = sMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_ClanStats.UpdateClanName
// (Defined, Latent, PreOperator, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)

void UTgClanDC_ClanStats::STATIC_UpdateClanName(const struct FString& sName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_ClanStats.UpdateClanName");

	UTgClanDC_ClanStats_UpdateClanName_Params params;
	params.sName = sName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_ClanStats.UpdateClanData
// (Net, Simulated, Exec, Operator, HasOptionalParms)

void UTgClanDC_ClanStats::UpdateClanData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_ClanStats.UpdateClanData");

	UTgClanDC_ClanStats_UpdateClanData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_ClanStats.InitializeData
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Operator, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgClanDC_ClanStats::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_ClanStats.InitializeData");

	UTgClanDC_ClanStats_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_Roster.usc_UpdateComment
// (Defined, Iterator, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 nPlayerId                      (Parm, NeedCtorLink)
// struct FString                 sComment                       (Parm, NeedCtorLink)
// bool                           isOfficerNote                  (Parm)

void UTgClanDC_Roster::STATIC_usc_UpdateComment(const struct FString& nPlayerId, const struct FString& sComment, bool isOfficerNote)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_Roster.usc_UpdateComment");

	UTgClanDC_Roster_usc_UpdateComment_Params params;
	params.nPlayerId = nPlayerId;
	params.sComment = sComment;
	params.isOfficerNote = isOfficerNote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_Roster.usc_ClanAction
// (Defined, PreOperator, Singular, NetReliable, Operator, Static, Public)
// Parameters:
// int                            nAction                        (Parm)
// struct FString                 nPlayerId                      (Parm, NeedCtorLink)

void UTgClanDC_Roster::STATIC_usc_ClanAction(int nAction, const struct FString& nPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_Roster.usc_ClanAction");

	UTgClanDC_Roster_usc_ClanAction_Params params;
	params.nAction = nAction;
	params.nPlayerId = nPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_Roster.InitializeData
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Operator, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgClanDC_Roster::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_Roster.InitializeData");

	UTgClanDC_Roster_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_Settings.usc_UpdateLeader
// (Final, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// struct FString                 sName                          (Parm, NeedCtorLink)

void UTgClanDC_Settings::STATIC_usc_UpdateLeader(const struct FString& sName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_Settings.usc_UpdateLeader");

	UTgClanDC_Settings_usc_UpdateLeader_Params params;
	params.sName = sName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_Settings.usc_UpdateRank
// (Final, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Operator, Static, Public)
// Parameters:
// float                          RankId                         (Parm)
// struct FString                 sName                          (Parm, NeedCtorLink)
// float                          rankPermission                 (Parm)

void UTgClanDC_Settings::STATIC_usc_UpdateRank(float RankId, const struct FString& sName, float rankPermission)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_Settings.usc_UpdateRank");

	UTgClanDC_Settings_usc_UpdateRank_Params params;
	params.RankId = RankId;
	params.sName = sName;
	params.rankPermission = rankPermission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_Settings.UpdateRankArray
// (Singular, NetReliable, Operator, Static, Public)

void UTgClanDC_Settings::STATIC_UpdateRankArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_Settings.UpdateRankArray");

	UTgClanDC_Settings_UpdateRankArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgClanDC_Settings.InitializeData
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Operator, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgClanDC_Settings::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgClanDC_Settings.InitializeData");

	UTgClanDC_Settings_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgDataGroup_Clan.InitializeData
// (Final, Defined, Iterator, PreOperator, Singular, NetReliable, Simulated, Exec, Native, Operator, Public)
// Parameters:
// class UTgDataHandler*          Handler                        (Parm)
// class UTgDataChunk*            parentChunk                    (Parm)

void UTgDataGroup_Clan::InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgDataGroup_Clan.InitializeData");

	UTgDataGroup_Clan_InitializeData_Params params;
	params.Handler = Handler;
	params.parentChunk = parentChunk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventPurchase.ShowOutOfCurrency
// (Final, Defined, Latent, Net, NetReliable, Simulated, Exec, Native, Event, Static, Public)
// Parameters:
// int                            CurrencyType                   (Parm)

void UTgGfxEventPurchase::STATIC_ShowOutOfCurrency(int CurrencyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventPurchase.ShowOutOfCurrency");

	UTgGfxEventPurchase_ShowOutOfCurrency_Params params;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventPurchase.SubmitPurchase
// (Defined, PreOperator, Operator, Static, Public)
// Parameters:
// class UGFxObject*              Data                           (Parm)

void UTgGfxEventPurchase::STATIC_SubmitPurchase(class UGFxObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventPurchase.SubmitPurchase");

	UTgGfxEventPurchase_SubmitPurchase_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventPurchase.GetItemInfo
// (Defined, Iterator, Latent, PreOperator, Singular, Simulated, Native, Event, Static, Public)
// Parameters:
// int                            ItemId                         (Parm)

void UTgGfxEventPurchase::STATIC_GetItemInfo(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventPurchase.GetItemInfo");

	UTgGfxEventPurchase_GetItemInfo_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventPurchase.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              theObject                      (Parm)

void UTgGfxEventPurchase::STATIC_ReceiveGFxData(class UGFxObject* theObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventPurchase.ReceiveGFxData");

	UTgGfxEventPurchase_ReceiveGFxData_Params params;
	params.theObject = theObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGfxEventPurchase.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGfxEventPurchase::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGfxEventPurchase.Initialize");

	UTgGfxEventPurchase_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGFxEventQuestNotification.USC_GetOptOut
// (Final, Defined, Net, NetReliable, Operator, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGFxEventQuestNotification::STATIC_USC_GetOptOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGFxEventQuestNotification.USC_GetOptOut");

	UTgGFxEventQuestNotification_USC_GetOptOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGFxEventQuestNotification.USC_GetOptOut_Delegate
// (Defined, Iterator, PreOperator, Net, Simulated, Exec, Operator, HasOptionalParms)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGFxEventQuestNotification::USC_GetOptOut_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGFxEventQuestNotification.USC_GetOptOut_Delegate");

	UTgGFxEventQuestNotification_USC_GetOptOut_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGFxEventQuestNotification.ReceiveGFxData
// (Final, Latent, PreOperator, Net, NetReliable, Exec, Static, Public)
// Parameters:
// class UGFxObject*              Data                           (Parm)

void UTgGFxEventQuestNotification::STATIC_ReceiveGFxData(class UGFxObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGFxEventQuestNotification.ReceiveGFxData");

	UTgGFxEventQuestNotification_ReceiveGFxData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGFxEventQuestNotification.RedirectToFirstQuest
// (Final, Defined, Singular, NetReliable, Simulated, Exec, Native, Event, Static, Public)

void UTgGFxEventQuestNotification::STATIC_RedirectToFirstQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGFxEventQuestNotification.RedirectToFirstQuest");

	UTgGFxEventQuestNotification_RedirectToFirstQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGFxEventQuestNotification.UpdateNotifySetting
// (Final, Iterator, Latent, PreOperator, NetReliable, Operator, Static, Public)
// Parameters:
// bool                           bDisable                       (Parm)

void UTgGFxEventQuestNotification::STATIC_UpdateNotifySetting(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGFxEventQuestNotification.UpdateNotifySetting");

	UTgGFxEventQuestNotification_UpdateNotifySetting_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGFxEventQuestNotification.GetHasAvailableSpecialEventQuest
// (Final, Iterator, Latent, PreOperator, Singular, Simulated, Native, Event, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UTgGFxEventQuestNotification::STATIC_GetHasAvailableSpecialEventQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGFxEventQuestNotification.GetHasAvailableSpecialEventQuest");

	UTgGFxEventQuestNotification_GetHasAvailableSpecialEventQuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgGFxEventQuestNotification.Uninitialize
// (Iterator, Latent, PreOperator, Exec, Native, Static, Public)

void UTgGFxEventQuestNotification::STATIC_Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGFxEventQuestNotification.Uninitialize");

	UTgGFxEventQuestNotification_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgGFxEventQuestNotification.Initialize
// (Iterator, Singular, NetReliable, Simulated, Native, Static, HasOptionalParms)
// Parameters:
// class UTgMoviePlayer*          theMovie                       (Parm)

void UTgGFxEventQuestNotification::STATIC_Initialize(class UTgMoviePlayer* theMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgGFxEventQuestNotification.Initialize");

	UTgGFxEventQuestNotification_Initialize_Params params;
	params.theMovie = theMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.SetInitialState
// (Defined, PreOperator, Singular, Simulated, Exec, Event, HasOptionalParms)

void ATgLobbyHUD::SetInitialState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.SetInitialState");

	ATgLobbyHUD_SetInitialState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.IsCurrentCameraMatchLobby
// (Iterator, Latent, PreOperator, Net, NetReliable, Simulated, Exec, Native, Operator, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATgLobbyHUD::IsCurrentCameraMatchLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.IsCurrentCameraMatchLobby");

	ATgLobbyHUD_IsCurrentCameraMatchLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgLobbyHUD.GetMatchLobbyCameraName
// (Latent, PreOperator, Singular, Net, NetReliable, Exec, Native, Operator, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName ATgLobbyHUD::GetMatchLobbyCameraName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.GetMatchLobbyCameraName");

	ATgLobbyHUD_GetMatchLobbyCameraName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TgClient.TgLobbyHUD.OnClassSelected
// (Latent, Singular, NetReliable, Static, Public)
// Parameters:
// int                            nClassId                       (Parm)
// int                            nSkinId                        (OptionalParm, Parm)
// bool                           bChangedClass                  (OptionalParm, Parm)
// bool                           bChangedSkin                   (OptionalParm, Parm)

void ATgLobbyHUD::STATIC_OnClassSelected(int nClassId, int nSkinId, bool bChangedClass, bool bChangedSkin)
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.OnClassSelected");

	ATgLobbyHUD_OnClassSelected_Params params;
	params.nClassId = nClassId;
	params.nSkinId = nSkinId;
	params.bChangedClass = bChangedClass;
	params.bChangedSkin = bChangedSkin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TgClient.TgLobbyHUD.AsynchNotifies
// (Iterator, Latent, PreOperator, Operator, Public)

void ATgLobbyHUD::AsynchNotifies()
{
	static auto fn = UObject::FindObject<UFunction>("Function TgClient.TgLobbyHUD.AsynchNotifies");

	ATgLobbyHUD_AsynchNotifies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
