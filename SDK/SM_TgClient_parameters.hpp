#pragma once

// SMITE (8.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SM_TgClient_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TgClient.TgGfxAchievementPopup.QueueAchievement
struct UTgGfxAchievementPopup_QueueAchievement_Params
{
};

// Function TgClient.TgGfxAchievementPopup.asc_QueueAchievement
struct UTgGfxAchievementPopup_asc_QueueAchievement_Params
{
};

// Function TgClient.TgGfxAchievementPopup.Initialize
struct UTgGfxAchievementPopup_Initialize_Params
{
	class UTgMoviePlayer*                              pMoviePlayer;                                             // (Parm)
};

// Function TgClient.TgGfxAchievementSelection.UpdateSelectedAchievements
struct UTgGfxAchievementSelection_UpdateSelectedAchievements_Params
{
};

// Function TgClient.TgGfxAchievementSelection.ASC_UpdateSelectedAchievements
struct UTgGfxAchievementSelection_ASC_UpdateSelectedAchievements_Params
{
};

// Function TgClient.TgGfxAchievementSelection.UpdateScreen
struct UTgGfxAchievementSelection_UpdateScreen_Params
{
};

// Function TgClient.TgGfxAchievementSelection.ASC_UpdateScreen
struct UTgGfxAchievementSelection_ASC_UpdateScreen_Params
{
};

// Function TgClient.TgGfxAchievementSelection.USC_ApplySelections
struct UTgGfxAchievementSelection_USC_ApplySelections_Params
{
	int                                                as1;                                                      // (Parm)
	int                                                as2;                                                      // (Parm)
	int                                                as3;                                                      // (Parm)
	int                                                as4;                                                      // (Parm)
};

// Function TgClient.TgGfxAchievementSelection.USC_ApplySelections_Delegate
struct UTgGfxAchievementSelection_USC_ApplySelections_Delegate_Params
{
	int                                                as1;                                                      // (Parm)
	int                                                as2;                                                      // (Parm)
	int                                                as3;                                                      // (Parm)
	int                                                as4;                                                      // (Parm)
};

// Function TgClient.TgGfxAchievementSelection.Uninitialize
struct UTgGfxAchievementSelection_Uninitialize_Params
{
};

// Function TgClient.TgGfxAchievementSelection.Initialize
struct UTgGfxAchievementSelection_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxAdventureProgress.OnAcquisition
struct UTgGfxAdventureProgress_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxAdventureProgress.Uninitialize
struct UTgGfxAdventureProgress_Uninitialize_Params
{
};

// Function TgClient.TgGfxAdventureProgress.ReceiveGFxData
struct UTgGfxAdventureProgress_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxAdventureProgress.Initialize
struct UTgGfxAdventureProgress_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxAdventureProgressDungeon2.OnAcquisition
struct UTgGfxAdventureProgressDungeon2_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxAdventureProgressDungeon2.Uninitialize
struct UTgGfxAdventureProgressDungeon2_Uninitialize_Params
{
};

// Function TgClient.TgGfxAdventureProgressDungeon2.ReceiveGFxData
struct UTgGfxAdventureProgressDungeon2_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxAdventureProgressDungeon2.Initialize
struct UTgGfxAdventureProgressDungeon2_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxAdventureProgressFox.OnAcquisition
struct UTgGfxAdventureProgressFox_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxAdventureProgressFox.SetupChestPurchaseFox
struct UTgGfxAdventureProgressFox_SetupChestPurchaseFox_Params
{
};

// Function TgClient.TgGfxAdventureProgressFox.Uninitialize
struct UTgGfxAdventureProgressFox_Uninitialize_Params
{
};

// Function TgClient.TgGfxAdventureProgressFox.ReceiveGFxData
struct UTgGfxAdventureProgressFox_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxAdventureProgressFox.Initialize
struct UTgGfxAdventureProgressFox_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxAdventureProgressMMO.OnAcquisition
struct UTgGfxAdventureProgressMMO_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxAdventureProgressMMO.Uninitialize
struct UTgGfxAdventureProgressMMO_Uninitialize_Params
{
};

// Function TgClient.TgGfxAdventureProgressMMO.ReceiveGFxData
struct UTgGfxAdventureProgressMMO_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxAdventureProgressMMO.Initialize
struct UTgGfxAdventureProgressMMO_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxAdventuresHub.SceneTick
struct UTgGfxAdventuresHub_SceneTick_Params
{
	float                                              Delta;                                                    // (Parm)
};

// Function TgClient.TgGfxAdventuresHub.OnAcquisition
struct UTgGfxAdventuresHub_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxAdventuresHub.SetBundleOwnership
struct UTgGfxAdventuresHub_SetBundleOwnership_Params
{
};

// Function TgClient.TgGfxAdventuresHub.TriggerLobbyEventHub
struct UTgGfxAdventuresHub_TriggerLobbyEventHub_Params
{
	int                                                nType;                                                    // (Parm)
	int                                                nTarget;                                                  // (Parm)
};

// Function TgClient.TgGfxAdventuresHub.TriggerLobbyCamEvent
struct UTgGfxAdventuresHub_TriggerLobbyCamEvent_Params
{
	int                                                nType;                                                    // (Parm)
	int                                                nTarget;                                                  // (Parm)
};

// Function TgClient.TgGfxAdventuresHub.Uninitialize
struct UTgGfxAdventuresHub_Uninitialize_Params
{
};

// Function TgClient.TgGfxAdventuresHub.ReceiveGFxData
struct UTgGfxAdventuresHub_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxAdventuresHub.Initialize
struct UTgGfxAdventuresHub_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxAdventuresHub.LeaveQueue
struct UTgGfxAdventuresHub_LeaveQueue_Params
{
};

// Function TgClient.TgGfxAdventuresHub.PopulateGoalData
struct UTgGfxAdventuresHub_PopulateGoalData_Params
{
};

// Function TgClient.TgGfxAdventuresHub.USC_OpenEventCam
struct UTgGfxAdventuresHub_USC_OpenEventCam_Params
{
	bool                                               isSmall;                                                  // (Parm)
};

// Function TgClient.TgGfxAdventuresHub.USC_GotoVault
struct UTgGfxAdventuresHub_USC_GotoVault_Params
{
	bool                                               bIsSmall;                                                 // (Parm)
};

// Function TgClient.TgGfxAdventuresHub.USC_SetUserViewedEvent
struct UTgGfxAdventuresHub_USC_SetUserViewedEvent_Params
{
};

// Function TgClient.TgGfxAdventuresHub.USC_GetAdventureLeaderboard
struct UTgGfxAdventuresHub_USC_GetAdventureLeaderboard_Params
{
	int                                                nEventId;                                                 // (Parm)
};

// Function TgClient.TgGfxAdventuresHub.USC_OpenEventCam_Delegate
struct UTgGfxAdventuresHub_USC_OpenEventCam_Delegate_Params
{
};

// Function TgClient.TgGfxAdventuresHub.USC_GotoVault_Delegate
struct UTgGfxAdventuresHub_USC_GotoVault_Delegate_Params
{
};

// Function TgClient.TgGfxAdventuresHub.USC_GetAdventureLeaderboard_Delegate
struct UTgGfxAdventuresHub_USC_GetAdventureLeaderboard_Delegate_Params
{
};

// Function TgClient.TgGfxAdventuresHub.USC_SetUserViewedEvent_Delegate
struct UTgGfxAdventuresHub_USC_SetUserViewedEvent_Delegate_Params
{
};

// Function TgClient.TgGfxBooster.UpdateBoosterTime
struct UTgGfxBooster_UpdateBoosterTime_Params
{
};

// Function TgClient.TgGfxBooster.USC_ShowPurchasePopup
struct UTgGfxBooster_USC_ShowPurchasePopup_Params
{
	int                                                ItemId;                                                   // (Parm)
	int                                                nQuantity;                                                // (Parm)
};

// Function TgClient.TgGfxBooster.USC_ShowPurchasePopup_Delegate
struct UTgGfxBooster_USC_ShowPurchasePopup_Delegate_Params
{
	int                                                ItemId;                                                   // (Parm)
	int                                                nQuantity;                                                // (Parm)
};

// Function TgClient.TgGfxBooster.Initialize
struct UTgGfxBooster_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxCharacterBuilder.HasVendorData
struct UTgGfxCharacterBuilder_HasVendorData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGfxCharacterBuilder.GetVendorData
struct UTgGfxCharacterBuilder_GetVendorData_Params
{
	class UTgVendorData*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGfxCharacterBuilder.ReceiveGFxData
struct UTgGfxCharacterBuilder_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxCharacterBuilder.Uninitialize
struct UTgGfxCharacterBuilder_Uninitialize_Params
{
};

// Function TgClient.TgGfxCharacterBuilder.Initialize
struct UTgGfxCharacterBuilder_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxClanAdmin.Initialize
struct UTgGfxClanAdmin_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxClanAdmin.UpdateClanNameChange
struct UTgGfxClanAdmin_UpdateClanNameChange_Params
{
};

// Function TgClient.TgGfxClanAdmin.ASC_UpdateClanNameChange
struct UTgGfxClanAdmin_ASC_UpdateClanNameChange_Params
{
};

// Function TgClient.TgGfxClanAdmin.UpdateApplicationData
struct UTgGfxClanAdmin_UpdateApplicationData_Params
{
};

// Function TgClient.TgGfxClanAdmin.ASC_UpdateApplicationData
struct UTgGfxClanAdmin_ASC_UpdateApplicationData_Params
{
};

// Function TgClient.TgGfxClanAdmin.UpdatePlayerInvites
struct UTgGfxClanAdmin_UpdatePlayerInvites_Params
{
};

// Function TgClient.TgGfxClanAdmin.ASC_UpdatePlayerInvites
struct UTgGfxClanAdmin_ASC_UpdatePlayerInvites_Params
{
};

// Function TgClient.TgGfxClanAdmin.UpdateClanData
struct UTgGfxClanAdmin_UpdateClanData_Params
{
};

// Function TgClient.TgGfxClanAdmin.ASC_UpdateClanData
struct UTgGfxClanAdmin_ASC_UpdateClanData_Params
{
};

// Function TgClient.TgGfxClanAdmin.USC_BanClanApp
struct UTgGfxClanAdmin_USC_BanClanApp_Params
{
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxClanAdmin.USC_DeclineClanApp
struct UTgGfxClanAdmin_USC_DeclineClanApp_Params
{
	int                                                nAppId;                                                   // (Parm)
};

// Function TgClient.TgGfxClanAdmin.USC_AcceptClanApp
struct UTgGfxClanAdmin_USC_AcceptClanApp_Params
{
	int                                                nAppId;                                                   // (Parm)
};

// Function TgClient.TgGfxClanAdmin.USC_UpdateJoinTypeRegion
struct UTgGfxClanAdmin_USC_UpdateJoinTypeRegion_Params
{
	int                                                nJoinTypeId;                                              // (Parm)
	int                                                nRegionId;                                                // (Parm)
};

// Function TgClient.TgGfxClanAdmin.USC_UpdateClanNameAndTag
struct UTgGfxClanAdmin_USC_UpdateClanNameAndTag_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	struct FString                                     sTag;                                                     // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxClanCreation.Reinit
struct UTgGfxClanCreation_Reinit_Params
{
};

// Function TgClient.TgGfxClanCreation.ASC_Reinit
struct UTgGfxClanCreation_ASC_Reinit_Params
{
};

// Function TgClient.TgGfxClanCreation.Initialize
struct UTgGfxClanCreation_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxClanCreation.USC_GotoClanList
struct UTgGfxClanCreation_USC_GotoClanList_Params
{
};

// Function TgClient.TgGfxClanCreation.USC_GetRegionListData
struct UTgGfxClanCreation_USC_GetRegionListData_Params
{
};

// Function TgClient.TgGfxClanCreation.USC_CancelClanRequest
struct UTgGfxClanCreation_USC_CancelClanRequest_Params
{
	int                                                nClanId;                                                  // (Parm)
};

// Function TgClient.TgGfxClanCreation.USC_AcceptClanRequest
struct UTgGfxClanCreation_USC_AcceptClanRequest_Params
{
	int                                                nClanId;                                                  // (Parm)
};

// Function TgClient.TgGfxClanCreation.USC_GetInvitesData
struct UTgGfxClanCreation_USC_GetInvitesData_Params
{
};

// Function TgClient.TgGfxClanCreation.USC_CreateClan
struct UTgGfxClanCreation_USC_CreateClan_Params
{
	struct FString                                     sClanName;                                                // (Parm, NeedCtorLink)
	struct FString                                     sClanTag;                                                 // (Parm, NeedCtorLink)
	int                                                nRegionId;                                                // (Parm)
	int                                                nRecruitmentType;                                         // (Parm)
};

// Function TgClient.TgGfxClanIconPicker.Initialize
struct UTgGfxClanIconPicker_Initialize_Params
{
	class UTgMoviePlayer*                              pMP;                                                      // (Parm)
};

// Function TgClient.TgGfxClanIconPicker.USC_SelectIcon
struct UTgGfxClanIconPicker_USC_SelectIcon_Params
{
	int                                                nIconItemId;                                              // (Parm)
};

// Function TgClient.TgGfxClanIconPicker.USC_SelectIcon_Delegate
struct UTgGfxClanIconPicker_USC_SelectIcon_Delegate_Params
{
};

// Function TgClient.TgGfxClanList.Initialize
struct UTgGfxClanList_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxClanList.UpdateApplicationData
struct UTgGfxClanList_UpdateApplicationData_Params
{
};

// Function TgClient.TgGfxClanList.ASC_UpdateApplicationData
struct UTgGfxClanList_ASC_UpdateApplicationData_Params
{
};

// Function TgClient.TgGfxClanList.UpdateClanList
struct UTgGfxClanList_UpdateClanList_Params
{
};

// Function TgClient.TgGfxClanList.ASC_UpdateClanList
struct UTgGfxClanList_ASC_UpdateClanList_Params
{
};

// Function TgClient.TgGfxClanList.USC_ApplyToClan
struct UTgGfxClanList_USC_ApplyToClan_Params
{
	int                                                nClanId;                                                  // (Parm)
	bool                                               bWithMessage;                                             // (Parm)
};

// Function TgClient.TgGfxClanList.USC_SearchClans
struct UTgGfxClanList_USC_SearchClans_Params
{
	struct FString                                     sSearchString;                                            // (Parm, NeedCtorLink)
	int                                                nJoinTypeId;                                              // (Parm)
	int                                                nRegionId;                                                // (Parm)
	bool                                               bRecommendedOnly;                                         // (Parm)
};

// Function TgClient.TgGfxClanManagement.Initialize
struct UTgGfxClanManagement_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxClanManagement.OnInviteToClanSelect
struct UTgGfxClanManagement_OnInviteToClanSelect_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxClanManagement.OnInviteToClanQuery
struct UTgGfxClanManagement_OnInviteToClanQuery_Params
{
	struct FPointer                                    pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxClanManagement.USC_ModifyLeader
struct UTgGfxClanManagement_USC_ModifyLeader_Params
{
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxClanManagement.USC_ViewProfile
struct UTgGfxClanManagement_USC_ViewProfile_Params
{
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxClanManagement.USC_InviteToClanByName
struct UTgGfxClanManagement_USC_InviteToClanByName_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxClanManagement.USC_UpdateClanTag
struct UTgGfxClanManagement_USC_UpdateClanTag_Params
{
};

// Function TgClient.TgGfxClanManagement.USC_QuitClan
struct UTgGfxClanManagement_USC_QuitClan_Params
{
};

// Function TgClient.TgGfxClanManagement.USC_CancelPlayerInvite
struct UTgGfxClanManagement_USC_CancelPlayerInvite_Params
{
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
};

// Function TgClient.TgGFxDungeonCurrencies.Uninitialize
struct UTgGFxDungeonCurrencies_Uninitialize_Params
{
};

// Function TgClient.TgGFxDungeonCurrencies.Initialize
struct UTgGFxDungeonCurrencies_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxEOMLobby.OnAcquisition
struct UTgGfxEOMLobby_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxEOMLobby.OnStats
struct UTgGfxEOMLobby_OnStats_Params
{
	struct FString                                     instanceId;                                               // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxEOMLobby.OnFeedback
struct UTgGfxEOMLobby_OnFeedback_Params
{
};

// Function TgClient.TgGfxEOMLobby.OnTwitter
struct UTgGfxEOMLobby_OnTwitter_Params
{
	struct FString                                     instanceId;                                               // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxEOMLobby.OnFacebook
struct UTgGfxEOMLobby_OnFacebook_Params
{
	struct FString                                     instanceId;                                               // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxEOMLobby.OnSendPlayerGift
struct UTgGfxEOMLobby_OnSendPlayerGift_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxEOMLobby.OnSendGiftPoints
struct UTgGfxEOMLobby_OnSendGiftPoints_Params
{
	class UGFxObject*                                  pData;                                                    // (Parm)
};

// Function TgClient.TgGfxEOMLobby.ReceiveGFxData
struct UTgGfxEOMLobby_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxEOMLobby.USC_SendPlayerGift
struct UTgGfxEOMLobby_USC_SendPlayerGift_Params
{
	struct FString                                     PlayerName;                                               // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     nPlayerId;                                                // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClient.TgGfxEOMLobby.ReceiveGiftedPoints
struct UTgGfxEOMLobby_ReceiveGiftedPoints_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
};

// Function TgClient.TgGfxEOMLobby.Uninitialize
struct UTgGfxEOMLobby_Uninitialize_Params
{
};

// Function TgClient.TgGfxEOMLobby.Initialize
struct UTgGfxEOMLobby_Initialize_Params
{
	class UTgMoviePlayer*                              pMoviePlayer;                                             // (Parm)
};

// Function TgClient.TgGfxEventAchievements.CheckBundleOwned
struct UTgGfxEventAchievements_CheckBundleOwned_Params
{
};

// Function TgClient.TgGfxEventAchievements.ReceiveGFxData
struct UTgGfxEventAchievements_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxEventAchievements.Initialize
struct UTgGfxEventAchievements_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxEventLeaderboard.USC_RequestEventLeaderboard
struct UTgGfxEventLeaderboard_USC_RequestEventLeaderboard_Params
{
	int                                                EventIdx;                                                 // (Parm)
};

// Function TgClient.TgGfxEventLeaderboard.Chunk
struct UTgGfxEventLeaderboard_Chunk_Params
{
	struct FString                                     dataIdx;                                                  // (Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGfxEventLeaderboard.CreateChunk
struct UTgGfxEventLeaderboard_CreateChunk_Params
{
	struct FString                                     dataIdx;                                                  // (Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGfxEventLeaderboard.UpdateFromChunk
struct UTgGfxEventLeaderboard_UpdateFromChunk_Params
{
	struct FString                                     dataIdx;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGfxEventLeaderboard.OnReceivePlayerNames
struct UTgGfxEventLeaderboard_OnReceivePlayerNames_Params
{
};

// Function TgClient.TgGfxEventLeaderboard.ReceivedAllData
struct UTgGfxEventLeaderboard_ReceivedAllData_Params
{
};

// Function TgClient.TgGfxEventLeaderboard.PopulateDropdown
struct UTgGfxEventLeaderboard_PopulateDropdown_Params
{
	TArray<int>                                        arrEventIds;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxEventLeaderboard.ShowLeaderboard
struct UTgGfxEventLeaderboard_ShowLeaderboard_Params
{
	int                                                nStartIndex;                                              // (Parm)
	int                                                nEndIndex;                                                // (Parm)
};

// Function TgClient.TgGfxEventLeaderboard.RequestFriendAndWorldPlayerNames
struct UTgGfxEventLeaderboard_RequestFriendAndWorldPlayerNames_Params
{
};

// Function TgClient.TgGfxEventLeaderboard.Initialize
struct UTgGfxEventLeaderboard_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxFeedback.ReceiveGFxData
struct UTgGfxFeedback_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxFeedback.Initialize
struct UTgGfxFeedback_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxGlossary.Uninitialize
struct UTgGfxGlossary_Uninitialize_Params
{
};

// Function TgClient.TgGfxGlossary.Initialize
struct UTgGfxGlossary_Initialize_Params
{
	class UTgMoviePlayer*                              pMP;                                                      // (Parm)
};

// Function TgClient.TgGfxGlossary.ReceiveGFxData
struct UTgGfxGlossary_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxGods.OnAcquisition
struct UTgGfxGods_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxGods.UpdateUGPValue
struct UTgGfxGods_UpdateUGPValue_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxGods.ReceiveGFxData
struct UTgGfxGods_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxGods.Uninitialize
struct UTgGfxGods_Uninitialize_Params
{
};

// Function TgClient.TgGfxGods.Initialize
struct UTgGfxGods_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxGods.USC_PlayGodVideo
struct UTgGfxGods_USC_PlayGodVideo_Params
{
	int                                                abilityNumber;                                            // (Parm)
};

// Function TgClient.TgGfxGods.USC_PlayGodVideo_Delegate
struct UTgGfxGods_USC_PlayGodVideo_Delegate_Params
{
};

// Function TgClient.TgGfxGods.USC_UpdateEmoteSelection
struct UTgGfxGods_USC_UpdateEmoteSelection_Params
{
	struct FString                                     emoteName;                                                // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxGods.USC_UpdateEmoteSelection_Delegate
struct UTgGfxGods_USC_UpdateEmoteSelection_Delegate_Params
{
	struct FString                                     emoteName;                                                // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxGodsHistory.Initialize
struct UTgGfxGodsHistory_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxGodsHistory.UpdateGodHistory
struct UTgGfxGodsHistory_UpdateGodHistory_Params
{
};

// Function TgClient.TgGfxGodsHistory.ASC_UpdateGodHistory
struct UTgGfxGodsHistory_ASC_UpdateGodHistory_Params
{
};

// Function TgClient.TgGfxGodsHistory.UpdateQueueData
struct UTgGfxGodsHistory_UpdateQueueData_Params
{
};

// Function TgClient.TgGfxGodsHistory.ASC_UpdateQueueData
struct UTgGfxGodsHistory_ASC_UpdateQueueData_Params
{
};

// Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails
struct UTgGfxGodsHistory_USC_ShowMatchDetails_Params
{
	int                                                pMatchID;                                                 // (Parm)
};

// Function TgClient.TgGfxGodsHistory.USC_GetHistoryData
struct UTgGfxGodsHistory_USC_GetHistoryData_Params
{
	int                                                queueId;                                                  // (Parm)
};

// Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown
struct UTgGfxGodsHistory_USC_GetQueuesDropdown_Params
{
	int                                                godId;                                                    // (Parm)
};

// Function TgClient.TgGfxGodsHistory.USC_ShowMatchDetails_Delegate
struct UTgGfxGodsHistory_USC_ShowMatchDetails_Delegate_Params
{
	int                                                pMatchID;                                                 // (Parm)
};

// Function TgClient.TgGfxGodsHistory.USC_GetHistoryData_Delegate
struct UTgGfxGodsHistory_USC_GetHistoryData_Delegate_Params
{
	int                                                queueId;                                                  // (Parm)
};

// Function TgClient.TgGfxGodsHistory.USC_GetQueuesDropdown_Delegate
struct UTgGfxGodsHistory_USC_GetQueuesDropdown_Delegate_Params
{
	int                                                godId;                                                    // (Parm)
};

// Function TgClient.TgGfxGuides.Initialize
struct UTgGfxGuides_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxHudItems.UpdateGlow
struct UTgGfxHudItems_UpdateGlow_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               Visibility;                                               // (Parm)
};

// Function TgClient.TgGfxHudItems.ASC_UpdateGlow
struct UTgGfxHudItems_ASC_UpdateGlow_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               Visibility;                                               // (Parm)
};

// Function TgClient.TgGfxHudItems.USC_SetupItemDisplay
struct UTgGfxHudItems_USC_SetupItemDisplay_Params
{
};

// Function TgClient.TgGfxHudItems.USC_SetupItemDisplay_Delegate
struct UTgGfxHudItems_USC_SetupItemDisplay_Delegate_Params
{
};

// Function TgClient.TgGfxHudItems.CheckCurrency
struct UTgGfxHudItems_CheckCurrency_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxHudItems.CheckWishList
struct UTgGfxHudItems_CheckWishList_Params
{
	bool                                               bPurge;                                                   // (Parm)
};

// Function TgClient.TgGfxHudItems.ReceiveGFxData
struct UTgGfxHudItems_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxHudItems.Initialize
struct UTgGfxHudItems_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxHudNotify.OnGameUIEvent
struct UTgGfxHudNotify_OnGameUIEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxHudNotify.Uninitialize
struct UTgGfxHudNotify_Uninitialize_Params
{
};

// Function TgClient.TgGfxHudNotify.Initialize
struct UTgGfxHudNotify_Initialize_Params
{
	class UTgMoviePlayer*                              pMP;                                                      // (Parm)
};

// Function TgClient.TgGfxHudNotify.ReceiveGFxData
struct UTgGfxHudNotify_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxHudUpgrade.Initialize
struct UTgGfxHudUpgrade_Initialize_Params
{
	class UTgMoviePlayer*                              pMP;                                                      // (Parm)
};

// Function TgClient.TgGfxHudUpgrade.ReceiveGFxData
struct UTgGfxHudUpgrade_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxIntro.Initialize
struct UTgGfxIntro_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxItemToast.Uninitialize
struct UTgGfxItemToast_Uninitialize_Params
{
};

// Function TgClient.TgGfxItemToast.Initialize
struct UTgGfxItemToast_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxItemToast.ToastItem
struct UTgGfxItemToast_ToastItem_Params
{
	int                                                ItemId;                                                   // (Parm)
};

// Function TgClient.TgGfxItemToast.ASC_ToastItem
struct UTgGfxItemToast_ASC_ToastItem_Params
{
	int                                                ItemId;                                                   // (Parm)
};

// Function TgClient.TgGfxLeaderboard.RequestCharacterLeaderboard
struct UTgGfxLeaderboard_RequestCharacterLeaderboard_Params
{
	int                                                classId;                                                  // (Parm)
	int                                                rankType;                                                 // (Parm)
};

// Function TgClient.TgGfxLeaderboard.ShowLeaderboard
struct UTgGfxLeaderboard_ShowLeaderboard_Params
{
	struct FString                                     boardName;                                                // (Parm, NeedCtorLink)
	int                                                aValue;                                                   // (OptionalParm, Parm)
	int                                                Option;                                                   // (OptionalParm, Parm)
};

// Function TgClient.TgGfxLeaderboard.ReceiveGFxData
struct UTgGfxLeaderboard_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxLeaderboard.Uninitialize
struct UTgGfxLeaderboard_Uninitialize_Params
{
};

// Function TgClient.TgGfxLeaderboard.Initialize
struct UTgGfxLeaderboard_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxLoadouts.OnAcquisition
struct UTgGfxLoadouts_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxLoadouts.RefreshBoosterTimer
struct UTgGfxLoadouts_RefreshBoosterTimer_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxLoadouts.ReceiveGFxData
struct UTgGfxLoadouts_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxLoadouts.Uninitialize
struct UTgGfxLoadouts_Uninitialize_Params
{
};

// Function TgClient.TgGfxLoadouts.Initialize
struct UTgGfxLoadouts_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxLobbyMain.Uninitialize
struct UTgGfxLobbyMain_Uninitialize_Params
{
};

// Function TgClient.TgGfxLobbyMain.Initialize
struct UTgGfxLobbyMain_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxMatchDetails.MatchDataUpdated
struct UTgGfxMatchDetails_MatchDataUpdated_Params
{
};

// Function TgClient.TgGfxMatchDetails.ASC_MatchDataUpdated
struct UTgGfxMatchDetails_ASC_MatchDataUpdated_Params
{
};

// Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId
struct UTgGfxMatchDetails_USC_SearchByMatchId_Params
{
	struct FString                                     matchId;                                                  // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxMatchDetails.USC_SearchByMatchId_Delegate
struct UTgGfxMatchDetails_USC_SearchByMatchId_Delegate_Params
{
	struct FString                                     matchId;                                                  // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxMatchDetails.Initialize
struct UTgGfxMatchDetails_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxPartyManagement.Uninitialize
struct UTgGfxPartyManagement_Uninitialize_Params
{
};

// Function TgClient.TgGfxPartyManagement.ReceiveGFxData
struct UTgGfxPartyManagement_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxPartyManagement.Initialize
struct UTgGfxPartyManagement_Initialize_Params
{
	class UTgMoviePlayer*                              pMP;                                                      // (Parm)
};

// Function TgClient.TgGfxPlayerProfile.OnFriendSelector
struct UTgGfxPlayerProfile_OnFriendSelector_Params
{
	class UTgEventDataItem*                            pBaseEvent;                                               // (Parm)
};

// Function TgClient.TgGfxPlayerProfile.PlayerNameUpdated
struct UTgGfxPlayerProfile_PlayerNameUpdated_Params
{
};

// Function TgClient.TgGfxPlayerProfile.ASC_PlayerNameUpdated
struct UTgGfxPlayerProfile_ASC_PlayerNameUpdated_Params
{
};

// Function TgClient.TgGfxPlayerProfile.DropDownUpdated
struct UTgGfxPlayerProfile_DropDownUpdated_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function TgClient.TgGfxPlayerProfile.ASC_DropDownUpdated
struct UTgGfxPlayerProfile_ASC_DropDownUpdated_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function TgClient.TgGfxPlayerProfile.USC_TabSelected
struct UTgGfxPlayerProfile_USC_TabSelected_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function TgClient.TgGfxPlayerProfile.USC_SearchByName
struct UTgGfxPlayerProfile_USC_SearchByName_Params
{
	struct FString                                     PlayerName;                                               // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxPlayerProfile.USC_SetFilter
struct UTgGfxPlayerProfile_USC_SetFilter_Params
{
	int                                                filterIndex;                                              // (Parm)
	int                                                val;                                                      // (Parm)
};

// Function TgClient.TgGfxPlayerProfile.Uninitialize
struct UTgGfxPlayerProfile_Uninitialize_Params
{
};

// Function TgClient.TgGfxPlayerProfile.Initialize
struct UTgGfxPlayerProfile_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxProfileAccolade.Initialize
struct UTgGfxProfileAccolade_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxProfileAccolade.AccoladeDataUpdated
struct UTgGfxProfileAccolade_AccoladeDataUpdated_Params
{
};

// Function TgClient.TgGfxProfileAccolade.ASC_AccoladeDataUpdated
struct UTgGfxProfileAccolade_ASC_AccoladeDataUpdated_Params
{
};

// Function TgClient.TgGfxProfileAchievements.CheckIfHasMasterList
struct UTgGfxProfileAchievements_CheckIfHasMasterList_Params
{
};

// Function TgClient.TgGfxProfileAchievements.ASC_CheckIfHasMasterList
struct UTgGfxProfileAchievements_ASC_CheckIfHasMasterList_Params
{
};

// Function TgClient.TgGfxProfileAchievements.UpdateAchievements
struct UTgGfxProfileAchievements_UpdateAchievements_Params
{
};

// Function TgClient.TgGfxProfileAchievements.ASC_UpdateAchievements
struct UTgGfxProfileAchievements_ASC_UpdateAchievements_Params
{
};

// Function TgClient.TgGfxProfileAchievements.Initialize
struct UTgGfxProfileAchievements_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxProfileHistory.QueueDataUpdated
struct UTgGfxProfileHistory_QueueDataUpdated_Params
{
};

// Function TgClient.TgGfxProfileHistory.ASC_QueueDataUpdated
struct UTgGfxProfileHistory_ASC_QueueDataUpdated_Params
{
};

// Function TgClient.TgGfxProfileHistory.MatchesDataUpdated
struct UTgGfxProfileHistory_MatchesDataUpdated_Params
{
};

// Function TgClient.TgGfxProfileHistory.ASC_MatchesDataUpdated
struct UTgGfxProfileHistory_ASC_MatchesDataUpdated_Params
{
};

// Function TgClient.TgGfxProfileHistory.USC_ShowDetails
struct UTgGfxProfileHistory_USC_ShowDetails_Params
{
	struct FString                                     matchId;                                                  // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter
struct UTgGfxProfileHistory_USC_SetQueueFilter_Params
{
	int                                                queueId;                                                  // (Parm)
};

// Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter
struct UTgGfxProfileHistory_USC_SetGodsFilter_Params
{
	struct FString                                     sFilterGod;                                               // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxProfileHistory.USC_ShowDetails_Delegate
struct UTgGfxProfileHistory_USC_ShowDetails_Delegate_Params
{
	struct FString                                     matchId;                                                  // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxProfileHistory.USC_SetQueueFilter_Delegate
struct UTgGfxProfileHistory_USC_SetQueueFilter_Delegate_Params
{
	int                                                queueId;                                                  // (Parm)
};

// Function TgClient.TgGfxProfileHistory.USC_SetGodsFilter_Delegate
struct UTgGfxProfileHistory_USC_SetGodsFilter_Delegate_Params
{
	struct FString                                     sFilterGod;                                               // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxProfileHistory.Initialize
struct UTgGfxProfileHistory_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxProfileLeagueStats.UpdateLeagueStats
struct UTgGfxProfileLeagueStats_UpdateLeagueStats_Params
{
};

// Function TgClient.TgGfxProfileLeagueStats.ASC_UpdateLeagueStats
struct UTgGfxProfileLeagueStats_ASC_UpdateLeagueStats_Params
{
};

// Function TgClient.TgGfxProfileLeagueStats.UpdateQueueLeagues
struct UTgGfxProfileLeagueStats_UpdateQueueLeagues_Params
{
};

// Function TgClient.TgGfxProfileLeagueStats.Initialize
struct UTgGfxProfileLeagueStats_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxProfileMastery.UpdateAll
struct UTgGfxProfileMastery_UpdateAll_Params
{
};

// Function TgClient.TgGfxProfileMastery.asc_updateAll
struct UTgGfxProfileMastery_asc_updateAll_Params
{
};

// Function TgClient.TgGfxProfileMastery.Initialize
struct UTgGfxProfileMastery_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxProfileOverview.Uninitialize
struct UTgGfxProfileOverview_Uninitialize_Params
{
};

// Function TgClient.TgGfxProfileOverview.Initialize
struct UTgGfxProfileOverview_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxProfileOverview.UpdateSelectedAchievements
struct UTgGfxProfileOverview_UpdateSelectedAchievements_Params
{
};

// Function TgClient.TgGfxProfileOverview.ASC_UpdateSelectedAchievements
struct UTgGfxProfileOverview_ASC_UpdateSelectedAchievements_Params
{
};

// Function TgClient.TgGfxProfileOverview.LeagueDataUpdated
struct UTgGfxProfileOverview_LeagueDataUpdated_Params
{
};

// Function TgClient.TgGfxProfileOverview.ASC_LeagueDataUpdated
struct UTgGfxProfileOverview_ASC_LeagueDataUpdated_Params
{
};

// Function TgClient.TgGfxProfileOverview.ProfileDataUpdated
struct UTgGfxProfileOverview_ProfileDataUpdated_Params
{
};

// Function TgClient.TgGfxProfileOverview.ASC_ProfileDataUpdated
struct UTgGfxProfileOverview_ASC_ProfileDataUpdated_Params
{
};

// Function TgClient.TgGfxProfileOverview.USC_NavigateToClan
struct UTgGfxProfileOverview_USC_NavigateToClan_Params
{
};

// Function TgClient.TgGfxProfileOverview.USC_NavigateToClan_Delegate
struct UTgGfxProfileOverview_USC_NavigateToClan_Delegate_Params
{
};

// Function TgClient.TgGfxProfilePage.OnFriendSelector
struct UTgGfxProfilePage_OnFriendSelector_Params
{
	class UTgEventDataItem*                            pBaseEvent;                                               // (Parm)
};

// Function TgClient.TgGfxProfilePage.UpdateAvailable
struct UTgGfxProfilePage_UpdateAvailable_Params
{
	bool                                               vis;                                                      // (Parm)
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateAvailable
struct UTgGfxProfilePage_ASC_UpdateAvailable_Params
{
	bool                                               vis;                                                      // (Parm)
};

// Function TgClient.TgGfxProfilePage.UpdateCallout
struct UTgGfxProfilePage_UpdateCallout_Params
{
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateCallout
struct UTgGfxProfilePage_ASC_UpdateCallout_Params
{
};

// Function TgClient.TgGfxProfilePage.UpdatePlayer
struct UTgGfxProfilePage_UpdatePlayer_Params
{
};

// Function TgClient.TgGfxProfilePage.ASC_UpdatePlayer
struct UTgGfxProfilePage_ASC_UpdatePlayer_Params
{
};

// Function TgClient.TgGfxProfilePage.UpdateTab
struct UTgGfxProfilePage_UpdateTab_Params
{
};

// Function TgClient.TgGfxProfilePage.ASC_UpdateTab
struct UTgGfxProfilePage_ASC_UpdateTab_Params
{
};

// Function TgClient.TgGfxProfilePage.USC_GiftPlayer
struct UTgGfxProfilePage_USC_GiftPlayer_Params
{
	bool                                               isYourself;                                               // (Parm)
};

// Function TgClient.TgGfxProfilePage.USC_TwitchLink
struct UTgGfxProfilePage_USC_TwitchLink_Params
{
};

// Function TgClient.TgGfxProfilePage.USC_UpdatePrivacy
struct UTgGfxProfilePage_USC_UpdatePrivacy_Params
{
};

// Function TgClient.TgGfxProfilePage.USC_AddFriend
struct UTgGfxProfilePage_USC_AddFriend_Params
{
};

// Function TgClient.TgGfxProfilePage.USC_TabSelected
struct UTgGfxProfilePage_USC_TabSelected_Params
{
	int                                                tabId;                                                    // (Parm)
};

// Function TgClient.TgGfxProfilePage.USC_SearchPlayerByName
struct UTgGfxProfilePage_USC_SearchPlayerByName_Params
{
	struct FString                                     PlayerName;                                               // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxProfilePage.Initialize
struct UTgGfxProfilePage_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxProfileWorshiper.FilterDataUpdated
struct UTgGfxProfileWorshiper_FilterDataUpdated_Params
{
};

// Function TgClient.TgGfxProfileWorshiper.ASC_FilterDataUpdated
struct UTgGfxProfileWorshiper_ASC_FilterDataUpdated_Params
{
};

// Function TgClient.TgGfxProfileWorshiper.GodMasteryUpdated
struct UTgGfxProfileWorshiper_GodMasteryUpdated_Params
{
};

// Function TgClient.TgGfxProfileWorshiper.ASC_GodMasteryUpdated
struct UTgGfxProfileWorshiper_ASC_GodMasteryUpdated_Params
{
};

// Function TgClient.TgGfxProfileWorshiper.USC_Search
struct UTgGfxProfileWorshiper_USC_Search_Params
{
	struct FString                                     searchText;                                               // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxProfileWorshiper.USC_Search_Delegate
struct UTgGfxProfileWorshiper_USC_Search_Delegate_Params
{
	struct FString                                     searchText;                                               // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter
struct UTgGfxProfileWorshiper_USC_SetGodMasteryFilter_Params
{
	int                                                filterId;                                                 // (Parm)
};

// Function TgClient.TgGfxProfileWorshiper.USC_SetGodMasteryFilter_Delegate
struct UTgGfxProfileWorshiper_USC_SetGodMasteryFilter_Delegate_Params
{
	int                                                filterId;                                                 // (Parm)
};

// Function TgClient.TgGfxProfileWorshiper.Initialize
struct UTgGfxProfileWorshiper_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxQuestWindow.UpdateQuest
struct UTgGfxQuestWindow_UpdateQuest_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Count;                                                    // (Parm)
	int                                                Goal;                                                     // (Parm)
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxQuestWindow.ASC_UpdateQuest
struct UTgGfxQuestWindow_ASC_UpdateQuest_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Count;                                                    // (Parm)
	int                                                Goal;                                                     // (Parm)
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxQuestWindow.Initialize
struct UTgGfxQuestWindow_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxRacerDispatcher.USC_CheckForUpdates
struct UTgGfxRacerDispatcher_USC_CheckForUpdates_Params
{
};

// Function TgClient.TgGfxRacerDispatcher.USC_CheckForUpdates_Delegate
struct UTgGfxRacerDispatcher_USC_CheckForUpdates_Delegate_Params
{
};

// Function TgClient.TgGfxRacerDispatcher.DataChange
struct UTgGfxRacerDispatcher_DataChange_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
};

// Function TgClient.TgGfxRacerDispatcher.ASC_DataChange
struct UTgGfxRacerDispatcher_ASC_DataChange_Params
{
	class UGFxObject*                                  Obj;                                                      // (Parm)
};

// Function TgClient.TgGfxRacerDispatcher.Initialize
struct UTgGfxRacerDispatcher_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxReferralPopup.Initialize
struct UTgGfxReferralPopup_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxReferralPopup.UpdateFriendList
struct UTgGfxReferralPopup_UpdateFriendList_Params
{
};

// Function TgClient.TgGfxReferralPopup.ASC_UpdateFriendList
struct UTgGfxReferralPopup_ASC_UpdateFriendList_Params
{
};

// Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral
struct UTgGfxReferralPopup_USC_SendFriendReferral_Params
{
	struct FString                                     sQQId;                                                    // (Parm, NeedCtorLink)
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
	struct FString                                     sPlayerName;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxReferralPopup.USC_SendFriendReferral_Delegate
struct UTgGfxReferralPopup_USC_SendFriendReferral_Delegate_Params
{
};

// Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward
struct UTgGfxReferralReward_USC_OpenReferFriendReward_Params
{
};

// Function TgClient.TgGfxReferralReward.USC_OpenReferFriendReward_Delegate
struct UTgGfxReferralReward_USC_OpenReferFriendReward_Delegate_Params
{
};

// Function TgClient.TgGfxReferralReward.Initialize
struct UTgGfxReferralReward_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxReferrals.UpdateAchievements
struct UTgGfxReferrals_UpdateAchievements_Params
{
};

// Function TgClient.TgGfxReferrals.ASC_UpdateAchievements
struct UTgGfxReferrals_ASC_UpdateAchievements_Params
{
};

// Function TgClient.TgGfxReferrals.UpdatePlayerList
struct UTgGfxReferrals_UpdatePlayerList_Params
{
};

// Function TgClient.TgGfxReferrals.ASC_UpdatePlayerList
struct UTgGfxReferrals_ASC_UpdatePlayerList_Params
{
};

// Function TgClient.TgGfxReferrals.USC_OpenReferFriend
struct UTgGfxReferrals_USC_OpenReferFriend_Params
{
};

// Function TgClient.TgGfxReferrals.USC_OpenReferFriend_Delegate
struct UTgGfxReferrals_USC_OpenReferFriend_Delegate_Params
{
};

// Function TgClient.TgGfxReferrals.Initialize
struct UTgGfxReferrals_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxReferralSelector.Initialize
struct UTgGfxReferralSelector_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxReferralSelector.UpdateFriendList
struct UTgGfxReferralSelector_UpdateFriendList_Params
{
};

// Function TgClient.TgGfxReferralSelector.ASC_UpdateFriendList
struct UTgGfxReferralSelector_ASC_UpdateFriendList_Params
{
};

// Function TgClient.TgGfxReferralSelector.USC_SelectReferral
struct UTgGfxReferralSelector_USC_SelectReferral_Params
{
	struct FString                                     sQQId;                                                    // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxReferralSelector.USC_SelectReferral_Delegate
struct UTgGfxReferralSelector_USC_SelectReferral_Delegate_Params
{
};

// Function TgClient.TgGfxSettingsMenu.USC_OpenQueueWarning
struct UTgGfxSettingsMenu_USC_OpenQueueWarning_Params
{
};

// Function TgClient.TgGfxSettingsMenu.USC_OpenQueueWarning_Delegate
struct UTgGfxSettingsMenu_USC_OpenQueueWarning_Delegate_Params
{
};

// Function TgClient.TgGfxSettingsMenu.Uninitialize
struct UTgGfxSettingsMenu_Uninitialize_Params
{
};

// Function TgClient.TgGfxSettingsMenu.Initialize
struct UTgGfxSettingsMenu_Initialize_Params
{
	class UTgMoviePlayer*                              pMoviePlayer;                                             // (Parm)
};

// Function TgClient.TgGfxSocial.Initialize
struct UTgGfxSocial_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxSocial.SetSelectedAdminTab
struct UTgGfxSocial_SetSelectedAdminTab_Params
{
	int                                                nIndex;                                                   // (Parm)
};

// Function TgClient.TgGfxSocial.ASC_SetSelectedAdminTab
struct UTgGfxSocial_ASC_SetSelectedAdminTab_Params
{
	int                                                nIndex;                                                   // (Parm)
};

// Function TgClient.TgGfxSocial.UpdateSelectedTab
struct UTgGfxSocial_UpdateSelectedTab_Params
{
	struct FString                                     tabLabel;                                                 // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxSocial.ASC_UpdateSelectedTab
struct UTgGfxSocial_ASC_UpdateSelectedTab_Params
{
	struct FString                                     tabLabel;                                                 // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxSocial.UpdateClanQuestData
struct UTgGfxSocial_UpdateClanQuestData_Params
{
};

// Function TgClient.TgGfxSocial.ASC_UpdateClanQuestData
struct UTgGfxSocial_ASC_UpdateClanQuestData_Params
{
};

// Function TgClient.TgGfxSocial.UpdateSocialTabLabels
struct UTgGfxSocial_UpdateSocialTabLabels_Params
{
};

// Function TgClient.TgGfxSocial.ASC_UpdateSocialTabLabels
struct UTgGfxSocial_ASC_UpdateSocialTabLabels_Params
{
};

// Function TgClient.TgGfxSocial.USC_TabSelected
struct UTgGfxSocial_USC_TabSelected_Params
{
	struct FString                                     tabSelected;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.TgGfxSpectatorHud.SendGraphData
struct UTgGfxSpectatorHud_SendGraphData_Params
{
	class UGFxObject*                                  Obj;                                                      // (Parm)
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList
struct UTgGfxSpectatorHud_USC_UpdatePlayerList_Params
{
	class UGFxObject*                                  pPlayerList;                                              // (Parm)
	int                                                nLength;                                                  // (Parm)
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdatePlayerList_Delegate
struct UTgGfxSpectatorHud_USC_UpdatePlayerList_Delegate_Params
{
	class UGFxObject*                                  pPlayerList;                                              // (Parm)
	int                                                nLength;                                                  // (Parm)
};

// Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen
struct UTgGfxSpectatorHud_USC_SetMenuIsOpen_Params
{
	bool                                               bOpen;                                                    // (Parm)
};

// Function TgClient.TgGfxSpectatorHud.USC_SetMenuIsOpen_Delegate
struct UTgGfxSpectatorHud_USC_SetMenuIsOpen_Delegate_Params
{
	bool                                               bOpen;                                                    // (Parm)
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdateStat
struct UTgGfxSpectatorHud_USC_UpdateStat_Params
{
	int                                                pawnId;                                                   // (Parm)
};

// Function TgClient.TgGfxSpectatorHud.USC_UpdateStat_Delegate
struct UTgGfxSpectatorHud_USC_UpdateStat_Delegate_Params
{
	int                                                pawnId;                                                   // (Parm)
};

// Function TgClient.TgGfxSpectatorHud.OnGameHUDEvent
struct UTgGfxSpectatorHud_OnGameHUDEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxSpectatorHud.OnSpectatorEvent
struct UTgGfxSpectatorHud_OnSpectatorEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxSpectatorHud.UpdateGraph
struct UTgGfxSpectatorHud_UpdateGraph_Params
{
};

// Function TgClient.TgGfxSpectatorHud.Uninitialize
struct UTgGfxSpectatorHud_Uninitialize_Params
{
};

// Function TgClient.TgGfxSpectatorHud.Initialize
struct UTgGfxSpectatorHud_Initialize_Params
{
	class UTgMoviePlayer*                              pParentMovie;                                             // (Parm)
};

// Function TgClient.TgGfxStoreChestPC.OnAcquisition
struct UTgGfxStoreChestPC_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGfxStoreChestPC.ReceiveGFxData
struct UTgGfxStoreChestPC_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxStoreChestPC.Initialize
struct UTgGfxStoreChestPC_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxTreasurePicker.ReceiveGFxData
struct UTgGfxTreasurePicker_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxTreasurePicker.Uninitialize
struct UTgGfxTreasurePicker_Uninitialize_Params
{
};

// Function TgClient.TgGfxTreasurePicker.Initialize
struct UTgGfxTreasurePicker_Initialize_Params
{
	class UTgMoviePlayer*                              pMoviePlayer;                                             // (Parm)
};

// Function TgClient.TgGfxWisdomMain.Initialize
struct UTgGfxWisdomMain_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxWisdomWeb.Uninitialize
struct UTgGfxWisdomWeb_Uninitialize_Params
{
};

// Function TgClient.TgGfxWisdomWeb.Initialize
struct UTgGfxWisdomWeb_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGfxWisdomWeb.ASC_UpdateStreamList
struct UTgGfxWisdomWeb_ASC_UpdateStreamList_Params
{
};

// Function TgClient.TgGfxWisdomWeb.UpdateStreamList
struct UTgGfxWisdomWeb_UpdateStreamList_Params
{
};

// Function TgClient.TgGfxWisdomWeb.USC_StartStreamData
struct UTgGfxWisdomWeb_USC_StartStreamData_Params
{
	int                                                streamId;                                                 // (Parm)
	bool                                               external;                                                 // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	float                                              widthReal;                                                // (Parm)
	float                                              heightReal;                                               // (Parm)
};

// Function TgClient.TgGfxWisdomWeb.USC_StartStreamData_Delegate
struct UTgGfxWisdomWeb_USC_StartStreamData_Delegate_Params
{
};

// Function TgClient.TgStreamManager.OpenStream
struct UTgStreamManager_OpenStream_Params
{
	int                                                surfaceId;                                                // (Parm)
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               external;                                                 // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	float                                              widthReal;                                                // (Parm)
	float                                              heightReal;                                               // (Parm)
	bool                                               joinChat;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameDataHandler.ChatInput_SetReplyName
struct UTgGameDataHandler_ChatInput_SetReplyName_Params
{
	struct FString                                     sSenderName;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameDataHandler.DispatchEvent_VendorStore_UpdateInventory
struct UTgGameDataHandler_DispatchEvent_VendorStore_UpdateInventory_Params
{
};

// Function TgClient.TgGameDataHandler.DispatchEvent_VendorStore_UpdateStats
struct UTgGameDataHandler_DispatchEvent_VendorStore_UpdateStats_Params
{
};

// Function TgClient.TgGameDataHandler.InitializeDataHandler
struct UTgGameDataHandler_InitializeDataHandler_Params
{
};

// Function TgClient.TgGameMoviePlayer.DelegateGFxList
struct UTgGameMoviePlayer_DelegateGFxList_Params
{
	class UGFxObject*                                  List;                                                     // (Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_rotate_lobby_model
struct UTgGameMoviePlayer_usc_rotate_lobby_model_Params
{
	float                                              fValue;                                                   // (Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_activate_key
struct UTgGameMoviePlayer_usc_activate_key_Params
{
};

// Function TgClient.TgGameMoviePlayer.CacheLoggedInGamepad
struct UTgGameMoviePlayer_CacheLoggedInGamepad_Params
{
};

// Function TgClient.TgGameMoviePlayer.SetUISetting
struct UTgGameMoviePlayer_SetUISetting_Params
{
	struct FString                                     Setting;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                    // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.CheckSpecialInput
struct UTgGameMoviePlayer_CheckSpecialInput_Params
{
	class ATgPlayerController*                         TgPC;                                                     // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (Parm)
};

// Function TgClient.TgGameMoviePlayer.FilterButtonInput
struct UTgGameMoviePlayer_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.WidgetUnloaded
struct UTgGameMoviePlayer_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.WidgetInitialized
struct UTgGameMoviePlayer_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.GetBrowserType
struct UTgGameMoviePlayer_GetBrowserType_Params
{
	int                                                nURLType;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.usc_forceFlushActionLog
struct UTgGameMoviePlayer_usc_forceFlushActionLog_Params
{
};

// Function TgClient.TgGameMoviePlayer.ToggleCombatLog
struct UTgGameMoviePlayer_ToggleCombatLog_Params
{
};

// Function TgClient.TgGameMoviePlayer.usc_get_ui_display_mode
struct UTgGameMoviePlayer_usc_get_ui_display_mode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.NativeTick
struct UTgGameMoviePlayer_NativeTick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClient.TgGameMoviePlayer.UpdateTutorialImage
struct UTgGameMoviePlayer_UpdateTutorialImage_Params
{
	bool                                               show;                                                     // (Parm)
	int                                                HeaderMsgId;                                              // (Parm)
	int                                                ImageId;                                                  // (Parm)
	int                                                msgId;                                                    // (Parm)
};

// Function TgClient.TgGameMoviePlayer.HandleEscapeKey
struct UTgGameMoviePlayer_HandleEscapeKey_Params
{
};

// Function TgClient.TgGameMoviePlayer.PostInit
struct UTgGameMoviePlayer_PostInit_Params
{
};

// Function TgClient.TgGameMoviePlayer.UpdateQuestUI
struct UTgGameMoviePlayer_UpdateQuestUI_Params
{
	int                                                Id;                                                       // (OptionalParm, Parm)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                Goal;                                                     // (OptionalParm, Parm)
	int                                                msgId;                                                    // (OptionalParm, Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_allowSpaceBar
struct UTgGameMoviePlayer_usc_allowSpaceBar_Params
{
	bool                                               bAllow;                                                   // (Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_getPassiveMeterPath
struct UTgGameMoviePlayer_usc_getPassiveMeterPath_Params
{
	int                                                BotID;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.RunIntroMovie
struct UTgGameMoviePlayer_RunIntroMovie_Params
{
	bool                                               bRun;                                                     // (Parm)
};

// Function TgClient.TgGameMoviePlayer.InvokeRenderTargetReady
struct UTgGameMoviePlayer_InvokeRenderTargetReady_Params
{
};

// Function TgClient.TgGameMoviePlayer.SetRenderTargetCallback
struct UTgGameMoviePlayer_SetRenderTargetCallback_Params
{
	class UGFxObject*                                  targetObj;                                                // (Parm)
	bool                                               addObj;                                                   // (OptionalParm, Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_autoConfigureSettings
struct UTgGameMoviePlayer_usc_autoConfigureSettings_Params
{
};

// Function TgClient.TgGameMoviePlayer.usc_goto_item
struct UTgGameMoviePlayer_usc_goto_item_Params
{
	int                                                nItemId;                                                  // (Parm)
	bool                                               bUseAltRedirect;                                          // (OptionalParm, Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_send_chat
struct UTgGameMoviePlayer_usc_send_chat_Params
{
	int                                                nChannel;                                                 // (Parm)
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Recipient;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.usc_toggle_player_mute
struct UTgGameMoviePlayer_usc_toggle_player_mute_Params
{
	struct FString                                     sPlayerName;                                              // (Parm, NeedCtorLink)
	struct FString                                     sUnused;                                                  // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     nPlayerId;                                                // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.usc_lobbyFeaturesShouldShow
struct UTgGameMoviePlayer_usc_lobbyFeaturesShouldShow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.usc_isPlayingTutorial
struct UTgGameMoviePlayer_usc_isPlayingTutorial_Params
{
	bool                                               Toggle;                                                   // (Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_stopSoundCue
struct UTgGameMoviePlayer_usc_stopSoundCue_Params
{
	struct FString                                     soundTheme;                                               // (Parm, NeedCtorLink)
	struct FString                                     SoundEventName;                                           // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.usc_join_channel
struct UTgGameMoviePlayer_usc_join_channel_Params
{
	int                                                Id;                                                       // (Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_GetWinningTeamName
struct UTgGameMoviePlayer_usc_GetWinningTeamName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.usc_get_device_tooltip
struct UTgGameMoviePlayer_usc_get_device_tooltip_Params
{
	int                                                nItemId;                                                  // (Parm)
	int                                                nRank;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.usc_force_purchase_current_item
struct UTgGameMoviePlayer_usc_force_purchase_current_item_Params
{
};

// Function TgClient.TgGameMoviePlayer.usc_forward_feature2
struct UTgGameMoviePlayer_usc_forward_feature2_Params
{
	int                                                pItemType;                                                // (Parm)
	struct FString                                     pItemData;                                                // (Parm, NeedCtorLink)
	struct FString                                     pItemData2;                                               // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.usc_forward_feature
struct UTgGameMoviePlayer_usc_forward_feature_Params
{
	int                                                pItemType;                                                // (Parm)
	struct FString                                     pItemData;                                                // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.usc_class_loading_resume
struct UTgGameMoviePlayer_usc_class_loading_resume_Params
{
};

// Function TgClient.TgGameMoviePlayer.usc_class_loading_suspend
struct UTgGameMoviePlayer_usc_class_loading_suspend_Params
{
};

// Function TgClient.TgGameMoviePlayer.usc_clearReferral
struct UTgGameMoviePlayer_usc_clearReferral_Params
{
	struct FString                                     sExtId;                                                   // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.usc_ListenNextVivoxBtn
struct UTgGameMoviePlayer_usc_ListenNextVivoxBtn_Params
{
};

// Function TgClient.TgGameMoviePlayer.usc_GetLocalPlayerId
struct UTgGameMoviePlayer_usc_GetLocalPlayerId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.usc_request_account_info
struct UTgGameMoviePlayer_usc_request_account_info_Params
{
	int                                                nType;                                                    // (Parm)
};

// Function TgClient.TgGameMoviePlayer.OnHUDStateChange
struct UTgGameMoviePlayer_OnHUDStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGameMoviePlayer.OnGameUIEvent
struct UTgGameMoviePlayer_OnGameUIEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClient.TgGameMoviePlayer.ProcessUIEvents
struct UTgGameMoviePlayer_ProcessUIEvents_Params
{
};

// Function TgClient.TgGameMoviePlayer.SetRenderTargetEnabled
struct UTgGameMoviePlayer_SetRenderTargetEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm)
	int                                                surfaceId;                                                // (Parm)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
	float                                              widthReal;                                                // (Parm)
	float                                              heightReal;                                               // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.GetClanData
struct UTgGameMoviePlayer_GetClanData_Params
{
	class UTgDataGroup_Clan*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.SetLoginReady
struct UTgGameMoviePlayer_SetLoginReady_Params
{
	bool                                               fromIntro;                                                // (OptionalParm, Parm)
};

// Function TgClient.TgGameMoviePlayer.ShowLoginUI
struct UTgGameMoviePlayer_ShowLoginUI_Params
{
};

// Function TgClient.TgGameMoviePlayer.ShowNormalUI
struct UTgGameMoviePlayer_ShowNormalUI_Params
{
};

// Function TgClient.TgGameMoviePlayer.SetHUDVisiblity
struct UTgGameMoviePlayer_SetHUDVisiblity_Params
{
};

// Function TgClient.TgGameMoviePlayer.USC_ShowLeaderboard
struct UTgGameMoviePlayer_USC_ShowLeaderboard_Params
{
	struct FString                                     sName;                                                    // (OptionalParm, Parm, NeedCtorLink)
	int                                                nValue;                                                   // (OptionalParm, Parm)
	int                                                nOption;                                                  // (OptionalParm, Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Unloaded
struct UTgGameMoviePlayer_usc_Scene_Manager_Scene_Unloaded_Params
{
	struct FString                                     sSceneName;                                               // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.usc_Scene_Manager_Scene_Loaded
struct UTgGameMoviePlayer_usc_Scene_Manager_Scene_Loaded_Params
{
	struct FString                                     sSceneName;                                               // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.usc_getItemData
struct UTgGameMoviePlayer_usc_getItemData_Params
{
	int                                                ItemId;                                                   // (Parm)
	int                                                quantityCount;                                            // (OptionalParm, Parm)
	int                                                vendorId;                                                 // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.usc_resize_browser
struct UTgGameMoviePlayer_usc_resize_browser_Params
{
	int                                                surfaceId;                                                // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	float                                              widthReal;                                                // (Parm)
	float                                              heightReal;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.usc_enable_browser_input
struct UTgGameMoviePlayer_usc_enable_browser_input_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function TgClient.TgGameMoviePlayer.UnloadHudSection
struct UTgGameMoviePlayer_UnloadHudSection_Params
{
	struct FString                                     Section;                                                  // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.usc_rejectNotification
struct UTgGameMoviePlayer_usc_rejectNotification_Params
{
	int                                                nNotificationType;                                        // (Parm)
	int                                                nId;                                                      // (Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_acceptNotification
struct UTgGameMoviePlayer_usc_acceptNotification_Params
{
	int                                                nNotificationType;                                        // (Parm)
	int                                                nId;                                                      // (Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_test_voice_pack
struct UTgGameMoviePlayer_usc_test_voice_pack_Params
{
	int                                                nVoicePackId;                                             // (Parm)
	int                                                nSkinId;                                                  // (Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_show_skin
struct UTgGameMoviePlayer_usc_show_skin_Params
{
	int                                                nSkinId;                                                  // (Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_request_treasure_roll
struct UTgGameMoviePlayer_usc_request_treasure_roll_Params
{
	int                                                nItemId;                                                  // (Parm)
	int                                                CurrencyType;                                             // (OptionalParm, Parm)
};

// Function TgClient.TgGameMoviePlayer.is_item_owned
struct UTgGameMoviePlayer_is_item_owned_Params
{
	int                                                ItemId;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.usc_is_item_owned
struct UTgGameMoviePlayer_usc_is_item_owned_Params
{
	struct FString                                     ItemId;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.usc_unregister_mouse_region
struct UTgGameMoviePlayer_usc_unregister_mouse_region_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.usc_register_mouse_region
struct UTgGameMoviePlayer_usc_register_mouse_region_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
	int                                                Width;                                                    // (Parm)
	int                                                Height;                                                   // (Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_is_in_game
struct UTgGameMoviePlayer_usc_is_in_game_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.EndLobbyPlayback
struct UTgGameMoviePlayer_EndLobbyPlayback_Params
{
};

// Function TgClient.TgGameMoviePlayer.CancelPlayback
struct UTgGameMoviePlayer_CancelPlayback_Params
{
};

// Function TgClient.TgGameMoviePlayer.OnDemoReady
struct UTgGameMoviePlayer_OnDemoReady_Params
{
};

// Function TgClient.TgGameMoviePlayer.usc_match_can_purchase_random_class
struct UTgGameMoviePlayer_usc_match_can_purchase_random_class_Params
{
	int                                                nQueueId;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.usc_viewStatsOnline
struct UTgGameMoviePlayer_usc_viewStatsOnline_Params
{
	struct FString                                     sInstanceId;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.usc_close_eom_lobby
struct UTgGameMoviePlayer_usc_close_eom_lobby_Params
{
	int                                                nNavigationTarget;                                        // (OptionalParm, Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_can_play_again
struct UTgGameMoviePlayer_usc_can_play_again_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.usc_match_choose_skin
struct UTgGameMoviePlayer_usc_match_choose_skin_Params
{
	int                                                nSkinId;                                                  // (Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_match_choose_class
struct UTgGameMoviePlayer_usc_match_choose_class_Params
{
	int                                                nClassId;                                                 // (Parm)
};

// Function TgClient.TgGameMoviePlayer.USC_SelectedPopup
struct UTgGameMoviePlayer_USC_SelectedPopup_Params
{
	int                                                nActionId;                                                // (Parm)
	struct FString                                     sInputValue;                                              // (Parm, NeedCtorLink)
	struct FString                                     sSecondaryInputValue;                                     // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.FakeItemToast
struct UTgGameMoviePlayer_FakeItemToast_Params
{
	int                                                nItemId;                                                  // (Parm)
};

// Function TgClient.TgGameMoviePlayer.CloseChatTab
struct UTgGameMoviePlayer_CloseChatTab_Params
{
	int                                                nChannel;                                                 // (Parm)
	struct FString                                     sSender;                                                  // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.OpenChatTab
struct UTgGameMoviePlayer_OpenChatTab_Params
{
	int                                                nChannel;                                                 // (Parm)
	bool                                               bForce;                                                   // (OptionalParm, Parm)
};

// Function TgClient.TgGameMoviePlayer.ShowGodPackPurchase
struct UTgGameMoviePlayer_ShowGodPackPurchase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.usc_CheckForLoginErrorMsg
struct UTgGameMoviePlayer_usc_CheckForLoginErrorMsg_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.LeavePartyNotification
struct UTgGameMoviePlayer_LeavePartyNotification_Params
{
};

// Function TgClient.TgGameMoviePlayer.DisbandPartyNotification
struct UTgGameMoviePlayer_DisbandPartyNotification_Params
{
};

// Function TgClient.TgGameMoviePlayer.GotoSendGift
struct UTgGameMoviePlayer_GotoSendGift_Params
{
	struct FPointer                                    pPID;                                                     // (Parm)
};

// Function TgClient.TgGameMoviePlayer.GotoItem
struct UTgGameMoviePlayer_GotoItem_Params
{
	int                                                nItemId;                                                  // (Parm)
	int                                                nReturnToTarget;                                          // (OptionalParm, Parm)
	int                                                nReturnToEvent;                                           // (OptionalParm, Parm)
	bool                                               bUseAltRedirect;                                          // (OptionalParm, Parm)
};

// Function TgClient.TgGameMoviePlayer.usc_getBoostedTime
struct UTgGameMoviePlayer_usc_getBoostedTime_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.UnregisterWebPageRegion
struct UTgGameMoviePlayer_UnregisterWebPageRegion_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.RegisterWebPageRegion
struct UTgGameMoviePlayer_RegisterWebPageRegion_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	bool                                               bWidescreen;                                              // (Parm)
	int                                                nStreamId;                                                // (Parm)
	struct FString                                     sUrl;                                                     // (Parm, NeedCtorLink)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	float                                              realWidth;                                                // (Parm)
	float                                              realHeight;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGameMoviePlayer.USC_OpenInternalBrowser
struct UTgGameMoviePlayer_USC_OpenInternalBrowser_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.USC_OpenExternalBrowser
struct UTgGameMoviePlayer_USC_OpenExternalBrowser_Params
{
	struct FString                                     externalURL;                                              // (Parm, NeedCtorLink)
};

// Function TgClient.TgGameMoviePlayer.LoadBrowserScene
struct UTgGameMoviePlayer_LoadBrowserScene_Params
{
};

// Function TgClient.TgGfxChatInput.OnGameUIEvent
struct UTgGfxChatInput_OnGameUIEvent_Params
{
	class UTgEventDataItem*                            pEvt;                                                     // (Parm)
};

// Function TgClient.TgGfxChatInput.ReceiveGFxData
struct UTgGfxChatInput_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClient.TgGfxChatInput.Uninitialize
struct UTgGfxChatInput_Uninitialize_Params
{
};

// Function TgClient.TgGfxChatInput.Initialize
struct UTgGfxChatInput_Initialize_Params
{
	class UTgMoviePlayer*                              pMP;                                                      // (Parm)
};

// Function TgClient.TgSpectatorHUD.ToggleHUD
struct ATgSpectatorHUD_ToggleHUD_Params
{
};

// Function TgClient.TgSpectatorHUD.Tick
struct ATgSpectatorHUD_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClient.TgSpectatorHUD.GetGameState
struct ATgSpectatorHUD_GetGameState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgSpectatorHUD.SetVisibilityMode
struct ATgSpectatorHUD_SetVisibilityMode_Params
{
	TEnumAsByte<ETgClientVisibilityMode>               Mode;                                                     // (Parm)
};

// Function TgClient.TgSpectatorHUD.ToggleVisibilityMode
struct ATgSpectatorHUD_ToggleVisibilityMode_Params
{
};

// Function TgClient.TgSpectatorHUD.ShowPreviousInfoPanel
struct ATgSpectatorHUD_ShowPreviousInfoPanel_Params
{
};

// Function TgClient.TgSpectatorHUD.ShowNextInfoPanel
struct ATgSpectatorHUD_ShowNextInfoPanel_Params
{
};

// Function TgClient.TgSpectatorHUD.ToggleStatPanel
struct ATgSpectatorHUD_ToggleStatPanel_Params
{
};

// Function TgClient.TgSpectatorHUD.ShowPreviousStatPanel
struct ATgSpectatorHUD_ShowPreviousStatPanel_Params
{
};

// Function TgClient.TgSpectatorHUD.ShowNextStatPanel
struct ATgSpectatorHUD_ShowNextStatPanel_Params
{
};

// Function TgClient.TgSpectatorHUD.UpdatePlayerStatUI
struct ATgSpectatorHUD_UpdatePlayerStatUI_Params
{
	class ATgPawn*                                     changedPawn;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgSpectatorHUD.SetStatIndex
struct ATgSpectatorHUD_SetStatIndex_Params
{
	int                                                StatIndex;                                                // (Parm)
};

// Function TgClient.TgSpectatorHUD.SpectatorShowAll
struct ATgSpectatorHUD_SpectatorShowAll_Params
{
};

// Function TgClient.TgSpectatorHUD.SpectatorHideBottomHalf
struct ATgSpectatorHUD_SpectatorHideBottomHalf_Params
{
};

// Function TgClient.TgSpectatorHUD.SpectatorHideAll
struct ATgSpectatorHUD_SpectatorHideAll_Params
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorGameStats
struct ATgSpectatorHUD_ToggleSpectatorGameStats_Params
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorMinimap
struct ATgSpectatorHUD_ToggleSpectatorMinimap_Params
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerPanels
struct ATgSpectatorHUD_ToggleSpectatorPlayerPanels_Params
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorObjectives
struct ATgSpectatorHUD_ToggleSpectatorObjectives_Params
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorTimeline
struct ATgSpectatorHUD_ToggleSpectatorTimeline_Params
{
};

// Function TgClient.TgSpectatorHUD.ToggleSecretMessage
struct ATgSpectatorHUD_ToggleSecretMessage_Params
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorControls
struct ATgSpectatorHUD_ToggleSpectatorControls_Params
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorPlayerInformation
struct ATgSpectatorHUD_ToggleSpectatorPlayerInformation_Params
{
};

// Function TgClient.TgSpectatorHUD.ToggleSpectatorTicker
struct ATgSpectatorHUD_ToggleSpectatorTicker_Params
{
};

// Function TgClient.TgSpectatorHUD.SetSpectatorMode
struct ATgSpectatorHUD_SetSpectatorMode_Params
{
	int                                                nNum;                                                     // (Parm)
};

// Function TgClient.TgSpectatorHUD.ToggleBans
struct ATgSpectatorHUD_ToggleBans_Params
{
};

// Function TgClient.TgSpectatorHUD.EndMission
struct ATgSpectatorHUD_EndMission_Params
{
	bool                                               bPlayerAttacker;                                          // (Parm)
	TEnumAsByte<EGAME_WIN_STATE>                       finalWinState;                                            // (Parm)
};

// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewMode
struct ATgSpectatorHUD_UpdateSpectatorViewMode_Params
{
	TEnumAsByte<ETgClientVisibilityMode>               Mode;                                                     // (Parm)
};

// Function TgClient.TgSpectatorHUD.UpdateSpectatorViewTarget
struct ATgSpectatorHUD_UpdateSpectatorViewTarget_Params
{
	class AActor*                                      Target;                                                   // (Parm)
};

// Function TgClient.TgSpectatorHUD.GetVisibilityMode
struct ATgSpectatorHUD_GetVisibilityMode_Params
{
	TEnumAsByte<ETgClientVisibilityMode>               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateClanNameFormat
struct UTgClanDC_ClanStats_usc_UpdateClanNameFormat_Params
{
	int                                                nIndex;                                                   // (Parm)
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateTag
struct UTgClanDC_ClanStats_usc_UpdateTag_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClient.TgClanDC_ClanStats.usc_ApplicationAction
struct UTgClanDC_ClanStats_usc_ApplicationAction_Params
{
	int                                                nAction;                                                  // (Parm)
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateRecruiting
struct UTgClanDC_ClanStats_usc_UpdateRecruiting_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
	bool                                               bIsRecruiting;                                            // (Parm)
};

// Function TgClient.TgClanDC_ClanStats.usc_UpdateMessage
struct UTgClanDC_ClanStats_usc_UpdateMessage_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
	bool                                               bIsDaily;                                                 // (Parm)
};

// Function TgClient.TgClanDC_ClanStats.OnFilterResult
struct UTgClanDC_ClanStats_OnFilterResult_Params
{
	struct FString                                     sOriginal;                                                // (Parm, NeedCtorLink)
	struct FString                                     sFiltered;                                                // (Parm, NeedCtorLink)
	bool                                               bTotalCensor;                                             // (Parm)
};

// Function TgClient.TgClanDC_ClanStats.UpdateRecruiting
struct UTgClanDC_ClanStats_UpdateRecruiting_Params
{
	struct FString                                     sDesc;                                                    // (Parm, NeedCtorLink)
	bool                                               bIsRecruiting;                                            // (Parm)
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanMOTD
struct UTgClanDC_ClanStats_UpdateClanMOTD_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanDesc
struct UTgClanDC_ClanStats_UpdateClanDesc_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanName
struct UTgClanDC_ClanStats_UpdateClanName_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function TgClient.TgClanDC_ClanStats.UpdateClanData
struct UTgClanDC_ClanStats_UpdateClanData_Params
{
};

// Function TgClient.TgClanDC_ClanStats.InitializeData
struct UTgClanDC_ClanStats_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgClanDC_Roster.usc_UpdateComment
struct UTgClanDC_Roster_usc_UpdateComment_Params
{
	struct FString                                     nPlayerId;                                                // (Parm, NeedCtorLink)
	struct FString                                     sComment;                                                 // (Parm, NeedCtorLink)
	bool                                               isOfficerNote;                                            // (Parm)
};

// Function TgClient.TgClanDC_Roster.usc_ClanAction
struct UTgClanDC_Roster_usc_ClanAction_Params
{
	int                                                nAction;                                                  // (Parm)
	struct FString                                     nPlayerId;                                                // (Parm, NeedCtorLink)
};

// Function TgClient.TgClanDC_Roster.InitializeData
struct UTgClanDC_Roster_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgClanDC_Settings.usc_UpdateLeader
struct UTgClanDC_Settings_usc_UpdateLeader_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function TgClient.TgClanDC_Settings.usc_UpdateRank
struct UTgClanDC_Settings_usc_UpdateRank_Params
{
	float                                              RankId;                                                   // (Parm)
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	float                                              rankPermission;                                           // (Parm)
};

// Function TgClient.TgClanDC_Settings.UpdateRankArray
struct UTgClanDC_Settings_UpdateRankArray_Params
{
};

// Function TgClient.TgClanDC_Settings.InitializeData
struct UTgClanDC_Settings_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgDataGroup_Clan.InitializeData
struct UTgDataGroup_Clan_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClient.TgGfxEventPurchase.ShowOutOfCurrency
struct UTgGfxEventPurchase_ShowOutOfCurrency_Params
{
	int                                                CurrencyType;                                             // (Parm)
};

// Function TgClient.TgGfxEventPurchase.SubmitPurchase
struct UTgGfxEventPurchase_SubmitPurchase_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
};

// Function TgClient.TgGfxEventPurchase.GetItemInfo
struct UTgGfxEventPurchase_GetItemInfo_Params
{
	int                                                ItemId;                                                   // (Parm)
};

// Function TgClient.TgGfxEventPurchase.ReceiveGFxData
struct UTgGfxEventPurchase_ReceiveGFxData_Params
{
	class UGFxObject*                                  theObject;                                                // (Parm)
};

// Function TgClient.TgGfxEventPurchase.Initialize
struct UTgGfxEventPurchase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgGFxEventQuestNotification.USC_GetOptOut
struct UTgGFxEventQuestNotification_USC_GetOptOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGFxEventQuestNotification.USC_GetOptOut_Delegate
struct UTgGFxEventQuestNotification_USC_GetOptOut_Delegate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGFxEventQuestNotification.ReceiveGFxData
struct UTgGFxEventQuestNotification_ReceiveGFxData_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
};

// Function TgClient.TgGFxEventQuestNotification.RedirectToFirstQuest
struct UTgGFxEventQuestNotification_RedirectToFirstQuest_Params
{
};

// Function TgClient.TgGFxEventQuestNotification.UpdateNotifySetting
struct UTgGFxEventQuestNotification_UpdateNotifySetting_Params
{
	bool                                               bDisable;                                                 // (Parm)
};

// Function TgClient.TgGFxEventQuestNotification.GetHasAvailableSpecialEventQuest
struct UTgGFxEventQuestNotification_GetHasAvailableSpecialEventQuest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgGFxEventQuestNotification.Uninitialize
struct UTgGFxEventQuestNotification_Uninitialize_Params
{
};

// Function TgClient.TgGFxEventQuestNotification.Initialize
struct UTgGFxEventQuestNotification_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClient.TgLobbyHUD.SetInitialState
struct ATgLobbyHUD_SetInitialState_Params
{
};

// Function TgClient.TgLobbyHUD.IsCurrentCameraMatchLobby
struct ATgLobbyHUD_IsCurrentCameraMatchLobby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgLobbyHUD.GetMatchLobbyCameraName
struct ATgLobbyHUD_GetMatchLobbyCameraName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClient.TgLobbyHUD.OnClassSelected
struct ATgLobbyHUD_OnClassSelected_Params
{
	int                                                nClassId;                                                 // (Parm)
	int                                                nSkinId;                                                  // (OptionalParm, Parm)
	bool                                               bChangedClass;                                            // (OptionalParm, Parm)
	bool                                               bChangedSkin;                                             // (OptionalParm, Parm)
};

// Function TgClient.TgLobbyHUD.AsynchNotifies
struct ATgLobbyHUD_AsynchNotifies_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
