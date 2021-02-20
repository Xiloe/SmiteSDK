#pragma once

// SMITE (8.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SM_TgClientBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TgClientBase.TgAnnouncerPreviewer.PreviewAnnouncerByItemId
struct UTgAnnouncerPreviewer_PreviewAnnouncerByItemId_Params
{
	int                                                nItemId;                                                  // (Parm)
	bool                                               bAsync;                                                   // (OptionalParm, Parm)
};

// Function TgClientBase.TgAnnouncerPreviewer.OnAnnouncerLoaded
struct UTgAnnouncerPreviewer_OnAnnouncerLoaded_Params
{
};

// Function TgClientBase.TgAnnouncerPreviewer.Init
struct UTgAnnouncerPreviewer_Init_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_PauseGame
struct UTgMoviePlayer_usc_PauseGame_Params
{
	bool                                               shouldPause;                                              // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_minimap_hovered
struct UTgMoviePlayer_usc_minimap_hovered_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_minimap_pinged
struct UTgMoviePlayer_usc_minimap_pinged_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	struct FString                                     Type;                                                     // (Parm, NeedCtorLink)
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_PauseGameToggle
struct UTgMoviePlayer_usc_PauseGameToggle_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_isAllowedPause
struct UTgMoviePlayer_usc_isAllowedPause_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.IsAccountPickerOpen
struct UTgMoviePlayer_IsAccountPickerOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_ShowContentPurchaseUI
struct UTgMoviePlayer_usc_ShowContentPurchaseUI_Params
{
	struct FString                                     SignedOffer;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.GetAvailableProducts
struct UTgMoviePlayer_GetAvailableProducts_Params
{
	int                                                nControllerId;                                            // (Parm)
	TEnumAsByte<EMediaItemType>                        MediaType;                                                // (Parm)
	TArray<struct FMarketplaceProductDetails>          Products;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.ShowContentPurchaseUI
struct UTgMoviePlayer_ShowContentPurchaseUI_Params
{
	struct FString                                     SingedOffer;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.GetInventoryItems
struct UTgMoviePlayer_GetInventoryItems_Params
{
	TArray<struct FMarketplaceInventoryItem>           InventoryItems;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.CanShowContentPurchaseUI
struct UTgMoviePlayer_CanShowContentPurchaseUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.UnregisterLocalTalker
struct UTgMoviePlayer_UnregisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ChannelIndex;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.RegisterLocalTalker
struct UTgMoviePlayer_RegisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ChannelIndex;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.ShowNotification
struct UTgMoviePlayer_ShowNotification_Params
{
	int                                                nType;                                                    // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Message2;                                                 // (OptionalParm, Parm, NeedCtorLink)
	class UGFxObject*                                  Data;                                                     // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.HideNotification
struct UTgMoviePlayer_HideNotification_Params
{
	int                                                nType;                                                    // (Parm)
};

// Function TgClientBase.TgMoviePlayer.TestShowNotification
struct UTgMoviePlayer_TestShowNotification_Params
{
};

// Function TgClientBase.TgMoviePlayer.TestHideNotification
struct UTgMoviePlayer_TestHideNotification_Params
{
};

// Function TgClientBase.TgMoviePlayer.LogFocus
struct UTgMoviePlayer_LogFocus_Params
{
};

// Function TgClientBase.TgMoviePlayer.SetGamepadMode
struct UTgMoviePlayer_SetGamepadMode_Params
{
	bool                                               bIsGamepad;                                               // (Parm)
};

// Function TgClientBase.TgMoviePlayer.SetModal
struct UTgMoviePlayer_SetModal_Params
{
	class UGFxObject*                                  modalObj;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.ClearModal
struct UTgMoviePlayer_ClearModal_Params
{
};

// Function TgClientBase.TgMoviePlayer.EndLoading
struct UTgMoviePlayer_EndLoading_Params
{
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.StartLoading
struct UTgMoviePlayer_StartLoading_Params
{
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.GainFocus
struct UTgMoviePlayer_GainFocus_Params
{
	class UGFxObject*                                  focusObj;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.FindFocus
struct UTgMoviePlayer_FindFocus_Params
{
};

// Function TgClientBase.TgMoviePlayer.RegainFocus
struct UTgMoviePlayer_RegainFocus_Params
{
};

// Function TgClientBase.TgMoviePlayer.LostFocus
struct UTgMoviePlayer_LostFocus_Params
{
};

// Function TgClientBase.TgMoviePlayer.SetOnlineStatus
struct UTgMoviePlayer_SetOnlineStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     StatusString;                                             // (Parm, NeedCtorLink)
	bool                                               PlayerActive;                                             // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.DisableVideoRecording
struct UTgMoviePlayer_DisableVideoRecording_Params
{
};

// Function TgClientBase.TgMoviePlayer.EnableVideoRecording
struct UTgMoviePlayer_EnableVideoRecording_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_get_gamestate
struct UTgMoviePlayer_usc_get_gamestate_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.UIDebugModeEnd
struct UTgMoviePlayer_UIDebugModeEnd_Params
{
};

// Function TgClientBase.TgMoviePlayer.UIDebugModeWatch
struct UTgMoviePlayer_UIDebugModeWatch_Params
{
	struct FString                                     sPath;                                                    // (Parm, NeedCtorLink)
	int                                                nDrillInDepth;                                            // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.UIDebugModeNavigation
struct UTgMoviePlayer_UIDebugModeNavigation_Params
{
};

// Function TgClientBase.TgMoviePlayer.UIDebugModeHighlight
struct UTgMoviePlayer_UIDebugModeHighlight_Params
{
	bool                                               mousableOnly;                                             // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.ToggleAlienFX
struct UTgMoviePlayer_ToggleAlienFX_Params
{
};

// Function TgClientBase.TgMoviePlayer.FlashCaptureMouse
struct UTgMoviePlayer_FlashCaptureMouse_Params
{
};

// Function TgClientBase.TgMoviePlayer.FlashReleaseMouse
struct UTgMoviePlayer_FlashReleaseMouse_Params
{
};

// Function TgClientBase.TgMoviePlayer.ListOpenScenes
struct UTgMoviePlayer_ListOpenScenes_Params
{
};

// Function TgClientBase.TgMoviePlayer.CloseAllScenes
struct UTgMoviePlayer_CloseAllScenes_Params
{
};

// Function TgClientBase.TgMoviePlayer.EnableItemWarningPopup
struct UTgMoviePlayer_EnableItemWarningPopup_Params
{
};

// Function TgClientBase.TgMoviePlayer.DisableItemWarningPopup
struct UTgMoviePlayer_DisableItemWarningPopup_Params
{
};

// Function TgClientBase.TgMoviePlayer.ClosePartyInviteDialog
struct UTgMoviePlayer_ClosePartyInviteDialog_Params
{
};

// Function TgClientBase.TgMoviePlayer.DisplayLoginUI
struct UTgMoviePlayer_DisplayLoginUI_Params
{
};

// Function TgClientBase.TgMoviePlayer.ShouldBlockKey
struct UTgMoviePlayer_ShouldBlockKey_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_ClipboardCopy
struct UTgMoviePlayer_usc_ClipboardCopy_Params
{
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_ClipboardPaste
struct UTgMoviePlayer_usc_ClipboardPaste_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.OnPlayerCardComplete
struct UTgMoviePlayer_OnPlayerCardComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function TgClientBase.TgMoviePlayer.WidgetUnloaded
struct UTgMoviePlayer_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.WidgetInitialized
struct UTgMoviePlayer_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.ReadOnlinePlayerData
struct UTgMoviePlayer_ReadOnlinePlayerData_Params
{
	TArray<struct FString>                             PlayerIDs;                                                // (Parm, NeedCtorLink)
	bool                                               bIncludePresence;                                         // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.CleanupUC
struct UTgMoviePlayer_CleanupUC_Params
{
};

// Function TgClientBase.TgMoviePlayer.InitOSSRef
struct UTgMoviePlayer_InitOSSRef_Params
{
};

// Function TgClientBase.TgMoviePlayer.Init
struct UTgMoviePlayer_Init_Params
{
	class ULocalPlayer*                                LocPlay;                                                  // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.PostWidgetInit
struct UTgMoviePlayer_PostWidgetInit_Params
{
};

// Function TgClientBase.TgMoviePlayer.Tick
struct UTgMoviePlayer_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_findIndicesForCapitalSizeCharacters
struct UTgMoviePlayer_usc_findIndicesForCapitalSizeCharacters_Params
{
	struct FString                                     sourceText;                                               // (Parm, NeedCtorLink)
	class UGFxObject*                                  out_capitalIndices;                                       // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_report_player
struct UTgMoviePlayer_usc_report_player_Params
{
	struct FString                                     sPlayerName;                                              // (Parm, NeedCtorLink)
	int                                                nReasonCode;                                              // (Parm)
	struct FString                                     sReason;                                                  // (Parm, NeedCtorLink)
	int                                                nTaskForce;                                               // (OptionalParm, Parm)
	int                                                nPlayerCount;                                             // (OptionalParm, Parm)
	int                                                nReportedPlayerTaskForce;                                 // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.DebugSimulmediaVideoPlayer
struct UTgMoviePlayer_DebugSimulmediaVideoPlayer_Params
{
};

// Function TgClientBase.TgMoviePlayer.DebugIntroVideo
struct UTgMoviePlayer_DebugIntroVideo_Params
{
};

// Function TgClientBase.TgMoviePlayer.DebugActivities
struct UTgMoviePlayer_DebugActivities_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_GetAppSettings
struct UTgMoviePlayer_usc_GetAppSettings_Params
{
	struct FString                                     pSetting;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.OnClearCachedJoinChallengeTimer
struct UTgMoviePlayer_OnClearCachedJoinChallengeTimer_Params
{
};

// Function TgClientBase.TgMoviePlayer.OnJoinChallengePasswordPopup
struct UTgMoviePlayer_OnJoinChallengePasswordPopup_Params
{
	class UTgPagePopup*                                pData;                                                    // (Parm)
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.FlushKeyboardBinds
struct UTgMoviePlayer_FlushKeyboardBinds_Params
{
};

// Function TgClientBase.TgMoviePlayer.ToggleInputConfirm
struct UTgMoviePlayer_ToggleInputConfirm_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function TgClientBase.TgMoviePlayer.TestInputHud
struct UTgMoviePlayer_TestInputHud_Params
{
	bool                                               isGamePad;                                                // (Parm)
};

// Function TgClientBase.TgMoviePlayer.ForcePSPlus
struct UTgMoviePlayer_ForcePSPlus_Params
{
	bool                                               bShouldForce;                                             // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_MuteVivoxPlayer
struct UTgMoviePlayer_usc_MuteVivoxPlayer_Params
{
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
	bool                                               Toggle;                                                   // (Parm)
	struct FString                                     sPlatformId;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.OnReferralSelected
struct UTgMoviePlayer_OnReferralSelected_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_GetFinalInputMatchSetting
struct UTgMoviePlayer_usc_GetFinalInputMatchSetting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_GetFinalCrossplaySetting
struct UTgMoviePlayer_usc_GetFinalCrossplaySetting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.ShowGodPackPurchase
struct UTgMoviePlayer_ShowGodPackPurchase_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetOwnsGodPack
struct UTgMoviePlayer_GetOwnsGodPack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.DestroyVideoPlayer
struct UTgMoviePlayer_DestroyVideoPlayer_Params
{
};

// Function TgClientBase.TgMoviePlayer.OnVideoError
struct UTgMoviePlayer_OnVideoError_Params
{
	class APComVideoPlayer*                            VideoPlayer;                                              // (Parm)
	TEnumAsByte<EPComVideoPlayerError>                 ErrorCode;                                                // (Parm)
};

// Function TgClientBase.TgMoviePlayer.SpawnVideoPlayer
struct UTgMoviePlayer_SpawnVideoPlayer_Params
{
	class AActor*                                      SpawningActor;                                            // (Parm)
};

// Function TgClientBase.TgMoviePlayer.PrintUIGameInputIntercepts
struct UTgMoviePlayer_PrintUIGameInputIntercepts_Params
{
};

// Function TgClientBase.TgMoviePlayer.PrintInputCaptures
struct UTgMoviePlayer_PrintInputCaptures_Params
{
};

// Function TgClientBase.TgMoviePlayer.PrintFocusStack
struct UTgMoviePlayer_PrintFocusStack_Params
{
};

// Function TgClientBase.TgMoviePlayer.PrintGameInfo
struct UTgMoviePlayer_PrintGameInfo_Params
{
};

// Function TgClientBase.TgMoviePlayer.NativeVideoPlayerDestroy
struct UTgMoviePlayer_NativeVideoPlayerDestroy_Params
{
};

// Function TgClientBase.TgMoviePlayer.HandleVideoPlayerErrorCallback
struct UTgMoviePlayer_HandleVideoPlayerErrorCallback_Params
{
	class APComVideoPlayer*                            VideoPlayer;                                              // (Parm)
	TEnumAsByte<EPComVideoPlayerError>                 ErrorCode;                                                // (Parm)
};

// Function TgClientBase.TgMoviePlayer.CheckForGlobalKeyInput
struct UTgMoviePlayer_CheckForGlobalKeyInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.OnToggleSkillScreen
struct UTgMoviePlayer_OnToggleSkillScreen_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.OnVendorStoreToggle
struct UTgMoviePlayer_OnVendorStoreToggle_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.OnVendorStoreClose
struct UTgMoviePlayer_OnVendorStoreClose_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.OnVendorStoreOpen
struct UTgMoviePlayer_OnVendorStoreOpen_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_NativeLog
struct UTgMoviePlayer_usc_NativeLog_Params
{
	struct FString                                     sValue;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_getIsGamePadInput
struct UTgMoviePlayer_usc_getIsGamePadInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_saveTransformSettings
struct UTgMoviePlayer_usc_saveTransformSettings_Params
{
	struct FString                                     TransformSettings;                                        // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_loadTransformSettings
struct UTgMoviePlayer_usc_loadTransformSettings_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.OnVideoPlaybackEnded
struct UTgMoviePlayer_OnVideoPlaybackEnded_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_ShowKeyboardUI
struct UTgMoviePlayer_usc_ShowKeyboardUI_Params
{
	class UGFxObject*                                  FocusedTextField;                                         // (Parm)
	struct FString                                     TitleText;                                                // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (Parm, NeedCtorLink)
	bool                                               bIsPassword;                                              // (OptionalParm, Parm)
	bool                                               bShouldValidate;                                          // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                              // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_HideKeyboardUI
struct UTgMoviePlayer_usc_HideKeyboardUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_IsShowingKeyboardUI
struct UTgMoviePlayer_usc_IsShowingKeyboardUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.OnResolveChatMessage
struct UTgMoviePlayer_OnResolveChatMessage_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	class UTgPlayerNameManager*                        pManager;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.OpenPurchaseGems
struct UTgMoviePlayer_OpenPurchaseGems_Params
{
	struct FString                                     SKUCode;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.ClaimPendingChatMessages
struct UTgMoviePlayer_ClaimPendingChatMessages_Params
{
	TArray<class UTgChatData*>                         out_arrData;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.ShowHudChatMessage
struct UTgMoviePlayer_ShowHudChatMessage_Params
{
	class UTgChatData*                                 pData;                                                    // (Parm)
};

// Function TgClientBase.TgMoviePlayer.TestShowMessage
struct UTgMoviePlayer_TestShowMessage_Params
{
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.gfxProcessSound
struct UTgMoviePlayer_gfxProcessSound_Params
{
	struct FName                                       aThemeName;                                               // (Parm)
	struct FName                                       aEventName;                                               // (Parm)
};

// Function TgClientBase.TgMoviePlayer.OnBattlePassToastUpdate
struct UTgMoviePlayer_OnBattlePassToastUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.OnInputModeChanged
struct UTgMoviePlayer_OnInputModeChanged_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.HandleClanPlayerInviteUpdates
struct UTgMoviePlayer_HandleClanPlayerInviteUpdates_Params
{
	struct FPointer                                    pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_send_chat
struct UTgMoviePlayer_usc_send_chat_Params
{
	int                                                nChannel;                                                 // (Parm)
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
	struct FString                                     Recipient;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_can_view_ugc
struct UTgMoviePlayer_usc_can_view_ugc_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.ASC_ShowFriendsUI
struct UTgMoviePlayer_ASC_ShowFriendsUI_Params
{
};

// Function TgClientBase.TgMoviePlayer.SetupPurchaseWithProductId
struct UTgMoviePlayer_SetupPurchaseWithProductId_Params
{
	struct FString                                     sProductId;                                               // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.ClaimGift
struct UTgMoviePlayer_ClaimGift_Params
{
	struct FString                                     nAcqId;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.TestListPendingGifts
struct UTgMoviePlayer_TestListPendingGifts_Params
{
};

// Function TgClientBase.TgMoviePlayer.TestSendGift
struct UTgMoviePlayer_TestSendGift_Params
{
	int                                                nPlayerId;                                                // (Parm)
	int                                                nMessageIndex;                                            // (Parm)
	bool                                               bAnon;                                                    // (Parm)
};

// Function TgClientBase.TgMoviePlayer.FixLocalizationKeybinds
struct UTgMoviePlayer_FixLocalizationKeybinds_Params
{
	struct FString                                     sMsg;                                                     // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.GetPlayerData
struct UTgMoviePlayer_GetPlayerData_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	class UTgGFxPlayerData*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.AttemptToJoinTutorial
struct UTgMoviePlayer_AttemptToJoinTutorial_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClientBase.TgMoviePlayer.CallPrivilegeDelegate
struct UTgMoviePlayer_CallPrivilegeDelegate_Params
{
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	TEnumAsByte<EFeaturePrivilege>                     ePriv;                                                    // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ePermiss;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.CheckOnlinePrivileges
struct UTgMoviePlayer_CheckOnlinePrivileges_Params
{
	TEnumAsByte<EFeaturePrivilege>                     ePriv;                                                    // (Parm)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.CancelCheckOnlinePrivileges
struct UTgMoviePlayer_CancelCheckOnlinePrivileges_Params
{
	class UObject*                                     pScope;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.OnVGSCustomMessage
struct UTgMoviePlayer_OnVGSCustomMessage_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	struct FString                                     sText;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.TryEstablishPlatformSession
struct UTgMoviePlayer_TryEstablishPlatformSession_Params
{
	struct FPointer                                    pMarshal;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.OnForceMatchDataUpdate
struct UTgMoviePlayer_OnForceMatchDataUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.OnMatchDataChange
struct UTgMoviePlayer_OnMatchDataChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.ReceiveMatchData
struct UTgMoviePlayer_ReceiveMatchData_Params
{
	struct FPointer                                    pMarshal;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.UnregisterLocalPlayerForVoice
struct UTgMoviePlayer_UnregisterLocalPlayerForVoice_Params
{
	unsigned char                                      ChannelIndex;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.RegisterLocalPlayerForVoice
struct UTgMoviePlayer_RegisterLocalPlayerForVoice_Params
{
	unsigned char                                      ChannelIndex;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.UpdateCameraBasedOnNavAction
struct UTgMoviePlayer_UpdateCameraBasedOnNavAction_Params
{
};

// Function TgClientBase.TgMoviePlayer.EquipLoadoutItem
struct UTgMoviePlayer_EquipLoadoutItem_Params
{
	int                                                nItemId;                                                  // (Parm)
};

// Function TgClientBase.TgMoviePlayer.NavigateTo
struct UTgMoviePlayer_NavigateTo_Params
{
	struct FNavParams                                  Params;                                                   // (Const, Parm, OutParm)
};

// Function TgClientBase.TgMoviePlayer.HandleEscapeKey
struct UTgMoviePlayer_HandleEscapeKey_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_goto_item
struct UTgMoviePlayer_usc_goto_item_Params
{
	int                                                nItemId;                                                  // (Parm)
	bool                                               bUseAltRedirect;                                          // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.GotoItem
struct UTgMoviePlayer_GotoItem_Params
{
	int                                                nItemId;                                                  // (Parm)
	int                                                nReturnToTarget;                                          // (OptionalParm, Parm)
	int                                                nReturnToEvent;                                           // (OptionalParm, Parm)
	bool                                               bUseAltRedirect;                                          // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.RedirectToItemObtainLocation
struct UTgMoviePlayer_RedirectToItemObtainLocation_Params
{
	int                                                nItemId;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.ShowGodVideo
struct UTgMoviePlayer_ShowGodVideo_Params
{
	int                                                nGodVideoId;                                              // (Parm)
	struct FString                                     sGodVideoUrl;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.goto_lobby
struct UTgMoviePlayer_goto_lobby_Params
{
	bool                                               bAtEOM;                                                   // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.GetRoot
struct UTgMoviePlayer_GetRoot_Params
{
	class UTgGFxObject*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetWidget
struct UTgMoviePlayer_GetWidget_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.TestMatchLobby
struct UTgMoviePlayer_TestMatchLobby_Params
{
	int                                                nQueue;                                                   // (OptionalParm, Parm)
	bool                                               bPreSelect;                                               // (OptionalParm, Parm)
	int                                                nTeamCount;                                               // (OptionalParm, Parm)
	int                                                nPlayerPerTeam;                                           // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.GetHUDTeamName
struct UTgMoviePlayer_GetHUDTeamName_Params
{
	bool                                               bEnemy;                                                   // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.SetLanguage
struct UTgMoviePlayer_SetLanguage_Params
{
};

// Function TgClientBase.TgMoviePlayer.ShowLoginMessage
struct UTgMoviePlayer_ShowLoginMessage_Params
{
	struct FString                                     sMsg;                                                     // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.ShowLoginUI
struct UTgMoviePlayer_ShowLoginUI_Params
{
};

// Function TgClientBase.TgMoviePlayer.ShowNormalUI
struct UTgMoviePlayer_ShowNormalUI_Params
{
};

// Function TgClientBase.TgMoviePlayer.GetAndClearLastLoginError
struct UTgMoviePlayer_GetAndClearLastLoginError_Params
{
	struct FIntStringPair                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.TestClearDeferBlacklist
struct UTgMoviePlayer_TestClearDeferBlacklist_Params
{
};

// Function TgClientBase.TgMoviePlayer.TestAddDeferBlacklistEntry
struct UTgMoviePlayer_TestAddDeferBlacklistEntry_Params
{
	int                                                newEntry;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.TestDeferBlacklist
struct UTgMoviePlayer_TestDeferBlacklist_Params
{
	bool                                               bQueue;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.TestShowPopupModal
struct UTgMoviePlayer_TestShowPopupModal_Params
{
	int                                                nType;                                                    // (Parm)
};

// Function TgClientBase.TgMoviePlayer.TestSendPlayerTrackingEvent
struct UTgMoviePlayer_TestSendPlayerTrackingEvent_Params
{
	int                                                nEvent;                                                   // (Parm)
	int                                                nSubEvent;                                                // (Parm)
	struct FString                                     sRefName;                                                 // (Parm, NeedCtorLink)
	int                                                nRefValue;                                                // (Parm)
};

// Function TgClientBase.TgMoviePlayer.TestPurchaseClanNameChange
struct UTgMoviePlayer_TestPurchaseClanNameChange_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	struct FString                                     sTag;                                                     // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.TestShowAcquisition
struct UTgMoviePlayer_TestShowAcquisition_Params
{
	int                                                nType;                                                    // (Parm)
	int                                                nLootId;                                                  // (Parm)
};

// Function TgClientBase.TgMoviePlayer.SendCloseAllPopup
struct UTgMoviePlayer_SendCloseAllPopup_Params
{
};

// Function TgClientBase.TgMoviePlayer.SendClosePopup
struct UTgMoviePlayer_SendClosePopup_Params
{
};

// Function TgClientBase.TgMoviePlayer.SendOpenPopup
struct UTgMoviePlayer_SendOpenPopup_Params
{
	class UTgPagePopup*                                pPopup;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.SetSceneLoadPermissions
struct UTgMoviePlayer_SetSceneLoadPermissions_Params
{
	struct Fdword                                      fPermiss;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.PlayerLoginError
struct UTgMoviePlayer_PlayerLoginError_Params
{
	int                                                nError;                                                   // (Parm)
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.SetLoginReady
struct UTgMoviePlayer_SetLoginReady_Params
{
	bool                                               fromIntro;                                                // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.OnLobbyStateChange
struct UTgMoviePlayer_OnLobbyStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.OnHUDStateChange
struct UTgMoviePlayer_OnHUDStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.OnSpectateFail
struct UTgMoviePlayer_OnSpectateFail_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.USC_GetCurrencyName
struct UTgMoviePlayer_USC_GetCurrencyName_Params
{
	int                                                nCurrencyValidValue;                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_getConsolePlatform
struct UTgMoviePlayer_usc_getConsolePlatform_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_isConsole
struct UTgMoviePlayer_usc_isConsole_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.AttemptAutoLogin
struct UTgMoviePlayer_AttemptAutoLogin_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_acceptEULA
struct UTgMoviePlayer_usc_acceptEULA_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_createPlayerName
struct UTgMoviePlayer_usc_createPlayerName_Params
{
	struct FString                                     sLoginName;                                               // (Parm, NeedCtorLink)
	struct FString                                     sPass;                                                    // (Parm, NeedCtorLink)
	struct FString                                     sNewPlayerName;                                           // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.USC_Login
struct UTgMoviePlayer_USC_Login_Params
{
	struct FString                                     sUsername;                                                // (Parm, NeedCtorLink)
	struct FString                                     sPassword;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.USC_LoginExits
struct UTgMoviePlayer_USC_LoginExits_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_isLoginReady
struct UTgMoviePlayer_usc_isLoginReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.USC_ShowEndOfMatch
struct UTgMoviePlayer_USC_ShowEndOfMatch_Params
{
	bool                                               bShow;                                                    // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.UpdateVoiceChatPlayer
struct UTgMoviePlayer_UpdateVoiceChatPlayer_Params
{
	struct FString                                     sPId;                                                     // (Parm, NeedCtorLink)
	bool                                               bIsActive;                                                // (Parm)
	bool                                               bIsSpeaking;                                              // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_toggle_voice_mute
struct UTgMoviePlayer_usc_toggle_voice_mute_Params
{
	struct FString                                     sConsoleId;                                               // (Parm, NeedCtorLink)
	int                                                nPortalType;                                              // (Parm)
	struct FString                                     sPlayerName;                                              // (Parm, NeedCtorLink)
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
	bool                                               bMute;                                                    // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_toggle_player_mute
struct UTgMoviePlayer_usc_toggle_player_mute_Params
{
	struct FString                                     ConsoleIdString;                                          // (Parm, NeedCtorLink)
	struct FString                                     PlayerName;                                               // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     sPlayerId;                                                // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_add_to_party
struct UTgMoviePlayer_usc_add_to_party_Params
{
	struct FString                                     sConsoleId;                                               // (Parm, NeedCtorLink)
	int                                                nPortalType;                                              // (Parm)
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
	struct FString                                     sPlayerName;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_can_invite_to_party
struct UTgMoviePlayer_usc_can_invite_to_party_Params
{
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_add_to_clan
struct UTgMoviePlayer_usc_add_to_clan_Params
{
	struct FString                                     sConsoleId;                                               // (Parm, NeedCtorLink)
	int                                                nPortalType;                                              // (Parm)
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
	struct FString                                     sPlayerName;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_can_invite_to_clan
struct UTgMoviePlayer_usc_can_invite_to_clan_Params
{
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_get_queue_timer
struct UTgMoviePlayer_usc_get_queue_timer_Params
{
	int                                                nQueueId;                                                 // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_can_cancel_spectate
struct UTgMoviePlayer_usc_can_cancel_spectate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_disconnect
struct UTgMoviePlayer_usc_disconnect_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_CancelQueue
struct UTgMoviePlayer_usc_CancelQueue_Params
{
};

// Function TgClientBase.TgMoviePlayer.is_item_owned
struct UTgMoviePlayer_is_item_owned_Params
{
	int                                                ItemId;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.SetUIDisplayMode
struct UTgMoviePlayer_SetUIDisplayMode_Params
{
	int                                                displayMode;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_getItemData
struct UTgMoviePlayer_usc_getItemData_Params
{
	int                                                ItemId;                                                   // (Parm)
	int                                                quantityCount;                                            // (OptionalParm, Parm)
	int                                                vendorId;                                                 // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_Scene_Manager_Scene_Unloaded
struct UTgMoviePlayer_usc_Scene_Manager_Scene_Unloaded_Params
{
	struct FString                                     sSceneName;                                               // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_Scene_Manager_Scene_Loaded
struct UTgMoviePlayer_usc_Scene_Manager_Scene_Loaded_Params
{
	struct FString                                     sSceneName;                                               // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.update_player_mute
struct UTgMoviePlayer_update_player_mute_Params
{
};

// Function TgClientBase.TgMoviePlayer.TryToggleMute
struct UTgMoviePlayer_TryToggleMute_Params
{
	bool                                               bShouldMute;                                              // (Parm)
};

// Function TgClientBase.TgMoviePlayer.ShowPopupMessage
struct UTgMoviePlayer_ShowPopupMessage_Params
{
	struct FString                                     sTitle;                                                   // (Parm, NeedCtorLink)
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.ShowErrorMessage
struct UTgMoviePlayer_ShowErrorMessage_Params
{
	struct FString                                     sTitle;                                                   // (Parm, NeedCtorLink)
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
	bool                                               _user_must_close;                                         // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.SetHUDVisiblity
struct UTgMoviePlayer_SetHUDVisiblity_Params
{
};

// Function TgClientBase.TgMoviePlayer.OnDemoReady
struct UTgMoviePlayer_OnDemoReady_Params
{
};

// Function TgClientBase.TgMoviePlayer.AddRecentlyInvited
struct UTgMoviePlayer_AddRecentlyInvited_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.GetRecentlyInvitedTimeRemain
struct UTgMoviePlayer_GetRecentlyInvitedTimeRemain_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.HasRecentlyInvited
struct UTgMoviePlayer_HasRecentlyInvited_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_isItemEquippable
struct UTgMoviePlayer_usc_isItemEquippable_Params
{
	int                                                nItemId;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_isItemEquipped
struct UTgMoviePlayer_usc_isItemEquipped_Params
{
	int                                                nItemId;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_GetActiveGamepadIndex
struct UTgMoviePlayer_usc_GetActiveGamepadIndex_Params
{
	int                                                nPlayerIndex;                                             // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_RegisterCardTexture
struct UTgMoviePlayer_usc_RegisterCardTexture_Params
{
	class UGFxObject*                                  Widget;                                                   // (Parm)
	int                                                nItemId;                                                  // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	bool                                               bOnlyIfMat;                                               // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetTestNotificationData
struct UTgMoviePlayer_GetTestNotificationData_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_UnregisterCardTextureById
struct UTgMoviePlayer_usc_UnregisterCardTextureById_Params
{
	int                                                nCardId;                                                  // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_UnregisterCardTexture
struct UTgMoviePlayer_usc_UnregisterCardTexture_Params
{
	class UGFxObject*                                  Widget;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.StartBatchPurchaseRequest
struct UTgMoviePlayer_StartBatchPurchaseRequest_Params
{
};

// Function TgClientBase.TgMoviePlayer.GetFeedback
struct UTgMoviePlayer_GetFeedback_Params
{
	int                                                nType;                                                    // (Parm)
};

// Function TgClientBase.TgMoviePlayer.CompleteBatchPurchaseRequest
struct UTgMoviePlayer_CompleteBatchPurchaseRequest_Params
{
};

// Function TgClientBase.TgMoviePlayer.AddBatchPurchaseRequest
struct UTgMoviePlayer_AddBatchPurchaseRequest_Params
{
	int                                                nVendorId;                                                // (Parm)
	int                                                nItemId;                                                  // (Parm)
	int                                                nPriceInUI;                                               // (Parm)
	int                                                nCurrencyType;                                            // (Parm)
	int                                                nQuantity;                                                // (Parm)
	struct Fdword                                      locationId;                                               // (Parm)
	int                                                nCouponId;                                                // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_get_class_purchase_pricing
struct UTgMoviePlayer_usc_get_class_purchase_pricing_Params
{
	int                                                nClassId;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_GetGameName
struct UTgMoviePlayer_usc_GetGameName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.GetSysCounterValue
struct UTgMoviePlayer_GetSysCounterValue_Params
{
	int                                                nCounterId;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetPortalType
struct UTgMoviePlayer_GetPortalType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_is_time_between
struct UTgMoviePlayer_usc_is_time_between_Params
{
	struct FString                                     Start;                                                    // (Parm, NeedCtorLink)
	struct FString                                     End;                                                      // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_isFriend
struct UTgMoviePlayer_usc_isFriend_Params
{
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_is_party_leader
struct UTgMoviePlayer_usc_is_party_leader_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_can_invite_players
struct UTgMoviePlayer_usc_can_invite_players_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_ableToSkipTutorial
struct UTgMoviePlayer_usc_ableToSkipTutorial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_watch_eom_replay
struct UTgMoviePlayer_usc_watch_eom_replay_Params
{
	struct FString                                     sInstanceId;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_remove_music_theme
struct UTgMoviePlayer_usc_remove_music_theme_Params
{
	int                                                nItemId;                                                  // (Parm)
	struct FString                                     sEventName;                                               // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_add_music_theme
struct UTgMoviePlayer_usc_add_music_theme_Params
{
	int                                                nItemId;                                                  // (Parm)
	struct FString                                     sEventName;                                               // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_test_music_theme
struct UTgMoviePlayer_usc_test_music_theme_Params
{
	int                                                nItemId;                                                  // (Parm)
	struct FString                                     sEventName;                                               // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_show_god_detail
struct UTgMoviePlayer_usc_show_god_detail_Params
{
	int                                                nClassId;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_request_goto_lobby
struct UTgMoviePlayer_usc_request_goto_lobby_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Desc;                                                     // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_redeem_login_bonus
struct UTgMoviePlayer_usc_redeem_login_bonus_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_queue_create_team
struct UTgMoviePlayer_usc_queue_create_team_Params
{
	int                                                nQueueId;                                                 // (Parm)
	struct FString                                     sPassword;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_onServerStabilityFeedback
struct UTgMoviePlayer_usc_onServerStabilityFeedback_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_suggest_pick
struct UTgMoviePlayer_usc_match_suggest_pick_Params
{
	int                                                nClassId;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_match_suggest_ban
struct UTgMoviePlayer_usc_match_suggest_ban_Params
{
	int                                                nClassId;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_match_cancel_role_trade
struct UTgMoviePlayer_usc_match_cancel_role_trade_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_request_role_trade
struct UTgMoviePlayer_usc_match_request_role_trade_Params
{
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_match_request_trade
struct UTgMoviePlayer_usc_match_request_trade_Params
{
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_match_request_random_class
struct UTgMoviePlayer_usc_match_request_random_class_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_purchase_voice_pack
struct UTgMoviePlayer_usc_match_purchase_voice_pack_Params
{
	int                                                nVoicePackItemId;                                         // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_match_close_random_class_popup
struct UTgMoviePlayer_usc_match_close_random_class_popup_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_cancel_trade
struct UTgMoviePlayer_usc_match_cancel_trade_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_ban_class
struct UTgMoviePlayer_usc_match_ban_class_Params
{
	int                                                nClassId;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_kick_team_player
struct UTgMoviePlayer_usc_kick_team_player_Params
{
	struct FString                                     sPlayerName;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_introFinished
struct UTgMoviePlayer_usc_introFinished_Params
{
};

// Function TgClientBase.TgMoviePlayer.Replay
struct UTgMoviePlayer_Replay_Params
{
	int                                                nInstanceId;                                              // (Parm)
	struct FString                                     sPassword;                                                // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.ChangeHudSection
struct UTgMoviePlayer_ChangeHudSection_Params
{
	struct FString                                     Section;                                                  // (Parm, NeedCtorLink)
	float                                              percentX;                                                 // (OptionalParm, Parm)
	float                                              percentY;                                                 // (OptionalParm, Parm)
	float                                              Scale;                                                    // (OptionalParm, Parm)
	float                                              dockX;                                                    // (OptionalParm, Parm)
	float                                              dockY;                                                    // (OptionalParm, Parm)
	struct FString                                     dockObj;                                                  // (OptionalParm, Parm, NeedCtorLink)
	float                                              dockObjX;                                                 // (OptionalParm, Parm)
	float                                              dockObjY;                                                 // (OptionalParm, Parm)
	bool                                               outX;                                                     // (OptionalParm, Parm)
	bool                                               outY;                                                     // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_GetHudSkinPath
struct UTgMoviePlayer_usc_GetHudSkinPath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_get_date_est
struct UTgMoviePlayer_usc_get_date_est_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_get_time
struct UTgMoviePlayer_usc_get_time_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_get_server_time_secs
struct UTgMoviePlayer_usc_get_server_time_secs_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_get_server_time
struct UTgMoviePlayer_usc_get_server_time_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_SyncMorriganPassiveMeter
struct UTgMoviePlayer_usc_SyncMorriganPassiveMeter_Params
{
	class UGFxObject*                                  passiveMeter;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_GetRentedTimeLeft
struct UTgMoviePlayer_usc_GetRentedTimeLeft_Params
{
	int                                                nItemId;                                                  // (Parm)
	int                                                nIdType;                                                  // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_resize_browser
struct UTgMoviePlayer_usc_resize_browser_Params
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

// Function TgClientBase.TgMoviePlayer.usc_match_can_purchase_random_class
struct UTgMoviePlayer_usc_match_can_purchase_random_class_Params
{
	int                                                nQueueId;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_is_item_owned
struct UTgMoviePlayer_usc_is_item_owned_Params
{
	struct FString                                     ItemId;                                                   // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_is_in_game
struct UTgMoviePlayer_usc_is_in_game_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_isInTutorial
struct UTgMoviePlayer_usc_isInTutorial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_isInSiege
struct UTgMoviePlayer_usc_isInSiege_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_isCapsLockActive
struct UTgMoviePlayer_usc_isCapsLockActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_can_play_again
struct UTgMoviePlayer_usc_can_play_again_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_IsGameBit
struct UTgMoviePlayer_usc_IsGameBit_Params
{
	int                                                iGB;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_ConfirmHudSkin
struct UTgMoviePlayer_usc_ConfirmHudSkin_Params
{
	int                                                nId;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_viewStatsOnline
struct UTgMoviePlayer_usc_viewStatsOnline_Params
{
	struct FString                                     sInstanceId;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_upgrade_item
struct UTgMoviePlayer_usc_upgrade_item_Params
{
	int                                                nItemId;                                                  // (Parm)
	int                                                nUpgradeInvId;                                            // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_unregister_mouse_region
struct UTgMoviePlayer_usc_unregister_mouse_region_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_test_voice_pack
struct UTgMoviePlayer_usc_test_voice_pack_Params
{
	int                                                nVoicePackId;                                             // (Parm)
	int                                                nSkinId;                                                  // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_test_announcer_pack
struct UTgMoviePlayer_usc_test_announcer_pack_Params
{
	int                                                nItemId;                                                  // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_surrender
struct UTgMoviePlayer_usc_surrender_Params
{
	bool                                               bSurrender;                                               // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_show_skin
struct UTgMoviePlayer_usc_show_skin_Params
{
	int                                                nSkinId;                                                  // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_set_auto_skill_up
struct UTgMoviePlayer_usc_set_auto_skill_up_Params
{
	bool                                               bAutoSkill;                                               // (Parm)
	bool                                               bForMatch;                                                // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_set_auto_purchase
struct UTgMoviePlayer_usc_set_auto_purchase_Params
{
	bool                                               bAutoPurchase;                                            // (Parm)
	bool                                               bForMatch;                                                // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_sell_item
struct UTgMoviePlayer_usc_sell_item_Params
{
	int                                                nInventoryId;                                             // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_resend_private_messages
struct UTgMoviePlayer_usc_resend_private_messages_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_request_treasure_roll
struct UTgMoviePlayer_usc_request_treasure_roll_Params
{
	int                                                nItemId;                                                  // (Parm)
	int                                                CurrencyType;                                             // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_keep_me_logged_in
struct UTgMoviePlayer_usc_keep_me_logged_in_Params
{
	bool                                               bNewValue;                                                // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_rejectNotification
struct UTgMoviePlayer_usc_rejectNotification_Params
{
	int                                                nNotificationType;                                        // (Parm)
	int                                                nId;                                                      // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_register_mouse_region
struct UTgMoviePlayer_usc_register_mouse_region_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
	int                                                X;                                                        // (Parm)
	int                                                Y;                                                        // (Parm)
	int                                                Width;                                                    // (Parm)
	int                                                Height;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_redeem_reward
struct UTgMoviePlayer_usc_redeem_reward_Params
{
	int                                                nActId;                                                   // (Parm)
	int                                                nGoalId;                                                  // (Parm)
	int                                                nCount;                                                   // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_queue_leave
struct UTgMoviePlayer_usc_queue_leave_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_purchase_item
struct UTgMoviePlayer_usc_purchase_item_Params
{
	int                                                nItemId;                                                  // (Parm)
	int                                                nAmount;                                                  // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_play_again
struct UTgMoviePlayer_usc_play_again_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_passwordInputFocus
struct UTgMoviePlayer_usc_passwordInputFocus_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_open_triumph_chest
struct UTgMoviePlayer_usc_open_triumph_chest_Params
{
	int                                                nLootTableItemId;                                         // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_nameInputFocus
struct UTgMoviePlayer_usc_nameInputFocus_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_lock_in
struct UTgMoviePlayer_usc_match_lock_in_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_match_choose_skin
struct UTgMoviePlayer_usc_match_choose_skin_Params
{
	int                                                nSkinId;                                                  // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_match_choose_class
struct UTgMoviePlayer_usc_match_choose_class_Params
{
	int                                                nClassId;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_friend_action
struct UTgMoviePlayer_usc_friend_action_Params
{
	struct FString                                     sType;                                                    // (Parm, NeedCtorLink)
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_enable_browser_input
struct UTgMoviePlayer_usc_enable_browser_input_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_close_eom_lobby
struct UTgMoviePlayer_usc_close_eom_lobby_Params
{
	int                                                nNavigationTarget;                                        // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_clearLeagueDC
struct UTgMoviePlayer_usc_clearLeagueDC_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_attempt_auto_login
struct UTgMoviePlayer_usc_attempt_auto_login_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_acceptNotification
struct UTgMoviePlayer_usc_acceptNotification_Params
{
	int                                                nNotificationType;                                        // (Parm)
	int                                                nId;                                                      // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_Accept_Match_Invite
struct UTgMoviePlayer_usc_Accept_Match_Invite_Params
{
};

// Function TgClientBase.TgMoviePlayer.UnloadHudSection
struct UTgMoviePlayer_UnloadHudSection_Params
{
	struct FString                                     Section;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.USC_ShowLeaderboard
struct UTgMoviePlayer_USC_ShowLeaderboard_Params
{
	struct FString                                     sName;                                                    // (OptionalParm, Parm, NeedCtorLink)
	int                                                nValue;                                                   // (OptionalParm, Parm)
	int                                                nOption;                                                  // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.SetSpecTeamName
struct UTgMoviePlayer_SetSpecTeamName_Params
{
	bool                                               bEnemy;                                                   // (Parm)
	struct FString                                     TeamName;                                                 // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.SetSpecState
struct UTgMoviePlayer_SetSpecState_Params
{
	struct FString                                     stateString;                                              // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.EndLobbyPlayback
struct UTgMoviePlayer_EndLobbyPlayback_Params
{
};

// Function TgClientBase.TgMoviePlayer.CancelPlayback
struct UTgMoviePlayer_CancelPlayback_Params
{
};

// Function TgClientBase.TgMoviePlayer.USC_SelectedPopup
struct UTgMoviePlayer_USC_SelectedPopup_Params
{
	int                                                nActionId;                                                // (Parm)
	struct FString                                     sInputValue;                                              // (Parm, NeedCtorLink)
	struct FString                                     sSecondaryInputValue;                                     // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.TryPopupCallback
struct UTgMoviePlayer_TryPopupCallback_Params
{
	int                                                nActionId;                                                // (Parm)
	struct FString                                     sInputValue;                                              // (Parm, NeedCtorLink)
	struct FString                                     sSecondaryInputValue;                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.AddInitialChatMessages
struct UTgMoviePlayer_AddInitialChatMessages_Params
{
};

// Function TgClientBase.TgMoviePlayer.FakeItemToast
struct UTgMoviePlayer_FakeItemToast_Params
{
	int                                                nItemId;                                                  // (Parm)
};

// Function TgClientBase.TgMoviePlayer.CloseChatTab
struct UTgMoviePlayer_CloseChatTab_Params
{
	int                                                nChannel;                                                 // (Parm)
	struct FString                                     sSender;                                                  // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.OpenChatTab
struct UTgMoviePlayer_OpenChatTab_Params
{
	int                                                nChannel;                                                 // (Parm)
	bool                                               bForce;                                                   // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.UpdateMapBackground
struct UTgMoviePlayer_UpdateMapBackground_Params
{
};

// Function TgClientBase.TgMoviePlayer.AttemptAutoReplayDemoRecording
struct UTgMoviePlayer_AttemptAutoReplayDemoRecording_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_chat_ready
struct UTgMoviePlayer_usc_chat_ready_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_vgs_command
struct UTgMoviePlayer_usc_vgs_command_Params
{
	int                                                nId;                                                      // (Parm)
	bool                                               bSubMenu;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_chat_close_tab
struct UTgMoviePlayer_usc_chat_close_tab_Params
{
	int                                                nChannel;                                                 // (Parm)
	struct FString                                     Sender;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_get_sellback_price
struct UTgMoviePlayer_usc_get_sellback_price_Params
{
	int                                                nItemId;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_full_sellback_available
struct UTgMoviePlayer_usc_full_sellback_available_Params
{
	int                                                nItemId;                                                  // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_set_chat_channel
struct UTgMoviePlayer_usc_set_chat_channel_Params
{
	int                                                nChannel;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.AddRemoveDeferredChannelTab
struct UTgMoviePlayer_AddRemoveDeferredChannelTab_Params
{
	bool                                               bAdd;                                                     // (Parm)
	int                                                nChannelId;                                               // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_can_view_user_content
struct UTgMoviePlayer_usc_can_view_user_content_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.UnregisterForJSON
struct UTgMoviePlayer_UnregisterForJSON_Params
{
	class UPComUIManagerBase*                          pRegistrant;                                              // (Parm)
	struct FString                                     sJsonName;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.RegisterForJSON
struct UTgMoviePlayer_RegisterForJSON_Params
{
	class UPComUIManagerBase*                          pRegistrant;                                              // (Parm)
	struct FString                                     sJsonName;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.UnregisterMctsCallbacks
struct UTgMoviePlayer_UnregisterMctsCallbacks_Params
{
};

// Function TgClientBase.TgMoviePlayer.RegisterMctsCallbacks
struct UTgMoviePlayer_RegisterMctsCallbacks_Params
{
};

// Function TgClientBase.TgMoviePlayer.OpenWorldScene
struct UTgMoviePlayer_OpenWorldScene_Params
{
	struct FString                                     CameraName;                                               // (Parm, NeedCtorLink)
	int                                                cameraTransitionType;                                     // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_IME_Exists
struct UTgMoviePlayer_usc_IME_Exists_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_IME_SetEnabled
struct UTgMoviePlayer_usc_IME_SetEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_view_player_profile
struct UTgMoviePlayer_usc_view_player_profile_Params
{
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
	struct FString                                     sPlayerName;                                              // (Parm, NeedCtorLink)
	struct FString                                     sProfileTab;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_view_platform_player_card
struct UTgMoviePlayer_usc_view_platform_player_card_Params
{
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
	struct FString                                     sPlayerName;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.UpdatePromptMode
struct UTgMoviePlayer_UpdatePromptMode_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgMoviePlayer.SetButtonPromptMode
struct UTgMoviePlayer_SetButtonPromptMode_Params
{
	int                                                nMode;                                                    // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_HasPlayerLogin
struct UTgMoviePlayer_usc_HasPlayerLogin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_getFontSize
struct UTgMoviePlayer_usc_getFontSize_Params
{
	struct FString                                     Identifier;                                               // (Parm, NeedCtorLink)
	struct FString                                     SectionName;                                              // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_TranslateMsg
struct UTgMoviePlayer_usc_TranslateMsg_Params
{
	struct FString                                     Identifier;                                               // (Parm, NeedCtorLink)
	struct FString                                     SectionName;                                              // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_TranslateMsgId
struct UTgMoviePlayer_usc_TranslateMsgId_Params
{
	int                                                nId;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.ShowTransitionScene
struct UTgMoviePlayer_ShowTransitionScene_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_is_safe_to_load
struct UTgMoviePlayer_usc_is_safe_to_load_Params
{
	struct FString                                     sUrl;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.usc_toggle_key_capture
struct UTgMoviePlayer_usc_toggle_key_capture_Params
{
	bool                                               bCapture;                                                 // (Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_toggle_cursor
struct UTgMoviePlayer_usc_toggle_cursor_Params
{
	bool                                               bShow;                                                    // (Parm)
	bool                                               bOnlyVisibility;                                          // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.usc_quit
struct UTgMoviePlayer_usc_quit_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_Console_Command
struct UTgMoviePlayer_usc_Console_Command_Params
{
	struct FString                                     Cmd;                                                      // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.usc_Scene_Manager_Created
struct UTgMoviePlayer_usc_Scene_Manager_Created_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_Event_Mediator_Created
struct UTgMoviePlayer_usc_Event_Mediator_Created_Params
{
};

// Function TgClientBase.TgMoviePlayer.usc_Data_Handler_Created
struct UTgMoviePlayer_usc_Data_Handler_Created_Params
{
};

// Function TgClientBase.TgMoviePlayer.GotoSendGift
struct UTgMoviePlayer_GotoSendGift_Params
{
	struct FPointer                                    pPID;                                                     // (Parm)
};

// Function TgClientBase.TgMoviePlayer.ProcessUIEvents
struct UTgMoviePlayer_ProcessUIEvents_Params
{
};

// Function TgClientBase.TgMoviePlayer.UIChangeEvent
struct UTgMoviePlayer_UIChangeEvent_Params
{
	class AActor*                                      refActor;                                                 // (Parm)
	TEnumAsByte<EUIChangeEvent>                        Event;                                                    // (Parm)
	bool                                               bUnique;                                                  // (OptionalParm, Parm)
	int                                                subType;                                                  // (OptionalParm, Parm)
};

// Function TgClientBase.TgMoviePlayer.UnregisterEngineCallbacks
struct UTgMoviePlayer_UnregisterEngineCallbacks_Params
{
};

// Function TgClientBase.TgMoviePlayer.RegisterEngineCallbacks
struct UTgMoviePlayer_RegisterEngineCallbacks_Params
{
};

// Function TgClientBase.TgMoviePlayer.GetKeyBindText
struct UTgMoviePlayer_GetKeyBindText_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	int                                                nAlternate;                                               // (OptionalParm, Parm)
	bool                                               bUseLookup;                                               // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.GetTranslatedSpecKeyBind
struct UTgMoviePlayer_GetTranslatedSpecKeyBind_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	int                                                nAlternate;                                               // (OptionalParm, Parm)
	bool                                               bUseLookup;                                               // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.GetTranslatedKeyBind
struct UTgMoviePlayer_GetTranslatedKeyBind_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	int                                                nAlternate;                                               // (OptionalParm, Parm)
	bool                                               bUseLookup;                                               // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgMoviePlayer.UpdateViewportForSafeAreas
struct UTgMoviePlayer_UpdateViewportForSafeAreas_Params
{
};

// Function TgClientBase.TgMoviePlayer.OnMatchTimeout
struct UTgMoviePlayer_OnMatchTimeout_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgMoviePlayer.NativeTick
struct UTgMoviePlayer_NativeTick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClientBase.TgMoviePlayer.OnClose
struct UTgMoviePlayer_OnClose_Params
{
};

// Function TgClientBase.TgMoviePlayer.PostInit
struct UTgMoviePlayer_PostInit_Params
{
};

// Function TgClientBase.TgMoviePlayer.InitializeSceneManager
struct UTgMoviePlayer_InitializeSceneManager_Params
{
};

// Function TgClientBase.TgMoviePlayer.InitializeDataHandler
struct UTgMoviePlayer_InitializeDataHandler_Params
{
};

// Function TgClientBase.TgMoviePlayer.GetSettingsData
struct UTgMoviePlayer_GetSettingsData_Params
{
	class UTgDataGroup_Settings*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetEOMLobbyData
struct UTgMoviePlayer_GetEOMLobbyData_Params
{
	class UTgDataGroup_EOMLobby*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetBattlePassDataChunk
struct UTgMoviePlayer_GetBattlePassDataChunk_Params
{
	class UTgLobbyDC_BattlePass*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetLobbyInventoryDataChunk
struct UTgMoviePlayer_GetLobbyInventoryDataChunk_Params
{
	class UTgLobbyDC_Inventory*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetCharacterBuilderData
struct UTgMoviePlayer_GetCharacterBuilderData_Params
{
	class UTgGameDC_Player*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetLobbyDataChunk
struct UTgMoviePlayer_GetLobbyDataChunk_Params
{
	class UTgLobbyDC_Lobby*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetMatchDataChunk
struct UTgMoviePlayer_GetMatchDataChunk_Params
{
	class UTgLobbyDC_Match*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetLobbyData
struct UTgMoviePlayer_GetLobbyData_Params
{
	class UTgDataGroup_Lobby*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetGameData
struct UTgMoviePlayer_GetGameData_Params
{
	class UTgDataGroup_Game*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetStateInfo
struct UTgMoviePlayer_GetStateInfo_Params
{
	class UTgUIServerStates*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetESportsManager
struct UTgMoviePlayer_GetESportsManager_Params
{
	class UTgEsportsManager*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetDeferManager
struct UTgMoviePlayer_GetDeferManager_Params
{
	class UTgDeferManager*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetIntervalManager
struct UTgMoviePlayer_GetIntervalManager_Params
{
	class UTgIntervalManager*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetDispatcher
struct UTgMoviePlayer_GetDispatcher_Params
{
	class UTgEventDispatcher*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetHUD
struct UTgMoviePlayer_GetHUD_Params
{
	class ATgClientHUD*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.GetPlayerOwner
struct UTgMoviePlayer_GetPlayerOwner_Params
{
	class ATgPlayerController*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMoviePlayer.OnPrivilegeCallback
struct UTgMoviePlayer_OnPrivilegeCallback_Params
{
	TEnumAsByte<EFeaturePrivilege>                     ePriv;                                                    // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ePermiss;                                                 // (Parm)
};

// Function TgClientBase.TgBrowserManager.OpenWebPage
struct UTgBrowserManager_OpenWebPage_Params
{
	int                                                pageType;                                                 // (Parm)
	bool                                               bExternal;                                                // (Parm)
	bool                                               bShowNavButtons;                                          // (OptionalParm, Parm)
	bool                                               bAddLang;                                                 // (OptionalParm, Parm)
};

// Function TgClientBase.TgBrowserManager.GetURLByPageType
struct UTgBrowserManager_GetURLByPageType_Params
{
	int                                                pageType;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgBrowserManager.OpenWebPageWithTarget
struct UTgBrowserManager_OpenWebPageWithTarget_Params
{
	int                                                pageType;                                                 // (Parm)
	struct FString                                     urlTarget;                                                // (Parm, NeedCtorLink)
	bool                                               bExternal;                                                // (Parm)
	bool                                               bShowNavButtons;                                          // (OptionalParm, Parm)
};

// Function TgClientBase.TgBrowserManager.SetContainer
struct UTgBrowserManager_SetContainer_Params
{
	class UTgGFxBrowser*                               pContainer;                                               // (Parm)
};

// Function TgClientBase.TgBrowserManager.ResizeView
struct UTgBrowserManager_ResizeView_Params
{
};

// Function TgClientBase.TgBrowserManager.Close
struct UTgBrowserManager_Close_Params
{
};

// Function TgClientBase.TgBrowserManager.OpenVideo
struct UTgBrowserManager_OpenVideo_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgBrowserManager.OpenURL
struct UTgBrowserManager_OpenURL_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               bShowNavButtons;                                          // (OptionalParm, Parm)
	bool                                               bSetFocus;                                                // (OptionalParm, Parm)
};

// Function TgClientBase.TgBrowserManager.ExternalOpenURL
struct UTgBrowserManager_ExternalOpenURL_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	bool                                               bAddLang;                                                 // (OptionalParm, Parm)
};

// Function TgClientBase.TgBrowserManager.OnLobbyStateChange
struct UTgBrowserManager_OnLobbyStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgBrowserManager.Initialize
struct UTgBrowserManager_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgBrowserManager.IsBrowserLoaded
struct UTgBrowserManager_IsBrowserLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgCanvasDrawInterface.DrawCanvas
struct UTgCanvasDrawInterface_DrawCanvas_Params
{
	class UCanvas*                                     pCanvas;                                                  // (Parm)
};

// Function TgClientBase.TgChatData.TokenReplace
struct UTgChatData_TokenReplace_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Token;                                                    // (Parm, NeedCtorLink)
	struct FString                                     sValue;                                                   // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgChatData.CheckWarning
struct UTgChatData_CheckWarning_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgClientHUD.GetBulletPoint
struct ATgClientHUD_GetBulletPoint_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgClientHUD.GetGameState
struct ATgClientHUD_GetGameState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgClientHUD.KillScene
struct ATgClientHUD_KillScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgClientHUD.ToggleScene
struct ATgClientHUD_ToggleScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgClientHUD.UnloadScene
struct ATgClientHUD_UnloadScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgClientHUD.LoadScene
struct ATgClientHUD_LoadScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgClientHUD.Tick
struct ATgClientHUD_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClientBase.TgClientHUD.LogState
struct ATgClientHUD_LogState_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgClientHUD.PostBeginPlay
struct ATgClientHUD_PostBeginPlay_Params
{
};

// Function TgClientBase.TgClientHUD.PostRender
struct ATgClientHUD_PostRender_Params
{
};

// Function TgClientBase.TgClientHUD.OnEscapePressed
struct ATgClientHUD_OnEscapePressed_Params
{
};

// Function TgClientBase.TgClientHUD.OnDisconnect
struct ATgClientHUD_OnDisconnect_Params
{
};

// Function TgClientBase.TgClientHUD.NotifyLobbyStateChange
struct ATgClientHUD_NotifyLobbyStateChange_Params
{
};

// Function TgClientBase.TgClientHUD.SHC
struct ATgClientHUD_SHC_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClientBase.TgClientHUD.ShowHardwareCursor
struct ATgClientHUD_ShowHardwareCursor_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClientBase.TgClientHUD.ToggleDevMenu
struct ATgClientHUD_ToggleDevMenu_Params
{
};

// Function TgClientBase.TgClientHUD.ToggleVGSScene
struct ATgClientHUD_ToggleVGSScene_Params
{
};

// Function TgClientBase.TgClientHUD.ToggleHUDScene
struct ATgClientHUD_ToggleHUDScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgClientHUD.ToggleHUD
struct ATgClientHUD_ToggleHUD_Params
{
};

// Function TgClientBase.TgClientHUD.TestDidIt
struct ATgClientHUD_TestDidIt_Params
{
	int                                                nActivityId;                                              // (Parm)
	int                                                nCount;                                                   // (Parm)
	int                                                nGoalId;                                                  // (OptionalParm, Parm)
};

// Function TgClientBase.TgClientHUD.UpdateSpectatorSettingsMenu
struct ATgClientHUD_UpdateSpectatorSettingsMenu_Params
{
};

// Function TgClientBase.TgClientHUD.UpdateKeyBindSettingsMenu
struct ATgClientHUD_UpdateKeyBindSettingsMenu_Params
{
	int                                                settingtype;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgClientHUD.UpdateSpecKeyDisplay
struct ATgClientHUD_UpdateSpecKeyDisplay_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgClientHUD.UpdateKeyDisplay
struct ATgClientHUD_UpdateKeyDisplay_Params
{
	struct FString                                     Key;                                                      // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgClientHUD.gfxProcessSound
struct ATgClientHUD_gfxProcessSound_Params
{
	struct FName                                       aThemeName;                                               // (Parm)
	struct FName                                       aEventName;                                               // (Parm)
};

// Function TgClientBase.TgClientHUD.IsInGame
struct ATgClientHUD_IsInGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgClientHUD.IsLoggedIn
struct ATgClientHUD_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgClientHUD.GetVisibilityMode
struct ATgClientHUD_GetVisibilityMode_Params
{
	TEnumAsByte<ETgClientVisibilityMode>               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgClientHUD.GetDataHandler
struct ATgClientHUD_GetDataHandler_Params
{
	class UTgDataHandler*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgClientHUD.NativePostRender
struct ATgClientHUD_NativePostRender_Params
{
};

// Function TgClientBase.TgClientHUD.UnregisterForPostRender
struct ATgClientHUD_UnregisterForPostRender_Params
{
	TScriptInterface<class UTgCanvasDrawInterface>     pObj;                                                     // (Parm)
};

// Function TgClientBase.TgClientHUD.RegisterForPostRender
struct ATgClientHUD_RegisterForPostRender_Params
{
	TScriptInterface<class UTgCanvasDrawInterface>     pObj;                                                     // (Parm)
};

// Function TgClientBase.TgClientHUD.TutorialMessage
struct ATgClientHUD_TutorialMessage_Params
{
	int                                                msgId;                                                    // (Parm)
	bool                                               bTips;                                                    // (Parm)
};

// Function TgClientBase.TgClientHUD.ResetViewCenterPoint
struct ATgClientHUD_ResetViewCenterPoint_Params
{
};

// Function TgClientBase.TgClientHUD.SetViewCenterPoint
struct ATgClientHUD_SetViewCenterPoint_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              fScale;                                                   // (Parm)
};

// Function TgClientBase.TgClientHUD.DisplayBadConnectionAlert
struct ATgClientHUD_DisplayBadConnectionAlert_Params
{
};

// Function TgClientBase.TgClientHUD.InitSceneManager
struct ATgClientHUD_InitSceneManager_Params
{
};

// Function TgClientBase.TgClientHUD.InitMainMoviePlayer
struct ATgClientHUD_InitMainMoviePlayer_Params
{
};

// Function TgClientBase.TgClientHUD.ShowCursor
struct ATgClientHUD_ShowCursor_Params
{
	bool                                               bShow;                                                    // (Parm)
	bool                                               bUpdateCapture;                                           // (OptionalParm, Parm)
};

// Function TgClientBase.TgClientHUD.CloseMovie
struct ATgClientHUD_CloseMovie_Params
{
	class UGFxMoviePlayer*                             mp;                                                       // (Parm)
	bool                                               bUnload;                                                  // (OptionalParm, Parm)
};

// Function TgClientBase.TgClientHUD.CreateMovie
struct ATgClientHUD_CreateMovie_Params
{
	class UClass*                                      MovieClass;                                               // (Parm)
	bool                                               bAutoFocus;                                               // (OptionalParm, Parm)
	bool                                               bCaptureInput;                                            // (OptionalParm, Parm)
	TEnumAsByte<EGFxTimingMode>                        TimingMode;                                               // (OptionalParm, Parm)
	struct FString                                     sMoviePath;                                               // (OptionalParm, Parm, NeedCtorLink)
	class UGFxMoviePlayer*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgClientHUD.UnregisterEngineCallbacks
struct ATgClientHUD_UnregisterEngineCallbacks_Params
{
};

// Function TgClientBase.TgClientHUD.RegisterEngineCallbacks
struct ATgClientHUD_RegisterEngineCallbacks_Params
{
};

// Function TgClientBase.TgClientObject.GetMovieDispatcher
struct UTgClientObject_GetMovieDispatcher_Params
{
	class UTgEventDispatcher*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgClientObject.Uninitialize
struct UTgClientObject_Uninitialize_Params
{
};

// Function TgClientBase.TgClientObject.Initialize
struct UTgClientObject_Initialize_Params
{
	class UTgMoviePlayer*                              pMoviePlayer;                                             // (Parm)
};

// Function TgClientBase.TgAcquisitionManager.AddQueuedAcquisition
struct UTgAcquisitionManager_AddQueuedAcquisition_Params
{
	struct FUIQueuedAcquisition                        acqData;                                                  // (Const, Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgAcquisitionManager.Initialize
struct UTgAcquisitionManager_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgDeferManager.CancelTask
struct UTgDeferManager_CancelTask_Params
{
	class UTgDeferredTask*                             pTask;                                                    // (Parm)
};

// Function TgClientBase.TgDeferManager.StartTask
struct UTgDeferManager_StartTask_Params
{
	class UTgDeferredTask*                             pTask;                                                    // (Parm)
	class UObject*                                     pOwner;                                                   // (Parm)
	struct FName                                       nmCallback;                                               // (OptionalParm, Parm)
};

// Function TgClientBase.TgDeferManager.GetProgress
struct UTgDeferManager_GetProgress_Params
{
	class UTgDeferredTask*                             pTask;                                                    // (Parm)
	struct FTgDeferProgress                            ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgDeferManager.ClearAllCallbacks
struct UTgDeferManager_ClearAllCallbacks_Params
{
	class UObject*                                     pOwner;                                                   // (Parm)
};

// Function TgClientBase.TgDeferManager.ClearCallback
struct UTgDeferManager_ClearCallback_Params
{
	class UTgDeferredTask*                             pTask;                                                    // (Parm)
};

// Function TgClientBase.TgDeferManager.SetAllCallbacks
struct UTgDeferManager_SetAllCallbacks_Params
{
	TArray<struct FTgDeferTaskData>                    arrTasks;                                                 // (Const, Parm, OutParm, NeedCtorLink)
	class UObject*                                     pOwner;                                                   // (Parm)
	struct FName                                       nmCallback;                                               // (Parm)
};

// Function TgClientBase.TgDeferManager.SetCallback
struct UTgDeferManager_SetCallback_Params
{
	class UTgDeferredTask*                             pTask;                                                    // (Parm)
	class UObject*                                     pOwner;                                                   // (Parm)
	struct FName                                       nmCallback;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDeferManager.GetTasks
struct UTgDeferManager_GetTasks_Params
{
	class UObject*                                     pOwner;                                                   // (Parm)
	TArray<struct FTgDeferTaskData>                    out_arrData;                                              // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDeferManager.IsTickable
struct UTgDeferManager_IsTickable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDeferManager.Tick
struct UTgDeferManager_Tick_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgDeferManager.OnDeferUpdate
struct UTgDeferManager_OnDeferUpdate_Params
{
	struct FTgDeferProgress                            Progress;                                                 // (Const, Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgDeferredTask.Tick
struct UTgDeferredTask_Tick_Params
{
	float                                              nDeltaTime;                                               // (Parm)
	struct FTgDeferProgress                            Progress;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgDeferDeclineFriendRequests.OnFriendTimeout
struct UTgDeferDeclineFriendRequests_OnFriendTimeout_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgDeferDeclineFriendRequests.OnFriendUpdate
struct UTgDeferDeclineFriendRequests_OnFriendUpdate_Params
{
	struct FPointer                                    pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgDeferDeclineFriendRequests.Tick
struct UTgDeferDeclineFriendRequests_Tick_Params
{
	float                                              nDeltaTime;                                               // (Parm)
	struct FTgDeferProgress                            Progress;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgDeferDeclineFriendRequests.Uninitialize
struct UTgDeferDeclineFriendRequests_Uninitialize_Params
{
};

// Function TgClientBase.TgDeferDeclineFriendRequests.Initialize
struct UTgDeferDeclineFriendRequests_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgPopupManager.OnQueueStateChange
struct UTgPopupManager_OnQueueStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgPopupManager.OpenPopup
struct UTgPopupManager_OpenPopup_Params
{
};

// Function TgClientBase.TgPopupManager.RemoveAllPopups
struct UTgPopupManager_RemoveAllPopups_Params
{
};

// Function TgClientBase.TgPopupManager.RemovePopup
struct UTgPopupManager_RemovePopup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPopupManager.AddPopup
struct UTgPopupManager_AddPopup_Params
{
	class UTgPagePopup*                                PopUp;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPopupManager.ClosePopup
struct UTgPopupManager_ClosePopup_Params
{
};

// Function TgClientBase.TgPopupManager.Initialize
struct UTgPopupManager_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgRewardCenterManagerBase.OnAcquisition
struct UTgRewardCenterManagerBase_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgRewardCenterManagerBase.UpdateLoginDay
struct UTgRewardCenterManagerBase_UpdateLoginDay_Params
{
	struct Fdword                                      nDay;                                                     // (Parm)
};

// Function TgClientBase.TgRewardCenterManagerBase.ClaimLoginBonus
struct UTgRewardCenterManagerBase_ClaimLoginBonus_Params
{
};

// Function TgClientBase.TgRewardCenterManagerBase.TryAutoCollectLoginBonus
struct UTgRewardCenterManagerBase_TryAutoCollectLoginBonus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgRewardCenterManagerBase.TryShowLoginBonus
struct UTgRewardCenterManagerBase_TryShowLoginBonus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgRewardCenterManagerBase.ShouldShowLoginBonus
struct UTgRewardCenterManagerBase_ShouldShowLoginBonus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSessionVars.GetFriendData
struct UTgSessionVars_GetFriendData_Params
{
	class UTgGFxFriendData*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSessionVars.GetPlayerGenerator
struct UTgSessionVars_GetPlayerGenerator_Params
{
	class UTgGFxPlayerGenerator*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSessionVars.OnHUDStateChange
struct UTgSessionVars_OnHUDStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSessionVars.Uninitialize
struct UTgSessionVars_Uninitialize_Params
{
};

// Function TgClientBase.TgSessionVars.Initialize
struct UTgSessionVars_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgStreamManagerBase.GetFeatureDescription
struct UTgStreamManagerBase_GetFeatureDescription_Params
{
	int                                                Count;                                                    // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgStreamManagerBase.GetFeatureName
struct UTgStreamManagerBase_GetFeatureName_Params
{
	int                                                Count;                                                    // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgStreamManagerBase.HaveFeature
struct UTgStreamManagerBase_HaveFeature_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgStreamManagerBase.IsLiveAtIndex
struct UTgStreamManagerBase_IsLiveAtIndex_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgStreamManagerBase.GetDescriptionAtIndex
struct UTgStreamManagerBase_GetDescriptionAtIndex_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgStreamManagerBase.GetViewersAtIndex
struct UTgStreamManagerBase_GetViewersAtIndex_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgStreamManagerBase.GetTitleAtIndex
struct UTgStreamManagerBase_GetTitleAtIndex_Params
{
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgStreamManagerBase.IsStream
struct UTgStreamManagerBase_IsStream_Params
{
	int                                                Index;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgStreamManagerBase.GetTypeCountWatching
struct UTgStreamManagerBase_GetTypeCountWatching_Params
{
	TEnumAsByte<ESTREAMTYPE>                           Type;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgStreamManagerBase.GetTypeCount
struct UTgStreamManagerBase_GetTypeCount_Params
{
	TEnumAsByte<ESTREAMTYPE>                           Type;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgStreamManagerBase.LiveSort
struct UTgStreamManagerBase_LiveSort_Params
{
	struct FGameStream                                 A;                                                        // (Parm, NeedCtorLink)
	struct FGameStream                                 B;                                                        // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgStreamManagerBase.FeaturedSort
struct UTgStreamManagerBase_FeaturedSort_Params
{
	struct FGameStream                                 A;                                                        // (Parm, NeedCtorLink)
	struct FGameStream                                 B;                                                        // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgStreamManagerBase.ViewerSort
struct UTgStreamManagerBase_ViewerSort_Params
{
	struct FGameStream                                 A;                                                        // (Parm, NeedCtorLink)
	struct FGameStream                                 B;                                                        // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgStreamManagerBase.ResolveChannelName
struct UTgStreamManagerBase_ResolveChannelName_Params
{
	struct FString                                     sChannel;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgStreamManagerBase.CompleteUpdate
struct UTgStreamManagerBase_CompleteUpdate_Params
{
};

// Function TgClientBase.TgStreamManagerBase.ViewStreamIndex
struct UTgStreamManagerBase_ViewStreamIndex_Params
{
	int                                                surfaceId;                                                // (Parm)
	int                                                Index;                                                    // (Parm)
	bool                                               external;                                                 // (OptionalParm, Parm)
	float                                              X;                                                        // (OptionalParm, Parm)
	float                                              Y;                                                        // (OptionalParm, Parm)
	float                                              Width;                                                    // (OptionalParm, Parm)
	float                                              Height;                                                   // (OptionalParm, Parm)
	float                                              widthReal;                                                // (OptionalParm, Parm)
	float                                              heightReal;                                               // (OptionalParm, Parm)
	bool                                               joinChat;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgStreamManagerBase.UpdateStreams
struct UTgStreamManagerBase_UpdateStreams_Params
{
};

// Function TgClientBase.TgStreamManagerBase.HasSpecialStreams
struct UTgStreamManagerBase_HasSpecialStreams_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgStreamManagerBase.OpenPlayerStream
struct UTgStreamManagerBase_OpenPlayerStream_Params
{
	int                                                nPlayerId;                                                // (Parm)
	bool                                               external;                                                 // (Parm)
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	float                                              Width;                                                    // (Parm)
	float                                              Height;                                                   // (Parm)
	float                                              widthReal;                                                // (Parm)
	float                                              heightReal;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgStreamManagerBase.OpenStream
struct UTgStreamManagerBase_OpenStream_Params
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

// Function TgClientBase.TgStreamManagerBase.LoadStreams
struct UTgStreamManagerBase_LoadStreams_Params
{
};

// Function TgClientBase.TgDataHandler.MoviePlayer_GetUseSpectateEOMLobby
struct UTgDataHandler_MoviePlayer_GetUseSpectateEOMLobby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataHandler.DispatchEvent_LobbyHud_ClearRolledOverSkin
struct UTgDataHandler_DispatchEvent_LobbyHud_ClearRolledOverSkin_Params
{
};

// Function TgClientBase.TgDataHandler.DispatchEvent_MoviePlayer_SetIsCustom
struct UTgDataHandler_DispatchEvent_MoviePlayer_SetIsCustom_Params
{
	bool                                               bIsCustom;                                                // (Parm)
};

// Function TgClientBase.TgDataHandler.DispatchEvent_MatchLobbyClassSelection_SetSpectatorMode
struct UTgDataHandler_DispatchEvent_MatchLobbyClassSelection_SetSpectatorMode_Params
{
};

// Function TgClientBase.TgDataHandler.DispatchEvent_SpectatorHUD_ForceTeamUpdate
struct UTgDataHandler_DispatchEvent_SpectatorHUD_ForceTeamUpdate_Params
{
};

// Function TgClientBase.TgDataHandler.ChatInput_SetReplyName
struct UTgDataHandler_ChatInput_SetReplyName_Params
{
	struct FString                                     sSenderName;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgDataHandler.DispatchEvent_VendorStore_UpdateInventory
struct UTgDataHandler_DispatchEvent_VendorStore_UpdateInventory_Params
{
};

// Function TgClientBase.TgDataHandler.DispatchEvent_VendorStore_UpdateStats
struct UTgDataHandler_DispatchEvent_VendorStore_UpdateStats_Params
{
};

// Function TgClientBase.TgDataHandler.DoImmediateUpdate
struct UTgDataHandler_DoImmediateUpdate_Params
{
	float                                              DeltaTime;                                                // (Parm)
	class UTgDataChunk*                                Node;                                                     // (Parm)
	bool                                               bParentIsSubscribed;                                      // (Parm)
};

// Function TgClientBase.TgDataHandler.QueueDirtyChunks
struct UTgDataHandler_QueueDirtyChunks_Params
{
	class UTgDataChunk*                                Node;                                                     // (Parm)
	bool                                               bParentIsSubscribed;                                      // (Parm)
};

// Function TgClientBase.TgDataHandler.NotifyMapChange
struct UTgDataHandler_NotifyMapChange_Params
{
};

// Function TgClientBase.TgDataHandler.Update
struct UTgDataHandler_Update_Params
{
	float                                              DeltaTime;                                                // (Parm)
	bool                                               bImmediate;                                               // (OptionalParm, Parm)
};

// Function TgClientBase.TgDataHandler.Uninitialize
struct UTgDataHandler_Uninitialize_Params
{
};

// Function TgClientBase.TgDataHandler.InitializeDataHandler
struct UTgDataHandler_InitializeDataHandler_Params
{
};

// Function TgClientBase.TgEsportsManager.ClearData
struct UTgEsportsManager_ClearData_Params
{
};

// Function TgClientBase.TgEsportsManager.GetArrInputIntercepts
struct UTgEsportsManager_GetArrInputIntercepts_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgEsportsManager.GetArrGameEventListeners
struct UTgEsportsManager_GetArrGameEventListeners_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgEsportsManager.GetArrMctsListeners
struct UTgEsportsManager_GetArrMctsListeners_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgEsportsManager.GetArrOldMctsListeners
struct UTgEsportsManager_GetArrOldMctsListeners_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgEsportsManager.GetDispatcher
struct UTgEsportsManager_GetDispatcher_Params
{
	class UTgEventDispatcher*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgEsportsManager.RequestESportsPicks
struct UTgEsportsManager_RequestESportsPicks_Params
{
};

// Function TgClientBase.TgEsportsManager.RequestESportsMatches
struct UTgEsportsManager_RequestESportsMatches_Params
{
};

// Function TgClientBase.TgEsportsManager.Uninitialize
struct UTgEsportsManager_Uninitialize_Params
{
};

// Function TgClientBase.TgEsportsManager.Initialize
struct UTgEsportsManager_Initialize_Params
{
};

// Function TgClientBase.TgEventAccessInterface.GetArrInputIntercepts
struct UTgEventAccessInterface_GetArrInputIntercepts_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgEventAccessInterface.GetArrGameEventListeners
struct UTgEventAccessInterface_GetArrGameEventListeners_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgEventAccessInterface.GetArrMctsListeners
struct UTgEventAccessInterface_GetArrMctsListeners_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgEventAccessInterface.GetArrOldMctsListeners
struct UTgEventAccessInterface_GetArrOldMctsListeners_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgEventMediator.DispatchEvent
struct UTgEventMediator_DispatchEvent_Params
{
	struct FString                                     sEventType;                                               // (Parm, NeedCtorLink)
	struct FASValue                                    EventData;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgEventSceneInterface.GetAcquisitionSubtext
struct UTgEventSceneInterface_GetAcquisitionSubtext_Params
{
	struct FUIQueuedAcquisition                        acqData;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     sOutSubtext;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGameViewportClientBase.GetSubtitleRegion
struct UTgGameViewportClientBase_GetSubtitleRegion_Params
{
	struct FVector2D                                   MinPos;                                                   // (Parm, OutParm)
	struct FVector2D                                   MaxPos;                                                   // (Parm, OutParm)
};

// Function TgClientBase.TgGameViewportClientBase.PostRender
struct UTgGameViewportClientBase_PostRender_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function TgClientBase.TgGameViewportClientBase.GameSessionEnded
struct UTgGameViewportClientBase_GameSessionEnded_Params
{
};

// Function TgClientBase.TgGameViewportClientBase.NotifyConnectionError
struct UTgGameViewportClientBase_NotifyConnectionError_Params
{
	TEnumAsByte<EProgressMessageType>                  MessageType;                                              // (Parm)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     Title;                                                    // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgGameViewportClientBase.AdjustViewportSafeZone
struct UTgGameViewportClientBase_AdjustViewportSafeZone_Params
{
	float                                              Amount;                                                   // (Parm)
};

// Function TgClientBase.TgGameViewportClientBase.SetViewportSafeZone
struct UTgGameViewportClientBase_SetViewportSafeZone_Params
{
	float                                              SafeZone;                                                 // (Parm)
};

// Function TgClientBase.TgGameViewportClientBase.HandleConnectionError
struct UTgGameViewportClientBase_HandleConnectionError_Params
{
	TEnumAsByte<EProgressMessageType>                  MessageType;                                              // (Parm)
};

// Function TgClientBase.TgGameViewportClientBase.NativePostRender
struct UTgGameViewportClientBase_NativePostRender_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function TgClientBase.TgGameViewportClientBase.IsGfxMovieCapturingMouseInput
struct UTgGameViewportClientBase_IsGfxMovieCapturingMouseInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameViewportClientBase.NativeGameSessionEnded
struct UTgGameViewportClientBase_NativeGameSessionEnded_Params
{
};

// Function TgClientBase.TgGameViewportClientBase.DrawTransition
struct UTgGameViewportClientBase_DrawTransition_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function TgClientBase.TgGfxGameInputInterceptor.PrintUIGameInputIntercepts
struct UTgGfxGameInputInterceptor_PrintUIGameInputIntercepts_Params
{
};

// Function TgClientBase.TgGfxGameInputInterceptor.ASC_DebugPrint
struct UTgGfxGameInputInterceptor_ASC_DebugPrint_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxGameInputInterceptor.DebugPrintAS
struct UTgGfxGameInputInterceptor_DebugPrintAS_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxGameInputInterceptor.ASC_HandleInterceptInput
struct UTgGfxGameInputInterceptor_ASC_HandleInterceptInput_Params
{
	class UGFxObject*                                  Obj;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxGameInputInterceptor.HandleInterceptInput
struct UTgGfxGameInputInterceptor_HandleInterceptInput_Params
{
	class UGFxObject*                                  Obj;                                                      // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxGameInputInterceptor.CallInputDelegate
struct UTgGfxGameInputInterceptor_CallInputDelegate_Params
{
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	struct FPointer                                    pInputEvent;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxGameInputInterceptor.USC_ToggleSuspend
struct UTgGfxGameInputInterceptor_USC_ToggleSuspend_Params
{
	bool                                               suspend;                                                  // (Parm)
};

// Function TgClientBase.TgGfxGameInputInterceptor.USC_RemoveIntercept
struct UTgGfxGameInputInterceptor_USC_RemoveIntercept_Params
{
	struct FString                                     sInput;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxGameInputInterceptor.USC_AddIntercept
struct UTgGfxGameInputInterceptor_USC_AddIntercept_Params
{
	struct FString                                     sInput;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxGameInputInterceptor.DebugPrint
struct UTgGfxGameInputInterceptor_DebugPrint_Params
{
};

// Function TgClientBase.TgGfxGameInputInterceptor.HandleASIntercept
struct UTgGfxGameInputInterceptor_HandleASIntercept_Params
{
	struct FPointer                                    pInputEvent;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxGameInputInterceptor.RemoveASIntercept
struct UTgGfxGameInputInterceptor_RemoveASIntercept_Params
{
	struct FString                                     sInput;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxGameInputInterceptor.AddASIntercept
struct UTgGfxGameInputInterceptor_AddASIntercept_Params
{
	struct FString                                     sInput;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxGameInputInterceptor.SetupBindings
struct UTgGfxGameInputInterceptor_SetupBindings_Params
{
};

// Function TgClientBase.TgGfxGameInputInterceptor.HandleInput_Delegate
struct UTgGfxGameInputInterceptor_HandleInput_Delegate_Params
{
	struct FPointer                                    pInputEvent;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.USC_StopVideo_Delegate
struct UTgGfxGameVideoPlayerManager_USC_StopVideo_Delegate_Params
{
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.USC_StopVideo
struct UTgGfxGameVideoPlayerManager_USC_StopVideo_Params
{
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.USC_PlayVideo_Delegate
struct UTgGfxGameVideoPlayerManager_USC_PlayVideo_Delegate_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	class UGFxObject*                                  dimensions;                                               // (Parm)
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.USC_PlayVideo
struct UTgGfxGameVideoPlayerManager_USC_PlayVideo_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
	class UGFxObject*                                  dimensions;                                               // (Parm)
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.DestroyVideoPlayer
struct UTgGfxGameVideoPlayerManager_DestroyVideoPlayer_Params
{
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.OnVideoComplete
struct UTgGfxGameVideoPlayerManager_OnVideoComplete_Params
{
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.ASC_OnVideoComplete
struct UTgGfxGameVideoPlayerManager_ASC_OnVideoComplete_Params
{
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.OnVideoError
struct UTgGfxGameVideoPlayerManager_OnVideoError_Params
{
	int                                                ErrorCode;                                                // (Parm)
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.ASC_OnVideoError
struct UTgGfxGameVideoPlayerManager_ASC_OnVideoError_Params
{
	int                                                ErrorCode;                                                // (Parm)
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.SpawnVideoPlayer
struct UTgGfxGameVideoPlayerManager_SpawnVideoPlayer_Params
{
	class AActor*                                      SpawningActor;                                            // (Parm)
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.Uninitialize
struct UTgGfxGameVideoPlayerManager_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxGameVideoPlayerManager.Initialize
struct UTgGfxGameVideoPlayerManager_Initialize_Params
{
	class UGFxMoviePlayer*                             theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxNameDisplayManager.OnReceiveFilteredNames
struct UTgGFxNameDisplayManager_OnReceiveFilteredNames_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	class UTgPlayerNameManager*                        pManager;                                                 // (Parm)
};

// Function TgClientBase.TgGFxNameDisplayManager.CancelRequest
struct UTgGFxNameDisplayManager_CancelRequest_Params
{
	class UTgGFxPlayerNameWidget*                      pWidget;                                                  // (Parm)
};

// Function TgClientBase.TgGFxNameDisplayManager.MakeRequest
struct UTgGFxNameDisplayManager_MakeRequest_Params
{
	class UTgGFxPlayerNameWidget*                      pWidget;                                                  // (Parm)
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxNameDisplayManager.RemoveWidget
struct UTgGFxNameDisplayManager_RemoveWidget_Params
{
	struct FName                                       WidgetPath;                                               // (Parm)
	class UTgGFxPlayerNameWidget*                      pWidget;                                                  // (Parm)
};

// Function TgClientBase.TgGFxNameDisplayManager.AddWidget
struct UTgGFxNameDisplayManager_AddWidget_Params
{
	struct FName                                       WidgetPath;                                               // (Parm)
	class UTgGFxPlayerNameWidget*                      pWidget;                                                  // (Parm)
};

// Function TgClientBase.TgGFxNameDisplayManager.Uninitialize
struct UTgGFxNameDisplayManager_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxNameDisplayManager.Initialize
struct UTgGFxNameDisplayManager_Initialize_Params
{
};

// Function TgClientBase.TgGFxObject.ASRemoveAllEventListenersImpl
struct UTgGFxObject_ASRemoveAllEventListenersImpl_Params
{
	struct FString                                     Event;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxObject.ASRemoveEventListenerImpl
struct UTgGFxObject_ASRemoveEventListenerImpl_Params
{
	struct FString                                     Type;                                                     // (Parm, NeedCtorLink)
	class UGFxObject*                                  O;                                                        // (Parm)
	struct FString                                     func;                                                     // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxObject.ASAddEventListenerImpl
struct UTgGFxObject_ASAddEventListenerImpl_Params
{
	struct FString                                     Type;                                                     // (Parm, NeedCtorLink)
	class UGFxObject*                                  O;                                                        // (Parm)
	struct FString                                     func;                                                     // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxObject.ASRemoveListenerImpl
struct UTgGFxObject_ASRemoveListenerImpl_Params
{
	class UGFxObject*                                  O;                                                        // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxObject.ASSetListenerImpl
struct UTgGFxObject_ASSetListenerImpl_Params
{
	class UGFxObject*                                  O;                                                        // (Parm)
	struct FString                                     Member;                                                   // (Parm, NeedCtorLink)
	struct FScriptDelegate                             Listener;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxObject.ASRemoveAllEventListeners
struct UTgGFxObject_ASRemoveAllEventListeners_Params
{
	struct FName                                       nmEvent;                                                  // (Parm)
};

// Function TgClientBase.TgGFxObject.ASRemoveEventListener
struct UTgGFxObject_ASRemoveEventListener_Params
{
	struct FName                                       nmEvent;                                                  // (Parm)
	class UObject*                                     pScope;                                                   // (Parm)
	struct FName                                       nmCallback;                                               // (Parm)
};

// Function TgClientBase.TgGFxObject.ASAddEventListener
struct UTgGFxObject_ASAddEventListener_Params
{
	struct FName                                       nmEvent;                                                  // (Parm)
	class UObject*                                     pScope;                                                   // (Parm)
	struct FName                                       nmCallback;                                               // (Parm)
};

// Function TgClientBase.TgGFxObject.EventListener
struct UTgGFxObject_EventListener_Params
{
	struct FGFxEventData                               Data;                                                     // (Parm)
};

// Function TgClientBase.TgGFxObject.ProjectXYTo
struct UTgGFxObject_ProjectXYTo_Params
{
	class UGFxObject*                                  pTo;                                                      // (Parm)
	float                                              nX;                                                       // (Parm, OutParm)
	float                                              nY;                                                       // (Parm, OutParm)
	bool                                               bIsPosition;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxObject.ProjectXYFrom
struct UTgGFxObject_ProjectXYFrom_Params
{
	class UGFxObject*                                  pFrom;                                                    // (Parm)
	float                                              nX;                                                       // (Parm, OutParm)
	float                                              nY;                                                       // (Parm, OutParm)
	bool                                               bIsPosition;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxObject.GlobalToParent
struct UTgGFxObject_GlobalToParent_Params
{
	float                                              nX;                                                       // (Parm, OutParm)
	float                                              nY;                                                       // (Parm, OutParm)
	bool                                               bIsPosition;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxObject.ParentToGlobal
struct UTgGFxObject_ParentToGlobal_Params
{
	float                                              nX;                                                       // (Parm, OutParm)
	float                                              nY;                                                       // (Parm, OutParm)
	bool                                               bIsPosition;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxObject.ParentToLocal
struct UTgGFxObject_ParentToLocal_Params
{
	float                                              nX;                                                       // (Parm, OutParm)
	float                                              nY;                                                       // (Parm, OutParm)
	bool                                               bIsPosition;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxObject.LocalToParent
struct UTgGFxObject_LocalToParent_Params
{
	float                                              nX;                                                       // (Parm, OutParm)
	float                                              nY;                                                       // (Parm, OutParm)
	bool                                               bIsPosition;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxObject.GlobalToLocal
struct UTgGFxObject_GlobalToLocal_Params
{
	float                                              nX;                                                       // (Parm, OutParm)
	float                                              nY;                                                       // (Parm, OutParm)
	bool                                               bIsPosition;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxObject.LocalToGlobal
struct UTgGFxObject_LocalToGlobal_Params
{
	float                                              nX;                                                       // (Parm, OutParm)
	float                                              nY;                                                       // (Parm, OutParm)
	bool                                               bIsPosition;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxObject.GetBoundsRelativeToStage
struct UTgGFxObject_GetBoundsRelativeToStage_Params
{
	struct FRect                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.GetHitAreaBounds
struct UTgGFxObject_GetHitAreaBounds_Params
{
	class UTgGFxObject*                                pRelativeTo;                                              // (OptionalParm, Parm)
	struct FRect                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.GetBounds
struct UTgGFxObject_GetBounds_Params
{
	class UTgGFxObject*                                pRelativeTo;                                              // (OptionalParm, Parm)
	struct FRect                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.SetBounds
struct UTgGFxObject_SetBounds_Params
{
	struct FRect                                       rectBounds;                                               // (Const, Parm, OutParm)
};

// Function TgClientBase.TgGFxObject.SetPositionY
struct UTgGFxObject_SetPositionY_Params
{
	float                                              nValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxObject.SetPositionX
struct UTgGFxObject_SetPositionX_Params
{
	float                                              nValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxObject.GetPositionY
struct UTgGFxObject_GetPositionY_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.GetPositionX
struct UTgGFxObject_GetPositionX_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.CreateGFxArray
struct UTgGFxObject_CreateGFxArray_Params
{
	class UClass*                                      pClass;                                                   // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.CreateGFxObject
struct UTgGFxObject_CreateGFxObject_Params
{
	struct FString                                     sClassPath;                                               // (OptionalParm, Parm, NeedCtorLink)
	class UClass*                                      pClass;                                                   // (OptionalParm, Parm)
	TArray<struct FASValue>                            arrCtorArgs;                                              // (Const, OptionalParm, Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.OnCreateGFxObject
struct UTgGFxObject_OnCreateGFxObject_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	class UClass*                                      pClass;                                                   // (Parm)
};

// Function TgClientBase.TgGFxObject.UnbindFunction
struct UTgGFxObject_UnbindFunction_Params
{
	struct FName                                       nmFuncName;                                               // (Parm)
};

// Function TgClientBase.TgGFxObject.BindFunction
struct UTgGFxObject_BindFunction_Params
{
	struct FName                                       nmFuncName;                                               // (Parm)
};

// Function TgClientBase.TgGFxObject.SetFunction
struct UTgGFxObject_SetFunction_Params
{
	struct FString                                     sMember;                                                  // (Parm, NeedCtorLink)
	class UObject*                                     pContext;                                                 // (Parm)
	struct FName                                       nmFuncName;                                               // (Parm)
};

// Function TgClientBase.TgGFxObject.RemoveChild
struct UTgGFxObject_RemoveChild_Params
{
	class UTgGFxObject*                                pChild;                                                   // (Parm)
};

// Function TgClientBase.TgGFxObject.SwapDepthsI
struct UTgGFxObject_SwapDepthsI_Params
{
	int                                                nTargetIndex;                                             // (Parm)
};

// Function TgClientBase.TgGFxObject.SwapDepths
struct UTgGFxObject_SwapDepths_Params
{
	class UGFxObject*                                  pTarget;                                                  // (Parm)
};

// Function TgClientBase.TgGFxObject.GetDepth
struct UTgGFxObject_GetDepth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.GetNextHighestDepth
struct UTgGFxObject_GetNextHighestDepth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.DuplicateMovieClip
struct UTgGFxObject_DuplicateMovieClip_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	int                                                nDepth;                                                   // (Parm)
	class UGFxObject*                                  pInitValues;                                              // (OptionalParm, Parm)
	class UClass*                                      pClass;                                                   // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.ContainsChild
struct UTgGFxObject_ContainsChild_Params
{
	class UTgGFxObject*                                pChild;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.GetGFxHitArea
struct UTgGFxObject_GetGFxHitArea_Params
{
	class UTgGFxObject*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.GetGFxParent
struct UTgGFxObject_GetGFxParent_Params
{
	class UTgGFxObject*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.GetGFxStagePath
struct UTgGFxObject_GetGFxStagePath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxObject.GetGFxName
struct UTgGFxObject_GetGFxName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxObject.GetVisible
struct UTgGFxObject_GetVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.GetAspectRatio
struct UTgGFxObject_GetAspectRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.GetDisabled
struct UTgGFxObject_GetDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.SetDisabled
struct UTgGFxObject_SetDisabled_Params
{
	bool                                               bDisabled;                                                // (Parm)
};

// Function TgClientBase.TgGFxObject.SetScaleY
struct UTgGFxObject_SetScaleY_Params
{
	float                                              nValue;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.SetScaleX
struct UTgGFxObject_SetScaleX_Params
{
	float                                              nValue;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.GetScaleY
struct UTgGFxObject_GetScaleY_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.GetScaleX
struct UTgGFxObject_GetScaleX_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.SetScale
struct UTgGFxObject_SetScale_Params
{
	float                                              nX;                                                       // (Parm)
	float                                              nY;                                                       // (Parm)
};

// Function TgClientBase.TgGFxObject.GetScale
struct UTgGFxObject_GetScale_Params
{
	float                                              out_nX;                                                   // (Parm, OutParm)
	float                                              out_nY;                                                   // (Parm, OutParm)
};

// Function TgClientBase.TgGFxObject.SetHeight
struct UTgGFxObject_SetHeight_Params
{
	float                                              nValue;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.SetWidth
struct UTgGFxObject_SetWidth_Params
{
	float                                              nValue;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.GetHeight
struct UTgGFxObject_GetHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.GetWidth
struct UTgGFxObject_GetWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxObject.SetSize
struct UTgGFxObject_SetSize_Params
{
	float                                              nWidth;                                                   // (Parm)
	float                                              nHeight;                                                  // (Parm)
};

// Function TgClientBase.TgGFxObject.GetSize
struct UTgGFxObject_GetSize_Params
{
	float                                              out_nWidth;                                               // (Parm, OutParm)
	float                                              out_nHeight;                                              // (Parm, OutParm)
};

// Function TgClientBase.TgGFxButtonPrompt.SetVisible
struct UTgGFxButtonPrompt_SetVisible_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxButtonPrompt.SetDefaultText
struct UTgGFxButtonPrompt_SetDefaultText_Params
{
	struct FString                                     sText;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxButtonPrompt.SetPromptText
struct UTgGFxButtonPrompt_SetPromptText_Params
{
	struct FString                                     sText;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxButtonPrompt.SetDisplayButton
struct UTgGFxButtonPrompt_SetDisplayButton_Params
{
	struct FName                                       nmXboxType;                                               // (Parm)
};

// Function TgClientBase.TgGFxButtonPrompt.SetPrompt
struct UTgGFxButtonPrompt_SetPrompt_Params
{
	struct FName                                       nmXboxType;                                               // (Parm)
	struct FString                                     sText;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxEventObject.GetArrInputIntercepts
struct UTgGFxEventObject_GetArrInputIntercepts_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgGFxEventObject.GetArrGameEventListeners
struct UTgGFxEventObject_GetArrGameEventListeners_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgGFxEventObject.GetArrMctsListeners
struct UTgGFxEventObject_GetArrMctsListeners_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgGFxEventObject.GetArrOldMctsListeners
struct UTgGFxEventObject_GetArrOldMctsListeners_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgGFxEventObject.IsInitialized
struct UTgGFxEventObject_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxEventObject.GetMovieDispatcher
struct UTgGFxEventObject_GetMovieDispatcher_Params
{
	class UTgEventDispatcher*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxEventObject.OnCreateGFxObject
struct UTgGFxEventObject_OnCreateGFxObject_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
	class UClass*                                      pClass;                                                   // (Parm)
};

// Function TgClientBase.TgGFxEventObject.Uninitialize
struct UTgGFxEventObject_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxEventObject.Initialize
struct UTgGFxEventObject_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgDataChunk.GetOuterTgMoviePlayer
struct UTgDataChunk_GetOuterTgMoviePlayer_Params
{
	class UTgMoviePlayer*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataChunk.usc_ResetAllFields
struct UTgDataChunk_usc_ResetAllFields_Params
{
};

// Function TgClientBase.TgDataChunk.usc_Unsubscribe
struct UTgDataChunk_usc_Unsubscribe_Params
{
};

// Function TgClientBase.TgDataChunk.usc_Subscribe
struct UTgDataChunk_usc_Subscribe_Params
{
};

// Function TgClientBase.TgDataChunk.GetPlayerController
struct UTgDataChunk_GetPlayerController_Params
{
	class ATgPlayerController*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataChunk.NeedsUpdate
struct UTgDataChunk_NeedsUpdate_Params
{
	unsigned char                                      fStep;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataChunk.IsSubscribed
struct UTgDataChunk_IsSubscribed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataChunk.ForceNextUpdate
struct UTgDataChunk_ForceNextUpdate_Params
{
};

// Function TgClientBase.TgDataChunk.SetDirty
struct UTgDataChunk_SetDirty_Params
{
};

// Function TgClientBase.TgDataChunk.GetFieldByHandle
struct UTgDataChunk_GetFieldByHandle_Params
{
	struct FTgDataFieldHandle                          InHandle;                                                 // (Const, Parm, OutParm)
	struct FASValue                                    NewValue;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataChunk.GetField
struct UTgDataChunk_GetField_Params
{
	struct FPointer                                    FieldName;                                                // (Const, Parm)
	struct FASValue                                    NewValue;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataChunk.SetFieldByHandle
struct UTgDataChunk_SetFieldByHandle_Params
{
	struct FTgDataFieldHandle                          InHandle;                                                 // (Const, Parm, OutParm)
	struct FASValue                                    NewValue;                                                 // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataChunk.SetField
struct UTgDataChunk_SetField_Params
{
	struct FPointer                                    FieldName;                                                // (Const, Parm)
	struct FASValue                                    NewValue;                                                 // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               bCreateIfMissing;                                         // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataChunk.AddField
struct UTgDataChunk_AddField_Params
{
	struct FPointer                                    FieldName;                                                // (Const, Parm)
	struct FASValue                                    NewValue;                                                 // (Const, Parm, OutParm, NeedCtorLink)
	struct FTgDataFieldHandle                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataChunk.ResetAllFields
struct UTgDataChunk_ResetAllFields_Params
{
};

// Function TgClientBase.TgDataChunk.ClearDelegates
struct UTgDataChunk_ClearDelegates_Params
{
};

// Function TgClientBase.TgDataChunk.SetDelegates
struct UTgDataChunk_SetDelegates_Params
{
};

// Function TgClientBase.TgDataChunk.RemoveChildChunk
struct UTgDataChunk_RemoveChildChunk_Params
{
	class UTgDataChunk*                                Child;                                                    // (Parm)
	bool                                               bClearDelegates;                                          // (OptionalParm, Parm)
};

// Function TgClientBase.TgDataChunk.AddChildChunk
struct UTgDataChunk_AddChildChunk_Params
{
	class UTgDataChunk*                                Child;                                                    // (Parm)
};

// Function TgClientBase.TgDataChunk.PostDataUpdatedEvent
struct UTgDataChunk_PostDataUpdatedEvent_Params
{
};

// Function TgClientBase.TgDataChunk.DataUpdateEvent
struct UTgDataChunk_DataUpdateEvent_Params
{
};

// Function TgClientBase.TgDataChunk.Update
struct UTgDataChunk_Update_Params
{
	float                                              DeltaTime;                                                // (Parm)
	bool                                               bSkipCallback;                                            // (OptionalParm, Parm)
};

// Function TgClientBase.TgDataChunk.NotifyMapChange
struct UTgDataChunk_NotifyMapChange_Params
{
};

// Function TgClientBase.TgDataChunk.UpdateInternal
struct UTgDataChunk_UpdateInternal_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClientBase.TgDataChunk.Uninitialize
struct UTgDataChunk_Uninitialize_Params
{
};

// Function TgClientBase.TgDataChunk.InitializeData
struct UTgDataChunk_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGfxScene.GetLP
struct UTgGfxScene_GetLP_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxScene.ClearLoadSceneData
struct UTgGfxScene_ClearLoadSceneData_Params
{
	struct FString                                     sSceneName;                                               // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxScene.GetLoadSceneData
struct UTgGfxScene_GetLoadSceneData_Params
{
	struct FString                                     sSceneName;                                               // (Parm, NeedCtorLink)
	class UTgDataItem*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxScene.SendGFxData
struct UTgGfxScene_SendGFxData_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
};

// Function TgClientBase.TgGfxScene.ReceiveGFxData
struct UTgGfxScene_ReceiveGFxData_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
};

// Function TgClientBase.TgGfxScene.GetIntervalManager
struct UTgGfxScene_GetIntervalManager_Params
{
	class UTgIntervalManager*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxScene.Uninitialize
struct UTgGfxScene_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxScene.Initialize
struct UTgGfxScene_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxAcquisitionPopup.HideAcquisition
struct UTgGfxAcquisitionPopup_HideAcquisition_Params
{
};

// Function TgClientBase.TgGfxAcquisitionPopup.DoShowAcquisition
struct UTgGfxAcquisitionPopup_DoShowAcquisition_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
};

// Function TgClientBase.TgGfxAcquisitionPopup.EquipAll
struct UTgGfxAcquisitionPopup_EquipAll_Params
{
};

// Function TgClientBase.TgGfxAcquisitionPopup.ReceiveGFxData
struct UTgGfxAcquisitionPopup_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxAcquisitionPopup.Initialize
struct UTgGfxAcquisitionPopup_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxAcquisitionPopup.ClearAcquisitions
struct UTgGfxAcquisitionPopup_ClearAcquisitions_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxAcquisitionPopup.ShowAcquisition
struct UTgGfxAcquisitionPopup_ShowAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxAcquisitionPopup.HideAcquisitionInternal
struct UTgGfxAcquisitionPopup_HideAcquisitionInternal_Params
{
};

// Function TgClientBase.TgGfxAcquisitionPopup.ShowAcquisitionInternal
struct UTgGfxAcquisitionPopup_ShowAcquisitionInternal_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
};

// Function TgClientBase.TgGfxAdventureProgressArena.OnAcquisition
struct UTgGfxAdventureProgressArena_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxAdventureProgressArena.Uninitialize
struct UTgGfxAdventureProgressArena_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxAdventureProgressArena.ReceiveGFxData
struct UTgGfxAdventureProgressArena_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxAdventureProgressArena.Initialize
struct UTgGfxAdventureProgressArena_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxAdventureProgressCH09.OnAcquisition
struct UTgGfxAdventureProgressCH09_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxAdventureProgressCH09.Uninitialize
struct UTgGfxAdventureProgressCH09_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxAdventureProgressCH09.ReceiveGFxData
struct UTgGfxAdventureProgressCH09_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxAdventureProgressCH09.Initialize
struct UTgGfxAdventureProgressCH09_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxAdventureProgressCH10.OnAcquisition
struct UTgGfxAdventureProgressCH10_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxAdventureProgressCH10.SetupChestPurchaseFox
struct UTgGfxAdventureProgressCH10_SetupChestPurchaseFox_Params
{
};

// Function TgClientBase.TgGfxAdventureProgressCH10.Uninitialize
struct UTgGfxAdventureProgressCH10_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxAdventureProgressCH10.ReceiveGFxData
struct UTgGfxAdventureProgressCH10_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxAdventureProgressCH10.Initialize
struct UTgGfxAdventureProgressCH10_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxAdventureProgressHel.OnAcquisition
struct UTgGfxAdventureProgressHel_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxAdventureProgressHel.Uninitialize
struct UTgGfxAdventureProgressHel_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxAdventureProgressHel.ReceiveGFxData
struct UTgGfxAdventureProgressHel_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxAdventureProgressHel.Initialize
struct UTgGfxAdventureProgressHel_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxAdventureProgressHel.SetupChestPurchase
struct UTgGfxAdventureProgressHel_SetupChestPurchase_Params
{
};

// Function TgClientBase.TgGfxAdventuresVault.OnAcquisition
struct UTgGfxAdventuresVault_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxAdventuresVault.PopulateVaultData
struct UTgGfxAdventuresVault_PopulateVaultData_Params
{
};

// Function TgClientBase.TgGfxAdventuresVault.SetVaultOwnership
struct UTgGfxAdventuresVault_SetVaultOwnership_Params
{
	int                                                vaultIdx;                                                 // (Parm)
};

// Function TgClientBase.TgGfxAdventuresVault.ExitVault
struct UTgGfxAdventuresVault_ExitVault_Params
{
	int                                                previousVault;                                            // (Parm)
};

// Function TgClientBase.TgGfxAdventuresVault.EnterVault
struct UTgGfxAdventuresVault_EnterVault_Params
{
	int                                                EventIndex;                                               // (Parm)
};

// Function TgClientBase.TgGfxAdventuresVault.SendLobbyCamEvent
struct UTgGfxAdventuresVault_SendLobbyCamEvent_Params
{
	int                                                EventType;                                                // (Parm)
	int                                                camType;                                                  // (Parm)
};

// Function TgClientBase.TgGfxAdventuresVault.ClickedVaultArea
struct UTgGfxAdventuresVault_ClickedVaultArea_Params
{
	int                                                EventType;                                                // (Parm)
	int                                                indexLoc;                                                 // (Parm)
};

// Function TgClientBase.TgGfxAdventuresVault.Uninitialize
struct UTgGfxAdventuresVault_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxAdventuresVault.ReceiveGFxData
struct UTgGfxAdventuresVault_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxAdventuresVault.Initialize
struct UTgGfxAdventuresVault_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxBattlePass.GetAcquisitionSubtext
struct UTgGfxBattlePass_GetAcquisitionSubtext_Params
{
	struct FUIQueuedAcquisition                        acqData;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     sOutSubtext;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxBattlePass.ReceiveEndTransition
struct UTgGfxBattlePass_ReceiveEndTransition_Params
{
	class UTgEventDataItem*                            pDataItem;                                                // (Parm)
};

// Function TgClientBase.TgGfxBattlePass.ReceiveGFxData
struct UTgGfxBattlePass_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxBattlePass.Uninitialize
struct UTgGfxBattlePass_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxBattlePass.Initialize
struct UTgGfxBattlePass_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxBattlePassToast.ReceiveGFxData
struct UTgGfxBattlePassToast_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxBattlePassToast.Uninitialize
struct UTgGfxBattlePassToast_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxBattlePassToast.Initialize
struct UTgGfxBattlePassToast_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxBrowser.ToggleVisibility
struct UTgGFxBrowser_ToggleVisibility_Params
{
	bool                                               bShow;                                                    // (Parm)
	bool                                               bShowNav;                                                 // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxBrowser.GetAbsoluteSize
struct UTgGFxBrowser_GetAbsoluteSize_Params
{
	float                                              Width;                                                    // (Parm, OutParm)
	float                                              Height;                                                   // (Parm, OutParm)
};

// Function TgClientBase.TgGFxBrowser.GetAbsolutePosition
struct UTgGFxBrowser_GetAbsolutePosition_Params
{
	float                                              X;                                                        // (Parm, OutParm)
	float                                              Y;                                                        // (Parm, OutParm)
};

// Function TgClientBase.TgGFxBrowser.OnPopupOpened
struct UTgGFxBrowser_OnPopupOpened_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxBrowser.SetControls
struct UTgGFxBrowser_SetControls_Params
{
	bool                                               prevDisabled;                                             // (Parm)
	bool                                               nextDisabled;                                             // (Parm)
};

// Function TgClientBase.TgGFxBrowser.ToggleControls
struct UTgGFxBrowser_ToggleControls_Params
{
	bool                                               showNav;                                                  // (Parm)
};

// Function TgClientBase.TgGFxBrowser.USC_OnNavigate
struct UTgGFxBrowser_USC_OnNavigate_Params
{
	int                                                navId;                                                    // (Parm)
};

// Function TgClientBase.TgGFxBrowser.USC_OnResize
struct UTgGFxBrowser_USC_OnResize_Params
{
};

// Function TgClientBase.TgGFxBrowser.Uninitialize
struct UTgGFxBrowser_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxBrowser.Initialize
struct UTgGFxBrowser_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxBundlesPurchase.OnAcquisition
struct UTgGfxBundlesPurchase_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxBundlesPurchase.PopulateBundleData
struct UTgGfxBundlesPurchase_PopulateBundleData_Params
{
};

// Function TgClientBase.TgGfxBundlesPurchase.Uninitialize
struct UTgGfxBundlesPurchase_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxBundlesPurchase.ReceiveGFxData
struct UTgGfxBundlesPurchase_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxBundlesPurchase.Initialize
struct UTgGfxBundlesPurchase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxBuyAllModalBase.ReceiveGFxData
struct UTgGfxBuyAllModalBase_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxBuyAllModalBase.Uninitialize
struct UTgGfxBuyAllModalBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxBuyAllModalBase.Initialize
struct UTgGfxBuyAllModalBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxCommendationPage.Uninitialize
struct UTgGfxCommendationPage_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxCommendationPage.ReceiveGFxData
struct UTgGfxCommendationPage_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxCommendationPage.Initialize
struct UTgGfxCommendationPage_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxControllerDisconnect.Unload
struct UTgGFxControllerDisconnect_Unload_Params
{
};

// Function TgClientBase.TgGFxControllerDisconnect.USC_CloseDialog
struct UTgGFxControllerDisconnect_USC_CloseDialog_Params
{
};

// Function TgClientBase.TgGFxControllerDisconnect.Uninitialize
struct UTgGFxControllerDisconnect_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxControllerDisconnect.Initialize
struct UTgGFxControllerDisconnect_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxDailyDealPopup.ReceiveGFxData
struct UTgGFxDailyDealPopup_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGFxDailyDealPopup.Initialize
struct UTgGFxDailyDealPopup_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxDailyReward.UpdateDataToAS
struct UTgGfxDailyReward_UpdateDataToAS_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxDailyReward.Uninitialize
struct UTgGfxDailyReward_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxDailyReward.Initialize
struct UTgGfxDailyReward_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxDailyReward.UpdateDailyData
struct UTgGfxDailyReward_UpdateDailyData_Params
{
};

// Function TgClientBase.TgGfxDebugActivity.USC_SearchActivity
struct UTgGfxDebugActivity_USC_SearchActivity_Params
{
	int                                                searchId;                                                 // (Parm)
	bool                                               isActivity;                                               // (Parm)
};

// Function TgClientBase.TgGfxDebugActivity.Uninitialize
struct UTgGfxDebugActivity_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxDebugActivity.Initialize
struct UTgGfxDebugActivity_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxEventBundleList.Uninitialize
struct UTgGfxEventBundleList_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxEventBundleList.Initialize
struct UTgGfxEventBundleList_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxEventBundleList.USC_UpdateBundles
struct UTgGfxEventBundleList_USC_UpdateBundles_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
};

// Function TgClientBase.TgGfxEventSceneBase.GetEventAcquisitionSubtext
struct UTgGfxEventSceneBase_GetEventAcquisitionSubtext_Params
{
	struct FUIQueuedAcquisition                        acqData;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     OutSubtext;                                               // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxEventSceneBase.GetAcquisitionSubtext
struct UTgGfxEventSceneBase_GetAcquisitionSubtext_Params
{
	struct FUIQueuedAcquisition                        acqData;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     OutSubtext;                                               // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxEventSceneBase.OnSceneOpened
struct UTgGfxEventSceneBase_OnSceneOpened_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxEventSceneBase.OnRedirect
struct UTgGfxEventSceneBase_OnRedirect_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxEventSceneBase.OnAcquisition
struct UTgGfxEventSceneBase_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxEventSceneBase.Uninitialize
struct UTgGfxEventSceneBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxEventSceneBase.ReceiveGFxData
struct UTgGfxEventSceneBase_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxEventSceneBase.Initialize
struct UTgGfxEventSceneBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxCommunityEventBase.UpdateRewardItems
struct UTgGfxCommunityEventBase_UpdateRewardItems_Params
{
};

// Function TgClientBase.TgGfxCommunityEventBase.UpdateEventBars
struct UTgGfxCommunityEventBase_UpdateEventBars_Params
{
};

// Function TgClientBase.TgGfxCommunityEventBase.USC_ClaimNextReward
struct UTgGfxCommunityEventBase_USC_ClaimNextReward_Params
{
	int                                                itemGoalId;                                               // (Parm)
};

// Function TgClientBase.TgGfxCommunityEventBase.Uninitialize
struct UTgGfxCommunityEventBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxCommunityEventBase.ReceiveGFxData
struct UTgGfxCommunityEventBase_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxCommunityEventBase.Initialize
struct UTgGfxCommunityEventBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.UpdateTabs
struct UTgGfxDivineUprisingEventBase_UpdateTabs_Params
{
	int                                                unseenQuests;                                             // (Parm)
	int                                                gotoTab;                                                  // (Parm)
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.USC_UpdateQuestNotification
struct UTgGfxDivineUprisingEventBase_USC_UpdateQuestNotification_Params
{
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.GetActiveChapters
struct UTgGfxDivineUprisingEventBase_GetActiveChapters_Params
{
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.PopulateQuestData
struct UTgGfxDivineUprisingEventBase_PopulateQuestData_Params
{
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.PopulateRewardSkinProgress
struct UTgGfxDivineUprisingEventBase_PopulateRewardSkinProgress_Params
{
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.PopulateRewardSkinData
struct UTgGfxDivineUprisingEventBase_PopulateRewardSkinData_Params
{
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.ReceiveGFxData
struct UTgGfxDivineUprisingEventBase_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.Uninitialize
struct UTgGfxDivineUprisingEventBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxDivineUprisingEventBase.Initialize
struct UTgGfxDivineUprisingEventBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxEventBundleCollection.Uninitialize
struct UTgGfxEventBundleCollection_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxEventBundleCollection.ReceiveGFxData
struct UTgGfxEventBundleCollection_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxEventBundleCollection.Initialize
struct UTgGfxEventBundleCollection_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxEventTreasureRoll.Uninitialize
struct UTgGfxEventTreasureRoll_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxEventTreasureRoll.ReceiveGFxData
struct UTgGfxEventTreasureRoll_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxEventTreasureRoll.Initialize
struct UTgGfxEventTreasureRoll_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxGiftingEventBase.Uninitialize
struct UTgGfxGiftingEventBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxGiftingEventBase.ReceiveGFxData
struct UTgGfxGiftingEventBase_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxGiftingEventBase.Initialize
struct UTgGfxGiftingEventBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxNewMoonEvent.GetEventAcquisitionSubtext
struct UTgGfxNewMoonEvent_GetEventAcquisitionSubtext_Params
{
	struct FUIQueuedAcquisition                        acqData;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     OutSubtext;                                               // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxNewMoonEvent.UpdateTabs
struct UTgGfxNewMoonEvent_UpdateTabs_Params
{
	int                                                unseenQuests;                                             // (Parm)
	int                                                gotoTab;                                                  // (Parm)
};

// Function TgClientBase.TgGfxNewMoonEvent.USC_UpdateQuestNotification
struct UTgGfxNewMoonEvent_USC_UpdateQuestNotification_Params
{
};

// Function TgClientBase.TgGfxNewMoonEvent.onFinishModelLoad
struct UTgGfxNewMoonEvent_onFinishModelLoad_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxNewMoonEvent.GetActiveChapters
struct UTgGfxNewMoonEvent_GetActiveChapters_Params
{
};

// Function TgClientBase.TgGfxNewMoonEvent.PopulateQuestData
struct UTgGfxNewMoonEvent_PopulateQuestData_Params
{
};

// Function TgClientBase.TgGfxNewMoonEvent.PopulateRewardSkinProgress
struct UTgGfxNewMoonEvent_PopulateRewardSkinProgress_Params
{
};

// Function TgClientBase.TgGfxNewMoonEvent.PopulateRewardSkinData
struct UTgGfxNewMoonEvent_PopulateRewardSkinData_Params
{
};

// Function TgClientBase.TgGfxNewMoonEvent.ReceiveGFxData
struct UTgGfxNewMoonEvent_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxNewMoonEvent.Uninitialize
struct UTgGfxNewMoonEvent_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxNewMoonEvent.Initialize
struct UTgGfxNewMoonEvent_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxOdysseyEventBase.Uninitialize
struct UTgGfxOdysseyEventBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxOdysseyEventBase.ReceiveGFxData
struct UTgGfxOdysseyEventBase_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxOdysseyEventBase.Initialize
struct UTgGfxOdysseyEventBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxSeasonalEventCalendar.GetEventAcquisitionSubtext
struct UTgGfxSeasonalEventCalendar_GetEventAcquisitionSubtext_Params
{
	struct FUIQueuedAcquisition                        acqData;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     OutSubtext;                                               // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxSeasonalEventCalendar.Uninitialize
struct UTgGfxSeasonalEventCalendar_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxSeasonalEventCalendar.ReceiveGFxData
struct UTgGfxSeasonalEventCalendar_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxSeasonalEventCalendar.Initialize
struct UTgGfxSeasonalEventCalendar_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxEventTreasureRollList.Uninitialize
struct UTgGfxEventTreasureRollList_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxEventTreasureRollList.Initialize
struct UTgGfxEventTreasureRollList_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxEventTreasureRollList.USC_UpdateTreasureRollContent
struct UTgGfxEventTreasureRollList_USC_UpdateTreasureRollContent_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
};

// Function TgClientBase.TgGfxFriendSelector.OnSearchEmpty
struct UTgGfxFriendSelector_OnSearchEmpty_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFriendSelector.OnServerSearchResults
struct UTgGfxFriendSelector_OnServerSearchResults_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFriendSelector.OnLocalSearchResults
struct UTgGfxFriendSelector_OnLocalSearchResults_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFriendSelector.OnStartSearch
struct UTgGfxFriendSelector_OnStartSearch_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFriendSelector.USC_SearchFriends
struct UTgGfxFriendSelector_USC_SearchFriends_Params
{
	struct FString                                     PlayerName;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxFriendSelector.USC_SelectFriend
struct UTgGfxFriendSelector_USC_SelectFriend_Params
{
	class UTgGFxPlayerData*                            pPlayer;                                                  // (Parm)
};

// Function TgClientBase.TgGfxFriendSelector.OnReceiveSearchQuery
struct UTgGfxFriendSelector_OnReceiveSearchQuery_Params
{
	struct FPointer                                    pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFriendSelector.Uninitialize
struct UTgGfxFriendSelector_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxFriendSelector.Initialize
struct UTgGfxFriendSelector_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxFullscreenBackground.SetBackgroundImageAS
struct UTgGFxFullscreenBackground_SetBackgroundImageAS_Params
{
	struct FString                                     sImage;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxFullscreenBackground.SetBackgroundImageInternal
struct UTgGFxFullscreenBackground_SetBackgroundImageInternal_Params
{
	struct FString                                     sImage;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxFullscreenBackground.ClearBackgroundImage
struct UTgGFxFullscreenBackground_ClearBackgroundImage_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxFullscreenBackground.SetBackgroundImage
struct UTgGFxFullscreenBackground_SetBackgroundImage_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxFullscreenBackground.Uninitialize
struct UTgGFxFullscreenBackground_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxFullscreenBackground.Initialize
struct UTgGFxFullscreenBackground_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxGammaControls.Uninitialize
struct UTgGfxGammaControls_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxGammaControls.Initialize
struct UTgGfxGammaControls_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxGammaControls.DrawGammaLogo
struct UTgGfxGammaControls_DrawGammaLogo_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function TgClientBase.TgGfxGiftingBase.SetReceiverData
struct UTgGfxGiftingBase_SetReceiverData_Params
{
	struct FString                                     sPlayerName;                                              // (Parm, NeedCtorLink)
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxGiftingBase.SetMessageData
struct UTgGfxGiftingBase_SetMessageData_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
	int                                                nMessageId;                                               // (Parm)
};

// Function TgClientBase.TgGfxGiftingBase.ForceSingleReceiverPopup
struct UTgGfxGiftingBase_ForceSingleReceiverPopup_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	struct FString                                     nPlayerId;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxGiftingBase.USC_PurchaseGift
struct UTgGfxGiftingBase_USC_PurchaseGift_Params
{
	int                                                giftItemId;                                               // (Parm)
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
	int                                                nMsgIndex;                                                // (Parm)
	bool                                               bAnon;                                                    // (Parm)
};

// Function TgClientBase.TgGfxGiftingBase.GetSingleReceiverProfile
struct UTgGfxGiftingBase_GetSingleReceiverProfile_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	class UTgPlayerNameManager*                        pManager;                                                 // (Parm)
};

// Function TgClientBase.TgGfxGiftingBase.SetSingleReceiver
struct UTgGfxGiftingBase_SetSingleReceiver_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxGiftingBase.OnReceiveFriends
struct UTgGfxGiftingBase_OnReceiveFriends_Params
{
	class UTgGFxFriendData*                            pFriends;                                                 // (Parm)
};

// Function TgClientBase.TgGfxGiftingBase.PopulateMessageSelector
struct UTgGfxGiftingBase_PopulateMessageSelector_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxGiftingBase.MessageSelected
struct UTgGfxGiftingBase_MessageSelected_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxGiftingBase.FriendSelected
struct UTgGfxGiftingBase_FriendSelected_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxGiftingBase.ForceSingleReceiver
struct UTgGfxGiftingBase_ForceSingleReceiver_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Parm, OutParm, NeedCtorLink)
	struct FString                                     overrideName;                                             // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxGiftingBase.ReceiveGFxData
struct UTgGfxGiftingBase_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxGiftingBase.Uninitialize
struct UTgGfxGiftingBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxGiftingBase.Initialize
struct UTgGfxGiftingBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxGiftNotification.OnReceiveNotification
struct UTgGfxGiftNotification_OnReceiveNotification_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxGiftNotification.Uninitialize
struct UTgGfxGiftNotification_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxGiftNotification.Initialize
struct UTgGfxGiftNotification_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxGiftNotification.GiftNotification
struct UTgGfxGiftNotification_GiftNotification_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
	int                                                nFrameId;                                                 // (Parm)
};

// Function TgClientBase.TgGfxGiftNotification.ASC_GiftNotification
struct UTgGfxGiftNotification_ASC_GiftNotification_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
	int                                                nFrameId;                                                 // (Parm)
};

// Function TgClientBase.TgGfxGiftSentPopup.OnReceivePlayerName
struct UTgGfxGiftSentPopup_OnReceivePlayerName_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	class UTgPlayerNameManager*                        pManager;                                                 // (Parm)
};

// Function TgClientBase.TgGfxGiftSentPopup.IncrementActivities
struct UTgGfxGiftSentPopup_IncrementActivities_Params
{
};

// Function TgClientBase.TgGfxGiftSentPopup.SetGiftPopupData
struct UTgGfxGiftSentPopup_SetGiftPopupData_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	struct Fdword                                      nItemId;                                                  // (Parm)
};

// Function TgClientBase.TgGfxGiftSentPopup.Uninitialize
struct UTgGfxGiftSentPopup_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxGiftSentPopup.Initialize
struct UTgGfxGiftSentPopup_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxGiftSentPopup.GiftSentPopup
struct UTgGfxGiftSentPopup_GiftSentPopup_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
};

// Function TgClientBase.TgGfxGiftSentPopup.ASC_GiftSentPopup
struct UTgGfxGiftSentPopup_ASC_GiftSentPopup_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
};

// Function TgClientBase.TgGfxGodTargeter.Tick
struct UTgGfxGodTargeter_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClientBase.TgGfxGodTargeter.Uninitialize
struct UTgGfxGodTargeter_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxGodTargeter.Initialize
struct UTgGfxGodTargeter_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxGodTargeter.ReceiveGFxData
struct UTgGfxGodTargeter_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxGodTargeter.AttemptGodSelect
struct UTgGfxGodTargeter_AttemptGodSelect_Params
{
};

// Function TgClientBase.TgGfxGodTargeter.ASC_AttemptGodSelect
struct UTgGfxGodTargeter_ASC_AttemptGodSelect_Params
{
};

// Function TgClientBase.TgGfxGodTargeter.UpdateThumbstickPos
struct UTgGfxGodTargeter_UpdateThumbstickPos_Params
{
};

// Function TgClientBase.TgGfxGodTargeter.ASC_UpdateThumbstickPos
struct UTgGfxGodTargeter_ASC_UpdateThumbstickPos_Params
{
};

// Function TgClientBase.TgGfxHelloWorld.Initialize
struct UTgGfxHelloWorld_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxHUD.PlayTakeHit
struct UTgGFxHUD_PlayTakeHit_Params
{
	int                                                nDamage;                                                  // (Parm)
	float                                              nDamageAngle;                                             // (Parm)
};

// Function TgClientBase.TgGFxHUD.SetPlayerSpeaking
struct UTgGFxHUD_SetPlayerSpeaking_Params
{
	struct FString                                     sPlayerNetId;                                             // (Parm, NeedCtorLink)
	bool                                               bIsSpeaking;                                              // (Parm)
};

// Function TgClientBase.TgGFxHUD.ToggleScoreboard
struct UTgGFxHUD_ToggleScoreboard_Params
{
	bool                                               bShow;                                                    // (Parm)
	bool                                               bFocused;                                                 // (OptionalParm, Parm)
	int                                                View;                                                     // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxHUD.ChangeHudSection
struct UTgGFxHUD_ChangeHudSection_Params
{
	struct FString                                     Section;                                                  // (Parm, NeedCtorLink)
	float                                              percentX;                                                 // (Parm)
	float                                              percentY;                                                 // (Parm)
	float                                              Scale;                                                    // (Parm)
	float                                              dockX;                                                    // (Parm)
	float                                              dockY;                                                    // (Parm)
	struct FString                                     dockObj;                                                  // (Parm, NeedCtorLink)
	float                                              dockObjX;                                                 // (Parm)
	float                                              dockObjY;                                                 // (Parm)
	bool                                               outX;                                                     // (Parm)
	bool                                               outY;                                                     // (Parm)
};

// Function TgClientBase.TgGFxHUD.ToggleHudSection
struct UTgGFxHUD_ToggleHudSection_Params
{
	struct FString                                     sSectionName;                                             // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxHUD.UnloadHudSection
struct UTgGFxHUD_UnloadHudSection_Params
{
	struct FString                                     sSectionName;                                             // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxHUD.ToggleMatineeSkip
struct UTgGFxHUD_ToggleMatineeSkip_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClientBase.TgGFxHUD.ShowTutorialHighlighter
struct UTgGFxHUD_ShowTutorialHighlighter_Params
{
	int                                                nTutorialEvent;                                           // (Parm)
};

// Function TgClientBase.TgGFxHUD.ShowEventAccolade
struct UTgGFxHUD_ShowEventAccolade_Params
{
	int                                                nIconId;                                                  // (Parm)
};

// Function TgClientBase.TgGFxHUD.ShowConsoleStorePrompt
struct UTgGFxHUD_ShowConsoleStorePrompt_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClientBase.TgGFxHUD.SetHudVisible
struct UTgGFxHUD_SetHudVisible_Params
{
	bool                                               bVisible;                                                 // (Parm)
};

// Function TgClientBase.TgGFxHUD.ShowEndOfMatch
struct UTgGFxHUD_ShowEndOfMatch_Params
{
	bool                                               show;                                                     // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxHUD.GameTypeSet
struct UTgGFxHUD_GameTypeSet_Params
{
	int                                                GameType;                                                 // (Parm)
	bool                                               isConsole;                                                // (Parm)
};

// Function TgClientBase.TgGFxHUD.TogglePassiveMeter
struct UTgGFxHUD_TogglePassiveMeter_Params
{
};

// Function TgClientBase.TgGFxHUD.SetEndOfMatchVisibility
struct UTgGFxHUD_SetEndOfMatchVisibility_Params
{
};

// Function TgClientBase.TgGFxHUD.OnTutorialMessage
struct UTgGFxHUD_OnTutorialMessage_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHUD.OnShowEndOfMatch
struct UTgGFxHUD_OnShowEndOfMatch_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHUD.OnGameTypeSet
struct UTgGFxHUD_OnGameTypeSet_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHUD.OnGameHUDEvent
struct UTgGFxHUD_OnGameHUDEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHUD.Uninitialize
struct UTgGFxHUD_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxHUD.Initialize
struct UTgGFxHUD_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxLoadoutsBase.ReceiveGFxData
struct UTgGfxLoadoutsBase_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxLoadoutsBase.Uninitialize
struct UTgGfxLoadoutsBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxLoadoutsBase.Initialize
struct UTgGfxLoadoutsBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxLoginBlocker.LandingPanelImagesLoaded
struct UTgGfxLoginBlocker_LandingPanelImagesLoaded_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxLoginBlocker.ReceiveGFxData
struct UTgGfxLoginBlocker_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxLoginBlocker.Uninitialize
struct UTgGfxLoginBlocker_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxLoginBlocker.Initialize
struct UTgGfxLoginBlocker_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxMassInviteBase.OnReceiveFriends
struct UTgGfxMassInviteBase_OnReceiveFriends_Params
{
	class UTgGFxFriendData*                            pFriends;                                                 // (Parm)
};

// Function TgClientBase.TgGfxMassInviteBase.OnPrivilegeCheck
struct UTgGfxMassInviteBase_OnPrivilegeCheck_Params
{
	TEnumAsByte<EFeaturePrivilege>                     ePriv;                                                    // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                eLevel;                                                   // (Parm)
};

// Function TgClientBase.TgGfxMassInviteBase.OnFriendSelector
struct UTgGfxMassInviteBase_OnFriendSelector_Params
{
	class UTgEventDataItem*                            pBaseEvent;                                               // (Parm)
};

// Function TgClientBase.TgGfxMassInviteBase.OnPlayerQuery
struct UTgGfxMassInviteBase_OnPlayerQuery_Params
{
	struct FPointer                                    pBaseEvent;                                               // (Parm)
};

// Function TgClientBase.TgGfxMassInviteBase.ReceiveGFxData
struct UTgGfxMassInviteBase_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxMassInviteBase.Initialize
struct UTgGfxMassInviteBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxMatchInvitation.CheckOnlinePermissions
struct UTgGFxMatchInvitation_CheckOnlinePermissions_Params
{
	struct FUniqueNetId                                nId;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchInvitation.UCUninitialize
struct UTgGFxMatchInvitation_UCUninitialize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchInvitation.UCInitialize
struct UTgGFxMatchInvitation_UCInitialize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchInvitation.GetPlayerInterface
struct UTgGFxMatchInvitation_GetPlayerInterface_Params
{
	TScriptInterface<class UOnlinePlayerInterface>     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchInvitation.OnInputChanged
struct UTgGFxMatchInvitation_OnInputChanged_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxMatchInvitation.OnLobbyStateChange
struct UTgGFxMatchInvitation_OnLobbyStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxMatchInvitation.OnQueueStateChange
struct UTgGFxMatchInvitation_OnQueueStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxMatchInvitation.OnReceivePlayerInfo
struct UTgGFxMatchInvitation_OnReceivePlayerInfo_Params
{
	struct FPointer                                    pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxMatchInvitation.OnReceivePlatformPermissions
struct UTgGFxMatchInvitation_OnReceivePlatformPermissions_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (Parm)
	TArray<struct FPermissionsResultByUniqueNetId>     Results;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxMatchInvitation.ReceiveGFxData
struct UTgGFxMatchInvitation_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGFxMatchInvitation.Tick
struct UTgGFxMatchInvitation_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClientBase.TgGFxMatchInvitation.Uninitialize
struct UTgGFxMatchInvitation_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxMatchInvitation.Initialize
struct UTgGFxMatchInvitation_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxMessageSelector.USC_SelectMessage
struct UTgGfxMessageSelector_USC_SelectMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	int                                                MessageId;                                                // (Parm)
};

// Function TgClientBase.TgGfxMessageSelector.PopulateMessages
struct UTgGfxMessageSelector_PopulateMessages_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxMessageSelector.Uninitialize
struct UTgGfxMessageSelector_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxMessageSelector.Initialize
struct UTgGfxMessageSelector_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxNotificationCenter.USC_GetTabs
struct UTgGfxNotificationCenter_USC_GetTabs_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxNotificationCenter.USC_ClearAllNotifications
struct UTgGfxNotificationCenter_USC_ClearAllNotifications_Params
{
	int                                                tabIndex;                                                 // (Parm)
};

// Function TgClientBase.TgGfxNotificationCenter.USC_RespondToClanInvite
struct UTgGfxNotificationCenter_USC_RespondToClanInvite_Params
{
	bool                                               bAccept;                                                  // (Parm)
	struct FString                                     clanId;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxNotificationCenter.USC_RespondToPartyInvite
struct UTgGfxNotificationCenter_USC_RespondToPartyInvite_Params
{
	bool                                               bAccept;                                                  // (Parm)
};

// Function TgClientBase.TgGfxNotificationCenter.USC_RespondToFriendInvite
struct UTgGfxNotificationCenter_USC_RespondToFriendInvite_Params
{
	bool                                               bAccept;                                                  // (Parm)
	struct FString                                     PlayerID;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxNotificationCenter.USC_EquipItem
struct UTgGfxNotificationCenter_USC_EquipItem_Params
{
	int                                                nItemId;                                                  // (Parm)
};

// Function TgClientBase.TgGfxNotificationCenter.USC_SelectTab
struct UTgGfxNotificationCenter_USC_SelectTab_Params
{
	int                                                tabIndex;                                                 // (Parm)
};

// Function TgClientBase.TgGfxNotificationCenter.UpdateNotifications
struct UTgGfxNotificationCenter_UpdateNotifications_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxNotificationCenter.Initialize
struct UTgGfxNotificationCenter_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxPatchOverview.LandingPanelImagesLoaded
struct UTgGfxPatchOverview_LandingPanelImagesLoaded_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxPatchOverview.ReceiveGFxData
struct UTgGfxPatchOverview_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxPatchOverview.Uninitialize
struct UTgGfxPatchOverview_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxPatchOverview.Initialize
struct UTgGfxPatchOverview_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxPlay.OnQueueStateChange
struct UTgGFxPlay_OnQueueStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlay.OnPopup
struct UTgGFxPlay_OnPopup_Params
{
	class UTgPagePopup*                                pData;                                                    // (Parm)
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlay.ReceiveGFxData
struct UTgGFxPlay_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGFxPlay.Tick
struct UTgGFxPlay_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClientBase.TgGFxPlay.Uninitialize
struct UTgGFxPlay_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxPlay.Initialize
struct UTgGFxPlay_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxPlayCustom.OnCreateCustomGame
struct UTgGFxPlayCustom_OnCreateCustomGame_Params
{
	struct FString                                     SessionGuid;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayCustom.OnPeoplePickerComplete
struct UTgGFxPlayCustom_OnPeoplePickerComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	TArray<struct FOnlineFriend>                       PeoplePicked;                                             // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayCustom.OnReadFriendsListComplete
struct UTgGFxPlayCustom_OnReadFriendsListComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function TgClientBase.TgGFxPlayCustom.ShowPeoplePickerForCustomGameInvite
struct UTgGFxPlayCustom_ShowPeoplePickerForCustomGameInvite_Params
{
};

// Function TgClientBase.TgGFxPlayCustom.CreateDataForCustomGameInvite
struct UTgGFxPlayCustom_CreateDataForCustomGameInvite_Params
{
	TArray<unsigned char>                              OutInviteData;                                            // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayCustom.ClearDelegates
struct UTgGFxPlayCustom_ClearDelegates_Params
{
};

// Function TgClientBase.TgGFxPlayCustom.UpdateOnlineGame
struct UTgGFxPlayCustom_UpdateOnlineGame_Params
{
};

// Function TgClientBase.TgGFxPlayCustom.OnCreateOnlineGameComplete
struct UTgGFxPlayCustom_OnCreateOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function TgClientBase.TgGFxPlayCustom.CreateOnlineSession
struct UTgGFxPlayCustom_CreateOnlineSession_Params
{
	int                                                MaxPlayers;                                               // (Parm)
	bool                                               bPrivate;                                                 // (Parm)
};

// Function TgClientBase.TgGFxPlayCustom.FilterFriendListForPeoplePicker
struct UTgGFxPlayCustom_FilterFriendListForPeoplePicker_Params
{
	TArray<struct FOnlineFriend>                       FriendList;                                               // (Parm, OutParm, NeedCtorLink)
	TArray<struct FSessionMemberInfo>                  SessionMemberList;                                        // (Parm, OutParm, NeedCtorLink)
	int                                                MaxInviteSize;                                            // (Parm, OutParm)
};

// Function TgClientBase.TgGFxPlayCustom.OnQueueStateChange
struct UTgGFxPlayCustom_OnQueueStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayCustom.OnCustomGameHudEvent
struct UTgGFxPlayCustom_OnCustomGameHudEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayCustom.OnPopup
struct UTgGFxPlayCustom_OnPopup_Params
{
	class UTgPagePopup*                                pData;                                                    // (Parm)
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayCustom.ReceiveGFxData
struct UTgGFxPlayCustom_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGFxPlayCustom.Tick
struct UTgGFxPlayCustom_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClientBase.TgGFxPlayCustom.Uninitialize
struct UTgGFxPlayCustom_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxPlayCustom.Initialize
struct UTgGFxPlayCustom_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxPopupModal.OnPopupClosed
struct UTgGfxPopupModal_OnPopupClosed_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxPopupModal.OnPopupOpened
struct UTgGfxPopupModal_OnPopupOpened_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxPopupModal.USC_SelectedPopup
struct UTgGfxPopupModal_USC_SelectedPopup_Params
{
	int                                                nActionId;                                                // (Parm)
	struct FString                                     sInputValue;                                              // (Parm, NeedCtorLink)
	struct FString                                     sSecondaryInputValue;                                     // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxPopupModal.Uninitialize
struct UTgGfxPopupModal_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxPopupModal.Initialize
struct UTgGfxPopupModal_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxPopupModal.USC_SelectedPopup_Delegate
struct UTgGfxPopupModal_USC_SelectedPopup_Delegate_Params
{
	int                                                nActionId;                                                // (Parm)
	struct FString                                     sInputValue;                                              // (Parm, NeedCtorLink)
	struct FString                                     sSecondaryInputValue;                                     // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxPopupModal.SendAnnounceReportPlayer
struct UTgGfxPopupModal_SendAnnounceReportPlayer_Params
{
	struct FString                                     sReportedId;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxPopupModal.SendClosePopup
struct UTgGfxPopupModal_SendClosePopup_Params
{
};

// Function TgClientBase.TgGfxPopupModal.SendOpenPopup
struct UTgGfxPopupModal_SendOpenPopup_Params
{
	class UGFxObject*                                  Obj;                                                      // (Parm)
};

// Function TgClientBase.TgGfxProfileCommendations.UpdateAll
struct UTgGfxProfileCommendations_UpdateAll_Params
{
};

// Function TgClientBase.TgGfxProfileCommendations.asc_updateAll
struct UTgGfxProfileCommendations_asc_updateAll_Params
{
};

// Function TgClientBase.TgGfxProfileCommendations.USC_SeenCommendationUpdate
struct UTgGfxProfileCommendations_USC_SeenCommendationUpdate_Params
{
};

// Function TgClientBase.TgGfxProfileCommendations.Initialize
struct UTgGfxProfileCommendations_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxProfileReferral.CreateMilestones
struct UTgGfxProfileReferral_CreateMilestones_Params
{
};

// Function TgClientBase.TgGfxProfileReferral.Initialize
struct UTgGfxProfileReferral_Initialize_Params
{
	class UTgMoviePlayer*                              pMoviePlayer;                                             // (Parm)
};

// Function TgClientBase.TgGfxPurchaseGems.SetMarketplaceVisibility
struct UTgGfxPurchaseGems_SetMarketplaceVisibility_Params
{
	bool                                               Visible;                                                  // (Parm)
	unsigned char                                      IconPosition;                                             // (OptionalParm, Parm)
};

// Function TgClientBase.TgGfxPurchaseGems.GetAvailableProducts
struct UTgGfxPurchaseGems_GetAvailableProducts_Params
{
	TEnumAsByte<EMediaItemType>                        MediaType;                                                // (Parm)
	TArray<struct FMarketplaceProductDetails>          AvailableProducts;                                        // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxPurchaseGems.GetMarketPlaceCatalog
struct UTgGfxPurchaseGems_GetMarketPlaceCatalog_Params
{
	TEnumAsByte<EMediaItemType>                        MediaType;                                                // (Parm)
	TArray<struct FProductInfo>                        Products;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxPurchaseGems.GetInventoryItems
struct UTgGfxPurchaseGems_GetInventoryItems_Params
{
	TArray<struct FMarketplaceInventoryItem>           InventoryItems;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxPurchaseGems.GetAllXBProducts
struct UTgGfxPurchaseGems_GetAllXBProducts_Params
{
	TArray<struct FProductInfo>                        Products;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxPurchaseGems.PopulateXboxProduct
struct UTgGfxPurchaseGems_PopulateXboxProduct_Params
{
	struct FString                                     ProductId;                                                // (Const, Parm, NeedCtorLink)
	TArray<struct FProductInfo>                        Products;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxPurchaseGems.PopulateProduct
struct UTgGfxPurchaseGems_PopulateProduct_Params
{
	struct FString                                     ProductId;                                                // (Const, Parm, NeedCtorLink)
	struct FString                                     Header;                                                   // (Const, Parm, NeedCtorLink)
	struct FString                                     Description;                                              // (Const, Parm, NeedCtorLink)
	TArray<struct FProductInfo>                        Products;                                                 // (Parm, OutParm, NeedCtorLink)
	TArray<struct FProductImageInfo>                   ProductImages;                                            // (Const, Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxPurchaseGems.GetGemProducts
struct UTgGfxPurchaseGems_GetGemProducts_Params
{
	TArray<struct FProductInfo>                        Products;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxPurchaseGems.GetBaseProducts
struct UTgGfxPurchaseGems_GetBaseProducts_Params
{
	TArray<struct FProductInfo>                        Products;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxPurchaseGems.OnAcquisition
struct UTgGfxPurchaseGems_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxPurchaseGems.UpdateData
struct UTgGfxPurchaseGems_UpdateData_Params
{
};

// Function TgClientBase.TgGfxPurchaseGems.ASC_UpdateData
struct UTgGfxPurchaseGems_ASC_UpdateData_Params
{
};

// Function TgClientBase.TgGfxPurchaseGems.HideOverlay
struct UTgGfxPurchaseGems_HideOverlay_Params
{
};

// Function TgClientBase.TgGfxPurchaseGems.ASC_HideOverlay
struct UTgGfxPurchaseGems_ASC_HideOverlay_Params
{
};

// Function TgClientBase.TgGfxPurchaseGems.ShowOverlay
struct UTgGfxPurchaseGems_ShowOverlay_Params
{
};

// Function TgClientBase.TgGfxPurchaseGems.ASC_ShowOverlay
struct UTgGfxPurchaseGems_ASC_ShowOverlay_Params
{
};

// Function TgClientBase.TgGfxPurchaseGems.USC_CancelPurchase
struct UTgGfxPurchaseGems_USC_CancelPurchase_Params
{
};

// Function TgClientBase.TgGfxPurchaseGems.USC_SetupLongDescModal
struct UTgGfxPurchaseGems_USC_SetupLongDescModal_Params
{
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     longDesc;                                                 // (Parm, NeedCtorLink)
	struct FString                                     SignedOffer;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxPurchaseGems.USC_ShowEmptyMessage
struct UTgGfxPurchaseGems_USC_ShowEmptyMessage_Params
{
};

// Function TgClientBase.TgGfxPurchaseGems.USC_PurchaseItem
struct UTgGfxPurchaseGems_USC_PurchaseItem_Params
{
	struct FString                                     SKUCode;                                                  // (Parm, NeedCtorLink)
	int                                                lootId;                                                   // (Parm)
};

// Function TgClientBase.TgGfxPurchaseGems.Uninitialize
struct UTgGfxPurchaseGems_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxPurchaseGems.Initialize
struct UTgGfxPurchaseGems_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxQuestAcquisition.OnNewQuests
struct UTgGfxQuestAcquisition_OnNewQuests_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxQuestAcquisition.ReceiveGFxData
struct UTgGfxQuestAcquisition_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxQuestAcquisition.Initialize
struct UTgGfxQuestAcquisition_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxQuestList.UpdateQuests
struct UTgGfxQuestList_UpdateQuests_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxQuestList.ReceiveGFxData
struct UTgGfxQuestList_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxQuestList.Uninitialize
struct UTgGfxQuestList_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxQuestList.Initialize
struct UTgGfxQuestList_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxQuickTestMenu.USC_CallConsoleCommand
struct UTgGFxQuickTestMenu_USC_CallConsoleCommand_Params
{
	struct FString                                     sCommand;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxQuickTestMenu.Uninitialize
struct UTgGFxQuickTestMenu_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxQuickTestMenu.Initialize
struct UTgGFxQuickTestMenu_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxReturnPlayer.Uninitialize
struct UTgGfxReturnPlayer_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxReturnPlayer.Initialize
struct UTgGfxReturnPlayer_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxReturnPlayer.USC_ClaimReturnRewards
struct UTgGfxReturnPlayer_USC_ClaimReturnRewards_Params
{
};

// Function TgClientBase.TgGfxRewardCenter.RepopulateInformation
struct UTgGfxRewardCenter_RepopulateInformation_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxRewardCenter.UpdateRewards
struct UTgGfxRewardCenter_UpdateRewards_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxRewardCenter.USC_GotoReceiptItem
struct UTgGfxRewardCenter_USC_GotoReceiptItem_Params
{
	int                                                nItemId;                                                  // (Parm)
};

// Function TgClientBase.TgGfxRewardCenter.Uninitialize
struct UTgGfxRewardCenter_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxRewardCenter.ReceiveGFxData
struct UTgGfxRewardCenter_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxRewardCenter.Initialize
struct UTgGfxRewardCenter_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxRewardCenter.RepopulateGiftsFromName
struct UTgGfxRewardCenter_RepopulateGiftsFromName_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	class UTgPlayerNameManager*                        pManager;                                                 // (Parm)
};

// Function TgClientBase.TgGfxSeasonalEventQuestView.ReceiveGFxData
struct UTgGfxSeasonalEventQuestView_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxSeasonalEventQuestView.Uninitialize
struct UTgGfxSeasonalEventQuestView_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxSeasonalEventQuestView.Initialize
struct UTgGfxSeasonalEventQuestView_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxSimulmediaBase.HasOpportunities
struct UTgGFxSimulmediaBase_HasOpportunities_Params
{
};

// Function TgClientBase.TgGFxSimulmediaBase.NoOpportunities
struct UTgGFxSimulmediaBase_NoOpportunities_Params
{
};

// Function TgClientBase.TgGFxSimulmediaBase.UpdateSimulmediaPopupOpportunities
struct UTgGFxSimulmediaBase_UpdateSimulmediaPopupOpportunities_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClientBase.TgGFxSimulmediaBase.RemoveSimulmediaDelegate
struct UTgGFxSimulmediaBase_RemoveSimulmediaDelegate_Params
{
};

// Function TgClientBase.TgGFxSimulmediaBase.SetOnPostAdvanceDelegateSimulmedia
struct UTgGFxSimulmediaBase_SetOnPostAdvanceDelegateSimulmedia_Params
{
};

// Function TgClientBase.TgGFxSimulmediaBase.OnOpportunityUpdated
struct UTgGFxSimulmediaBase_OnOpportunityUpdated_Params
{
};

// Function TgClientBase.TgGFxSimulmediaBase.OnAcquisition
struct UTgGFxSimulmediaBase_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxSimulmediaBase.OnVideoPlayerClosed
struct UTgGFxSimulmediaBase_OnVideoPlayerClosed_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxSimulmediaBase.USC_UpdateRewards
struct UTgGFxSimulmediaBase_USC_UpdateRewards_Params
{
};

// Function TgClientBase.TgGFxSimulmediaBase.USC_UpdateState
struct UTgGFxSimulmediaBase_USC_UpdateState_Params
{
};

// Function TgClientBase.TgGFxSimulmediaBase.USC_OpenVideoPlayer
struct UTgGFxSimulmediaBase_USC_OpenVideoPlayer_Params
{
};

// Function TgClientBase.TgGFxSimulmediaBase.Uninitialize
struct UTgGFxSimulmediaBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxSimulmediaBase.Initialize
struct UTgGFxSimulmediaBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.OnVideoError
struct UTgGFxSimulmediaVideoPlayer_OnVideoError_Params
{
	class APComVideoPlayer*                            VideoPlayer;                                              // (Parm)
	TEnumAsByte<EPComVideoPlayerError>                 ErrorCode;                                                // (Parm)
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.DestroyVideoPlayer
struct UTgGFxSimulmediaVideoPlayer_DestroyVideoPlayer_Params
{
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.CompleteWatchingAd
struct UTgGFxSimulmediaVideoPlayer_CompleteWatchingAd_Params
{
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.SpawnVideoPlayer
struct UTgGFxSimulmediaVideoPlayer_SpawnVideoPlayer_Params
{
	class AActor*                                      SpawningActor;                                            // (Parm)
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.USC_AbortAd
struct UTgGFxSimulmediaVideoPlayer_USC_AbortAd_Params
{
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.CloseVideoPlayer
struct UTgGFxSimulmediaVideoPlayer_CloseVideoPlayer_Params
{
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.CompleteAd
struct UTgGFxSimulmediaVideoPlayer_CompleteAd_Params
{
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.Uninitialize
struct UTgGFxSimulmediaVideoPlayer_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxSimulmediaVideoPlayer.Initialize
struct UTgGFxSimulmediaVideoPlayer_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.USC_TryAction
struct UTgGfxSovereigntyVendorStore_USC_TryAction_Params
{
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.USC_TryReroll
struct UTgGfxSovereigntyVendorStore_USC_TryReroll_Params
{
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.USC_OnInvItemFocused
struct UTgGfxSovereigntyVendorStore_USC_OnInvItemFocused_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.USC_OnShopItemFocused
struct UTgGfxSovereigntyVendorStore_USC_OnShopItemFocused_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.PlayCloseAnimation
struct UTgGfxSovereigntyVendorStore_PlayCloseAnimation_Params
{
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.PlayOpenAnimation
struct UTgGfxSovereigntyVendorStore_PlayOpenAnimation_Params
{
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.OnGameUIEvent
struct UTgGfxSovereigntyVendorStore_OnGameUIEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.ReceiveGFxData
struct UTgGfxSovereigntyVendorStore_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.Uninitialize
struct UTgGfxSovereigntyVendorStore_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxSovereigntyVendorStore.Initialize
struct UTgGfxSovereigntyVendorStore_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxStoreChest.OnAcquisition
struct UTgGfxStoreChest_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxStoreChest.ASC_PurchaseTreasureChest
struct UTgGfxStoreChest_ASC_PurchaseTreasureChest_Params
{
};

// Function TgClientBase.TgGfxStoreChest.PurchaseTreasureChest
struct UTgGfxStoreChest_PurchaseTreasureChest_Params
{
};

// Function TgClientBase.TgGfxStoreChest.ReceiveGFxData
struct UTgGfxStoreChest_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxStoreChest.Initialize
struct UTgGfxStoreChest_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxStoreFeatures.ReceiveGFxData
struct UTgGfxStoreFeatures_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxStoreFeatures.OnAcquisition
struct UTgGfxStoreFeatures_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxStoreFeatures.ApplyGemPrices
struct UTgGfxStoreFeatures_ApplyGemPrices_Params
{
	class UGFxObject*                                  pArray;                                                   // (Parm)
};

// Function TgClientBase.TgGfxStoreFeatures.ClearDailyDeal
struct UTgGfxStoreFeatures_ClearDailyDeal_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxStoreFeatures.LandingPanelImagesLoaded
struct UTgGfxStoreFeatures_LandingPanelImagesLoaded_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxStoreFeatures.Initialize
struct UTgGfxStoreFeatures_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxStoreFeatures.ASC_UpdateDP
struct UTgGfxStoreFeatures_ASC_UpdateDP_Params
{
};

// Function TgClientBase.TgGfxStoreFeatures.UpdateDP
struct UTgGfxStoreFeatures_UpdateDP_Params
{
};

// Function TgClientBase.TgGfxStoreFeatures.USC_ForwardFeature
struct UTgGfxStoreFeatures_USC_ForwardFeature_Params
{
	int                                                pItemType;                                                // (Parm)
	struct FString                                     pItemData;                                                // (Parm, NeedCtorLink)
	struct FString                                     pItemData2;                                               // (Parm, NeedCtorLink)
	int                                                nLocationId;                                              // (Parm)
};

// Function TgClientBase.TgGfxStoreFeatures.USC_Initialize
struct UTgGfxStoreFeatures_USC_Initialize_Params
{
};

// Function TgClientBase.TgGfxStoreInfo.Uninitialize
struct UTgGfxStoreInfo_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxStoreInfo.Initialize
struct UTgGfxStoreInfo_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxStoreMixer.OnAcquisition
struct UTgGfxStoreMixer_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxStoreMixer.ReceiveGFxData
struct UTgGfxStoreMixer_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxStoreMixer.Initialize
struct UTgGfxStoreMixer_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxStoreShared.UpdateNameChangePrice
struct UTgGFxStoreShared_UpdateNameChangePrice_Params
{
	int                                                nPrice;                                                   // (Parm)
};

// Function TgClientBase.TgGFxStoreShared.SetSelectedTab
struct UTgGFxStoreShared_SetSelectedTab_Params
{
	int                                                nIndex;                                                   // (Parm)
};

// Function TgClientBase.TgGFxStoreShared.OnGameUIEvent
struct UTgGFxStoreShared_OnGameUIEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxStoreShared.USC_BuyGems
struct UTgGFxStoreShared_USC_BuyGems_Params
{
};

// Function TgClientBase.TgGFxStoreShared.ReceiveGFxData
struct UTgGFxStoreShared_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGFxStoreShared.Initialize
struct UTgGFxStoreShared_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxStoreViewer.UpdateItems
struct UTgGfxStoreViewer_UpdateItems_Params
{
};

// Function TgClientBase.TgGfxStoreViewer.OnNameChangeConfirm
struct UTgGfxStoreViewer_OnNameChangeConfirm_Params
{
	class UTgPagePopup*                                pData;                                                    // (Parm)
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxStoreViewer.TryBuyNameChange
struct UTgGfxStoreViewer_TryBuyNameChange_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxStoreViewer.TryRedeemCode
struct UTgGfxStoreViewer_TryRedeemCode_Params
{
	struct FString                                     sCode;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxStoreViewer.OnAcquisition
struct UTgGfxStoreViewer_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxStoreViewer.UpdateUGPValue
struct UTgGfxStoreViewer_UpdateUGPValue_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxStoreViewer.ReceiveGFxData
struct UTgGfxStoreViewer_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxStoreViewer.Initialize
struct UTgGfxStoreViewer_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxTriumphChest.ShowAboutPanel
struct UTgGfxTriumphChest_ShowAboutPanel_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxTriumphChest.ReceiveGFxData
struct UTgGfxTriumphChest_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxTriumphChest.Uninitialize
struct UTgGfxTriumphChest_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxTriumphChest.Initialize
struct UTgGfxTriumphChest_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxVendorStore_PC.OnPopupEvent
struct UTgGfxVendorStore_PC_OnPopupEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxVendorStore_PC.CheckCurrency
struct UTgGfxVendorStore_PC_CheckCurrency_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxVendorStore_PC.ReceiveGFxData
struct UTgGfxVendorStore_PC_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxVendorStore_PC.Uninitialize
struct UTgGfxVendorStore_PC_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxVendorStore_PC.Initialize
struct UTgGfxVendorStore_PC_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxVendorStoreUnit.OnUnitShopUpdate
struct UTgGfxVendorStoreUnit_OnUnitShopUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxVendorStoreUnit.SwapUnits
struct UTgGfxVendorStoreUnit_SwapUnits_Params
{
	int                                                initPos;                                                  // (Parm)
	int                                                finalPos;                                                 // (Parm)
};

// Function TgClientBase.TgGfxVendorStoreUnit.BuffUnit
struct UTgGfxVendorStoreUnit_BuffUnit_Params
{
	int                                                Id;                                                       // (Parm)
};

// Function TgClientBase.TgGfxVendorStoreUnit.SellUnit
struct UTgGfxVendorStoreUnit_SellUnit_Params
{
	int                                                Position;                                                 // (Parm)
};

// Function TgClientBase.TgGfxVendorStoreUnit.PurchaseUnit
struct UTgGfxVendorStoreUnit_PurchaseUnit_Params
{
	int                                                Id;                                                       // (Parm)
	int                                                Position;                                                 // (Parm)
};

// Function TgClientBase.TgGfxVendorStoreUnit.UpdateInventory
struct UTgGfxVendorStoreUnit_UpdateInventory_Params
{
};

// Function TgClientBase.TgGfxVendorStoreUnit.UpdateShop
struct UTgGfxVendorStoreUnit_UpdateShop_Params
{
};

// Function TgClientBase.TgGfxVendorStoreUnit.ReceiveGFxData
struct UTgGfxVendorStoreUnit_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxVendorStoreUnit.Initialize
struct UTgGfxVendorStoreUnit_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.UpdateTierSummary
struct UTgGfxVendorStoreV2_Console_UpdateTierSummary_Params
{
	int                                                pItemId;                                                  // (Parm)
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_UpdateTierSummary
struct UTgGfxVendorStoreV2_Console_ASC_UpdateTierSummary_Params
{
	int                                                pItemId;                                                  // (Parm)
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ToggleStatDisplay
struct UTgGfxVendorStoreV2_Console_ToggleStatDisplay_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_ToggleStatDisplay
struct UTgGfxVendorStoreV2_Console_ASC_ToggleStatDisplay_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.CloseStoreOnDelay
struct UTgGfxVendorStoreV2_Console_CloseStoreOnDelay_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_CloseStoreOnDelay
struct UTgGfxVendorStoreV2_Console_ASC_CloseStoreOnDelay_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.UpdateSelectedPrice
struct UTgGfxVendorStoreV2_Console_UpdateSelectedPrice_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_UpdateSelectedPrice
struct UTgGfxVendorStoreV2_Console_ASC_UpdateSelectedPrice_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.AnimateItemPurchase
struct UTgGfxVendorStoreV2_Console_AnimateItemPurchase_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_AnimateItemPurchase
struct UTgGfxVendorStoreV2_Console_ASC_AnimateItemPurchase_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.FocusRightPanel
struct UTgGfxVendorStoreV2_Console_FocusRightPanel_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_FocusRightPanel
struct UTgGfxVendorStoreV2_Console_ASC_FocusRightPanel_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.FocusLeftPanel
struct UTgGfxVendorStoreV2_Console_FocusLeftPanel_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_FocusLeftPanel
struct UTgGfxVendorStoreV2_Console_ASC_FocusLeftPanel_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.PlayCloseAnimation
struct UTgGfxVendorStoreV2_Console_PlayCloseAnimation_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_PlayCloseAnimation
struct UTgGfxVendorStoreV2_Console_ASC_PlayCloseAnimation_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.PlayOpenAnimation
struct UTgGfxVendorStoreV2_Console_PlayOpenAnimation_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.ASC_PlayOpenAnimation
struct UTgGfxVendorStoreV2_Console_ASC_PlayOpenAnimation_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.USC_HandleButtonInput
struct UTgGfxVendorStoreV2_Console_USC_HandleButtonInput_Params
{
	int                                                nControllerId;                                            // (Parm)
	int                                                nKeyCode;                                                 // (Parm)
	int                                                nPressType;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.USC_ToggleStore
struct UTgGfxVendorStoreV2_Console_USC_ToggleStore_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.USC_HandleButtonInput_Delegate
struct UTgGfxVendorStoreV2_Console_USC_HandleButtonInput_Delegate_Params
{
	int                                                nControllerId;                                            // (Parm)
	int                                                nKeyCode;                                                 // (Parm)
	int                                                nPressType;                                               // (Parm)
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.USC_ToggleStore_Delegate
struct UTgGfxVendorStoreV2_Console_USC_ToggleStore_Delegate_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.Uninitialize
struct UTgGfxVendorStoreV2_Console_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.Initialize
struct UTgGfxVendorStoreV2_Console_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxVendorStoreV2_Console.CheckCurrency
struct UTgGfxVendorStoreV2_Console_CheckCurrency_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.UCUninitialize
struct UTgSystemNotifManagerBase_UCUninitialize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSystemNotifManagerBase.UCInitialize
struct UTgSystemNotifManagerBase_UCInitialize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSystemNotifManagerBase.GetPlayerInterface
struct UTgSystemNotifManagerBase_GetPlayerInterface_Params
{
	TScriptInterface<class UOnlinePlayerInterface>     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSystemNotifManagerBase.OnReceivePlatformPermissions
struct UTgSystemNotifManagerBase_OnReceivePlatformPermissions_Params
{
	unsigned char                                      nLocalUserNum;                                            // (Parm)
	TEnumAsByte<EFeaturePrivilege>                     ePrivilege;                                               // (Parm)
	TArray<struct FPermissionsResultByUniqueNetId>     arrResults;                                               // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgSystemNotifManagerBase.OnLoginEvent
struct UTgSystemNotifManagerBase_OnLoginEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.OnAcquisitionNotification
struct UTgSystemNotifManagerBase_OnAcquisitionNotification_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.OnAddSystemMessageNotification
struct UTgSystemNotifManagerBase_OnAddSystemMessageNotification_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.OnQuestComplete
struct UTgSystemNotifManagerBase_OnQuestComplete_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.AddQuestCompletedNotification
struct UTgSystemNotifManagerBase_AddQuestCompletedNotification_Params
{
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
	int                                                nIconIndex;                                               // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.ExpireSystemMessageTeamInvite
struct UTgSystemNotifManagerBase_ExpireSystemMessageTeamInvite_Params
{
};

// Function TgClientBase.TgSystemNotifManagerBase.AddSystemMessageTeamInvite
struct UTgSystemNotifManagerBase_AddSystemMessageTeamInvite_Params
{
};

// Function TgClientBase.TgSystemNotifManagerBase.RejectPartySystemMessage
struct UTgSystemNotifManagerBase_RejectPartySystemMessage_Params
{
};

// Function TgClientBase.TgSystemNotifManagerBase.AcceptPartySystemMessage
struct UTgSystemNotifManagerBase_AcceptPartySystemMessage_Params
{
};

// Function TgClientBase.TgSystemNotifManagerBase.RejectClanSystemMessage
struct UTgSystemNotifManagerBase_RejectClanSystemMessage_Params
{
	int                                                nClanId;                                                  // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.AcceptClanSystemMessage
struct UTgSystemNotifManagerBase_AcceptClanSystemMessage_Params
{
	int                                                nClanId;                                                  // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.InitializeClanInvites
struct UTgSystemNotifManagerBase_InitializeClanInvites_Params
{
};

// Function TgClientBase.TgSystemNotifManagerBase.GetNotificationCount
struct UTgSystemNotifManagerBase_GetNotificationCount_Params
{
	TEnumAsByte<ESystemMessageType>                    nType;                                                    // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSystemNotifManagerBase.OnSystemMessageAdded
struct UTgSystemNotifManagerBase_OnSystemMessageAdded_Params
{
};

// Function TgClientBase.TgSystemNotifManagerBase.RejectNotification
struct UTgSystemNotifManagerBase_RejectNotification_Params
{
	TEnumAsByte<ESystemMessageType>                    nType;                                                    // (Parm)
	int                                                nId;                                                      // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.AcceptNotification
struct UTgSystemNotifManagerBase_AcceptNotification_Params
{
	TEnumAsByte<ESystemMessageType>                    nType;                                                    // (Parm)
	int                                                nId;                                                      // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.RemoveNotification
struct UTgSystemNotifManagerBase_RemoveNotification_Params
{
	TEnumAsByte<ESystemMessageType>                    nType;                                                    // (Parm)
	int                                                nIndex;                                                   // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.RemoveAllNotifications
struct UTgSystemNotifManagerBase_RemoveAllNotifications_Params
{
	TEnumAsByte<ESystemMessageType>                    nType;                                                    // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.GetNewSystemMessageCount
struct UTgSystemNotifManagerBase_GetNewSystemMessageCount_Params
{
	TEnumAsByte<ESystemMessageType>                    nType;                                                    // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSystemNotifManagerBase.IsAnySystemMessageNew
struct UTgSystemNotifManagerBase_IsAnySystemMessageNew_Params
{
	TEnumAsByte<ESystemMessageType>                    nType;                                                    // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSystemNotifManagerBase.SetAllSystemMessagesSeen
struct UTgSystemNotifManagerBase_SetAllSystemMessagesSeen_Params
{
	TEnumAsByte<ESystemMessageType>                    nType;                                                    // (OptionalParm, Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.AddSystemAcquisitionNotification
struct UTgSystemNotifManagerBase_AddSystemAcquisitionNotification_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.AddSystemMessageNotification
struct UTgSystemNotifManagerBase_AddSystemMessageNotification_Params
{
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
	TEnumAsByte<ESystemMessageType>                    nType;                                                    // (OptionalParm, Parm)
	TEnumAsByte<ESystemMessageSubType>                 nSubType;                                                 // (OptionalParm, Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.ShowPlayerNotif
struct UTgSystemNotifManagerBase_ShowPlayerNotif_Params
{
	struct FSystemMessage                              msg;                                                      // (Const, Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgSystemNotifManagerBase.OnReceivePlatformNames
struct UTgSystemNotifManagerBase_OnReceivePlatformNames_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	class UTgPlayerNameManager*                        pManager;                                                 // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.OnPlayerInfo
struct UTgSystemNotifManagerBase_OnPlayerInfo_Params
{
	struct FPointer                                    pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgSystemNotifManagerBase.Uninitialize
struct UTgSystemNotifManagerBase_Uninitialize_Params
{
};

// Function TgClientBase.TgSystemNotifManagerBase.Initialize
struct UTgSystemNotifManagerBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxNativeWidget.WidgetUnloaded
struct UTgGFxNativeWidget_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxNativeWidget.WidgetInitialized
struct UTgGFxNativeWidget_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxNativeWidget.GetArrInputIntercepts
struct UTgGFxNativeWidget_GetArrInputIntercepts_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgGFxNativeWidget.GetArrGameEventListeners
struct UTgGFxNativeWidget_GetArrGameEventListeners_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgGFxNativeWidget.GetArrMctsListeners
struct UTgGFxNativeWidget_GetArrMctsListeners_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgGFxNativeWidget.GetArrOldMctsListeners
struct UTgGFxNativeWidget_GetArrOldMctsListeners_Params
{
	struct FPointer                                    pArr;                                                     // (Parm, OutParm)
};

// Function TgClientBase.TgGFxNativeWidget.TryUnbindProperty
struct UTgGFxNativeWidget_TryUnbindProperty_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxNativeWidget.TryBindProperty
struct UTgGFxNativeWidget_TryBindProperty_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxNativeWidget.Uninitialize
struct UTgGFxNativeWidget_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxNativeWidget.PostInit
struct UTgGFxNativeWidget_PostInit_Params
{
};

// Function TgClientBase.TgGFxNativeWidget.Initialize
struct UTgGFxNativeWidget_Initialize_Params
{
};

// Function TgClientBase.TgGFxNativeWidget.PreInit
struct UTgGFxNativeWidget_PreInit_Params
{
};

// Function TgClientBase.TgGFxNativeWidget.UninitImpl
struct UTgGFxNativeWidget_UninitImpl_Params
{
};

// Function TgClientBase.TgGFxNativeWidget.InitImpl
struct UTgGFxNativeWidget_InitImpl_Params
{
	struct FString                                     sPath;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxNativeWidget.IsInitialized
struct UTgGFxNativeWidget_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxMainMenu.OnRedeemCodeResponse
struct UTgGfxMainMenu_OnRedeemCodeResponse_Params
{
	class UTgPagePopup*                                pData;                                                    // (Parm)
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGfxMainMenu.HandleInput
struct UTgGfxMainMenu_HandleInput_Params
{
	struct FInputDetails                               Details;                                                  // (Const, Parm, OutParm)
	TArray<class UGFxObject*>                          arrPathToFocus;                                           // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxMainMenu.CloseScene
struct UTgGfxMainMenu_CloseScene_Params
{
};

// Function TgClientBase.TgGfxMainMenu.OnRefreshMenu
struct UTgGfxMainMenu_OnRefreshMenu_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGfxMainMenu.OnTutorialUpdate
struct UTgGfxMainMenu_OnTutorialUpdate_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGfxMainMenu.OnButtonFocus
struct UTgGfxMainMenu_OnButtonFocus_Params
{
	struct FGFxEventData                               evtData;                                                  // (Const, Parm, OutParm)
};

// Function TgClientBase.TgGfxMainMenu.OnButtonClick
struct UTgGfxMainMenu_OnButtonClick_Params
{
	struct FGFxEventData                               evtData;                                                  // (Const, Parm, OutParm)
};

// Function TgClientBase.TgGfxMainMenu.OnUpdateInterval
struct UTgGfxMainMenu_OnUpdateInterval_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgGfxMainMenu.AnimateIn
struct UTgGfxMainMenu_AnimateIn_Params
{
};

// Function TgClientBase.TgGfxMainMenu.SetupButtons
struct UTgGfxMainMenu_SetupButtons_Params
{
};

// Function TgClientBase.TgGfxMainMenu.AutoPopulate
struct UTgGfxMainMenu_AutoPopulate_Params
{
};

// Function TgClientBase.TgGfxMainMenu.Uninitialize
struct UTgGfxMainMenu_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxMainMenu.Initialize
struct UTgGfxMainMenu_Initialize_Params
{
};

// Function TgClientBase.TgGfxMainMenu.HandleAction
struct UTgGfxMainMenu_HandleAction_Params
{
	struct Fdword                                      nAction;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerNameWidget.OnNameUpdate
struct UTgGFxPlayerNameWidget_OnNameUpdate_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	class UGFxObject*                                  pForId;                                                   // (Parm)
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerNameWidget.USC_RequestName
struct UTgGFxPlayerNameWidget_USC_RequestName_Params
{
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
	struct FString                                     sUserId;                                                  // (Parm, NeedCtorLink)
	int                                                nPortalType;                                              // (Parm)
};

// Function TgClientBase.TgGFxPlayerNameWidget.Initialize
struct UTgGFxPlayerNameWidget_Initialize_Params
{
};

// Function TgClientBase.TgGFxPriceData.ClearPrices
struct UTgGFxPriceData_ClearPrices_Params
{
};

// Function TgClientBase.TgGFxPriceData.SetData
struct UTgGFxPriceData_SetData_Params
{
	struct Fdword                                      nLTI;                                                     // (Parm)
	struct Fdword                                      nVendor;                                                  // (Parm)
};

// Function TgClientBase.TgGFxVendorItemData.Populate
struct UTgGFxVendorItemData_Populate_Params
{
};

// Function TgClientBase.TgGFxVendorItemData.SetData
struct UTgGFxVendorItemData_SetData_Params
{
	struct Fdword                                      nLTI;                                                     // (Parm)
	struct Fdword                                      nVendorId;                                                // (Parm)
};

// Function TgClientBase.TgGFxBundleData.Populate
struct UTgGFxBundleData_Populate_Params
{
};

// Function TgClientBase.TgSceneManager.asc_getScenesAsArray
struct UTgSceneManager_asc_getScenesAsArray_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManager.asc_pushSceneToFocusStack
struct UTgSceneManager_asc_pushSceneToFocusStack_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
	class UGFxObject*                                  modalObj;                                                 // (Parm)
	class UGFxObject*                                  focusObj;                                                 // (Parm)
};

// Function TgClientBase.TgSceneManager.asc_popSceneFromFocusStack
struct UTgSceneManager_asc_popSceneFromFocusStack_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgSceneManager.IsMouseCaptured
struct UTgSceneManager_IsMouseCaptured_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManager.PopSceneFromFocusStack
struct UTgSceneManager_PopSceneFromFocusStack_Params
{
	struct FString                                     sSceneName;                                               // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgSceneManager.PushSceneToFocusStack
struct UTgSceneManager_PushSceneToFocusStack_Params
{
	struct FString                                     sSceneName;                                               // (Parm, NeedCtorLink)
	class UGFxObject*                                  pModal;                                                   // (Parm)
	class UGFxObject*                                  pFocus;                                                   // (OptionalParm, Parm)
};

// Function TgClientBase.TgSceneManager.HasDismissableScene
struct UTgSceneManager_HasDismissableScene_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManager.DismissHighestScene
struct UTgSceneManager_DismissHighestScene_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManager.ShowCharacterCard
struct UTgSceneManager_ShowCharacterCard_Params
{
	int                                                nClassId;                                                 // (Parm)
};

// Function TgClientBase.TgSceneManager.PopKeyCapture
struct UTgSceneManager_PopKeyCapture_Params
{
	struct FString                                     sKeyName;                                                 // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgSceneManager.PushKeyCapture
struct UTgSceneManager_PushKeyCapture_Params
{
	struct FString                                     sKeyName;                                                 // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgSceneManager.PopMouseCapture
struct UTgSceneManager_PopMouseCapture_Params
{
	struct FString                                     sKeyName;                                                 // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgSceneManager.PushMouseCapture
struct UTgSceneManager_PushMouseCapture_Params
{
	struct FString                                     sKeyName;                                                 // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgSceneManager.KillAllScenes
struct UTgSceneManager_KillAllScenes_Params
{
};

// Function TgClientBase.TgSceneManager.UnloadAllScenes
struct UTgSceneManager_UnloadAllScenes_Params
{
	TArray<struct FString>                             arrExclusions;                                            // (Const, OptionalParm, Parm, NeedCtorLink)
	bool                                               bKill;                                                    // (OptionalParm, Parm)
};

// Function TgClientBase.TgSceneManager.ConsumeLoadSceneData
struct UTgSceneManager_ConsumeLoadSceneData_Params
{
	struct FString                                     sSceneName;                                               // (Parm, NeedCtorLink)
	class UTgDataItem*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManager.GetLoadSceneData
struct UTgSceneManager_GetLoadSceneData_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
	class UTgDataItem*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManager.SetLoadPermissions
struct UTgSceneManager_SetLoadPermissions_Params
{
	struct Fdword                                      fPermiss;                                                 // (Parm)
};

// Function TgClientBase.TgSceneManager.IsSceneBlockingAcquisitions
struct UTgSceneManager_IsSceneBlockingAcquisitions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManager.IsSceneLoaded
struct UTgSceneManager_IsSceneLoaded_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManager.ListOpenScenes
struct UTgSceneManager_ListOpenScenes_Params
{
};

// Function TgClientBase.TgSceneManager.ToggleScene
struct UTgSceneManager_ToggleScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
	class UTgDataItem*                                 pLoadData;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManager.PreloadScene
struct UTgSceneManager_PreloadScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManager.UnloadScene
struct UTgSceneManager_UnloadScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManager.LoadScene
struct UTgSceneManager_LoadScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
	class UTgDataItem*                                 pLoadData;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManager.KillScene
struct UTgSceneManager_KillScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManager.Uninitialize
struct UTgSceneManager_Uninitialize_Params
{
};

// Function TgClientBase.TgSceneManager.Initialize
struct UTgSceneManager_Initialize_Params
{
};

// Function TgClientBase.TgInitInterface.Uninitialize
struct UTgInitInterface_Uninitialize_Params
{
};

// Function TgClientBase.TgInitInterface.Initialize
struct UTgInitInterface_Initialize_Params
{
};

// Function TgClientBase.TgSceneManagerInterface.HasDismissableScene
struct UTgSceneManagerInterface_HasDismissableScene_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManagerInterface.DismissHighestScene
struct UTgSceneManagerInterface_DismissHighestScene_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManagerInterface.PopSceneFromFocusStack
struct UTgSceneManagerInterface_PopSceneFromFocusStack_Params
{
	struct FString                                     sSceneName;                                               // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgSceneManagerInterface.PushSceneToFocusStack
struct UTgSceneManagerInterface_PushSceneToFocusStack_Params
{
	struct FString                                     sSceneName;                                               // (Parm, NeedCtorLink)
	class UGFxObject*                                  pModal;                                                   // (Parm)
	class UGFxObject*                                  pFocus;                                                   // (OptionalParm, Parm)
};

// Function TgClientBase.TgSceneManagerInterface.PopKeyCapture
struct UTgSceneManagerInterface_PopKeyCapture_Params
{
	class UGFxObject*                                  pOwner;                                                   // (OptionalParm, Parm)
};

// Function TgClientBase.TgSceneManagerInterface.PushKeyCapture
struct UTgSceneManagerInterface_PushKeyCapture_Params
{
	class UGFxObject*                                  pOwner;                                                   // (OptionalParm, Parm)
};

// Function TgClientBase.TgSceneManagerInterface.PopMouseCapture
struct UTgSceneManagerInterface_PopMouseCapture_Params
{
	class UGFxObject*                                  pOwner;                                                   // (OptionalParm, Parm)
};

// Function TgClientBase.TgSceneManagerInterface.PushMouseCapture
struct UTgSceneManagerInterface_PushMouseCapture_Params
{
	class UGFxObject*                                  pOwner;                                                   // (OptionalParm, Parm)
};

// Function TgClientBase.TgSceneManagerInterface.ListOpenScenes
struct UTgSceneManagerInterface_ListOpenScenes_Params
{
};

// Function TgClientBase.TgSceneManagerInterface.IsSceneLoaded
struct UTgSceneManagerInterface_IsSceneLoaded_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSceneManagerInterface.UnloadAllScenes
struct UTgSceneManagerInterface_UnloadAllScenes_Params
{
	TArray<struct FString>                             exclusionList;                                            // (Parm, NeedCtorLink)
	bool                                               bKill;                                                    // (OptionalParm, Parm)
};

// Function TgClientBase.TgSceneManagerInterface.ToggleScene
struct UTgSceneManagerInterface_ToggleScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
	class UTgDataItem*                                 pLoadData;                                                // (OptionalParm, Parm)
};

// Function TgClientBase.TgSceneManagerInterface.UnloadScene
struct UTgSceneManagerInterface_UnloadScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgSceneManagerInterface.LoadScene
struct UTgSceneManagerInterface_LoadScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
	class UTgDataItem*                                 pLoadData;                                                // (OptionalParm, Parm)
};

// Function TgClientBase.TgSceneManagerInterface.KillScene
struct UTgSceneManagerInterface_KillScene_Params
{
	struct FString                                     SceneName;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgIntervalInterface.GetIntervalManager
struct UTgIntervalInterface_GetIntervalManager_Params
{
	class UTgIntervalManager*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgIntervalManager.GetNextId
struct UTgIntervalManager_GetNextId_Params
{
	struct FQWord                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgIntervalManager.ClearAll
struct UTgIntervalManager_ClearAll_Params
{
	class UObject*                                     pScope;                                                   // (Parm)
};

// Function TgClientBase.TgIntervalManager.ClearTimeout
struct UTgIntervalManager_ClearTimeout_Params
{
	struct FTgIntervalHandle                           Handle;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgIntervalManager.ClearInterval
struct UTgIntervalManager_ClearInterval_Params
{
	struct FTgIntervalHandle                           Handle;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgIntervalManager.SetIntervalEx
struct UTgIntervalManager_SetIntervalEx_Params
{
	float                                              nTimeSecs;                                                // (Parm)
	int                                                nRepeatCount;                                             // (Parm)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	struct FTgIntervalHandle                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgIntervalManager.SetInterval
struct UTgIntervalManager_SetInterval_Params
{
	float                                              nTimeSecs;                                                // (Parm)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	struct FTgIntervalHandle                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgIntervalManager.SetTimeout
struct UTgIntervalManager_SetTimeout_Params
{
	float                                              nTimeSecs;                                                // (Parm)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	struct FTgIntervalHandle                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgIntervalManager.IntervalDelegate
struct UTgIntervalManager_IntervalDelegate_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgDevMenuMoviePlayer.FilterButtonInput
struct UTgDevMenuMoviePlayer_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDevMenuMoviePlayer.OnClose
struct UTgDevMenuMoviePlayer_OnClose_Params
{
};

// Function TgClientBase.TgDevMenuMoviePlayer.PostInit
struct UTgDevMenuMoviePlayer_PostInit_Params
{
};

// Function TgClientBase.TgDevMenuMoviePlayer.usc_FillCommands
struct UTgDevMenuMoviePlayer_usc_FillCommands_Params
{
	struct FString                                     MenuName;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgDevMenuMoviePlayer.AddSubMenu
struct UTgDevMenuMoviePlayer_AddSubMenu_Params
{
	struct FString                                     Section;                                                  // (Parm, NeedCtorLink)
	struct FString                                     submenuname;                                              // (Parm, NeedCtorLink)
	struct FString                                     DisplayName;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgDevMenuMoviePlayer.AddCommand
struct UTgDevMenuMoviePlayer_AddCommand_Params
{
	struct FString                                     Section;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
	struct FString                                     DisplayName;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgDevMenuMoviePlayer.FillSubMenuCommands
struct UTgDevMenuMoviePlayer_FillSubMenuCommands_Params
{
	struct FString                                     submenuname;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgDevMenuMoviePlayer.FillMenuCommands
struct UTgDevMenuMoviePlayer_FillMenuCommands_Params
{
};

// Function TgClientBase.TgPagePopup.HandleResponse
struct UTgPagePopup_HandleResponse_Params
{
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgPagePopup.RemoveCallback
struct UTgPagePopup_RemoveCallback_Params
{
	class UObject*                                     pObject;                                                  // (Parm)
};

// Function TgClientBase.TgPagePopup.SetCallback
struct UTgPagePopup_SetCallback_Params
{
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgPagePopup.FillPopupData
struct UTgPagePopup_FillPopupData_Params
{
	class UGFxObject*                                  popupData;                                                // (Parm)
};

// Function TgClientBase.TgPagePopup.OnPopupDelegate
struct UTgPagePopup_OnPopupDelegate_Params
{
	class UTgPagePopup*                                pData;                                                    // (Parm)
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgPlayerNameManager.GetLP
struct UTgPlayerNameManager_GetLP_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.GetLocalUserNum
struct UTgPlayerNameManager_GetLocalUserNum_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.IsPlayerMutedImpl
struct UTgPlayerNameManager_IsPlayerMutedImpl_Params
{
	struct FUniqueNetId                                ConsoleId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.UnmutePlayerImpl
struct UTgPlayerNameManager_UnmutePlayerImpl_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                ConsoleId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.MutePlayerImpl
struct UTgPlayerNameManager_MutePlayerImpl_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                ConsoleId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.GetPlayerNicknameFromInterface
struct UTgPlayerNameManager_GetPlayerNicknameFromInterface_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgPlayerNameManager.ShowPlayerCardByUserNameImpl
struct UTgPlayerNameManager_ShowPlayerCardByUserNameImpl_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	struct FScriptDelegate                             completeCallback;                                         // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.ShowPlayerCardImpl
struct UTgPlayerNameManager_ShowPlayerCardImpl_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	struct FScriptDelegate                             completeCallback;                                         // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.UnregisterOSSFriends
struct UTgPlayerNameManager_UnregisterOSSFriends_Params
{
};

// Function TgClientBase.TgPlayerNameManager.RegisterOSSFriends
struct UTgPlayerNameManager_RegisterOSSFriends_Params
{
};

// Function TgClientBase.TgPlayerNameManager.ClearCachedOnlineProfiles
struct UTgPlayerNameManager_ClearCachedOnlineProfiles_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.IsOnline
struct UTgPlayerNameManager_IsOnline_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	struct FPointer                                    pStateOwner;                                              // (Const, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.OnPlayerCardClosed
struct UTgPlayerNameManager_OnPlayerCardClosed_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function TgClientBase.TgPlayerNameManager.IsPlayerMuted
struct UTgPlayerNameManager_IsPlayerMuted_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.UnmutePlayer
struct UTgPlayerNameManager_UnmutePlayer_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.MutePlayer
struct UTgPlayerNameManager_MutePlayer_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.ShowPlayerCard
struct UTgPlayerNameManager_ShowPlayerCard_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	struct FScriptDelegate                             delComplete;                                              // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.GetLocalPlayer
struct UTgPlayerNameManager_GetLocalPlayer_Params
{
	unsigned char                                      nIndex;                                                   // (OptionalParm, Parm)
	struct FTgPlayerId                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgPlayerNameManager.CancelProfileRequests
struct UTgPlayerNameManager_CancelProfileRequests_Params
{
	class UObject*                                     pOwner;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.RequestProfileAsync
struct UTgPlayerNameManager_RequestProfileAsync_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	bool                                               bWaitOnly;                                                // (Parm)
	bool                                               bNoFilter;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.RequestNamesByGFxPlayersAsync
struct UTgPlayerNameManager_RequestNamesByGFxPlayersAsync_Params
{
	class UGFxObject*                                  arrPlayers;                                               // (Parm)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	bool                                               bWaitOnly;                                                // (Parm)
	bool                                               bNoFilter;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.HasUnfilteredNameFor
struct UTgPlayerNameManager_HasUnfilteredNameFor_Params
{
	struct FTgPlayerId                                 Id;                                                       // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.HasProfileFor
struct UTgPlayerNameManager_HasProfileFor_Params
{
	struct FTgPlayerId                                 Id;                                                       // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.HasNameFor
struct UTgPlayerNameManager_HasNameFor_Params
{
	struct FTgPlayerId                                 Id;                                                       // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameManager.Uninitialize
struct UTgPlayerNameManager_Uninitialize_Params
{
};

// Function TgClientBase.TgPlayerNameManager.Initialize
struct UTgPlayerNameManager_Initialize_Params
{
};

// Function TgClientBase.TgPlayerNameManager.SystemCall
struct UTgPlayerNameManager_SystemCall_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function TgClientBase.TgPlayerNameManager.NameRequestDelegate
struct UTgPlayerNameManager_NameRequestDelegate_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	class UTgPlayerNameManager*                        pManager;                                                 // (Parm)
};

// Function TgClientBase.TgPlayerNameProcessor.Tick
struct UTgPlayerNameProcessor_Tick_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgPlayerNameProcessor.IsTickable
struct UTgPlayerNameProcessor_IsTickable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgPlayerNameProcessor.RequestPlatformProfile
struct UTgPlayerNameProcessor_RequestPlatformProfile_Params
{
	struct FString                                     sId;                                                      // (Parm, NeedCtorLink)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgPlayerNameProcessor.RequestMctsProfile
struct UTgPlayerNameProcessor_RequestMctsProfile_Params
{
	struct Fdword                                      nId;                                                      // (Parm)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	bool                                               bWaitOnly;                                                // (Parm)
	bool                                               bNoFilter;                                                // (Parm)
};

// Function TgClientBase.TgPlayerNameProcessor.RequestProfile
struct UTgPlayerNameProcessor_RequestProfile_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	bool                                               bWaitOnly;                                                // (Parm)
	bool                                               bNoFilter;                                                // (Parm)
};

// Function TgClientBase.TgPlayerNameProcessor.OnReadPlatformFriends
struct UTgPlayerNameProcessor_OnReadPlatformFriends_Params
{
};

// Function TgClientBase.TgPlayerNameProcessor.ReceivePlatformInfo
struct UTgPlayerNameProcessor_ReceivePlatformInfo_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	TArray<struct FString>                             arrIds;                                                   // (Const, Parm, OutParm, NeedCtorLink)
	TArray<struct FOnlineProfile>                      arrProfiles;                                              // (Const, Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgPlayerNameProcessor.ReceiveMctsInfo
struct UTgPlayerNameProcessor_ReceiveMctsInfo_Params
{
	struct Fdword                                      nPid;                                                     // (Parm)
	struct FTgUserId                                   Uid;                                                      // (Const, Parm, OutParm)
	struct FString                                     sFilter;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgPlayerNameProcessor.OnFilterResult
struct UTgPlayerNameProcessor_OnFilterResult_Params
{
	struct FString                                     sOriginal;                                                // (Parm, NeedCtorLink)
	struct FString                                     sFiltered;                                                // (Parm, NeedCtorLink)
	bool                                               bTotalCensor;                                             // (Parm)
};

// Function TgClientBase.TgPlayerNameProcessor.RequestPlatformProfiles
struct UTgPlayerNameProcessor_RequestPlatformProfiles_Params
{
	TArray<struct FString>                             arrUids;                                                  // (Const, Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgPlayerNameProcessor.Empty
struct UTgPlayerNameProcessor_Empty_Params
{
};

// Function TgClientBase.TgPlayerNameProcessor.Uninitialize
struct UTgPlayerNameProcessor_Uninitialize_Params
{
};

// Function TgClientBase.TgPlayerNameProcessor.Initialize
struct UTgPlayerNameProcessor_Initialize_Params
{
};

// Function TgClientBase.TgPlayerNameProcessor.UnregisterOSS
struct UTgPlayerNameProcessor_UnregisterOSS_Params
{
};

// Function TgClientBase.TgPlayerNameProcessor.RegisterOSS
struct UTgPlayerNameProcessor_RegisterOSS_Params
{
};

// Function TgClientBase.TgPlayerNameProcessor.SubmitProfilesRequest
struct UTgPlayerNameProcessor_SubmitProfilesRequest_Params
{
	TArray<struct FString>                             arrPlayerIdStrings;                                       // (Const, Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgPlayerNameProcessor.OnReadOnlinePlayerDataComplete
struct UTgPlayerNameProcessor_OnReadOnlinePlayerDataComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	TArray<struct FString>                             PlayerIDs;                                                // (Parm, NeedCtorLink)
	TArray<struct FOnlineProfile>                      OnlineProfiles;                                           // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgPlayerNameProcessor.NameRequestDelegate
struct UTgPlayerNameProcessor_NameRequestDelegate_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	class UTgPlayerNameManager*                        pManager;                                                 // (Parm)
};

// Function TgClientBase.TgPromptManager.RestoreButtonPrompts
struct UTgPromptManager_RestoreButtonPrompts_Params
{
};

// Function TgClientBase.TgPromptManager.CacheAndClearButtonPrompts
struct UTgPromptManager_CacheAndClearButtonPrompts_Params
{
};

// Function TgClientBase.TgPromptManager.UnsuppressGlobalPrompt
struct UTgPromptManager_UnsuppressGlobalPrompt_Params
{
	struct FString                                     sButtonDisplay;                                           // (Parm, NeedCtorLink)
	class UGFxObject*                                  Owner;                                                    // (Parm)
};

// Function TgClientBase.TgPromptManager.SuppressGlobalPrompt
struct UTgPromptManager_SuppressGlobalPrompt_Params
{
	struct FString                                     sButtonDisplay;                                           // (Parm, NeedCtorLink)
	class UGFxObject*                                  Owner;                                                    // (Parm)
};

// Function TgClientBase.TgPromptManager.ClearAllButtonPrompts
struct UTgPromptManager_ClearAllButtonPrompts_Params
{
};

// Function TgClientBase.TgPromptManager.ClearButtonPrompt
struct UTgPromptManager_ClearButtonPrompt_Params
{
	struct FString                                     sButtonDisplay;                                           // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgPromptManager.SetPrompts
struct UTgPromptManager_SetPrompts_Params
{
	TArray<class UGFxObject*>                          prompts;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgPromptManager.UpdateButtonPromptText
struct UTgPromptManager_UpdateButtonPromptText_Params
{
	struct FString                                     sButtonDisplay;                                           // (Parm, NeedCtorLink)
	struct FString                                     sPromptText;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgPromptManager.UpdateButtonPrompt
struct UTgPromptManager_UpdateButtonPrompt_Params
{
	struct FString                                     sButtonDisplay;                                           // (Parm, NeedCtorLink)
	struct FString                                     sPromptMsg;                                               // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgPromptManager.SetPrimaryDisplay
struct UTgPromptManager_SetPrimaryDisplay_Params
{
	class UGFxObject*                                  Clip;                                                     // (Parm)
};

// Function TgClientBase.TgSynchronizedTimer.IsPaused
struct UTgSynchronizedTimer_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSynchronizedTimer.IsRunning
struct UTgSynchronizedTimer_IsRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSynchronizedTimer.EventCallback
struct UTgSynchronizedTimer_EventCallback_Params
{
	int                                                nTimerId;                                                 // (Parm)
	TEnumAsByte<ETGT_EVENT>                            eEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSynchronizedTimer.ExpireTimer
struct UTgSynchronizedTimer_ExpireTimer_Params
{
	bool                                               bFromCallback;                                            // (OptionalParm, Parm)
};

// Function TgClientBase.TgSynchronizedTimer.UpdateTimer
struct UTgSynchronizedTimer_UpdateTimer_Params
{
	float                                              fElapsed;                                                 // (Parm)
	float                                              fTotal;                                                   // (Parm)
	bool                                               bPaused;                                                  // (OptionalParm, Parm)
	bool                                               bFromCallback;                                            // (OptionalParm, Parm)
};

// Function TgClientBase.TgSynchronizedTimer.StartTimer
struct UTgSynchronizedTimer_StartTimer_Params
{
	float                                              fSeconds;                                                 // (Parm)
};

// Function TgClientBase.TgUIServerStates.GetDispatcher
struct UTgUIServerStates_GetDispatcher_Params
{
	class UTgEventDispatcher*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgUIServerStates.Update
struct UTgUIServerStates_Update_Params
{
};

// Function TgClientBase.TgUIServerStates.IsQueuedToSpectate
struct UTgUIServerStates_IsQueuedToSpectate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgUIServerStates.IsSpectating
struct UTgUIServerStates_IsSpectating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgUIServerStates.IsInGame
struct UTgUIServerStates_IsInGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgUIServerStates.IsInMatch
struct UTgUIServerStates_IsInMatch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgUIServerStates.IsInQueue
struct UTgUIServerStates_IsInQueue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgUIServerStates.GetLastMatchId
struct UTgUIServerStates_GetLastMatchId_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgUIServerStates.GetCurrentQueueId
struct UTgUIServerStates_GetCurrentQueueId_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgUIServerStates.GetCurrentMatchId
struct UTgUIServerStates_GetCurrentMatchId_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgUIServerStates.SetPendingPrivilegeAllowed
struct UTgUIServerStates_SetPendingPrivilegeAllowed_Params
{
	struct Fdword                                      nMatchId;                                                 // (Parm)
};

// Function TgClientBase.TgUIServerStates.SetPendingPrivilegeDenied
struct UTgUIServerStates_SetPendingPrivilegeDenied_Params
{
	struct Fdword                                      nMatchId;                                                 // (Parm)
};

// Function TgClientBase.TgUIServerStates.StartPendingPrivilegeCheck
struct UTgUIServerStates_StartPendingPrivilegeCheck_Params
{
	struct Fdword                                      nMatchId;                                                 // (Parm)
};

// Function TgClientBase.TgUIServerStates.SetSpectatingState
struct UTgUIServerStates_SetSpectatingState_Params
{
	bool                                               bSpectating;                                              // (Parm)
};

// Function TgClientBase.TgUIServerStates.SetMatchComplete
struct UTgUIServerStates_SetMatchComplete_Params
{
	struct Fdword                                      nMatchId;                                                 // (Parm)
};

// Function TgClientBase.TgVirtualKeyboard.OnKeyboardInputComplete
struct UTgVirtualKeyboard_OnKeyboardInputComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function TgClientBase.TgVirtualKeyboard.OnGFxVirtualKeyboard
struct UTgVirtualKeyboard_OnGFxVirtualKeyboard_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	struct FString                                     sText;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgVirtualKeyboard.ShowKeyboardUIGFx
struct UTgVirtualKeyboard_ShowKeyboardUIGFx_Params
{
	class UGFxObject*                                  FocusedTextField;                                         // (Parm)
	struct FString                                     TitleText;                                                // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (Parm, NeedCtorLink)
	bool                                               bIsPassword;                                              // (OptionalParm, Parm)
	bool                                               bShouldValidate;                                          // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                              // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgVirtualKeyboard.usc_IsShowingKeyboardUI
struct UTgVirtualKeyboard_usc_IsShowingKeyboardUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgVirtualKeyboard.IsShowingKeyboardUI
struct UTgVirtualKeyboard_IsShowingKeyboardUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgVirtualKeyboard.ShowKeyboardUI
struct UTgVirtualKeyboard_ShowKeyboardUI_Params
{
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	struct FString                                     TitleText;                                                // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (Parm, NeedCtorLink)
	bool                                               bIsPassword;                                              // (OptionalParm, Parm)
	bool                                               bShouldValidate;                                          // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                              // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgVirtualKeyboard.HideKeyboardUI
struct UTgVirtualKeyboard_HideKeyboardUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgVirtualKeyboard.DoShowKeyboardUI
struct UTgVirtualKeyboard_DoShowKeyboardUI_Params
{
	struct FString                                     TitleText;                                                // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (Parm, NeedCtorLink)
	bool                                               bIsPassword;                                              // (OptionalParm, Parm)
	bool                                               bShouldValidate;                                          // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                              // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgVirtualKeyboard.Cleanup
struct UTgVirtualKeyboard_Cleanup_Params
{
};

// Function TgClientBase.TgVirtualKeyboard.InitOSSRef
struct UTgVirtualKeyboard_InitOSSRef_Params
{
};

// Function TgClientBase.TgVirtualKeyboard.Uninitialize
struct UTgVirtualKeyboard_Uninitialize_Params
{
};

// Function TgClientBase.TgVirtualKeyboard.Initialize
struct UTgVirtualKeyboard_Initialize_Params
{
};

// Function TgClientBase.TgVirtualKeyboard.OnVirtualKeyboard
struct UTgVirtualKeyboard_OnVirtualKeyboard_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	struct FString                                     sText;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgBlinder.Draw
struct UTgBlinder_Draw_Params
{
	class UCanvas*                                     DestinationCanvas;                                        // (Parm)
	float                                              BlindnessFactor;                                          // (Parm)
};

// Function TgClientBase.TgGameHUD.LeaveSpamDetention
struct ATgGameHUD_LeaveSpamDetention_Params
{
};

// Function TgClientBase.TgGameHUD.SpamPrevention
struct ATgGameHUD_SpamPrevention_Params
{
};

// Function TgClientBase.TgGameHUD.ShowGodTargeter
struct ATgGameHUD_ShowGodTargeter_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClientBase.TgGameHUD.ShowTargetingMap
struct ATgGameHUD_ShowTargetingMap_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClientBase.TgGameHUD.CheckForGameType
struct ATgGameHUD_CheckForGameType_Params
{
};

// Function TgClientBase.TgGameHUD.InitializeUIData
struct ATgGameHUD_InitializeUIData_Params
{
};

// Function TgClientBase.TgGameHUD.GetGameState
struct ATgGameHUD_GetGameState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.UpdateMinimapFrame
struct ATgGameHUD_UpdateMinimapFrame_Params
{
};

// Function TgClientBase.TgGameHUD.HoverMap
struct ATgGameHUD_HoverMap_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGameHUD.PingMap
struct ATgGameHUD_PingMap_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	struct FString                                     Type;                                                     // (Parm, NeedCtorLink)
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGameHUD.GetMapByName
struct ATgGameHUD_GetMapByName_Params
{
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
	class UTgMiniMap*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.UpdateMMTimer
struct ATgGameHUD_UpdateMMTimer_Params
{
	float                                              fNew;                                                     // (Parm)
};

// Function TgClientBase.TgGameHUD.HideOverlay
struct ATgGameHUD_HideOverlay_Params
{
};

// Function TgClientBase.TgGameHUD.ShowOverlay
struct ATgGameHUD_ShowOverlay_Params
{
};

// Function TgClientBase.TgGameHUD.ToggleOverlay
struct ATgGameHUD_ToggleOverlay_Params
{
};

// Function TgClientBase.TgGameHUD.ToggleMiniMap
struct ATgGameHUD_ToggleMiniMap_Params
{
};

// Function TgClientBase.TgGameHUD.HideMiniMap
struct ATgGameHUD_HideMiniMap_Params
{
};

// Function TgClientBase.TgGameHUD.ShowMiniMap
struct ATgGameHUD_ShowMiniMap_Params
{
};

// Function TgClientBase.TgGameHUD.UpdateMiniMap
struct ATgGameHUD_UpdateMiniMap_Params
{
};

// Function TgClientBase.TgGameHUD.DrawMiniMap
struct ATgGameHUD_DrawMiniMap_Params
{
	class UCanvas*                                     theCanvas;                                                // (Parm)
};

// Function TgClientBase.TgGameHUD.PreDemoRewind
struct ATgGameHUD_PreDemoRewind_Params
{
};

// Function TgClientBase.TgGameHUD.PostRender
struct ATgGameHUD_PostRender_Params
{
};

// Function TgClientBase.TgGameHUD.InitCapturePoints
struct ATgGameHUD_InitCapturePoints_Params
{
};

// Function TgClientBase.TgGameHUD.SetInitialState
struct ATgGameHUD_SetInitialState_Params
{
};

// Function TgClientBase.TgGameHUD.PostBeginPlay
struct ATgGameHUD_PostBeginPlay_Params
{
};

// Function TgClientBase.TgGameHUD.LeaveMapPingMode
struct ATgGameHUD_LeaveMapPingMode_Params
{
};

// Function TgClientBase.TgGameHUD.UpdateChatDCPriority
struct ATgGameHUD_UpdateChatDCPriority_Params
{
};

// Function TgClientBase.TgGameHUD.OnInputAxis
struct ATgGameHUD_OnInputAxis_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       Key;                                                      // (Parm)
	float                                              Delta;                                                    // (Parm)
	float                                              DeltaTime;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.EnterMapPingMode
struct ATgGameHUD_EnterMapPingMode_Params
{
};

// Function TgClientBase.TgGameHUD.ShowCrosshair
struct ATgGameHUD_ShowCrosshair_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClientBase.TgGameHUD.Destroyed
struct ATgGameHUD_Destroyed_Params
{
};

// Function TgClientBase.TgGameHUD.PlayDeviceFailResponse
struct ATgGameHUD_PlayDeviceFailResponse_Params
{
	TEnumAsByte<EDeviceFailType>                       failType;                                                 // (Parm)
};

// Function TgClientBase.TgGameHUD.OnRawInputKey
struct ATgGameHUD_OnRawInputKey_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (Parm)
	float                                              AmountDepressed;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.SetGameTypeReady
struct ATgGameHUD_SetGameTypeReady_Params
{
	int                                                GameType;                                                 // (Parm)
};

// Function TgClientBase.TgGameHUD.TogglePassiveMeter
struct ATgGameHUD_TogglePassiveMeter_Params
{
};

// Function TgClientBase.TgGameHUD.ToggleHudSection
struct ATgGameHUD_ToggleHudSection_Params
{
	struct FString                                     SectionName;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGameHUD.NotifyInGame
struct ATgGameHUD_NotifyInGame_Params
{
};

// Function TgClientBase.TgGameHUD.ToggleHUD
struct ATgGameHUD_ToggleHUD_Params
{
};

// Function TgClientBase.TgGameHUD.GetVisibilityMode
struct ATgGameHUD_GetVisibilityMode_Params
{
	TEnumAsByte<ETgClientVisibilityMode>               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.ToggleStoreDisplay
struct ATgGameHUD_ToggleStoreDisplay_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClientBase.TgGameHUD.HideFinalEOMScene
struct ATgGameHUD_HideFinalEOMScene_Params
{
};

// Function TgClientBase.TgGameHUD.HideEOMScene
struct ATgGameHUD_HideEOMScene_Params
{
};

// Function TgClientBase.TgGameHUD.FinishIntro
struct ATgGameHUD_FinishIntro_Params
{
};

// Function TgClientBase.TgGameHUD.PlayIntro
struct ATgGameHUD_PlayIntro_Params
{
};

// Function TgClientBase.TgGameHUD.ToggleViewSkipCinematic
struct ATgGameHUD_ToggleViewSkipCinematic_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClientBase.TgGameHUD.DoReportPlayerMutedImpl
struct ATgGameHUD_DoReportPlayerMutedImpl_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgGameHUD.ReportPlayerMuted
struct ATgGameHUD_ReportPlayerMuted_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGameHUD.HideGameTip
struct ATgGameHUD_HideGameTip_Params
{
	bool                                               bNoSound;                                                 // (OptionalParm, Parm)
};

// Function TgClientBase.TgGameHUD.ShowGameTip
struct ATgGameHUD_ShowGameTip_Params
{
	int                                                nTipId;                                                   // (Parm)
	bool                                               bNoSound;                                                 // (OptionalParm, Parm)
	bool                                               bPopup;                                                   // (OptionalParm, Parm)
};

// Function TgClientBase.TgGameHUD.SetWaypointPing
struct ATgGameHUD_SetWaypointPing_Params
{
	bool                                               bSetWaypointActive;                                       // (Const, Parm)
	int                                                nWaypointId;                                              // (Parm, OutParm)
	struct FVector                                     vWaypointLoc;                                             // (Const, OptionalParm, Parm)
};

// Function TgClientBase.TgGameHUD.PingWorldLocation
struct ATgGameHUD_PingWorldLocation_Params
{
	struct FVector                                     PingLocation;                                             // (Parm)
	TEnumAsByte<EPING_TYPE>                            Type;                                                     // (Parm)
};

// Function TgClientBase.TgGameHUD.PrecacheClass
struct ATgGameHUD_PrecacheClass_Params
{
	struct FString                                     godName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     SkinName;                                                 // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgGameHUD.TestAchievement
struct ATgGameHUD_TestAchievement_Params
{
};

// Function TgClientBase.TgGameHUD.TestPrecache
struct ATgGameHUD_TestPrecache_Params
{
	int                                                nBotId;                                                   // (Parm)
	int                                                nSkinId;                                                  // (Parm)
	bool                                               bAll;                                                     // (OptionalParm, Parm)
};

// Function TgClientBase.TgGameHUD.TestEquipLobbyPassiveItems
struct ATgGameHUD_TestEquipLobbyPassiveItems_Params
{
	int                                                nItemId1;                                                 // (Parm)
	int                                                nItemId2;                                                 // (Parm)
};

// Function TgClientBase.TgGameHUD.TestEquipLobbyActiveItems
struct ATgGameHUD_TestEquipLobbyActiveItems_Params
{
	int                                                nItemId1;                                                 // (Parm)
	int                                                nItemId2;                                                 // (Parm)
};

// Function TgClientBase.TgGameHUD.SetRecapMode
struct ATgGameHUD_SetRecapMode_Params
{
	bool                                               bRecap;                                                   // (Parm)
};

// Function TgClientBase.TgGameHUD.GetRecapMode
struct ATgGameHUD_GetRecapMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.EndMission
struct ATgGameHUD_EndMission_Params
{
	bool                                               bPlayerAttacker;                                          // (Parm)
	TEnumAsByte<EGAME_WIN_STATE>                       finalWinState;                                            // (Parm)
};

// Function TgClientBase.TgGameHUD.UpdateItemStoreItems
struct ATgGameHUD_UpdateItemStoreItems_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.UpdateScoreboard
struct ATgGameHUD_UpdateScoreboard_Params
{
};

// Function TgClientBase.TgGameHUD.ToggleConsoleDeathRecap
struct ATgGameHUD_ToggleConsoleDeathRecap_Params
{
};

// Function TgClientBase.TgGameHUD.ToggleConsoleScoreBoard
struct ATgGameHUD_ToggleConsoleScoreBoard_Params
{
};

// Function TgClientBase.TgGameHUD.StartMapPingMode
struct ATgGameHUD_StartMapPingMode_Params
{
};

// Function TgClientBase.TgGameHUD.StartVGS
struct ATgGameHUD_StartVGS_Params
{
};

// Function TgClientBase.TgGameHUD.ToggleScoreboard
struct ATgGameHUD_ToggleScoreboard_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function TgClientBase.TgGameHUD.PlayTakeHit
struct ATgGameHUD_PlayTakeHit_Params
{
	struct FRotator                                    HitDir;                                                   // (Parm)
	int                                                nDamage;                                                  // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function TgClientBase.TgGameHUD.SellItem
struct ATgGameHUD_SellItem_Params
{
	int                                                nInventoryId;                                             // (Parm)
};

// Function TgClientBase.TgGameHUD.UpgradeItem
struct ATgGameHUD_UpgradeItem_Params
{
	int                                                nItemId;                                                  // (Parm)
	int                                                nUpgradeInvId;                                            // (Parm)
};

// Function TgClientBase.TgGameHUD.PurchaseItem
struct ATgGameHUD_PurchaseItem_Params
{
	int                                                nItemId;                                                  // (Parm)
	int                                                nAmount;                                                  // (Parm)
};

// Function TgClientBase.TgGameHUD.CloseSkillScreen
struct ATgGameHUD_CloseSkillScreen_Params
{
};

// Function TgClientBase.TgGameHUD.OpenSkillScreen
struct ATgGameHUD_OpenSkillScreen_Params
{
};

// Function TgClientBase.TgGameHUD.OpenVendorUnit
struct ATgGameHUD_OpenVendorUnit_Params
{
};

// Function TgClientBase.TgGameHUD.OpenVendorMenu
struct ATgGameHUD_OpenVendorMenu_Params
{
};

// Function TgClientBase.TgGameHUD.DeviceChangeEvent
struct ATgGameHUD_DeviceChangeEvent_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
	TEnumAsByte<EDeviceChangeEvent>                    Event;                                                    // (Parm)
};

// Function TgClientBase.TgGameHUD.UpdateReleaseTimeRemaining
struct ATgGameHUD_UpdateReleaseTimeRemaining_Params
{
	float                                              fTimeRemaining;                                           // (Parm)
};

// Function TgClientBase.TgGameHUD.UpdatePlayerReady
struct ATgGameHUD_UpdatePlayerReady_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
};

// Function TgClientBase.TgGameHUD.UpdatePlayerStatUI
struct ATgGameHUD_UpdatePlayerStatUI_Params
{
	class ATgPawn*                                     changedPawn;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.UpdateGameTypeByQueue
struct ATgGameHUD_UpdateGameTypeByQueue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.UpdateTeamUI
struct ATgGameHUD_UpdateTeamUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.UpdatePlayerVitalsUI
struct ATgGameHUD_UpdatePlayerVitalsUI_Params
{
	class ATgPlayerController*                         PC;                                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.UpdatePlayerPause
struct ATgGameHUD_UpdatePlayerPause_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.UpdatePlayerSurrender
struct ATgGameHUD_UpdatePlayerSurrender_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.UpdatePlayerInfoUI
struct ATgGameHUD_UpdatePlayerInfoUI_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.UpdateGameCapturePointControlUI
struct ATgGameHUD_UpdateGameCapturePointControlUI_Params
{
	int                                                Index;                                                    // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.UpdateGameScoreUI
struct ATgGameHUD_UpdateGameScoreUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.UpdateGameClockUI
struct ATgGameHUD_UpdateGameClockUI_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameHUD.UpdateBuildupTimer
struct ATgGameHUD_UpdateBuildupTimer_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameHUD.UpdateRefireTimer
struct ATgGameHUD_UpdateRefireTimer_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameHUD.UpdateHoverTarget
struct ATgGameHUD_UpdateHoverTarget_Params
{
};

// Function TgClientBase.TgGameHUD.UpdateDebugDraws
struct ATgGameHUD_UpdateDebugDraws_Params
{
};

// Function TgClientBase.TgGameHUD.UpdateOverlay
struct ATgGameHUD_UpdateOverlay_Params
{
};

// Function TgClientBase.TgGameHUD.Uninit
struct ATgGameHUD_Uninit_Params
{
};

// Function TgClientBase.TgGameHUD.UninitOverlayMoviePlayer
struct ATgGameHUD_UninitOverlayMoviePlayer_Params
{
};

// Function TgClientBase.TgGameHUD.InitOverlayMoviePlayer
struct ATgGameHUD_InitOverlayMoviePlayer_Params
{
};

// Function TgClientBase.TgGameHUD.UpdateGammaControls
struct ATgGameHUD_UpdateGammaControls_Params
{
};

// Function TgClientBase.TgGameHUD.InitMainMoviePlayer
struct ATgGameHUD_InitMainMoviePlayer_Params
{
};

// Function TgClientBase.TgGameHUD.UnregisterEngineCallbacks
struct ATgGameHUD_UnregisterEngineCallbacks_Params
{
};

// Function TgClientBase.TgGameHUD.RegisterEngineCallbacks
struct ATgGameHUD_RegisterEngineCallbacks_Params
{
};

// Function TgClientBase.TgGameHUDOverlay.RemoveReferencedClip
struct UTgGameHUDOverlay_RemoveReferencedClip_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGameHUDOverlay.AddReferencedClip
struct UTgGameHUDOverlay_AddReferencedClip_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGameHUDOverlay.OnGameUIEvent
struct UTgGameHUDOverlay_OnGameUIEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGameHUDOverlay.Uninitialize
struct UTgGameHUDOverlay_Uninitialize_Params
{
};

// Function TgClientBase.TgGameHUDOverlay.Initialize
struct UTgGameHUDOverlay_Initialize_Params
{
};

// Function TgClientBase.TgGameHUDOverlay.usc_TweenFinished
struct UTgGameHUDOverlay_usc_TweenFinished_Params
{
	class UGFxObject*                                  Obj;                                                      // (Parm)
};

// Function TgClientBase.TgGameHUDOverlay.ForceRebuildOverlays
struct UTgGameHUDOverlay_ForceRebuildOverlays_Params
{
};

// Function TgClientBase.TgDataGroup_Game.InitializeData
struct UTgDataGroup_Game_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_Chat.TokenReplace
struct UTgGameDC_Chat_TokenReplace_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Token;                                                    // (Parm, NeedCtorLink)
	struct FString                                     sValue;                                                   // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGameDC_Chat.SubmitDeferredMessages
struct UTgGameDC_Chat_SubmitDeferredMessages_Params
{
	int                                                nChannel;                                                 // (OptionalParm, Parm)
};

// Function TgClientBase.TgGameDC_Chat.PlayVGSSound
struct UTgGameDC_Chat_PlayVGSSound_Params
{
	int                                                nMsgId;                                                   // (Parm)
	int                                                nPackId;                                                  // (Parm)
	int                                                nBotId;                                                   // (Parm)
	int                                                nSkinId;                                                  // (Parm)
	struct FString                                     customSuffix;                                             // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGameDC_Chat.PlayMessageSound
struct UTgGameDC_Chat_PlayMessageSound_Params
{
	int                                                nMsgId;                                                   // (Parm)
	int                                                nPackId;                                                  // (Parm)
	TEnumAsByte<ETG_CHAT_PRIORITY>                     ePriority;                                                // (OptionalParm, Parm)
};

// Function TgClientBase.TgGameDC_Chat.AddDeferredMessage
struct UTgGameDC_Chat_AddDeferredMessage_Params
{
	class UTgChatData*                                 pData;                                                    // (Parm)
};

// Function TgClientBase.TgGameDC_Chat.AddNotifyMsg
struct UTgGameDC_Chat_AddNotifyMsg_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
	bool                                               bIsMain;                                                  // (Parm)
	int                                                nDelay;                                                   // (Parm)
	int                                                nColor;                                                   // (OptionalParm, Parm)
	int                                                nSize;                                                    // (OptionalParm, Parm)
	int                                                nFill;                                                    // (OptionalParm, Parm)
};

// Function TgClientBase.TgGameDC_Chat.AddAlert
struct UTgGameDC_Chat_AddAlert_Params
{
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGameDC_Chat.UpdateMessageSoundQueue
struct UTgGameDC_Chat_UpdateMessageSoundQueue_Params
{
};

// Function TgClientBase.TgGameDC_Chat.AddPopupMsg
struct UTgGameDC_Chat_AddPopupMsg_Params
{
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGameDC_Chat.AddCombatMsg
struct UTgGameDC_Chat_AddCombatMsg_Params
{
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGameDC_Chat.AddLocalChatMsg
struct UTgGameDC_Chat_AddLocalChatMsg_Params
{
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
	struct FString                                     senderName;                                               // (Parm, NeedCtorLink)
	bool                                               bIsMapPing;                                               // (OptionalParm, Parm)
};

// Function TgClientBase.TgGameDC_Chat.AddChatMsg
struct UTgGameDC_Chat_AddChatMsg_Params
{
	struct FString                                     msg;                                                      // (Parm, NeedCtorLink)
	struct FString                                     senderName;                                               // (Parm, NeedCtorLink)
	int                                                nTime;                                                    // (Parm)
	int                                                nChannel;                                                 // (Parm)
	bool                                               bIsFeedback;                                              // (Parm)
	bool                                               bIsVGS;                                                   // (OptionalParm, Parm)
	bool                                               bOnlyIfOpen;                                              // (OptionalParm, Parm)
	bool                                               bHideSender;                                              // (OptionalParm, Parm)
	bool                                               bNew;                                                     // (OptionalParm, Parm)
};

// Function TgClientBase.TgGameDC_Chat.UpdatePriorityQueue
struct UTgGameDC_Chat_UpdatePriorityQueue_Params
{
	float                                              Delay;                                                    // (Parm)
};

// Function TgClientBase.TgGameDC_Chat.InitializeData
struct UTgGameDC_Chat_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_Device.usc_set_cast_mode
struct UTgGameDC_Device_usc_set_cast_mode_Params
{
	int                                                nCastMode;                                                // (Parm)
};

// Function TgClientBase.TgGameDC_Device.usc_get_mode_tooltip
struct UTgGameDC_Device_usc_get_mode_tooltip_Params
{
	int                                                nRank;                                                    // (Parm)
};

// Function TgClientBase.TgGameDC_Device.NotifyMapChange
struct UTgGameDC_Device_NotifyMapChange_Params
{
};

// Function TgClientBase.TgGameDC_Device.UpdateCastMode
struct UTgGameDC_Device_UpdateCastMode_Params
{
};

// Function TgClientBase.TgGameDC_Device.UpdateIcon
struct UTgGameDC_Device_UpdateIcon_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
	bool                                               ForceUpdate;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgGameDC_Device.UpdateInstanceCount
struct UTgGameDC_Device_UpdateInstanceCount_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_Device.UpdateHasBeenTrained
struct UTgGameDC_Device_UpdateHasBeenTrained_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_Device.UpdatePtsAlloc
struct UTgGameDC_Device_UpdatePtsAlloc_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_Device.UpdateToggleState
struct UTgGameDC_Device_UpdateToggleState_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_Device.UpdateCooldown
struct UTgGameDC_Device_UpdateCooldown_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_Device.UpdateCanFire
struct UTgGameDC_Device_UpdateCanFire_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_Device.UpdateSelected
struct UTgGameDC_Device_UpdateSelected_Params
{
	bool                                               bSelected;                                                // (Parm)
};

// Function TgClientBase.TgGameDC_Device.UpdateRelicValues
struct UTgGameDC_Device_UpdateRelicValues_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_Device.UpdateValues
struct UTgGameDC_Device_UpdateValues_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_Device.DeviceChangeEvent
struct UTgGameDC_Device_DeviceChangeEvent_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
	TEnumAsByte<EDeviceChangeEvent>                    Event;                                                    // (Parm)
};

// Function TgClientBase.TgGameDC_Device.InitializeData
struct UTgGameDC_Device_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_DeviceList.SetEmpty
struct UTgGameDC_DeviceList_SetEmpty_Params
{
	TEnumAsByte<ETG_EQUIP_POINT>                       eSlot;                                                    // (Parm)
};

// Function TgClientBase.TgGameDC_DeviceList.UpdatePtsAlloc
struct UTgGameDC_DeviceList_UpdatePtsAlloc_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_DeviceList.UpdateToggleState
struct UTgGameDC_DeviceList_UpdateToggleState_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_DeviceList.UpdateSelected
struct UTgGameDC_DeviceList_UpdateSelected_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_DeviceList.UpdateDevice
struct UTgGameDC_DeviceList_UpdateDevice_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_DeviceList.DeviceChangeEvent
struct UTgGameDC_DeviceList_DeviceChangeEvent_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
	TEnumAsByte<EDeviceChangeEvent>                    Event;                                                    // (Parm)
};

// Function TgClientBase.TgGameDC_DeviceList.GetDeviceChunk
struct UTgGameDC_DeviceList_GetDeviceChunk_Params
{
	class ATgDevice*                                   Dev;                                                      // (Parm)
	class UTgGameDC_Device*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_DeviceList.InitializeData
struct UTgGameDC_DeviceList_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_Effect.NotifyMapChange
struct UTgGameDC_Effect_NotifyMapChange_Params
{
};

// Function TgClientBase.TgGameDC_Effect.InitializeData
struct UTgGameDC_Effect_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_EffectList.UpdateEffects
struct UTgGameDC_EffectList_UpdateEffects_Params
{
	class ATgEffectManager*                            effectManager;                                            // (Parm)
	int                                                indexChanged;                                             // (Parm)
};

// Function TgClientBase.TgGameDC_EffectList.InitializeData
struct UTgGameDC_EffectList_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_Game.OnTaskForceDataUpdate
struct UTgGameDC_Game_OnTaskForceDataUpdate_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function TgClientBase.TgGameDC_Game.SetupTaskForceData
struct UTgGameDC_Game_SetupTaskForceData_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function TgClientBase.TgGameDC_Game.asc_OnTaskForceDataUpdate
struct UTgGameDC_Game_asc_OnTaskForceDataUpdate_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function TgClientBase.TgGameDC_Game.asc_SetupTaskForceData
struct UTgGameDC_Game_asc_SetupTaskForceData_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function TgClientBase.TgGameDC_Game.OnRankedTeamUpdate
struct UTgGameDC_Game_OnRankedTeamUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGameDC_Game.OnFogNextPhase
struct UTgGameDC_Game_OnFogNextPhase_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGameDC_Game.OnFogGrowTime
struct UTgGameDC_Game_OnFogGrowTime_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGameDC_Game.OnTaskForceUpdate
struct UTgGameDC_Game_OnTaskForceUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGameDC_Game.OnPauseTimerUpdate
struct UTgGameDC_Game_OnPauseTimerUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGameDC_Game.OnSurrenderTimerUpdate
struct UTgGameDC_Game_OnSurrenderTimerUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGameDC_Game.OnRoundUIUpdate
struct UTgGameDC_Game_OnRoundUIUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGameDC_Game.UpdateGame
struct UTgGameDC_Game_UpdateGame_Params
{
	class ATgRepInfo_Game*                             GameRepInfo;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_Game.UpdateRound
struct UTgGameDC_Game_UpdateRound_Params
{
	int                                                nRound;                                                   // (Parm)
};

// Function TgClientBase.TgGameDC_Game.UpdateEncounter
struct UTgGameDC_Game_UpdateEncounter_Params
{
	struct FString                                     sRoundString;                                             // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGameDC_Game.UpdateGameCapturePoint
struct UTgGameDC_Game_UpdateGameCapturePoint_Params
{
	int                                                Index;                                                    // (Parm)
	int                                                TaskForce;                                                // (Parm)
};

// Function TgClientBase.TgGameDC_Game.UpdateGameClock
struct UTgGameDC_Game_UpdateGameClock_Params
{
};

// Function TgClientBase.TgGameDC_Game.UpdatePauseStatus
struct UTgGameDC_Game_UpdatePauseStatus_Params
{
};

// Function TgClientBase.TgGameDC_Game.NotifyMapChange
struct UTgGameDC_Game_NotifyMapChange_Params
{
};

// Function TgClientBase.TgGameDC_Game.InitializeData
struct UTgGameDC_Game_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_MapEntity.SetBotSpecificData
struct UTgGameDC_MapEntity_SetBotSpecificData_Params
{
	int                                                nBotId;                                                   // (Parm)
};

// Function TgClientBase.TgGameDC_MapEntity.SetObjectiveData
struct UTgGameDC_MapEntity_SetObjectiveData_Params
{
	class ATgPawn*                                     PRI;                                                      // (Parm)
	struct FString                                     sEntityName;                                              // (OptionalParm, Parm, NeedCtorLink)
	int                                                nLane;                                                    // (OptionalParm, Parm)
	bool                                               bShow;                                                    // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_MapEntity.NotifyMapChange
struct UTgGameDC_MapEntity_NotifyMapChange_Params
{
};

// Function TgClientBase.TgGameDC_MapEntity.InitializeData
struct UTgGameDC_MapEntity_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_Player.IsPlayerMuted
struct UTgGameDC_Player_IsPlayerMuted_Params
{
	struct FUniqueNetId                                ConsoleId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_Player.USC_ForceStatsUpdate
struct UTgGameDC_Player_USC_ForceStatsUpdate_Params
{
};

// Function TgClientBase.TgGameDC_Player.NotifyMapChange
struct UTgGameDC_Player_NotifyMapChange_Params
{
};

// Function TgClientBase.TgGameDC_Player.UpdateItemStoreItems
struct UTgGameDC_Player_UpdateItemStoreItems_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_Player.UpdateStats
struct UTgGameDC_Player_UpdateStats_Params
{
	class ATgPawn*                                     changedPawn;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_Player.UpdatePlayer
struct UTgGameDC_Player_UpdatePlayer_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
};

// Function TgClientBase.TgGameDC_Player.InitializeData
struct UTgGameDC_Player_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_LocalPlayer.UpdateTutorialOptions
struct UTgGameDC_LocalPlayer_UpdateTutorialOptions_Params
{
	bool                                               bDisableSkills;                                           // (Parm)
	bool                                               bDisableStore;                                            // (Parm)
	bool                                               bDisableActives;                                          // (Parm)
};

// Function TgClientBase.TgGameDC_LocalPlayer.PostDataUpdatedEvent
struct UTgGameDC_LocalPlayer_PostDataUpdatedEvent_Params
{
};

// Function TgClientBase.TgGameDC_LocalPlayer.NotifyMapChange
struct UTgGameDC_LocalPlayer_NotifyMapChange_Params
{
};

// Function TgClientBase.TgGameDC_LocalPlayer.UpdateCourierData
struct UTgGameDC_LocalPlayer_UpdateCourierData_Params
{
	class ATgPawn*                                     Pawn;                                                     // (Parm)
};

// Function TgClientBase.TgGameDC_LocalPlayer.UpdateSpectatorViewTarget
struct UTgGameDC_LocalPlayer_UpdateSpectatorViewTarget_Params
{
	class UTgGameDC_MapEntity*                         entity;                                                   // (Parm)
};

// Function TgClientBase.TgGameDC_LocalPlayer.SetVendorItemList
struct UTgGameDC_LocalPlayer_SetVendorItemList_Params
{
	TArray<int>                                        nItemIds;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGameDC_LocalPlayer.InitializeData
struct UTgGameDC_LocalPlayer_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_PlayerStats.NotifyMapChange
struct UTgGameDC_PlayerStats_NotifyMapChange_Params
{
};

// Function TgClientBase.TgGameDC_PlayerStats.UpdateStats
struct UTgGameDC_PlayerStats_UpdateStats_Params
{
	class ATgPawn*                                     changedPawn;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_PlayerStats.InitializeData
struct UTgGameDC_PlayerStats_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_PlayerVitals.UpdatePawnVitals
struct UTgGameDC_PlayerVitals_UpdatePawnVitals_Params
{
	class ATgPawn_Character*                           Pawn;                                                     // (Parm)
};

// Function TgClientBase.TgGameDC_PlayerVitals.OnDamageEvent
struct UTgGameDC_PlayerVitals_OnDamageEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGameDC_PlayerVitals.CheckObjectivePawnSetup
struct UTgGameDC_PlayerVitals_CheckObjectivePawnSetup_Params
{
	struct Fdword                                      nPawnId;                                                  // (Parm)
};

// Function TgClientBase.TgGameDC_PlayerVitals.SetNearestObjective
struct UTgGameDC_PlayerVitals_SetNearestObjective_Params
{
	class ATgPawn*                                     pPawn;                                                    // (Parm)
};

// Function TgClientBase.TgGameDC_PlayerVitals.UpdateCoreStats
struct UTgGameDC_PlayerVitals_UpdateCoreStats_Params
{
};

// Function TgClientBase.TgGameDC_PlayerVitals.UpdateDamageDealt
struct UTgGameDC_PlayerVitals_UpdateDamageDealt_Params
{
};

// Function TgClientBase.TgGameDC_PlayerVitals.UpdateDamageTaken
struct UTgGameDC_PlayerVitals_UpdateDamageTaken_Params
{
};

// Function TgClientBase.TgGameDC_PlayerVitals.UpdateDamageRecap
struct UTgGameDC_PlayerVitals_UpdateDamageRecap_Params
{
};

// Function TgClientBase.TgGameDC_PlayerVitals.NotifyMapChange
struct UTgGameDC_PlayerVitals_NotifyMapChange_Params
{
};

// Function TgClientBase.TgGameDC_PlayerVitals.InitializeData
struct UTgGameDC_PlayerVitals_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_Tower.InitializeData
struct UTgGameDC_Tower_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_Target.UpdateTarget
struct UTgGameDC_Target_UpdateTarget_Params
{
	class AActor*                                      NewTarget;                                                // (Parm)
	bool                                               bHovered;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_Target.InitializeData
struct UTgGameDC_Target_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGameDC_Team.PostDataUpdatedEvent
struct UTgGameDC_Team_PostDataUpdatedEvent_Params
{
};

// Function TgClientBase.TgGameDC_Team.SetupMemberData
struct UTgGameDC_Team_SetupMemberData_Params
{
	int                                                nIndex;                                                   // (Parm)
};

// Function TgClientBase.TgGameDC_Team.UpdateMembersTick
struct UTgGameDC_Team_UpdateMembersTick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_Team.FindTower
struct UTgGameDC_Team_FindTower_Params
{
	int                                                nPawnId;                                                  // (Parm)
	int                                                nNextIndex;                                               // (Parm, OutParm)
	class UTgGameDC_Tower*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_Team.FindPlayer
struct UTgGameDC_Team_FindPlayer_Params
{
	int                                                nPawnId;                                                  // (Parm)
	int                                                nPlayerCount;                                             // (Parm)
	class UTgGameDC_Player*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_Team.ParseUpdatablePlayers
struct UTgGameDC_Team_ParseUpdatablePlayers_Params
{
	class ATgRepInfo_TaskForce*                        tfri;                                                     // (Parm)
	TArray<class ATgRepInfo_Player*>                   arrPlayers;                                               // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGameDC_Team.UpdatePlayerPause
struct UTgGameDC_Team_UpdatePlayerPause_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_Team.UpdatePlayerSurrender
struct UTgGameDC_Team_UpdatePlayerSurrender_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_Team.UpdatePlayerItemStoreItems
struct UTgGameDC_Team_UpdatePlayerItemStoreItems_Params
{
	class ATgRepInfo_Player*                           PRI;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_Team.UpdatePlayerStat
struct UTgGameDC_Team_UpdatePlayerStat_Params
{
	class ATgPawn*                                     changedPawn;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_Team.UpdateTaskForce
struct UTgGameDC_Team_UpdateTaskForce_Params
{
	class ATgRepInfo_TaskForce*                        tfri;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_Team.UpdateMembers
struct UTgGameDC_Team_UpdateMembers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGameDC_Team.NotifyMapChange
struct UTgGameDC_Team_NotifyMapChange_Params
{
};

// Function TgClientBase.TgGameDC_Team.InitializeData
struct UTgGameDC_Team_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdateSimulmediaOpportunities
struct UTgGFxHomeMenuScreen_UpdateSimulmediaOpportunities_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.RemoveSimulmediaDelegate
struct UTgGFxHomeMenuScreen_RemoveSimulmediaDelegate_Params
{
};

// Function TgClientBase.TgGFxHomeMenuScreen.SetOnPostAdvanceDelegate
struct UTgGFxHomeMenuScreen_SetOnPostAdvanceDelegate_Params
{
};

// Function TgClientBase.TgGFxHomeMenuScreen.OnSimulmediaPopupClosed
struct UTgGFxHomeMenuScreen_OnSimulmediaPopupClosed_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.OnSimulmediaPopupOpened
struct UTgGFxHomeMenuScreen_OnSimulmediaPopupOpened_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.OnEsportsMatchupDataReceived
struct UTgGFxHomeMenuScreen_OnEsportsMatchupDataReceived_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.OnQueueStateChange
struct UTgGFxHomeMenuScreen_OnQueueStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.USC_ForwardFeature
struct UTgGFxHomeMenuScreen_USC_ForwardFeature_Params
{
	int                                                pItemType;                                                // (Parm)
	struct FString                                     pItemData;                                                // (Parm, NeedCtorLink)
	struct FString                                     pItemData2;                                               // (Parm, NeedCtorLink)
	int                                                nLocationId;                                              // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.FindNavigationButton
struct UTgGFxHomeMenuScreen_FindNavigationButton_Params
{
	int                                                hmiActionId;                                              // (Parm)
	int                                                hmiActionDataId;                                          // (OptionalParm, Parm)
	class UTgGFxObject*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.OnOpportunityUpdated
struct UTgGFxHomeMenuScreen_OnOpportunityUpdated_Params
{
};

// Function TgClientBase.TgGFxHomeMenuScreen.SendLobbyCamEvent
struct UTgGFxHomeMenuScreen_SendLobbyCamEvent_Params
{
	int                                                EventType;                                                // (Parm)
	int                                                camType;                                                  // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdateQuests
struct UTgGFxHomeMenuScreen_UpdateQuests_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.onFinishModelLoad
struct UTgGFxHomeMenuScreen_onFinishModelLoad_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdatePreviewModel
struct UTgGFxHomeMenuScreen_UpdatePreviewModel_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdateImage
struct UTgGFxHomeMenuScreen_UpdateImage_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdateFeatures
struct UTgGFxHomeMenuScreen_UpdateFeatures_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdateCallouts
struct UTgGFxHomeMenuScreen_UpdateCallouts_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.ReceiveGFxData
struct UTgGFxHomeMenuScreen_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.Uninitialize
struct UTgGFxHomeMenuScreen_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxHomeMenuScreen.Initialize
struct UTgGFxHomeMenuScreen_Initialize_Params
{
	class UTgMoviePlayer*                              pMoviePlayer;                                             // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.ApplyGemPrices
struct UTgGFxHomeMenuScreen_ApplyGemPrices_Params
{
	class UGFxObject*                                  pArray;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.OnNavigateButton
struct UTgGFxHomeMenuScreen_OnNavigateButton_Params
{
	bool                                               isMenu;                                                   // (Parm)
	int                                                Index;                                                    // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.UpdateMenuButtons
struct UTgGFxHomeMenuScreen_UpdateMenuButtons_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxHomeMenuScreen.PopulateMenuData
struct UTgGFxHomeMenuScreen_PopulateMenuData_Params
{
};

// Function TgClientBase.TgGfxHudChatBase.ShouldShowCombat
struct UTgGfxHudChatBase_ShouldShowCombat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxHudChatBase.CachePrivilegeInfo
struct UTgGfxHudChatBase_CachePrivilegeInfo_Params
{
};

// Function TgClientBase.TgGfxHudChatBase.CanSeeUserMessages
struct UTgGfxHudChatBase_CanSeeUserMessages_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxHudChatBase.OnGameUIEvent
struct UTgGfxHudChatBase_OnGameUIEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxHudChatBase.ReceiveGFxData
struct UTgGfxHudChatBase_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxHudChatBase.Initialize
struct UTgGfxHudChatBase_Initialize_Params
{
	class UTgMoviePlayer*                              pMP;                                                      // (Parm)
};

// Function TgClientBase.TgGfxPlayerSkills.OnDeviceLevelUp
struct UTgGfxPlayerSkills_OnDeviceLevelUp_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxPlayerSkills.OnToggleSkillScreen
struct UTgGfxPlayerSkills_OnToggleSkillScreen_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxPlayerSkills.OnOffhandSlotReleased
struct UTgGfxPlayerSkills_OnOffhandSlotReleased_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxPlayerSkills.OnOffhandSlotPressed
struct UTgGfxPlayerSkills_OnOffhandSlotPressed_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxPlayerSkills.OnInput
struct UTgGfxPlayerSkills_OnInput_Params
{
	struct FPointer                                    pInputEvent;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxPlayerSkills.LevelUpOffhandSlot
struct UTgGfxPlayerSkills_LevelUpOffhandSlot_Params
{
	int                                                eqp;                                                      // (Parm)
	class ATgPlayerController*                         PC;                                                       // (Parm)
};

// Function TgClientBase.TgGfxPlayerSkills.Uninitialize
struct UTgGfxPlayerSkills_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxPlayerSkills.Initialize
struct UTgGfxPlayerSkills_Initialize_Params
{
	class UTgMoviePlayer*                              pMP;                                                      // (Parm)
};

// Function TgClientBase.TgGfxVGS.OnInput
struct UTgGfxVGS_OnInput_Params
{
	struct FPointer                                    tgInput;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGfxVGS.usc_CloseScene
struct UTgGfxVGS_usc_CloseScene_Params
{
};

// Function TgClientBase.TgGfxVGS.usc_UnsetVGS
struct UTgGfxVGS_usc_UnsetVGS_Params
{
	bool                                               bRemoveInput;                                             // (OptionalParm, Parm)
};

// Function TgClientBase.TgGfxVGS.usc_ForceInput
struct UTgGfxVGS_usc_ForceInput_Params
{
	struct FString                                     Input;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGfxVGS.CloseVGS
struct UTgGfxVGS_CloseVGS_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxVGS.Unset
struct UTgGfxVGS_Unset_Params
{
};

// Function TgClientBase.TgGfxVGS.Uninitialize
struct UTgGfxVGS_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxVGS.Initialize
struct UTgGfxVGS_Initialize_Params
{
	class UTgMoviePlayer*                              pMP;                                                      // (Parm)
};

// Function TgClientBase.TgGfxVGS.ReceiveGFxData
struct UTgGfxVGS_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgMiniMap.CheckSpectatorState
struct UTgMiniMap_CheckSpectatorState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMiniMap.UpdateMapSize
struct UTgMiniMap_UpdateMapSize_Params
{
	int                                                newX;                                                     // (Parm)
};

// Function TgClientBase.TgMiniMap.UpdateMiniMapTexture
struct UTgMiniMap_UpdateMiniMapTexture_Params
{
};

// Function TgClientBase.TgMiniMap.CreateMiniMapTexture
struct UTgMiniMap_CreateMiniMapTexture_Params
{
};

// Function TgClientBase.TgMiniMap.RemoveAllEntities
struct UTgMiniMap_RemoveAllEntities_Params
{
};

// Function TgClientBase.TgMiniMap.VerifyMapLocation
struct UTgMiniMap_VerifyMapLocation_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMiniMap.GetRepInfosForLocation
struct UTgMiniMap_GetRepInfosForLocation_Params
{
	struct FVector                                     mapLoc;                                                   // (Parm)
	TArray<class AReplicationInfo*>                    repInfos;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgMiniMap.WorldToMap
struct UTgMiniMap_WorldToMap_Params
{
	struct FVector                                     Loc;                                                      // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMiniMap.MapToWorld
struct UTgMiniMap_MapToWorld_Params
{
	struct FVector                                     Loc;                                                      // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMiniMap.ClearHover
struct UTgMiniMap_ClearHover_Params
{
};

// Function TgClientBase.TgMiniMap.HoverMap
struct UTgMiniMap_HoverMap_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
};

// Function TgClientBase.TgMiniMap.PingMap
struct UTgMiniMap_PingMap_Params
{
	float                                              X;                                                        // (Parm)
	float                                              Y;                                                        // (Parm)
	TEnumAsByte<EPING_TYPE>                            Pt;                                                       // (Parm)
};

// Function TgClientBase.TgMiniMap.ShouldRender
struct UTgMiniMap_ShouldRender_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgMiniMap.RemoveWaypoint
struct UTgMiniMap_RemoveWaypoint_Params
{
	int                                                nWaypointId;                                              // (Const, Parm)
};

// Function TgClientBase.TgMiniMap.PlaceWaypoint
struct UTgMiniMap_PlaceWaypoint_Params
{
	int                                                nWaypointId;                                              // (Parm, OutParm)
	struct FVector                                     vWaypointLoc;                                             // (Const, Parm)
};

// Function TgClientBase.TgMiniMap.SetWaypointPing
struct UTgMiniMap_SetWaypointPing_Params
{
	bool                                               bSetWaypointActive;                                       // (Const, Parm)
	int                                                nWaypointId;                                              // (Parm, OutParm)
	struct FVector                                     vWaypointLoc;                                             // (Const, OptionalParm, Parm)
};

// Function TgClientBase.TgMiniMap.PingWorldLocation
struct UTgMiniMap_PingWorldLocation_Params
{
	struct FVector                                     PingLocation;                                             // (Parm)
	TEnumAsByte<EPING_TYPE>                            Pt;                                                       // (Parm)
};

// Function TgClientBase.TgMiniMap.Init
struct UTgMiniMap_Init_Params
{
	class ATgPlayerController*                         PC;                                                       // (Parm)
};

// Function TgClientBase.TgMiniMap.Draw
struct UTgMiniMap_Draw_Params
{
	class UCanvas*                                     theCanvas;                                                // (Parm)
};

// Function TgClientBase.TgMiniMap.UpdateThreaded
struct UTgMiniMap_UpdateThreaded_Params
{
};

// Function TgClientBase.TgMiniMap.Update
struct UTgMiniMap_Update_Params
{
};

// Function TgClientBase.TgOverlayMoviePlayer.OnClose
struct UTgOverlayMoviePlayer_OnClose_Params
{
};

// Function TgClientBase.TgOverlayMoviePlayer.usc_TweenFinished
struct UTgOverlayMoviePlayer_usc_TweenFinished_Params
{
	class UGFxObject*                                  Obj;                                                      // (Parm)
};

// Function TgClientBase.TgOverlayMoviePlayer.WidgetUnloaded
struct UTgOverlayMoviePlayer_WidgetUnloaded_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgOverlayMoviePlayer.WidgetInitialized
struct UTgOverlayMoviePlayer_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgOverlayMoviePlayer.usc_TranslateMsg
struct UTgOverlayMoviePlayer_usc_TranslateMsg_Params
{
	struct FString                                     Identifier;                                               // (Parm, NeedCtorLink)
	struct FString                                     SectionName;                                              // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgConfigDC_Cached.PrecacheData
struct UTgConfigDC_Cached_PrecacheData_Params
{
};

// Function TgClientBase.TgConfigDC_Cached.CreateDataObject
struct UTgConfigDC_Cached_CreateDataObject_Params
{
	int                                                nId;                                                      // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgConfigDC_Cached.usc_load_data
struct UTgConfigDC_Cached_usc_load_data_Params
{
	int                                                nId;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgConfigDC_Cached.InitializeData
struct UTgConfigDC_Cached_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgConfigDC_Classes.CreateDataObject
struct UTgConfigDC_Classes_CreateDataObject_Params
{
	int                                                nId;                                                      // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgConfigDC_GameTip.CreateDataObject
struct UTgConfigDC_GameTip_CreateDataObject_Params
{
	int                                                nId;                                                      // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgConfigDC_Items.CreateDataObject
struct UTgConfigDC_Items_CreateDataObject_Params
{
	int                                                nId;                                                      // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgConfigDC_LangMessages.usc_load_data
struct UTgConfigDC_LangMessages_usc_load_data_Params
{
	int                                                nId;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataGroup_Config.NotifyMapChange
struct UTgDataGroup_Config_NotifyMapChange_Params
{
};

// Function TgClientBase.TgDataGroup_Config.InitializeData
struct UTgDataGroup_Config_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGFxEvent.GetTarget
struct UTgGFxEvent_GetTarget_Params
{
	class UClass*                                      pClass;                                                   // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMouseEvent.GetButtonState
struct UTgGFxMouseEvent_GetButtonState_Params
{
	TEnumAsByte<EGFxMouseState>                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMouseEvent.GetButton
struct UTgGFxMouseEvent_GetButton_Params
{
	TEnumAsByte<EGFxMouseButton>                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMouseEvent.GetWheelAmount
struct UTgGFxMouseEvent_GetWheelAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMouseEvent.GetY
struct UTgGFxMouseEvent_GetY_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMouseEvent.GetX
struct UTgGFxMouseEvent_GetX_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxValidationEvent.GetDataBool
struct UTgGFxValidationEvent_GetDataBool_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxValidationEvent.GetDataString
struct UTgGFxValidationEvent_GetDataString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxValidationEvent.GetDataFloat
struct UTgGFxValidationEvent_GetDataFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxValidationEvent.GetDataInt
struct UTgGFxValidationEvent_GetDataInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxValidationEvent.GetDataObject
struct UTgGFxValidationEvent_GetDataObject_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxValidationEvent.HasInvalidAll
struct UTgGFxValidationEvent_HasInvalidAll_Params
{
	struct Fdword                                      Flags;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxValidationEvent.HasInvalidAny
struct UTgGFxValidationEvent_HasInvalidAny_Params
{
	struct Fdword                                      Flags;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxValidationEvent.GetValidationType
struct UTgGFxValidationEvent_GetValidationType_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMouse.GetGFxConst
struct UTgGFxMouse_GetGFxConst_Params
{
	struct FPointer                                    pField;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMouse.GetMouseIndex
struct UTgGFxMouse_GetMouseIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMouse.SetCursorType
struct UTgGFxMouse_SetCursorType_Params
{
	int                                                nCursorType;                                              // (Parm)
	int                                                nMouseIndex;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxMouse.GetMousePosition
struct UTgGFxMouse_GetMousePosition_Params
{
	int                                                nMouseIndex;                                              // (OptionalParm, Parm)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMouse.GetTopMostEntity
struct UTgGFxMouse_GetTopMostEntity_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMouse.GetButtonState
struct UTgGFxMouse_GetButtonState_Params
{
	int                                                nMouseIndex;                                              // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMouse.HideMouse
struct UTgGFxMouse_HideMouse_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMouse.ShowMouse
struct UTgGFxMouse_ShowMouse_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMouse.RemoveListener
struct UTgGFxMouse_RemoveListener_Params
{
	class UGFxObject*                                  pListener;                                                // (Parm)
};

// Function TgClientBase.TgGFxMouse.AddListener
struct UTgGFxMouse_AddListener_Params
{
	class UGFxObject*                                  pListener;                                                // (Parm)
};

// Function TgClientBase.TgGFxSelection.GetControllerMaskByFocusGroup
struct UTgGFxSelection_GetControllerMaskByFocusGroup_Params
{
	int                                                nFocusGroupIdx;                                           // (Parm)
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.GetFocusBitmask
struct UTgGFxSelection_GetFocusBitmask_Params
{
	class UGFxObject*                                  pMovieClip;                                               // (Parm)
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.GetFocusArray
struct UTgGFxSelection_GetFocusArray_Params
{
	class UGFxObject*                                  pMovieClip;                                               // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.GetControllerFocusGroup
struct UTgGFxSelection_GetControllerFocusGroup_Params
{
	int                                                nControllerIndex;                                         // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.SetControllerFocusGroup
struct UTgGFxSelection_SetControllerFocusGroup_Params
{
	int                                                nControllerIndex;                                         // (Parm)
	int                                                nFocusGroupIdx;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.SetSelection
struct UTgGFxSelection_SetSelection_Params
{
	int                                                nBegin;                                                   // (Parm)
	int                                                nEnd;                                                     // (Parm)
};

// Function TgClientBase.TgGFxSelection.GetEndIndex
struct UTgGFxSelection_GetEndIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.GetCaretIndex
struct UTgGFxSelection_GetCaretIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.GetBeginIndex
struct UTgGFxSelection_GetBeginIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.RemoveListener
struct UTgGFxSelection_RemoveListener_Params
{
	class UGFxObject*                                  pListener;                                                // (Parm)
};

// Function TgClientBase.TgGFxSelection.AddListener
struct UTgGFxSelection_AddListener_Params
{
	class UGFxObject*                                  pListener;                                                // (Parm)
};

// Function TgClientBase.TgGFxSelection.GetModalClip
struct UTgGFxSelection_GetModalClip_Params
{
	int                                                nControllerIdx;                                           // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.SetModalClip
struct UTgGFxSelection_SetModalClip_Params
{
	class UGFxObject*                                  pModal;                                                   // (Parm)
	int                                                nControllerIdx;                                           // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.FindFocus
struct UTgGFxSelection_FindFocus_Params
{
	struct FString                                     sKeyToSimulate;                                           // (Parm, NeedCtorLink)
	class UGFxObject*                                  pParentMovie;                                             // (OptionalParm, Parm)
	bool                                               bLoop;                                                    // (OptionalParm, Parm)
	class UGFxObject*                                  pStartFromMovie;                                          // (OptionalParm, Parm)
	bool                                               bIncludeFocusEnabledChars;                                // (OptionalParm, Parm)
	int                                                nControllerIndex;                                         // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.MoveFocus
struct UTgGFxSelection_MoveFocus_Params
{
	struct FString                                     sKeyToSimulate;                                           // (Parm, NeedCtorLink)
	class UGFxObject*                                  pStartFromMovie;                                          // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.GetFocusObject
struct UTgGFxSelection_GetFocusObject_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.GetFocusPath
struct UTgGFxSelection_GetFocusPath_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxSelection.SetFocus
struct UTgGFxSelection_SetFocus_Params
{
	class UGFxObject*                                  pFocus;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSelection.Uninitialize
struct UTgGFxSelection_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxSelection.Initialize
struct UTgGFxSelection_Initialize_Params
{
};

// Function TgClientBase.TgGFxWidget.RemoveGFxEventListener
struct UTgGFxWidget_RemoveGFxEventListener_Params
{
	unsigned char                                      Evt;                                                      // (Parm)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxWidget.AddGFxEventListener
struct UTgGFxWidget_AddGFxEventListener_Params
{
	unsigned char                                      Evt;                                                      // (Parm)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxWidget.GetChildDirect
struct UTgGFxWidget_GetChildDirect_Params
{
	struct FPointer                                    sName;                                                    // (Parm)
	bool                                               bRequired;                                                // (OptionalParm, Parm)
	class UClass*                                      pClass;                                                   // (OptionalParm, Parm)
	class UTgGFxObject*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxWidget.GetChild
struct UTgGFxWidget_GetChild_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	bool                                               bRequired;                                                // (OptionalParm, Parm)
	class UClass*                                      pClass;                                                   // (OptionalParm, Parm)
	class UTgGFxObject*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxWidget.SetDisabled
struct UTgGFxWidget_SetDisabled_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxWidget.IsDisabled
struct UTgGFxWidget_IsDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxWidget.IsASInitialized
struct UTgGFxWidget_IsASInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxWidget.IsUCInitialized
struct UTgGFxWidget_IsUCInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxWidget.Uninitialize
struct UTgGFxWidget_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxWidget.Initialize
struct UTgGFxWidget_Initialize_Params
{
};

// Function TgClientBase.TgGFxWidget.OnGFxEvent
struct UTgGFxWidget_OnGFxEvent_Params
{
	class UTgGFxEvent*                                 pEvent;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxFriendSearchProvider.Num
struct UTgGFxFriendSearchProvider_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxFriendSearchProvider.IsInvalid
struct UTgGFxFriendSearchProvider_IsInvalid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxFriendSearchProvider.Empty
struct UTgGFxFriendSearchProvider_Empty_Params
{
};

// Function TgClientBase.TgGFxFriendSearchProvider.OnServerTimeout
struct UTgGFxFriendSearchProvider_OnServerTimeout_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgGFxFriendSearchProvider.LocalSearchIncrement
struct UTgGFxFriendSearchProvider_LocalSearchIncrement_Params
{
};

// Function TgClientBase.TgGFxFriendSearchProvider.OnSearchFriendRequest
struct UTgGFxFriendSearchProvider_OnSearchFriendRequest_Params
{
	class UTgGFxPlayerProvider*                        pProvider;                                                // (Parm)
};

// Function TgClientBase.TgGFxFriendSearchProvider.OnReceivePlayerQuery
struct UTgGFxFriendSearchProvider_OnReceivePlayerQuery_Params
{
	struct FPointer                                    pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxFriendSearchProvider.GetDispatcher
struct UTgGFxFriendSearchProvider_GetDispatcher_Params
{
	class UTgEventDispatcher*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxFriendSearchProvider.Uninitialize
struct UTgGFxFriendSearchProvider_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxFriendSearchProvider.Initialize
struct UTgGFxFriendSearchProvider_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxPlayerGenerator.OnReceiveNames
struct UTgGFxPlayerGenerator_OnReceiveNames_Params
{
	bool                                               bSucces;                                                  // (Parm)
	class UTgPlayerNameManager*                        pManager;                                                 // (Parm)
};

// Function TgClientBase.TgGFxPlayerGenerator.GetClanData
struct UTgGFxPlayerGenerator_GetClanData_Params
{
	class UTgGFxClanData*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerGenerator.GetPartyData
struct UTgGFxPlayerGenerator_GetPartyData_Params
{
	class UTgGFxPartyData*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerGenerator.GetFriendData
struct UTgGFxPlayerGenerator_GetFriendData_Params
{
	class UTgGFxFriendData*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerGenerator.Empty
struct UTgGFxPlayerGenerator_Empty_Params
{
};

// Function TgClientBase.TgGFxPlayerGenerator.OnMctsEvent
struct UTgGFxPlayerGenerator_OnMctsEvent_Params
{
	struct FPointer                                    pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerGenerator.FindOrCreatePlayer
struct UTgGFxPlayerGenerator_FindOrCreatePlayer_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               bWaitForNames;                                            // (OptionalParm, Parm)
	class UTgGFxPlayerData*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerGenerator.CreatePlayer
struct UTgGFxPlayerGenerator_CreatePlayer_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               bWaitForNames;                                            // (OptionalParm, Parm)
	class UTgGFxPlayerData*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerGenerator.FindPlayer
struct UTgGFxPlayerGenerator_FindPlayer_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	int                                                nFlags;                                                   // (OptionalParm, Parm)
	class UTgGFxPlayerData*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerGenerator.Uninitialize
struct UTgGFxPlayerGenerator_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxPlayerGenerator.Initialize
struct UTgGFxPlayerGenerator_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgDataProvider.Invalidate
struct UTgDataProvider_Invalidate_Params
{
};

// Function TgClientBase.TgDataProvider.RequestItemAt
struct UTgDataProvider_RequestItemAt_Params
{
	int                                                nIndex;                                                   // (Parm)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataProvider.RequestItemRange
struct UTgDataProvider_RequestItemRange_Params
{
	int                                                nStartIndex;                                              // (Parm)
	int                                                nCount;                                                   // (Parm)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataProvider.GetDispatcher
struct UTgDataProvider_GetDispatcher_Params
{
	class UTgEventDispatcher*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgDataProvider.Uninitialize
struct UTgDataProvider_Uninitialize_Params
{
};

// Function TgClientBase.TgDataProvider.Initialize
struct UTgDataProvider_Initialize_Params
{
};

// Function TgClientBase.TgDataProvider.OnPopulateItem
struct UTgDataProvider_OnPopulateItem_Params
{
	class UObject*                                     Obj;                                                      // (Parm)
	int                                                nIndex;                                                   // (Parm)
};

// Function TgClientBase.TgDataProvider.OnPopulateRange
struct UTgDataProvider_OnPopulateRange_Params
{
	struct FPointer                                    arrData;                                                  // (Parm)
};

// Function TgClientBase.TgBasicDataProvider.Invalidate
struct UTgBasicDataProvider_Invalidate_Params
{
};

// Function TgClientBase.TgBasicDataProvider.RequestItemAt
struct UTgBasicDataProvider_RequestItemAt_Params
{
	int                                                nIndex;                                                   // (Parm)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgBasicDataProvider.RequestItemRange
struct UTgBasicDataProvider_RequestItemRange_Params
{
	int                                                nStartIndex;                                              // (Parm)
	int                                                nCount;                                                   // (Parm)
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgBasicDataProvider.Populate
struct UTgBasicDataProvider_Populate_Params
{
	TArray<class UObject*>                             arrData;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxItemHelperBinding.NotifyItemUpdate
struct UTgGFxItemHelperBinding_NotifyItemUpdate_Params
{
	TArray<struct Fdword>                              arrLTI;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxItemHelperBinding.NotifyCouponChange
struct UTgGFxItemHelperBinding_NotifyCouponChange_Params
{
};

// Function TgClientBase.TgGFxItemHelperBinding.GetItemDataByLootId
struct UTgGFxItemHelperBinding_GetItemDataByLootId_Params
{
	int                                                nLootId;                                                  // (Parm)
	int                                                nVendorId;                                                // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxItemHelperBinding.GetItemDataByItemId
struct UTgGFxItemHelperBinding_GetItemDataByItemId_Params
{
	int                                                nItemId;                                                  // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxItemHelperBinding.GetCouponDataByLootId
struct UTgGFxItemHelperBinding_GetCouponDataByLootId_Params
{
	int                                                nLootId;                                                  // (Parm)
	int                                                nVendorId;                                                // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxItemHelperBinding.GetCouponDataByItemId
struct UTgGFxItemHelperBinding_GetCouponDataByItemId_Params
{
	int                                                nItemId;                                                  // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxItemHelperBinding.Uninitialize
struct UTgGFxItemHelperBinding_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxItemHelperBinding.Initialize
struct UTgGFxItemHelperBinding_Initialize_Params
{
};

// Function TgClientBase.TgGFxDataGroup.Invalidate
struct UTgGFxDataGroup_Invalidate_Params
{
};

// Function TgClientBase.TgGFxDataGroup.GetData
struct UTgGFxDataGroup_GetData_Params
{
	class UTgGFxDataProvider*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxDataGroup.GetIsPending
struct UTgGFxDataGroup_GetIsPending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxDataGroup.GetOpenByDefault
struct UTgGFxDataGroup_GetOpenByDefault_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxDataGroup.GetGroupId
struct UTgGFxDataGroup_GetGroupId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxDataGroup.GetLabel2
struct UTgGFxDataGroup_GetLabel2_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxDataGroup.GetLabel
struct UTgGFxDataGroup_GetLabel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxDataGroup.SetIsPending
struct UTgGFxDataGroup_SetIsPending_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxDataGroup.SetOpenByDefault
struct UTgGFxDataGroup_SetOpenByDefault_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxDataGroup.SetGroupId
struct UTgGFxDataGroup_SetGroupId_Params
{
	int                                                nValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxDataGroup.SetLabel2
struct UTgGFxDataGroup_SetLabel2_Params
{
	struct FString                                     sValue;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxDataGroup.SetLabel
struct UTgGFxDataGroup_SetLabel_Params
{
	struct FString                                     sValue;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxDataGroup.Uninitialize
struct UTgGFxDataGroup_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxDataGroup.Initialize
struct UTgGFxDataGroup_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxDataProviderBase.Invalidate
struct UTgGFxDataProviderBase_Invalidate_Params
{
};

// Function TgClientBase.TgGFxDataProviderBase.ValidateNow
struct UTgGFxDataProviderBase_ValidateNow_Params
{
};

// Function TgClientBase.TgGFxDataProviderBase.AddItemUnique
struct UTgGFxDataProviderBase_AddItemUnique_Params
{
	class UGFxObject*                                  pObject;                                                  // (Parm)
};

// Function TgClientBase.TgGFxDataProviderBase.AddItem
struct UTgGFxDataProviderBase_AddItem_Params
{
	class UGFxObject*                                  pObject;                                                  // (Parm)
};

// Function TgClientBase.TgGFxDataProviderBase.Empty
struct UTgGFxDataProviderBase_Empty_Params
{
	int                                                nReserve;                                                 // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxDataProviderBase.Populate
struct UTgGFxDataProviderBase_Populate_Params
{
	struct FPointer                                    pData;                                                    // (Parm)
	int                                                nCount;                                                   // (Parm)
};

// Function TgClientBase.TgGFxDataProviderBase.SetAt
struct UTgGFxDataProviderBase_SetAt_Params
{
	int                                                nPos;                                                     // (Parm)
	class UGFxObject*                                  pObject;                                                  // (Parm)
};

// Function TgClientBase.TgGFxDataProviderBase.GetAt
struct UTgGFxDataProviderBase_GetAt_Params
{
	int                                                nPos;                                                     // (Parm)
	class UClass*                                      pClass;                                                   // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxDataProviderBase.SetNum
struct UTgGFxDataProviderBase_SetNum_Params
{
	int                                                nValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxDataProviderBase.Num
struct UTgGFxDataProviderBase_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxDataProviderBase.IsInvalid
struct UTgGFxDataProviderBase_IsInvalid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxDataProviderBase.USC_CancelPendingRequests
struct UTgGFxDataProviderBase_USC_CancelPendingRequests_Params
{
	class UGFxObject*                                  pRequester;                                               // (Parm)
};

// Function TgClientBase.TgGFxDataProviderBase.USC_IndexOf
struct UTgGFxDataProviderBase_USC_IndexOf_Params
{
	class UGFxObject*                                  pItem;                                                    // (Parm)
	class UGFxObject*                                  pScope;                                                   // (Parm)
	struct FString                                     sCallback;                                                // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxDataProviderBase.USC_RequestItemRange
struct UTgGFxDataProviderBase_USC_RequestItemRange_Params
{
	int                                                nStartIndex;                                              // (Parm)
	int                                                nEndIndex;                                                // (Parm)
	class UGFxObject*                                  pScope;                                                   // (Parm)
	struct FString                                     sCallback;                                                // (Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxDataProviderBase.USC_RequestItemAt
struct UTgGFxDataProviderBase_USC_RequestItemAt_Params
{
	int                                                nIndex;                                                   // (Parm)
	class UGFxObject*                                  pScope;                                                   // (Parm)
	struct FString                                     sCallback;                                                // (Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxDataProviderBase.GetDispatcher
struct UTgGFxDataProviderBase_GetDispatcher_Params
{
	class UTgEventDispatcher*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxDataProviderBase.Initialize
struct UTgGFxDataProviderBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxDataProvider.Empty
struct UTgGFxDataProvider_Empty_Params
{
	int                                                nReserve;                                                 // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxDataProvider.Populate
struct UTgGFxDataProvider_Populate_Params
{
	struct FPointer                                    pData;                                                    // (Parm)
	int                                                nCount;                                                   // (Parm)
};

// Function TgClientBase.TgGFxDataProvider.SetAt
struct UTgGFxDataProvider_SetAt_Params
{
	int                                                nPos;                                                     // (Parm)
	class UGFxObject*                                  pObject;                                                  // (Parm)
};

// Function TgClientBase.TgGFxDataProvider.GetAt
struct UTgGFxDataProvider_GetAt_Params
{
	int                                                nPos;                                                     // (Parm)
	class UClass*                                      pClass;                                                   // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxDataProvider.SetNum
struct UTgGFxDataProvider_SetNum_Params
{
	int                                                nLen;                                                     // (Parm)
};

// Function TgClientBase.TgGFxDataProvider.Num
struct UTgGFxDataProvider_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.CallUCCallback
struct UTgGFxPlayerProvider_CallUCCallback_Params
{
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerProvider.USC_CancelPendingRequests
struct UTgGFxPlayerProvider_USC_CancelPendingRequests_Params
{
	class UGFxObject*                                  pRequester;                                               // (Parm)
};

// Function TgClientBase.TgGFxPlayerProvider.USC_IndexOf
struct UTgGFxPlayerProvider_USC_IndexOf_Params
{
	class UGFxObject*                                  pItem;                                                    // (Parm)
	class UGFxObject*                                  pScope;                                                   // (Parm)
	struct FString                                     sCallback;                                                // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.USC_RequestItemRange
struct UTgGFxPlayerProvider_USC_RequestItemRange_Params
{
	int                                                nStartIndex;                                              // (Parm)
	int                                                nEndIndex;                                                // (Parm)
	class UGFxObject*                                  pScope;                                                   // (Parm)
	struct FString                                     sCallback;                                                // (Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.USC_RequestItemAt
struct UTgGFxPlayerProvider_USC_RequestItemAt_Params
{
	int                                                nIndex;                                                   // (Parm)
	class UGFxObject*                                  pScope;                                                   // (Parm)
	struct FString                                     sCallback;                                                // (Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.DoUpdate
struct UTgGFxPlayerProvider_DoUpdate_Params
{
};

// Function TgClientBase.TgGFxPlayerProvider.NeedsUpdate
struct UTgGFxPlayerProvider_NeedsUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.SetAt
struct UTgGFxPlayerProvider_SetAt_Params
{
	int                                                nPos;                                                     // (Parm)
	class UGFxObject*                                  pObject;                                                  // (Parm)
};

// Function TgClientBase.TgGFxPlayerProvider.GetAt
struct UTgGFxPlayerProvider_GetAt_Params
{
	int                                                nPos;                                                     // (Parm)
	class UClass*                                      pClass;                                                   // (OptionalParm, Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.GetRefFlag
struct UTgGFxPlayerProvider_GetRefFlag_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.SetNum
struct UTgGFxPlayerProvider_SetNum_Params
{
	int                                                nCount;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerProvider.Num
struct UTgGFxPlayerProvider_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.IsInvalid
struct UTgGFxPlayerProvider_IsInvalid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.TryRequestPlayers
struct UTgGFxPlayerProvider_TryRequestPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.IsEmpty
struct UTgGFxPlayerProvider_IsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.Empty
struct UTgGFxPlayerProvider_Empty_Params
{
	int                                                nReserve;                                                 // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxPlayerProvider.SetDirty
struct UTgGFxPlayerProvider_SetDirty_Params
{
};

// Function TgClientBase.TgGFxPlayerProvider.IsDirty
struct UTgGFxPlayerProvider_IsDirty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.SetOwner
struct UTgGFxPlayerProvider_SetOwner_Params
{
	class UTgGFxPlayerGenerator*                       pOwner;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerProvider.GetPlayerAt
struct UTgGFxPlayerProvider_GetPlayerAt_Params
{
	int                                                nIndex;                                                   // (Parm)
	class UTgGFxPlayerData*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.GetList
struct UTgGFxPlayerProvider_GetList_Params
{
	TArray<class UTgGFxPlayerData*>                    out_arrList;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerProvider.CancelRequests
struct UTgGFxPlayerProvider_CancelRequests_Params
{
	class UObject*                                     pScope;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerProvider.RequestPlayers
struct UTgGFxPlayerProvider_RequestPlayers_Params
{
	struct FScriptDelegate                             delCallback;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerProvider.Uninitialize
struct UTgGFxPlayerProvider_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxPlayerProvider.Initialize
struct UTgGFxPlayerProvider_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxPlayerProvider.PlayerUpdateDelegate
struct UTgGFxPlayerProvider_PlayerUpdateDelegate_Params
{
	class UTgGFxPlayerProvider*                        Data;                                                     // (Parm)
};

// Function TgClientBase.TgGFxClanData.GetClanTag
struct UTgGFxClanData_GetClanTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxClanData.GetClanName
struct UTgGFxClanData_GetClanName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxClanData.SetClanTag
struct UTgGFxClanData_SetClanTag_Params
{
	struct FString                                     sValue;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxClanData.SetClanName
struct UTgGFxClanData_SetClanName_Params
{
	struct FString                                     sValue;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxClanData.OnClanUpdate
struct UTgGFxClanData_OnClanUpdate_Params
{
};

// Function TgClientBase.TgGFxClanData.TryRequestPlayers
struct UTgGFxClanData_TryRequestPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxClanData.IsInvalid
struct UTgGFxClanData_IsInvalid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxClanData.OnMctsEvent
struct UTgGFxClanData_OnMctsEvent_Params
{
	struct FPointer                                    pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxClanData.Uninitialize
struct UTgGFxClanData_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxClanData.Initialize
struct UTgGFxClanData_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxFriendData.USC_NotifyListenersChange
struct UTgGFxFriendData_USC_NotifyListenersChange_Params
{
	bool                                               bHasListener;                                             // (Parm)
};

// Function TgClientBase.TgGFxFriendData.IsInvalid
struct UTgGFxFriendData_IsInvalid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxFriendData.GiveUpOnResponse
struct UTgGFxFriendData_GiveUpOnResponse_Params
{
	float                                              nDelta;                                                   // (Parm)
};

// Function TgClientBase.TgGFxFriendData.OnUpdate
struct UTgGFxFriendData_OnUpdate_Params
{
	float                                              nDelta;                                                   // (Parm)
};

// Function TgClientBase.TgGFxFriendData.TryRequestPlayers
struct UTgGFxFriendData_TryRequestPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxFriendData.Empty
struct UTgGFxFriendData_Empty_Params
{
	int                                                nReserve;                                                 // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxFriendData.OnReceivePlatformFriends
struct UTgGFxFriendData_OnReceivePlatformFriends_Params
{
	struct FPointer                                    pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxFriendData.OnReceivePlatformHRUpdate
struct UTgGFxFriendData_OnReceivePlatformHRUpdate_Params
{
	struct FPointer                                    pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxFriendData.OnMctsEvent
struct UTgGFxFriendData_OnMctsEvent_Params
{
	struct FPointer                                    pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxFriendData.Uninitialize
struct UTgGFxFriendData_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxFriendData.Initialize
struct UTgGFxFriendData_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxPartyData.IsInParty
struct UTgGFxPartyData_IsInParty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPartyData.GetLeader
struct UTgGFxPartyData_GetLeader_Params
{
	class UTgGFxPlayerData*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPartyData.SetLeader
struct UTgGFxPartyData_SetLeader_Params
{
	class UTgGFxPlayerData*                            pLeader;                                                  // (Parm)
};

// Function TgClientBase.TgGFxPartyData.TryRequestPlayers
struct UTgGFxPartyData_TryRequestPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPartyData.OnMctsEvent
struct UTgGFxPartyData_OnMctsEvent_Params
{
	struct FPointer                                    pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPartyData.Uninitialize
struct UTgGFxPartyData_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxPartyData.Initialize
struct UTgGFxPartyData_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxRoleQueuePopup.ReceiveGFxData
struct UTgGFxRoleQueuePopup_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGFxRoleQueuePopup.Uninitialize
struct UTgGFxRoleQueuePopup_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxRoleQueuePopup.Initialize
struct UTgGFxRoleQueuePopup_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxPlayerClanData.Invalidate
struct UTgGFxPlayerClanData_Invalidate_Params
{
};

// Function TgClientBase.TgGFxPlayerClanData.GetClanHonor
struct UTgGFxPlayerClanData_GetClanHonor_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerClanData.GetClanId
struct UTgGFxPlayerClanData_GetClanId_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerClanData.GetIsPending
struct UTgGFxPlayerClanData_GetIsPending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerClanData.GetIsLeader
struct UTgGFxPlayerClanData_GetIsLeader_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerClanData.GetIsInClan
struct UTgGFxPlayerClanData_GetIsInClan_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerClanData.GetClanRankId
struct UTgGFxPlayerClanData_GetClanRankId_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerClanData.GetClanRankName
struct UTgGFxPlayerClanData_GetClanRankName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerClanData.GetClanTag
struct UTgGFxPlayerClanData_GetClanTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerClanData.GetClanName
struct UTgGFxPlayerClanData_GetClanName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerClanData.SetClanHonor
struct UTgGFxPlayerClanData_SetClanHonor_Params
{
	struct Fdword                                      nValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerClanData.SetClanId
struct UTgGFxPlayerClanData_SetClanId_Params
{
	struct Fdword                                      nValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerClanData.SetIsPending
struct UTgGFxPlayerClanData_SetIsPending_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerClanData.SetIsLeader
struct UTgGFxPlayerClanData_SetIsLeader_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerClanData.SetIsInClan
struct UTgGFxPlayerClanData_SetIsInClan_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerClanData.SetClanRankId
struct UTgGFxPlayerClanData_SetClanRankId_Params
{
	struct Fdword                                      nRank;                                                    // (Parm)
};

// Function TgClientBase.TgGFxPlayerClanData.SetClanRankName
struct UTgGFxPlayerClanData_SetClanRankName_Params
{
	struct FString                                     sRank;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerClanData.SetClanTag
struct UTgGFxPlayerClanData_SetClanTag_Params
{
	struct FString                                     sTag;                                                     // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerClanData.SetClanName
struct UTgGFxPlayerClanData_SetClanName_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerData.USC_GetFriendRequestCount
struct UTgGFxPlayerData_USC_GetFriendRequestCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_SetNote
struct UTgGFxPlayerData_USC_SetNote_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_SetStatus
struct UTgGFxPlayerData_USC_SetStatus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_ToggleDND
struct UTgGFxPlayerData_USC_ToggleDND_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_ReportPlayer
struct UTgGFxPlayerData_USC_ReportPlayer_Params
{
	int                                                nReasonCode;                                              // (Parm)
	struct FString                                     sReasonMsg;                                               // (Parm, NeedCtorLink)
	int                                                nPlayerCount;                                             // (Parm)
	int                                                nSourceTaskForce;                                         // (Parm)
	int                                                nTargetTaskForce;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_ReferFriend
struct UTgGFxPlayerData_USC_ReferFriend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_DeclineFriend
struct UTgGFxPlayerData_USC_DeclineFriend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_AcceptFriend
struct UTgGFxPlayerData_USC_AcceptFriend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_RemoveFriend
struct UTgGFxPlayerData_USC_RemoveFriend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_AddFriend
struct UTgGFxPlayerData_USC_AddFriend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_Whisper
struct UTgGFxPlayerData_USC_Whisper_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_ToggleBlock
struct UTgGFxPlayerData_USC_ToggleBlock_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_Spectate
struct UTgGFxPlayerData_USC_Spectate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_SendGift
struct UTgGFxPlayerData_USC_SendGift_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_ClanInvite
struct UTgGFxPlayerData_USC_ClanInvite_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_PartyMakeLeader
struct UTgGFxPlayerData_USC_PartyMakeLeader_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_SetCanPartyInvite
struct UTgGFxPlayerData_USC_SetCanPartyInvite_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_PartyKick
struct UTgGFxPlayerData_USC_PartyKick_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_PartyInvite
struct UTgGFxPlayerData_USC_PartyInvite_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_ViewMatchHistory
struct UTgGFxPlayerData_USC_ViewMatchHistory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_ViewSmiteProfile
struct UTgGFxPlayerData_USC_ViewSmiteProfile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.USC_ViewPortalProfile
struct UTgGFxPlayerData_USC_ViewPortalProfile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.Invalidate
struct UTgGFxPlayerData_Invalidate_Params
{
};

// Function TgClientBase.TgGFxPlayerData.OnBlockPopup
struct UTgGFxPlayerData_OnBlockPopup_Params
{
	class UTgPagePopup*                                pPopup;                                                   // (Parm)
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerData.OnRemoveFriendPopup
struct UTgGFxPlayerData_OnRemoveFriendPopup_Params
{
	class UTgPagePopup*                                pPopup;                                                   // (Parm)
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerData.OnNotePopup
struct UTgGFxPlayerData_OnNotePopup_Params
{
	class UTgPagePopup*                                pPopup;                                                   // (Parm)
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerData.OnStatusPopup
struct UTgGFxPlayerData_OnStatusPopup_Params
{
	class UTgPagePopup*                                pPopup;                                                   // (Parm)
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerData.OnWhisperPopup
struct UTgGFxPlayerData_OnWhisperPopup_Params
{
	class UTgPagePopup*                                pPopup;                                                   // (Parm)
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerData.RemoveClanData
struct UTgGFxPlayerData_RemoveClanData_Params
{
};

// Function TgClientBase.TgGFxPlayerData.RemovePartyData
struct UTgGFxPlayerData_RemovePartyData_Params
{
};

// Function TgClientBase.TgGFxPlayerData.RemoveFriendData
struct UTgGFxPlayerData_RemoveFriendData_Params
{
};

// Function TgClientBase.TgGFxPlayerData.GetClanData
struct UTgGFxPlayerData_GetClanData_Params
{
	class UTgGFxPlayerClanData*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.GetPartyData
struct UTgGFxPlayerData_GetPartyData_Params
{
	class UTgGFxPlayerPartyData*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.CreateClanData
struct UTgGFxPlayerData_CreateClanData_Params
{
	class UTgGFxPlayerClanData*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.CreatePartyData
struct UTgGFxPlayerData_CreatePartyData_Params
{
	class UTgGFxPlayerPartyData*                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.PopulateAS_Level
struct UTgGFxPlayerData_PopulateAS_Level_Params
{
};

// Function TgClientBase.TgGFxPlayerData.PopulateAS_PrestigeData
struct UTgGFxPlayerData_PopulateAS_PrestigeData_Params
{
};

// Function TgClientBase.TgGFxPlayerData.GetIsHirezFriend
struct UTgGFxPlayerData_GetIsHirezFriend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.GetIsPortalFriend
struct UTgGFxPlayerData_GetIsPortalFriend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.GetDoNotDisturb
struct UTgGFxPlayerData_GetDoNotDisturb_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.GetFriendRequesting
struct UTgGFxPlayerData_GetFriendRequesting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.GetFriendRequested
struct UTgGFxPlayerData_GetFriendRequested_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.GetPlayerLevel
struct UTgGFxPlayerData_GetPlayerLevel_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.GetIsInOurParty
struct UTgGFxPlayerData_GetIsInOurParty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.GetIsInOurClan
struct UTgGFxPlayerData_GetIsInOurClan_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.GetIsMuted
struct UTgGFxPlayerData_GetIsMuted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.GetIsBlocked
struct UTgGFxPlayerData_GetIsBlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.GetIsOnline
struct UTgGFxPlayerData_GetIsOnline_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.GetAvatarId
struct UTgGFxPlayerData_GetAvatarId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.GetNote
struct UTgGFxPlayerData_GetNote_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerData.GetRichStatus
struct UTgGFxPlayerData_GetRichStatus_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerData.GetStatus
struct UTgGFxPlayerData_GetStatus_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerData.GetPlayerName
struct UTgGFxPlayerData_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerData.CheckStatusIntegrity
struct UTgGFxPlayerData_CheckStatusIntegrity_Params
{
};

// Function TgClientBase.TgGFxPlayerData.UpdateIsMuted
struct UTgGFxPlayerData_UpdateIsMuted_Params
{
};

// Function TgClientBase.TgGFxPlayerData.UpdatePlayerName
struct UTgGFxPlayerData_UpdatePlayerName_Params
{
};

// Function TgClientBase.TgGFxPlayerData.SetId
struct UTgGFxPlayerData_SetId_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.SetPlayerLevelByXp
struct UTgGFxPlayerData_SetPlayerLevelByXp_Params
{
	struct Fdword                                      nValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerData.SetPlayerLevel
struct UTgGFxPlayerData_SetPlayerLevel_Params
{
	struct Fdword                                      nValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerData.SetStatusTimeElapsed
struct UTgGFxPlayerData_SetStatusTimeElapsed_Params
{
	int                                                nTimeSecs;                                                // (Parm)
};

// Function TgClientBase.TgGFxPlayerData.SetDoNotDisturb
struct UTgGFxPlayerData_SetDoNotDisturb_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerData.SetFriendRequesting
struct UTgGFxPlayerData_SetFriendRequesting_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerData.SetFriendRequested
struct UTgGFxPlayerData_SetFriendRequested_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerData.SetIsInOurParty
struct UTgGFxPlayerData_SetIsInOurParty_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerData.SetIsInOurClan
struct UTgGFxPlayerData_SetIsInOurClan_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerData.SetWorshiperCount
struct UTgGFxPlayerData_SetWorshiperCount_Params
{
	struct Fdword                                      nValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerData.SetIsBlocked
struct UTgGFxPlayerData_SetIsBlocked_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerData.SetIsOnline
struct UTgGFxPlayerData_SetIsOnline_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerData.SetAvatarId
struct UTgGFxPlayerData_SetAvatarId_Params
{
	int                                                nAvatarId;                                                // (Parm)
};

// Function TgClientBase.TgGFxPlayerData.SetNote
struct UTgGFxPlayerData_SetNote_Params
{
	struct FString                                     sNote;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerData.SetRichStatus
struct UTgGFxPlayerData_SetRichStatus_Params
{
	struct FString                                     sStatus;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerData.SetStatus
struct UTgGFxPlayerData_SetStatus_Params
{
	struct FString                                     sStatus;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerData.IsValid
struct UTgGFxPlayerData_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerData.Initialize
struct UTgGFxPlayerData_Initialize_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPlayerPartyData.Invalidate
struct UTgGFxPlayerPartyData_Invalidate_Params
{
};

// Function TgClientBase.TgGFxPlayerPartyData.GetPartyCount
struct UTgGFxPlayerPartyData_GetPartyCount_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerPartyData.GetPartyId
struct UTgGFxPlayerPartyData_GetPartyId_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerPartyData.GetIsPending
struct UTgGFxPlayerPartyData_GetIsPending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerPartyData.GetIsLeader
struct UTgGFxPlayerPartyData_GetIsLeader_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerPartyData.GetCanInvite
struct UTgGFxPlayerPartyData_GetCanInvite_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPlayerPartyData.SetPartyCount
struct UTgGFxPlayerPartyData_SetPartyCount_Params
{
	struct Fdword                                      nValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerPartyData.SetPartyId
struct UTgGFxPlayerPartyData_SetPartyId_Params
{
	struct Fdword                                      nValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerPartyData.SetIsPending
struct UTgGFxPlayerPartyData_SetIsPending_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerPartyData.SetIsLeader
struct UTgGFxPlayerPartyData_SetIsLeader_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPlayerPartyData.SetCanInvite
struct UTgGFxPlayerPartyData_SetCanInvite_Params
{
	bool                                               bValue;                                                   // (Parm)
};

// Function TgClientBase.TgLobbyHUDBase.Destroyed
struct ATgLobbyHUDBase_Destroyed_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.PostRender
struct ATgLobbyHUDBase_PostRender_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.CommitPedestalSelectionChange
struct ATgLobbyHUDBase_CommitPedestalSelectionChange_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.BeginPedestalSelectionChange
struct ATgLobbyHUDBase_BeginPedestalSelectionChange_Params
{
	int                                                nPedestalSkinId;                                          // (OptionalParm, Parm)
};

// Function TgClientBase.TgLobbyHUDBase.CommitClassSelectionChange
struct ATgLobbyHUDBase_CommitClassSelectionChange_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.BeginClassSelectionChange
struct ATgLobbyHUDBase_BeginClassSelectionChange_Params
{
	int                                                nClassId;                                                 // (Parm)
	int                                                nSkinId;                                                  // (OptionalParm, Parm)
};

// Function TgClientBase.TgLobbyHUDBase.NotifyLoggedIn
struct ATgLobbyHUDBase_NotifyLoggedIn_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.PostBeginPlay
struct ATgLobbyHUDBase_PostBeginPlay_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.TriggerLazyPrecache
struct ATgLobbyHUDBase_TriggerLazyPrecache_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.PreBeginPlay
struct ATgLobbyHUDBase_PreBeginPlay_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.NotifyKismetToLoadMusicTheme
struct ATgLobbyHUDBase_NotifyKismetToLoadMusicTheme_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.OnGameStateChange
struct ATgLobbyHUDBase_OnGameStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgLobbyHUDBase.OnMatchUpdate
struct ATgLobbyHUDBase_OnMatchUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgLobbyHUDBase.GetLoginDataType
struct ATgLobbyHUDBase_GetLoginDataType_Params
{
	TEnumAsByte<EMenuContentDataType>                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyHUDBase.OnCameraReady
struct ATgLobbyHUDBase_OnCameraReady_Params
{
	class ATgLobbyCamera*                              PCam;                                                     // (Parm)
};

// Function TgClientBase.TgLobbyHUDBase.DisableEmoteZoom
struct ATgLobbyHUDBase_DisableEmoteZoom_Params
{
	bool                                               bImmediate;                                               // (OptionalParm, Parm)
};

// Function TgClientBase.TgLobbyHUDBase.EnableEmoteZoom
struct ATgLobbyHUDBase_EnableEmoteZoom_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.PlayEmote
struct ATgLobbyHUDBase_PlayEmote_Params
{
	int                                                nVgsId;                                                   // (Parm)
};

// Function TgClientBase.TgLobbyHUDBase.UpdateCardDraws
struct ATgLobbyHUDBase_UpdateCardDraws_Params
{
	class UCanvas*                                     CanvasIn;                                                 // (Parm)
};

// Function TgClientBase.TgLobbyHUDBase.UpdateDebugDraws
struct ATgLobbyHUDBase_UpdateDebugDraws_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.NotifyLobbyStateChange
struct ATgLobbyHUDBase_NotifyLobbyStateChange_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.UpdateGammaControls
struct ATgLobbyHUDBase_UpdateGammaControls_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.TestTrayPopup
struct ATgLobbyHUDBase_TestTrayPopup_Params
{
	unsigned char                                      popupType;                                                // (Parm)
};

// Function TgClientBase.TgLobbyHUDBase.TestEOMLobby
struct ATgLobbyHUDBase_TestEOMLobby_Params
{
	bool                                               bVictory;                                                 // (Parm)
	struct FString                                     ClassName;                                                // (Parm, NeedCtorLink)
	struct FString                                     skinName_EOML;                                            // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgLobbyHUDBase.TestTransition
struct ATgLobbyHUDBase_TestTransition_Params
{
	bool                                               bShow;                                                    // (OptionalParm, Parm)
	bool                                               bAddData;                                                 // (OptionalParm, Parm)
	int                                                frameItemID;                                              // (OptionalParm, Parm)
	int                                                godId;                                                    // (OptionalParm, Parm)
};

// Function TgClientBase.TgLobbyHUDBase.SwitchToCamera
struct ATgLobbyHUDBase_SwitchToCamera_Params
{
	struct FName                                       CamTag;                                                   // (Parm)
	TEnumAsByte<ECameraTransType>                      camDirection;                                             // (OptionalParm, Parm)
	class ATgLobbyCamera*                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyHUDBase.UnsuspendLoadingClassModels
struct ATgLobbyHUDBase_UnsuspendLoadingClassModels_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.SuspendLoadingClassModels
struct ATgLobbyHUDBase_SuspendLoadingClassModels_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.ChangePedestalEnemyModel
struct ATgLobbyHUDBase_ChangePedestalEnemyModel_Params
{
	int                                                nIndex;                                                   // (Parm)
	int                                                nPedestalSkinId;                                          // (Parm)
	TEnumAsByte<ELobbyAnimPose>                        pose;                                                     // (Parm)
	bool                                               bAsync;                                                   // (OptionalParm, Parm)
};

// Function TgClientBase.TgLobbyHUDBase.ChangeClassEnemyModel
struct ATgLobbyHUDBase_ChangeClassEnemyModel_Params
{
	int                                                nIndex;                                                   // (Parm)
	int                                                nClassId;                                                 // (Parm)
	int                                                nSkinId;                                                  // (Parm)
	TEnumAsByte<ELobbyAnimPose>                        pose;                                                     // (Parm)
	bool                                               bAsync;                                                   // (OptionalParm, Parm)
	bool                                               bLockedIn;                                                // (OptionalParm, Parm)
};

// Function TgClientBase.TgLobbyHUDBase.ChangePedestalFriendlyModel
struct ATgLobbyHUDBase_ChangePedestalFriendlyModel_Params
{
	int                                                nIndex;                                                   // (Parm)
	int                                                nPedestalSkinId;                                          // (Parm)
	TEnumAsByte<ELobbyAnimPose>                        pose;                                                     // (Parm)
	bool                                               bAsync;                                                   // (OptionalParm, Parm)
};

// Function TgClientBase.TgLobbyHUDBase.ChangeClassFriendlyModel
struct ATgLobbyHUDBase_ChangeClassFriendlyModel_Params
{
	int                                                nIndex;                                                   // (Parm)
	int                                                nClassId;                                                 // (Parm)
	int                                                nSkinId;                                                  // (Parm)
	TEnumAsByte<ELobbyAnimPose>                        pose;                                                     // (Parm)
	bool                                               bAsync;                                                   // (OptionalParm, Parm)
	bool                                               bLockedIn;                                                // (OptionalParm, Parm)
};

// Function TgClientBase.TgLobbyHUDBase.IsCurrentCameraMatchLobby
struct ATgLobbyHUDBase_IsCurrentCameraMatchLobby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyHUDBase.GetMatchLobbyCameraName
struct ATgLobbyHUDBase_GetMatchLobbyCameraName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyHUDBase.ChangePreloadModel
struct ATgLobbyHUDBase_ChangePreloadModel_Params
{
	int                                                nClassId;                                                 // (Parm)
	int                                                nSkinId;                                                  // (Parm)
	struct FName                                       CameraTag;                                                // (Parm)
};

// Function TgClientBase.TgLobbyHUDBase.OnPedestalSelected
struct ATgLobbyHUDBase_OnPedestalSelected_Params
{
	int                                                nPedestalSkinId;                                          // (Parm)
	bool                                               bChangedPedestal;                                         // (OptionalParm, Parm)
};

// Function TgClientBase.TgLobbyHUDBase.OnClassSelected
struct ATgLobbyHUDBase_OnClassSelected_Params
{
	int                                                nClassId;                                                 // (Parm)
	int                                                nSkinId;                                                  // (OptionalParm, Parm)
	bool                                               bChangedClass;                                            // (OptionalParm, Parm)
	bool                                               bChangedSkin;                                             // (OptionalParm, Parm)
};

// Function TgClientBase.TgLobbyHUDBase.RotateModel
struct ATgLobbyHUDBase_RotateModel_Params
{
	float                                              fValue;                                                   // (Parm)
};

// Function TgClientBase.TgLobbyHUDBase.TestLobbyModel
struct ATgLobbyHUDBase_TestLobbyModel_Params
{
	int                                                nSkinId;                                                  // (Parm)
};

// Function TgClientBase.TgLobbyHUDBase.ChangeClassModel
struct ATgLobbyHUDBase_ChangeClassModel_Params
{
	int                                                nClassId;                                                 // (Parm)
	int                                                nSkinId;                                                  // (Parm)
	int                                                nPedestalSkinId;                                          // (Parm)
	TEnumAsByte<ELobbyAnimPose>                        pose;                                                     // (Parm)
	struct FName                                       CameraTag;                                                // (Parm)
	TEnumAsByte<ECameraTransType>                      camDirection;                                             // (OptionalParm, Parm)
	bool                                               bAsync;                                                   // (OptionalParm, Parm)
	bool                                               bShowFlag;                                                // (OptionalParm, Parm)
	bool                                               bShowCard;                                                // (OptionalParm, Parm)
};

// Function TgClientBase.TgLobbyHUDBase.ChangeMenuModel
struct ATgLobbyHUDBase_ChangeMenuModel_Params
{
	TEnumAsByte<EMenuContentDataType>                  Type;                                                     // (Parm)
	TEnumAsByte<ECameraTransType>                      camDirection;                                             // (OptionalParm, Parm)
};

// Function TgClientBase.TgLobbyHUDBase.AsynchNotifies
struct ATgLobbyHUDBase_AsynchNotifies_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.OnDisconnect
struct ATgLobbyHUDBase_OnDisconnect_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.SetUpEOMLobby
struct ATgLobbyHUDBase_SetUpEOMLobby_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.HaveEOMLobbyData
struct ATgLobbyHUDBase_HaveEOMLobbyData_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyHUDBase.CleanupSessionForDisconnect
struct ATgLobbyHUDBase_CleanupSessionForDisconnect_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.UnregisterEngineCallbacks
struct ATgLobbyHUDBase_UnregisterEngineCallbacks_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.RegisterEngineCallbacks
struct ATgLobbyHUDBase_RegisterEngineCallbacks_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.InitMainMoviePlayer
struct ATgLobbyHUDBase_InitMainMoviePlayer_Params
{
};

// Function TgClientBase.TgLobbyHUDBase.InitializeDisconnectedState
struct ATgLobbyHUDBase_InitializeDisconnectedState_Params
{
};

// Function TgClientBase.TgClanDC_Player.NotifyMapChange
struct UTgClanDC_Player_NotifyMapChange_Params
{
};

// Function TgClientBase.TgClanDC_Player.InitializeData
struct UTgClanDC_Player_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgDataGroup_EOMLobby.NotifyMapChange
struct UTgDataGroup_EOMLobby_NotifyMapChange_Params
{
};

// Function TgClientBase.TgDataGroup_EOMLobby.InitializeData
struct UTgDataGroup_EOMLobby_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgDataGroup_League.InitializeData
struct UTgDataGroup_League_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgDataGroup_Lobby.NotifyMapChange
struct UTgDataGroup_Lobby_NotifyMapChange_Params
{
};

// Function TgClientBase.TgDataGroup_Lobby.InitializeData
struct UTgDataGroup_Lobby_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgEOMLobbyDC_ChatLobby.InitializeData
struct UTgEOMLobbyDC_ChatLobby_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgEOMLobbyDC_ChatPlayer.NotifyMapChange
struct UTgEOMLobbyDC_ChatPlayer_NotifyMapChange_Params
{
};

// Function TgClientBase.TgEOMLobbyDC_ChatPlayer.InitializeData
struct UTgEOMLobbyDC_ChatPlayer_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgEOMLobbyDC_Lobby.asc_SetupTaskForceEOML
struct UTgEOMLobbyDC_Lobby_asc_SetupTaskForceEOML_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function TgClientBase.TgEOMLobbyDC_Lobby.SetupTaskForceEOML
struct UTgEOMLobbyDC_Lobby_SetupTaskForceEOML_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function TgClientBase.TgEOMLobbyDC_Lobby.NotifyMapChange
struct UTgEOMLobbyDC_Lobby_NotifyMapChange_Params
{
};

// Function TgClientBase.TgEOMLobbyDC_Lobby.InitializeData
struct UTgEOMLobbyDC_Lobby_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgEOMLobbyDC_Player.IsPlayerMuted
struct UTgEOMLobbyDC_Player_IsPlayerMuted_Params
{
	struct FUniqueNetId                                ConsoleId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgEOMLobbyDC_Player.UpdatePlayerInventory
struct UTgEOMLobbyDC_Player_UpdatePlayerInventory_Params
{
	struct FPointer                                    pMarshal;                                                 // (Parm)
};

// Function TgClientBase.TgEOMLobbyDC_Player.UpdatePlayerBehaviour
struct UTgEOMLobbyDC_Player_UpdatePlayerBehaviour_Params
{
	struct FPointer                                    pMarshal;                                                 // (Parm)
};

// Function TgClientBase.TgEOMLobbyDC_Player.NotifyMapChange
struct UTgEOMLobbyDC_Player_NotifyMapChange_Params
{
};

// Function TgClientBase.TgEOMLobbyDC_Player.InitializeData
struct UTgEOMLobbyDC_Player_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgEOMLobbyDC_Team.OnPlayerMute
struct UTgEOMLobbyDC_Team_OnPlayerMute_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgEOMLobbyDC_Team.NotifyMapChange
struct UTgEOMLobbyDC_Team_NotifyMapChange_Params
{
};

// Function TgClientBase.TgEOMLobbyDC_Team.InitializeData
struct UTgEOMLobbyDC_Team_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgLeagueDC_Leaderboard.USC_GetLeaderboard
struct UTgLeagueDC_Leaderboard_USC_GetLeaderboard_Params
{
	int                                                nLeagueId;                                                // (Parm)
	int                                                nTierId;                                                  // (Parm)
};

// Function TgClientBase.TgLeagueDC_Leaderboard.RequestPlayerName
struct UTgLeagueDC_Leaderboard_RequestPlayerName_Params
{
	struct FTgPlayerId                                 pid;                                                      // (Const, Parm, OutParm, NeedCtorLink)
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgLeagueDC_Leaderboard.UpdateNames
struct UTgLeagueDC_Leaderboard_UpdateNames_Params
{
	bool                                               bSucces;                                                  // (Parm)
	class UTgPlayerNameManager*                        pManager;                                                 // (Parm)
};

// Function TgClientBase.TgLeagueDC_Leaderboard.OnUpdate
struct UTgLeagueDC_Leaderboard_OnUpdate_Params
{
	float                                              nDelta;                                                   // (Parm)
};

// Function TgClientBase.TgLeagueDC_Leaderboard.Uninitialize
struct UTgLeagueDC_Leaderboard_Uninitialize_Params
{
};

// Function TgClientBase.TgLeagueDC_Leaderboard.InitializeData
struct UTgLeagueDC_Leaderboard_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgLeagueDC_PlayerSummary.InitializeData
struct UTgLeagueDC_PlayerSummary_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgLobbyDC_BattlePass.USC_PurchaseBattlePass
struct UTgLobbyDC_BattlePass_USC_PurchaseBattlePass_Params
{
};

// Function TgClientBase.TgLobbyDC_BattlePass.USC_PurchaseNextLevel
struct UTgLobbyDC_BattlePass_USC_PurchaseNextLevel_Params
{
	int                                                nQuantity;                                                // (Parm)
};

// Function TgClientBase.TgLobbyDC_BattlePass.OnHUDStateChange
struct UTgLobbyDC_BattlePass_OnHUDStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgLobbyDC_BattlePass.NotifyMapChange
struct UTgLobbyDC_BattlePass_NotifyMapChange_Params
{
};

// Function TgClientBase.TgLobbyDC_BattlePass.InitializeData
struct UTgLobbyDC_BattlePass_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgLobbyDC_Class.UpdateFreeRotation
struct UTgLobbyDC_Class_UpdateFreeRotation_Params
{
};

// Function TgClientBase.TgLobbyDC_Class.GetSkinByIndex
struct UTgLobbyDC_Class_GetSkinByIndex_Params
{
	struct Fdword                                      nIndex;                                                   // (Parm)
	class UTgLobbyDC_Skin*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Class.GetSkinById
struct UTgLobbyDC_Class_GetSkinById_Params
{
	struct Fdword                                      nSkinId;                                                  // (Parm)
	class UTgLobbyDC_Skin*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Class.SetSessionDefaultSkin
struct UTgLobbyDC_Class_SetSessionDefaultSkin_Params
{
	struct Fdword                                      nSkinId;                                                  // (Parm)
};

// Function TgClientBase.TgLobbyDC_Class.SetSelectedByUs
struct UTgLobbyDC_Class_SetSelectedByUs_Params
{
	bool                                               bSelByUs;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Class.GetSelectedByUs
struct UTgLobbyDC_Class_GetSelectedByUs_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Class.SetBanned
struct UTgLobbyDC_Class_SetBanned_Params
{
	bool                                               bIsBanned;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Class.GetBanned
struct UTgLobbyDC_Class_GetBanned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Class.SetBannable
struct UTgLobbyDC_Class_SetBannable_Params
{
	bool                                               bCanBan;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Class.GetBannable
struct UTgLobbyDC_Class_GetBannable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Class.SetVisible
struct UTgLobbyDC_Class_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm)
};

// Function TgClientBase.TgLobbyDC_Class.InitializeData
struct UTgLobbyDC_Class_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgLobbyDC_Currencies.InitializeData
struct UTgLobbyDC_Currencies_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgLobbyDC_Inventory.USC_CountActiveBoosters
struct UTgLobbyDC_Inventory_USC_CountActiveBoosters_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Inventory.NotifyMapChange
struct UTgLobbyDC_Inventory_NotifyMapChange_Params
{
};

// Function TgClientBase.TgLobbyDC_Inventory.InitializeData
struct UTgLobbyDC_Inventory_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgLobbyDC_Lobby.usc_OpenGifting
struct UTgLobbyDC_Lobby_usc_OpenGifting_Params
{
	struct FString                                     PlayerName;                                               // (Parm, NeedCtorLink)
	struct FString                                     sPlayerId;                                                // (Parm, NeedCtorLink)
	struct FString                                     ConsoleIdString;                                          // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgLobbyDC_Lobby.OnQueueStateChange
struct UTgLobbyDC_Lobby_OnQueueStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgLobbyDC_Lobby.OnPartyUpdate
struct UTgLobbyDC_Lobby_OnPartyUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgLobbyDC_Lobby.InitializeData
struct UTgLobbyDC_Lobby_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgLobbyDC_Login.RefreshData
struct UTgLobbyDC_Login_RefreshData_Params
{
};

// Function TgClientBase.TgLobbyDC_Login.InitializeData
struct UTgLobbyDC_Login_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgLobbyDC_Match.ConsumeEquipSkinId
struct UTgLobbyDC_Match_ConsumeEquipSkinId_Params
{
	struct Fdword                                      nClassId;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Match.GetEquipSkinId
struct UTgLobbyDC_Match_GetEquipSkinId_Params
{
	struct Fdword                                      nClassId;                                                 // (Parm)
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Match.GetOtherTeam
struct UTgLobbyDC_Match_GetOtherTeam_Params
{
	int                                                nIndex;                                                   // (OptionalParm, Parm)
	class UTgLobbyDC_Team*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Match.GetFriendTeam
struct UTgLobbyDC_Match_GetFriendTeam_Params
{
	class UTgLobbyDC_Team*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Match.OnMatchUpdate
struct UTgLobbyDC_Match_OnMatchUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgLobbyDC_Match.GetLocalSelectedClassId
struct UTgLobbyDC_Match_GetLocalSelectedClassId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Match.ClearMatchData
struct UTgLobbyDC_Match_ClearMatchData_Params
{
};

// Function TgClientBase.TgLobbyDC_Match.ClearBonusTimers
struct UTgLobbyDC_Match_ClearBonusTimers_Params
{
};

// Function TgClientBase.TgLobbyDC_Match.NotifyMapChange
struct UTgLobbyDC_Match_NotifyMapChange_Params
{
};

// Function TgClientBase.TgLobbyDC_Match.InitializeData
struct UTgLobbyDC_Match_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgLobbyDC_Player.IsPlayerMuted
struct UTgLobbyDC_Player_IsPlayerMuted_Params
{
	struct FUniqueNetId                                ConsoleId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Player.GetMatchPosition
struct UTgLobbyDC_Player_GetMatchPosition_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Player.UpdateRoleCall
struct UTgLobbyDC_Player_UpdateRoleCall_Params
{
	struct FRoleCallInfo                               rci;                                                      // (Const, Parm, OutParm)
};

// Function TgClientBase.TgLobbyDC_Player.NotifyMapChange
struct UTgLobbyDC_Player_NotifyMapChange_Params
{
};

// Function TgClientBase.TgLobbyDC_Player.InitializeData
struct UTgLobbyDC_Player_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgLobbyDC_PlayerTrade.NotifyMapChange
struct UTgLobbyDC_PlayerTrade_NotifyMapChange_Params
{
};

// Function TgClientBase.TgLobbyDC_PlayerTrade.InitializeData
struct UTgLobbyDC_PlayerTrade_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgLobbyDC_Skin.GetSelectedByUs
struct UTgLobbyDC_Skin_GetSelectedByUs_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Skin.GetAvailable
struct UTgLobbyDC_Skin_GetAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Skin.GetSubtype
struct UTgLobbyDC_Skin_GetSubtype_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Skin.GetSkinId
struct UTgLobbyDC_Skin_GetSkinId_Params
{
	struct Fdword                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgLobbyDC_Skin.SetOwned
struct UTgLobbyDC_Skin_SetOwned_Params
{
	bool                                               bOwned;                                                   // (Parm)
};

// Function TgClientBase.TgLobbyDC_Skin.SetPurchasable
struct UTgLobbyDC_Skin_SetPurchasable_Params
{
	bool                                               bCanPurchase;                                             // (Parm)
};

// Function TgClientBase.TgLobbyDC_Skin.SetAvailable
struct UTgLobbyDC_Skin_SetAvailable_Params
{
	bool                                               bIsAvail;                                                 // (Parm)
};

// Function TgClientBase.TgLobbyDC_Skin.SetSelectedByUs
struct UTgLobbyDC_Skin_SetSelectedByUs_Params
{
	bool                                               bSelByUs;                                                 // (Parm)
};

// Function TgClientBase.TgLobbyDC_Skin.SetVisible
struct UTgLobbyDC_Skin_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm)
};

// Function TgClientBase.TgLobbyDC_Skin.InitializeData
struct UTgLobbyDC_Skin_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgLobbyDC_Team.ClearMatchData
struct UTgLobbyDC_Team_ClearMatchData_Params
{
};

// Function TgClientBase.TgLobbyDC_Team.EndUpdateBans
struct UTgLobbyDC_Team_EndUpdateBans_Params
{
	bool                                               bShowSpectateInfo;                                        // (Parm)
};

// Function TgClientBase.TgLobbyDC_Team.UpdateNextBan
struct UTgLobbyDC_Team_UpdateNextBan_Params
{
	struct FPointer                                    pRow;                                                     // (Parm)
	bool                                               bShowSpectateInfo;                                        // (OptionalParm, Parm)
};

// Function TgClientBase.TgLobbyDC_Team.BeginUpdateBans
struct UTgLobbyDC_Team_BeginUpdateBans_Params
{
};

// Function TgClientBase.TgLobbyDC_Team.EndUpdateMembers
struct UTgLobbyDC_Team_EndUpdateMembers_Params
{
};

// Function TgClientBase.TgLobbyDC_Team.UpdateNextMember
struct UTgLobbyDC_Team_UpdateNextMember_Params
{
	struct FPointer                                    pRow;                                                     // (Parm)
};

// Function TgClientBase.TgLobbyDC_Team.BeginUpdateMembers
struct UTgLobbyDC_Team_BeginUpdateMembers_Params
{
};

// Function TgClientBase.TgLobbyDC_Team.ClearRoleCalls
struct UTgLobbyDC_Team_ClearRoleCalls_Params
{
};

// Function TgClientBase.TgLobbyDC_Team.OnMatchMessageIDTag
struct UTgLobbyDC_Team_OnMatchMessageIDTag_Params
{
	struct FPointer                                    pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgLobbyDC_Team.OnPlayerMute
struct UTgLobbyDC_Team_OnPlayerMute_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgLobbyDC_Team.InitializeData
struct UTgLobbyDC_Team_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGFxMatchInventory.ReceiveGFxData
struct UTgGFxMatchInventory_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGFxMatchInventory.ActivateTeamBooster
struct UTgGFxMatchInventory_ActivateTeamBooster_Params
{
	struct Fdword                                      dwItemLootId;                                             // (Parm)
	struct Fdword                                      dwItemSubType;                                            // (Parm)
};

// Function TgClientBase.TgGFxMatchInventory.Uninitialize
struct UTgGFxMatchInventory_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxMatchInventory.Initialize
struct UTgGFxMatchInventory_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgDataGroup_Settings.InitializeData
struct UTgDataGroup_Settings_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgSettingsDC_Account.usc_ResetEmailResponse
struct UTgSettingsDC_Account_usc_ResetEmailResponse_Params
{
};

// Function TgClientBase.TgSettingsDC_Account.usc_SetAccountSettings
struct UTgSettingsDC_Account_usc_SetAccountSettings_Params
{
	bool                                               optInSmiteNewsLetter;                                     // (Parm)
	struct FString                                     sEmail;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgSettingsDC_Account.PopulateAccountData
struct UTgSettingsDC_Account_PopulateAccountData_Params
{
};

// Function TgClientBase.TgSettingsDC_Account.InitializeData
struct UTgSettingsDC_Account_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgSettingsDC_Audio.usc_requestDeviceList
struct UTgSettingsDC_Audio_usc_requestDeviceList_Params
{
};

// Function TgClientBase.TgSettingsDC_Audio.usc_SetAudioSettings
struct UTgSettingsDC_Audio_usc_SetAudioSettings_Params
{
	float                                              Master;                                                   // (Parm)
	float                                              sfx;                                                      // (Parm)
	float                                              music;                                                    // (Parm)
	float                                              voice;                                                    // (Parm)
	float                                              matchNotifier;                                            // (Parm)
	bool                                               AllPlayerMute;                                            // (Parm)
	bool                                               skipSave;                                                 // (Parm)
	bool                                               MasterMute;                                               // (Parm)
	bool                                               SFXMute;                                                  // (Parm)
	bool                                               MusicMute;                                                // (Parm)
	bool                                               VoiceMute;                                                // (Parm)
	bool                                               MatchNotifierMute;                                        // (Parm)
	bool                                               ChatNotifierMute;                                         // (Parm)
	struct FString                                     DefaultAudioDevice;                                       // (Parm, NeedCtorLink)
	bool                                               VivoxEnabled;                                             // (Parm)
	float                                              vivoxVol;                                                 // (Parm)
	bool                                               vivoxVolMute;                                             // (Parm)
	float                                              vivoxMic;                                                 // (Parm)
	bool                                               VivoxMicMute;                                             // (Parm)
	int                                                VivoxInputType;                                           // (Parm)
};

// Function TgClientBase.TgSettingsDC_Audio.InitializeData
struct UTgSettingsDC_Audio_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgSettingsDC_KeyBinding.OnInputSettingChange
struct UTgSettingsDC_KeyBinding_OnInputSettingChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSettingsDC_KeyBinding.OnKeyBindMenuUpdate
struct UTgSettingsDC_KeyBinding_OnKeyBindMenuUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSettingsDC_KeyBinding.OnKeyDisplayUpdate
struct UTgSettingsDC_KeyBinding_OnKeyDisplayUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSettingsDC_KeyBinding.usc_SetControllerSettings
struct UTgSettingsDC_KeyBinding_usc_SetControllerSettings_Params
{
	bool                                               bInvertMouse;                                             // (Parm)
	bool                                               bControllerFeedback;                                      // (Parm)
	float                                              fLookSensitivityX;                                        // (Parm)
	float                                              fLookSensitivityY;                                        // (Parm)
	float                                              fLookAccelSpeed;                                          // (Parm)
	float                                              fDeadZoneLeft;                                            // (Parm)
	float                                              fDeadZoneRight;                                           // (Parm)
	bool                                               bJumpEnabled;                                             // (Parm)
	bool                                               bPublicParty;                                             // (Parm)
	bool                                               bSkipSave;                                                // (Parm)
	bool                                               bEnableBasicAttackControllerFeedback;                     // (Parm)
	bool                                               bEnableAimAssist;                                         // (Parm)
	bool                                               bUseFixedPitchMode;                                       // (Parm)
};

// Function TgClientBase.TgSettingsDC_KeyBinding.PopulateKeybinding
struct UTgSettingsDC_KeyBinding_PopulateKeybinding_Params
{
	int                                                settingtype;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgSettingsDC_KeyBinding.InitializeBindingData
struct UTgSettingsDC_KeyBinding_InitializeBindingData_Params
{
};

// Function TgClientBase.TgSettingsDC_KeyBinding.InitializeData
struct UTgSettingsDC_KeyBinding_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgSettingsDC_Spectator.OnSpecMenuUpdate
struct UTgSettingsDC_Spectator_OnSpecMenuUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSettingsDC_Spectator.OnSpecKeyDisplayUpdate
struct UTgSettingsDC_Spectator_OnSpecKeyDisplayUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSettingsDC_Spectator.PopulateKeybinding
struct UTgSettingsDC_Spectator_PopulateKeybinding_Params
{
};

// Function TgClientBase.TgSettingsDC_Spectator.InitializeBindingData
struct UTgSettingsDC_Spectator_InitializeBindingData_Params
{
};

// Function TgClientBase.TgSettingsDC_Spectator.InitializeData
struct UTgSettingsDC_Spectator_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgSettingsDC_UI.usc_SetCrossplaySetting
struct UTgSettingsDC_UI_usc_SetCrossplaySetting_Params
{
	int                                                newCrossplaySetting;                                      // (Parm)
};

// Function TgClientBase.TgSettingsDC_UI.usc_GetClientCrossplaySearchValue
struct UTgSettingsDC_UI_usc_GetClientCrossplaySearchValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgSettingsDC_UI.usc_SetUISettings
struct UTgSettingsDC_UI_usc_SetUISettings_Params
{
	struct FString                                     SettingName;                                              // (Parm, NeedCtorLink)
	struct FString                                     settingValue;                                             // (Parm, NeedCtorLink)
	int                                                settingtype;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgSettingsDC_UI.OnInputSettingChange
struct UTgSettingsDC_UI_OnInputSettingChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSettingsDC_UI.OnLoginSuccess
struct UTgSettingsDC_UI_OnLoginSuccess_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgSettingsDC_UI.UpdateUISettings
struct UTgSettingsDC_UI_UpdateUISettings_Params
{
	int                                                settingtype;                                              // (OptionalParm, Parm)
};

// Function TgClientBase.TgSettingsDC_UI.InitializeData
struct UTgSettingsDC_UI_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgSettingsDC_Video.ShowSettingsChangedPopup
struct UTgSettingsDC_Video_ShowSettingsChangedPopup_Params
{
};

// Function TgClientBase.TgSettingsDC_Video.CreateResolutionList
struct UTgSettingsDC_Video_CreateResolutionList_Params
{
};

// Function TgClientBase.TgSettingsDC_Video.UpdateVideoSettings
struct UTgSettingsDC_Video_UpdateVideoSettings_Params
{
};

// Function TgClientBase.TgSettingsDC_Video.ViewportResized
struct UTgSettingsDC_Video_ViewportResized_Params
{
};

// Function TgClientBase.TgSettingsDC_Video.usc_SetConsoleSettings
struct UTgSettingsDC_Video_usc_SetConsoleSettings_Params
{
	float                                              fGamma;                                                   // (Parm)
	bool                                               bVsync;                                                   // (Parm)
	float                                              fSafeFrame;                                               // (Parm)
};

// Function TgClientBase.TgSettingsDC_Video.usc_SetVsyncValue
struct UTgSettingsDC_Video_usc_SetVsyncValue_Params
{
	bool                                               bVsync;                                                   // (Parm)
};

// Function TgClientBase.TgSettingsDC_Video.usc_AutoConfig
struct UTgSettingsDC_Video_usc_AutoConfig_Params
{
};

// Function TgClientBase.TgSettingsDC_Video.usc_SetGammaValue
struct UTgSettingsDC_Video_usc_SetGammaValue_Params
{
	float                                              nGamma;                                                   // (Parm)
};

// Function TgClientBase.TgSettingsDC_Video.usc_SetVideoSettings
struct UTgSettingsDC_Video_usc_SetVideoSettings_Params
{
	float                                              nWorldDetail;                                             // (Parm)
	float                                              nTextureDetail;                                           // (Parm)
	float                                              nShadowDetail;                                            // (Parm)
	float                                              nParticleDetail;                                          // (Parm)
	bool                                               bUseVSync;                                                // (Parm)
	bool                                               bUseSpecialMatEffects;                                    // (Parm)
	bool                                               bUseRagdollPhysics;                                       // (Parm)
	bool                                               bFullScreen;                                              // (Parm)
	bool                                               bBorderless;                                              // (Parm)
	float                                              nResX;                                                    // (Parm)
	float                                              nResY;                                                    // (Parm)
	int                                                nMultiSampleCount;                                        // (Parm)
	bool                                               bD3D11Enabled;                                            // (Parm)
	int                                                nFXAAQuality;                                             // (Parm)
	int                                                nShaderQuality;                                           // (Parm)
	int                                                nResolutionScale;                                         // (Parm)
};

// Function TgClientBase.TgSettingsDC_Video.InitializeData
struct UTgSettingsDC_Video_InitializeData_Params
{
	class UTgDataHandler*                              Handler;                                                  // (Parm)
	class UTgDataChunk*                                parentChunk;                                              // (Parm)
};

// Function TgClientBase.TgGFxClanListBase.FinishLoading
struct UTgGFxClanListBase_FinishLoading_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxClanListBase.USC_RequestUpdate
struct UTgGFxClanListBase_USC_RequestUpdate_Params
{
};

// Function TgClientBase.TgGFxClanListBase.SetList
struct UTgGFxClanListBase_SetList_Params
{
	class UGFxObject*                                  pArray;                                                   // (Parm)
	struct FString                                     sMessage;                                                 // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxClanListBase.OnPlayerRequest
struct UTgGFxClanListBase_OnPlayerRequest_Params
{
	class UTgGFxPlayerProvider*                        pSource;                                                  // (Parm)
};

// Function TgClientBase.TgGFxClanListBase.OnPrivilegeCheck
struct UTgGFxClanListBase_OnPrivilegeCheck_Params
{
	TEnumAsByte<EFeaturePrivilege>                     ePriv;                                                    // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                ePermiss;                                                 // (Parm)
};

// Function TgClientBase.TgGFxClanListBase.Uninitialize
struct UTgGFxClanListBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxClanListBase.Initialize
struct UTgGFxClanListBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxFriendsListView.USC_DeclineAllFriendRequests
struct UTgGFxFriendsListView_USC_DeclineAllFriendRequests_Params
{
};

// Function TgClientBase.TgGFxFriendsListView.FinishLoading
struct UTgGFxFriendsListView_FinishLoading_Params
{
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxFriendsListView.OnDeclineRequestProgress
struct UTgGFxFriendsListView_OnDeclineRequestProgress_Params
{
	struct FTgDeferProgress                            Progress;                                                 // (Const, Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxFriendsListView.OnServerSearchResults
struct UTgGFxFriendsListView_OnServerSearchResults_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxFriendsListView.OnLocalSearchResults
struct UTgGFxFriendsListView_OnLocalSearchResults_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxFriendsListView.OnSearchEmpty
struct UTgGFxFriendsListView_OnSearchEmpty_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxFriendsListView.OnStartSearch
struct UTgGFxFriendsListView_OnStartSearch_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxFriendsListView.USC_Search
struct UTgGFxFriendsListView_USC_Search_Params
{
	struct FString                                     sSearch;                                                  // (Parm, NeedCtorLink)
	bool                                               bIsLocal;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxFriendsListView.USC_RequestUpdateList
struct UTgGFxFriendsListView_USC_RequestUpdateList_Params
{
};

// Function TgClientBase.TgGFxFriendsListView.SetList
struct UTgGFxFriendsListView_SetList_Params
{
	class UGFxObject*                                  pArray;                                                   // (Parm)
	struct FString                                     sError;                                                   // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxFriendsListView.OnPrivilegeCheck
struct UTgGFxFriendsListView_OnPrivilegeCheck_Params
{
	TEnumAsByte<EFeaturePrivilege>                     ePriv;                                                    // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                eLevel;                                                   // (Parm)
};

// Function TgClientBase.TgGFxFriendsListView.OnFriendsUpdate
struct UTgGFxFriendsListView_OnFriendsUpdate_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxFriendsListView.OnReceiveFriends
struct UTgGFxFriendsListView_OnReceiveFriends_Params
{
	class UTgGFxFriendData*                            pFriends;                                                 // (Parm)
};

// Function TgClientBase.TgGFxFriendsListView.Uninitialize
struct UTgGFxFriendsListView_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxFriendsListView.Initialize
struct UTgGFxFriendsListView_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxLearnVGS.Uninitialize
struct UTgGFxLearnVGS_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxLearnVGS.Initialize
struct UTgGFxLearnVGS_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxPartyInvitePane.OnSearchServer
struct UTgGFxPartyInvitePane_OnSearchServer_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPartyInvitePane.OnSearchLocal
struct UTgGFxPartyInvitePane_OnSearchLocal_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPartyInvitePane.OnSearchEmpty
struct UTgGFxPartyInvitePane_OnSearchEmpty_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPartyInvitePane.OnSearchStart
struct UTgGFxPartyInvitePane_OnSearchStart_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPartyInvitePane.USC_Search
struct UTgGFxPartyInvitePane_USC_Search_Params
{
	struct FString                                     sSearch;                                                  // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPartyInvitePane.Uninitialize
struct UTgGFxPartyInvitePane_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxPartyInvitePane.Initialize
struct UTgGFxPartyInvitePane_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxPartyList.FinishLoading
struct UTgGFxPartyList_FinishLoading_Params
{
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPartyList.USC_GetPartiablePlayers
struct UTgGFxPartyList_USC_GetPartiablePlayers_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPartyList.USC_Disband
struct UTgGFxPartyList_USC_Disband_Params
{
};

// Function TgClientBase.TgGFxPartyList.USC_KickPlayer
struct UTgGFxPartyList_USC_KickPlayer_Params
{
	class UTgGFxPlayerData*                            pGFxPlayer;                                               // (Parm)
};

// Function TgClientBase.TgGFxPartyList.USC_MakeLeader
struct UTgGFxPartyList_USC_MakeLeader_Params
{
	class UTgGFxPlayerData*                            pGFxPlayer;                                               // (Parm)
};

// Function TgClientBase.TgGFxPartyList.USC_AddPlayer
struct UTgGFxPartyList_USC_AddPlayer_Params
{
	class UTgGFxPlayerData*                            pGFxPlayer;                                               // (Parm)
};

// Function TgClientBase.TgGFxPartyList.OnMctsEvent
struct UTgGFxPartyList_OnMctsEvent_Params
{
	struct FPointer                                    pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPartyList.OnPartyUpdate
struct UTgGFxPartyList_OnPartyUpdate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPartyList.OnFriendRequest
struct UTgGFxPartyList_OnFriendRequest_Params
{
	class UTgGFxPlayerProvider*                        pProvider;                                                // (Parm)
};

// Function TgClientBase.TgGFxPartyList.Repopulate
struct UTgGFxPartyList_Repopulate_Params
{
};

// Function TgClientBase.TgGFxPartyList.OnPrivilegeCheck
struct UTgGFxPartyList_OnPrivilegeCheck_Params
{
	TEnumAsByte<EFeaturePrivilege>                     ePriv;                                                    // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                eLevel;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPartyList.Uninitialize
struct UTgGFxPartyList_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxPartyList.Initialize
struct UTgGFxPartyList_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxChatModalBase.ClearTimeouts
struct UTgGFxChatModalBase_ClearTimeouts_Params
{
};

// Function TgClientBase.TgGFxChatModalBase.OnInfoDelay
struct UTgGFxChatModalBase_OnInfoDelay_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgGFxChatModalBase.ReceivePlayerInfo
struct UTgGFxChatModalBase_ReceivePlayerInfo_Params
{
	struct FPointer                                    pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxChatModalBase.SetChannelMembers
struct UTgGFxChatModalBase_SetChannelMembers_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
};

// Function TgClientBase.TgGFxChatModalBase.MinimizeChat
struct UTgGFxChatModalBase_MinimizeChat_Params
{
};

// Function TgClientBase.TgGFxChatModalBase.MaximizeChat
struct UTgGFxChatModalBase_MaximizeChat_Params
{
};

// Function TgClientBase.TgGFxChatModalBase.UpdateChannelMembers
struct UTgGFxChatModalBase_UpdateChannelMembers_Params
{
	class UGFxObject*                                  Obj;                                                      // (Parm)
};

// Function TgClientBase.TgGFxChatModalBase.OnChatEvent
struct UTgGFxChatModalBase_OnChatEvent_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxChatModalBase.Uninitialize
struct UTgGFxChatModalBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxChatModalBase.Initialize
struct UTgGFxChatModalBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxExternalLink.USC_GoTolink
struct UTgGFxExternalLink_USC_GoTolink_Params
{
	struct FString                                     sLink;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxExternalLink.Initialize
struct UTgGFxExternalLink_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.ShowCalloutNotification
struct UTgGfxFooterBase_ShowCalloutNotification_Params
{
	struct FString                                     sValue;                                                   // (Parm, NeedCtorLink)
	float                                              fTime;                                                    // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.UpdateBoostBtn
struct UTgGfxFooterBase_UpdateBoostBtn_Params
{
	int                                                Time;                                                     // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.ShowSpectateQueued
struct UTgGfxFooterBase_ShowSpectateQueued_Params
{
	bool                                               bQueued;                                                  // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.OnFriendUpdateTimeout
struct UTgGfxFooterBase_OnFriendUpdateTimeout_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.OnFriendUpdate
struct UTgGfxFooterBase_OnFriendUpdate_Params
{
	struct FPointer                                    pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.OnPopupClosed
struct UTgGfxFooterBase_OnPopupClosed_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.OnNoMatchFound
struct UTgGfxFooterBase_OnNoMatchFound_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.OnInputModeChanged
struct UTgGfxFooterBase_OnInputModeChanged_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.OnNavigationAction
struct UTgGfxFooterBase_OnNavigationAction_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.OnFocusFooterMain
struct UTgGfxFooterBase_OnFocusFooterMain_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.RefreshBoosterTimer
struct UTgGfxFooterBase_RefreshBoosterTimer_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.RefreshDisplayMode
struct UTgGfxFooterBase_RefreshDisplayMode_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.OnUpdateLogoState
struct UTgGfxFooterBase_OnUpdateLogoState_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.OnLobbyStateChange
struct UTgGfxFooterBase_OnLobbyStateChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.UpdateCallouts
struct UTgGfxFooterBase_UpdateCallouts_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.OnSetFooterDisplayMode
struct UTgGfxFooterBase_OnSetFooterDisplayMode_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.OnUpdatePlayerInfoVisibility
struct UTgGfxFooterBase_OnUpdatePlayerInfoVisibility_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.OnSpectateQueuedState
struct UTgGfxFooterBase_OnSpectateQueuedState_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.Tick
struct UTgGfxFooterBase_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.ReceiveGFxData
struct UTgGfxFooterBase_ReceiveGFxData_Params
{
	class UGFxObject*                                  pObj;                                                     // (Parm)
};

// Function TgClientBase.TgGfxFooterBase.Uninitialize
struct UTgGfxFooterBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGfxFooterBase.Initialize
struct UTgGfxFooterBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxLoginBase.USC_GetConsoleLoginPrompt
struct UTgGFxLoginBase_USC_GetConsoleLoginPrompt_Params
{
	bool                                               bLoginEnabled;                                            // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.USC_SettingsMenuLoaded
struct UTgGFxLoginBase_USC_SettingsMenuLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxLoginBase.USC_CheckServerStatusIsUp
struct UTgGFxLoginBase_USC_CheckServerStatusIsUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxLoginBase.USC_ShowLinkingPopup
struct UTgGFxLoginBase_USC_ShowLinkingPopup_Params
{
};

// Function TgClientBase.TgGFxLoginBase.USC_CancelAccountCreation
struct UTgGFxLoginBase_USC_CancelAccountCreation_Params
{
};

// Function TgClientBase.TgGFxLoginBase.USC_LoginGoogle
struct UTgGFxLoginBase_USC_LoginGoogle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxLoginBase.USC_LoginFacebook
struct UTgGFxLoginBase_USC_LoginFacebook_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxLoginBase.USC_CreateHirezAccount
struct UTgGFxLoginBase_USC_CreateHirezAccount_Params
{
	struct FString                                     sName;                                                    // (Parm, NeedCtorLink)
	struct FString                                     sPassword;                                                // (Parm, NeedCtorLink)
	struct FString                                     sEmail;                                                   // (Parm, NeedCtorLink)
	bool                                               ageRequirement;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxLoginBase.USC_Login
struct UTgGFxLoginBase_USC_Login_Params
{
	struct FString                                     sUsername;                                                // (Parm, NeedCtorLink)
	struct FString                                     sPassword;                                                // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.USC_Reconnect
struct UTgGFxLoginBase_USC_Reconnect_Params
{
};

// Function TgClientBase.TgGFxLoginBase.ShowAccountCreationScreen
struct UTgGFxLoginBase_ShowAccountCreationScreen_Params
{
	bool                                               bShowCreateScreen;                                        // (Parm)
	bool                                               bDisableCreateAccountBtn;                                 // (Parm)
};

// Function TgClientBase.TgGFxLoginBase.SetLoginEnabled
struct UTgGFxLoginBase_SetLoginEnabled_Params
{
	bool                                               bCanLogin;                                                // (Parm)
};

// Function TgClientBase.TgGFxLoginBase.LoginQueue
struct UTgGFxLoginBase_LoginQueue_Params
{
};

// Function TgClientBase.TgGFxLoginBase.LockOutUser
struct UTgGFxLoginBase_LockOutUser_Params
{
	struct FString                                     sProcessing;                                              // (Parm, NeedCtorLink)
	bool                                               bShowLoading;                                             // (Parm)
	bool                                               bForceCall;                                               // (Parm)
};

// Function TgClientBase.TgGFxLoginBase.LoginConsole
struct UTgGFxLoginBase_LoginConsole_Params
{
	int                                                nControllerIdx;                                           // (Parm)
};

// Function TgClientBase.TgGFxLoginBase.asc_LoginReady
struct UTgGFxLoginBase_asc_LoginReady_Params
{
	int                                                nAuthType;                                                // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxLoginBase.asc_MustAcceptEula
struct UTgGFxLoginBase_asc_MustAcceptEula_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.ReloadLoginScreen
struct UTgGFxLoginBase_ReloadLoginScreen_Params
{
};

// Function TgClientBase.TgGFxLoginBase.CreateAccountError
struct UTgGFxLoginBase_CreateAccountError_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.DefaultLoginError
struct UTgGFxLoginBase_DefaultLoginError_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.LoginAccepted
struct UTgGFxLoginBase_LoginAccepted_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.GameNotOnAccount
struct UTgGFxLoginBase_GameNotOnAccount_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.LoginInvalid
struct UTgGFxLoginBase_LoginInvalid_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.AccountSuspend
struct UTgGFxLoginBase_AccountSuspend_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.WrongVersion
struct UTgGFxLoginBase_WrongVersion_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.NameInvalid
struct UTgGFxLoginBase_NameInvalid_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.NameUnavailable
struct UTgGFxLoginBase_NameUnavailable_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.NameUnacceptable
struct UTgGFxLoginBase_NameUnacceptable_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.AccountNameChange
struct UTgGFxLoginBase_AccountNameChange_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.AccountHasNoPlayer
struct UTgGFxLoginBase_AccountHasNoPlayer_Params
{
	struct FString                                     sMessage;                                                 // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.OnPopup
struct UTgGFxLoginBase_OnPopup_Params
{
	class UTgPagePopup*                                pData;                                                    // (Parm)
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.ServerUnderMaintenance
struct UTgGFxLoginBase_ServerUnderMaintenance_Params
{
};

// Function TgClientBase.TgGFxLoginBase.SetLoginReady
struct UTgGFxLoginBase_SetLoginReady_Params
{
	int                                                nAuthType;                                                // (OptionalParm, Parm)
};

// Function TgClientBase.TgGFxLoginBase.OnServerStatusTimeout
struct UTgGFxLoginBase_OnServerStatusTimeout_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgGFxLoginBase.CheckServerStatus
struct UTgGFxLoginBase_CheckServerStatus_Params
{
};

// Function TgClientBase.TgGFxLoginBase.OnSceneOpened
struct UTgGFxLoginBase_OnSceneOpened_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxLoginBase.OnLoginError
struct UTgGFxLoginBase_OnLoginError_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxLoginBase.OverrideStatusLockout
struct UTgGFxLoginBase_OverrideStatusLockout_Params
{
};

// Function TgClientBase.TgGFxLoginBase.MustAcceptEula
struct UTgGFxLoginBase_MustAcceptEula_Params
{
	struct FString                                     sError;                                                   // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxLoginBase.OnInput
struct UTgGFxLoginBase_OnInput_Params
{
	struct FPointer                                    pInputEvent;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxLoginBase.Uninitialize
struct UTgGFxLoginBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxLoginBase.Initialize
struct UTgGFxLoginBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxMatchAutoOptions.USC_SaveOptions
struct UTgGFxMatchAutoOptions_USC_SaveOptions_Params
{
	bool                                               bAutoSkill;                                               // (Parm)
	bool                                               bAutoBuy;                                                 // (Parm)
	bool                                               bAutoFilter;                                              // (Parm)
	bool                                               bShowGameTips;                                            // (Parm)
	bool                                               bShowRoleGuides;                                          // (Parm)
	bool                                               bShowAllRecommendedBuilds;                                // (Parm)
};

// Function TgClientBase.TgGFxMatchAutoOptions.USC_RequestOptions
struct UTgGFxMatchAutoOptions_USC_RequestOptions_Params
{
};

// Function TgClientBase.TgGFxMatchAutoOptions.UpdateValues
struct UTgGFxMatchAutoOptions_UpdateValues_Params
{
	bool                                               bAutoSkill;                                               // (Parm)
	bool                                               bAutoBuy;                                                 // (Parm)
	bool                                               bAutoFilter;                                              // (Parm)
	bool                                               bShowGameTips;                                            // (Parm)
	bool                                               bShowRoleGuides;                                          // (Parm)
	bool                                               bIsTutorial;                                              // (Parm)
	bool                                               bShowAllRecommendedBuilds;                                // (Parm)
};

// Function TgClientBase.TgGFxMatchAutoOptions.Uninitialize
struct UTgGFxMatchAutoOptions_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxMatchAutoOptions.Initialize
struct UTgGFxMatchAutoOptions_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxMatchCharacterConfirm.USC_Confirm
struct UTgGFxMatchCharacterConfirm_USC_Confirm_Params
{
};

// Function TgClientBase.TgGFxMatchCharacterConfirm.GetLocalPlayerBanning
struct UTgGFxMatchCharacterConfirm_GetLocalPlayerBanning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchCharacterConfirm.OnUpdate
struct UTgGFxMatchCharacterConfirm_OnUpdate_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgGFxMatchCharacterConfirm.Uninitialize
struct UTgGFxMatchCharacterConfirm_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxMatchCharacterConfirm.Initialize
struct UTgGFxMatchCharacterConfirm_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_ToggleChat
struct UTgGFxMatchLobbyShared_USC_ToggleChat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_OpenActions
struct UTgGFxMatchLobbyShared_USC_OpenActions_Params
{
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_PreviewItem
struct UTgGFxMatchLobbyShared_USC_PreviewItem_Params
{
	int                                                nItemId;                                                  // (Parm)
	int                                                nItemType;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_RequestReroll
struct UTgGFxMatchLobbyShared_USC_RequestReroll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_CanPurchaseReroll
struct UTgGFxMatchLobbyShared_USC_CanPurchaseReroll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_LeaveLobby
struct UTgGFxMatchLobbyShared_USC_LeaveLobby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_LobbyAction
struct UTgGFxMatchLobbyShared_USC_LobbyAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_RequestTrade
struct UTgGFxMatchLobbyShared_USC_RequestTrade_Params
{
	int                                                nPlayerId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_SelectEmote
struct UTgGFxMatchLobbyShared_USC_SelectEmote_Params
{
	int                                                nEmoteId;                                                 // (Parm)
	bool                                               isAux;                                                    // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_SelectVoice
struct UTgGFxMatchLobbyShared_USC_SelectVoice_Params
{
	int                                                nVoiceIndex;                                              // (Parm)
	bool                                               isAux;                                                    // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_SelectSkin
struct UTgGFxMatchLobbyShared_USC_SelectSkin_Params
{
	int                                                nSkinId;                                                  // (Parm)
	bool                                               isAux;                                                    // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.USC_SelectClass
struct UTgGFxMatchLobbyShared_USC_SelectClass_Params
{
	int                                                nClassId;                                                 // (Parm)
	bool                                               isAux;                                                    // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.OpenTeamBoosters
struct UTgGFxMatchLobbyShared_OpenTeamBoosters_Params
{
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifyUpdateGuideCallout
struct UTgGFxMatchLobbyShared_NotifyUpdateGuideCallout_Params
{
	int                                                nCount;                                                   // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifyUpdateEmoteData
struct UTgGFxMatchLobbyShared_NotifyUpdateEmoteData_Params
{
	class UGFxObject*                                  pData;                                                    // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifyUpdateVoiceData
struct UTgGFxMatchLobbyShared_NotifyUpdateVoiceData_Params
{
	class UGFxObject*                                  pData;                                                    // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifySelectVoice
struct UTgGFxMatchLobbyShared_NotifySelectVoice_Params
{
	int                                                nVoiceValueId;                                            // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifyRerollsRemaining
struct UTgGFxMatchLobbyShared_NotifyRerollsRemaining_Params
{
	int                                                nCount;                                                   // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifyLockIn
struct UTgGFxMatchLobbyShared_NotifyLockIn_Params
{
	class UGFxObject*                                  Result;                                                   // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.NotifySelectClass
struct UTgGFxMatchLobbyShared_NotifySelectClass_Params
{
	int                                                nProfileId;                                               // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.GetMatchDC
struct UTgGFxMatchLobbyShared_GetMatchDC_Params
{
	class UTgLobbyDC_Match*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.ClearSkinOverride
struct UTgGFxMatchLobbyShared_ClearSkinOverride_Params
{
};

// Function TgClientBase.TgGFxMatchLobbyShared.ActionError
struct UTgGFxMatchLobbyShared_ActionError_Params
{
	struct FString                                     sMessage;                                                 // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.PlayErrorSound
struct UTgGFxMatchLobbyShared_PlayErrorSound_Params
{
};

// Function TgClientBase.TgGFxMatchLobbyShared.SetSkinPreview
struct UTgGFxMatchLobbyShared_SetSkinPreview_Params
{
	struct Fdword                                      nSkinId;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.CreateEmoteData
struct UTgGFxMatchLobbyShared_CreateEmoteData_Params
{
	struct Fdword                                      nBotId;                                                   // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.CreateVoiceData
struct UTgGFxMatchLobbyShared_CreateVoiceData_Params
{
	struct Fdword                                      nBotId;                                                   // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.CreateLockInResult
struct UTgGFxMatchLobbyShared_CreateLockInResult_Params
{
	struct Fdword                                      nBotId;                                                   // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnRerollTimeout
struct UTgGFxMatchLobbyShared_OnRerollTimeout_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.SetDemoState
struct UTgGFxMatchLobbyShared_SetDemoState_Params
{
	TEnumAsByte<EMatchLobbyDemoState>                  eDemoState;                                               // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnAcquisition
struct UTgGFxMatchLobbyShared_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnMenuAction
struct UTgGFxMatchLobbyShared_OnMenuAction_Params
{
	struct Fdword                                      nAction;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnLeaveLobbyPopup
struct UTgGFxMatchLobbyShared_OnLeaveLobbyPopup_Params
{
	class UTgPagePopup*                                pData;                                                    // (Parm)
	struct FPopupResponse                              Response;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnMctsEvent
struct UTgGFxMatchLobbyShared_OnMctsEvent_Params
{
	struct FPointer                                    pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnUpdateGuideCallout
struct UTgGFxMatchLobbyShared_OnUpdateGuideCallout_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnTeamBooster
struct UTgGFxMatchLobbyShared_OnTeamBooster_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnDemoEvent
struct UTgGFxMatchLobbyShared_OnDemoEvent_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnCancelPurchase
struct UTgGFxMatchLobbyShared_OnCancelPurchase_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.OnMatchStateChange
struct UTgGFxMatchLobbyShared_OnMatchStateChange_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxMatchLobbyShared.Uninitialize
struct UTgGFxMatchLobbyShared_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxMatchLobbyShared.Initialize
struct UTgGFxMatchLobbyShared_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxMatchRoleCall.USC_CallRole
struct UTgGFxMatchRoleCall_USC_CallRole_Params
{
	int                                                nValueId;                                                 // (Parm)
};

// Function TgClientBase.TgGFxMatchRoleCall.USC_RequestDataProvider
struct UTgGFxMatchRoleCall_USC_RequestDataProvider_Params
{
};

// Function TgClientBase.TgGFxMatchRoleCall.Uninitialize
struct UTgGFxMatchRoleCall_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxMatchRoleCall.Initialize
struct UTgGFxMatchRoleCall_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxMatchTradePopup.USC_RespondToTrade
struct UTgGFxMatchTradePopup_USC_RespondToTrade_Params
{
	bool                                               bAccept;                                                  // (Parm)
};

// Function TgClientBase.TgGFxMatchTradePopup.RejectTrade
struct UTgGFxMatchTradePopup_RejectTrade_Params
{
};

// Function TgClientBase.TgGFxMatchTradePopup.AcceptTrade
struct UTgGFxMatchTradePopup_AcceptTrade_Params
{
};

// Function TgClientBase.TgGFxMatchTradePopup.CloseScene
struct UTgGFxMatchTradePopup_CloseScene_Params
{
};

// Function TgClientBase.TgGFxMatchTradePopup.OnRoleTradeRequest
struct UTgGFxMatchTradePopup_OnRoleTradeRequest_Params
{
	struct FPointer                                    pMarshal;                                                 // (Parm)
};

// Function TgClientBase.TgGFxMatchTradePopup.OnTradeCancel
struct UTgGFxMatchTradePopup_OnTradeCancel_Params
{
	struct FPointer                                    pMarshal;                                                 // (Parm)
};

// Function TgClientBase.TgGFxMatchTradePopup.OnTradeRequest
struct UTgGFxMatchTradePopup_OnTradeRequest_Params
{
	struct FPointer                                    pMarshal;                                                 // (Parm)
};

// Function TgClientBase.TgGFxMatchTradePopup.OnMctsEvent
struct UTgGFxMatchTradePopup_OnMctsEvent_Params
{
	struct FPointer                                    pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxMatchTradePopup.PopulateRoleTradeData
struct UTgGFxMatchTradePopup_PopulateRoleTradeData_Params
{
	struct FPointer                                    pRequester;                                               // (Parm)
	struct FPointer                                    pUs;                                                      // (Parm)
	struct Fdword                                      traderRole;                                               // (Parm)
	struct Fdword                                      playerRole;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchTradePopup.PopulateTradeData
struct UTgGFxMatchTradePopup_PopulateTradeData_Params
{
	struct FPointer                                    pRequester;                                               // (Parm)
	struct FPointer                                    pUs;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxMatchTradePopup.Uninitialize
struct UTgGFxMatchTradePopup_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxMatchTradePopup.Initialize
struct UTgGFxMatchTradePopup_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxPausedDisplay.OnKeyBindChange
struct UTgGFxPausedDisplay_OnKeyBindChange_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxPausedDisplay.OnInputIntercept
struct UTgGFxPausedDisplay_OnInputIntercept_Params
{
	struct FPointer                                    pInputEvent;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPausedDisplay.UpdateBindIntercept
struct UTgGFxPausedDisplay_UpdateBindIntercept_Params
{
};

// Function TgClientBase.TgGFxPausedDisplay.Uninitialize
struct UTgGFxPausedDisplay_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxPausedDisplay.Initialize
struct UTgGFxPausedDisplay_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxPurchaseModalBase.HideMarketplaceVisibility
struct UTgGFxPurchaseModalBase_HideMarketplaceVisibility_Params
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.SetupLongDescEvent
struct UTgGFxPurchaseModalBase_SetupLongDescEvent_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPurchaseModalBase.CloseScreen
struct UTgGFxPurchaseModalBase_CloseScreen_Params
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.SetupBattlePassPurchaseLevelModal
struct UTgGFxPurchaseModalBase_SetupBattlePassPurchaseLevelModal_Params
{
	int                                                toLevel;                                                  // (Parm)
	int                                                bundleQuantity;                                           // (Parm)
};

// Function TgClientBase.TgGFxPurchaseModalBase.SetupDoubleBundle
struct UTgGFxPurchaseModalBase_SetupDoubleBundle_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
	class UGFxObject*                                  Data2;                                                    // (Parm)
	int                                                Location;                                                 // (Parm)
};

// Function TgClientBase.TgGFxPurchaseModalBase.SetupBundleCompare
struct UTgGFxPurchaseModalBase_SetupBundleCompare_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
	class UGFxObject*                                  Data2;                                                    // (Parm)
};

// Function TgClientBase.TgGFxPurchaseModalBase.SetupData
struct UTgGFxPurchaseModalBase_SetupData_Params
{
	class UGFxObject*                                  Data;                                                     // (Parm)
	int                                                popupType;                                                // (Parm)
};

// Function TgClientBase.TgGFxPurchaseModalBase.SetupLongDesc
struct UTgGFxPurchaseModalBase_SetupLongDesc_Params
{
	struct FString                                     sItemName;                                                // (Parm, NeedCtorLink)
	struct FString                                     sLongDesc;                                                // (Parm, NeedCtorLink)
	struct FString                                     sSignedOffer;                                             // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_ShowErrorIfNotEnoughCurrency
struct UTgGFxPurchaseModalBase_USC_ShowErrorIfNotEnoughCurrency_Params
{
	int                                                nCurrencyType;                                            // (Parm)
	int                                                nQuantity;                                                // (Parm)
	int                                                nCouponId;                                                // (Parm)
	TArray<class UGFxObject*>                          arrItemDatas;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_CompleteBatchPurchase
struct UTgGFxPurchaseModalBase_USC_CompleteBatchPurchase_Params
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_AddBatchPurchaseItem
struct UTgGFxPurchaseModalBase_USC_AddBatchPurchaseItem_Params
{
	int                                                ItemId;                                                   // (Parm)
	int                                                nVendorId;                                                // (Parm)
	int                                                nPriceInUI;                                               // (Parm)
	int                                                CurrencyType;                                             // (Parm)
	int                                                Quantity;                                                 // (Parm)
	int                                                nCouponId;                                                // (Parm)
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_StartBatchPurchase
struct UTgGFxPurchaseModalBase_USC_StartBatchPurchase_Params
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_OnCloseScreen
struct UTgGFxPurchaseModalBase_USC_OnCloseScreen_Params
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_CloseLongDesc
struct UTgGFxPurchaseModalBase_USC_CloseLongDesc_Params
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_OnClickConfirm
struct UTgGFxPurchaseModalBase_USC_OnClickConfirm_Params
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.USC_PurchaseItem
struct UTgGFxPurchaseModalBase_USC_PurchaseItem_Params
{
	int                                                ItemId;                                                   // (Parm)
	int                                                nVendorId;                                                // (Parm)
	int                                                nPriceInUI;                                               // (Parm)
	int                                                CurrencyType;                                             // (Parm)
	int                                                Quantity;                                                 // (Parm)
	int                                                nCouponId;                                                // (Parm)
};

// Function TgClientBase.TgGFxPurchaseModalBase.OpenOdysseyVoyagePurchaseModal
struct UTgGFxPurchaseModalBase_OpenOdysseyVoyagePurchaseModal_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPurchaseModalBase.OpenOdysseyTerritoryPurchaseModal
struct UTgGFxPurchaseModalBase_OpenOdysseyTerritoryPurchaseModal_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPurchaseModalBase.OpenBattlePassPurchaseLevelModal
struct UTgGFxPurchaseModalBase_OpenBattlePassPurchaseLevelModal_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPurchaseModalBase.OpenBattlePassPurchaseModal
struct UTgGFxPurchaseModalBase_OpenBattlePassPurchaseModal_Params
{
	class UTgDataItemDoublePurchase*                   pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxPurchaseModalBase.Uninitialize
struct UTgGFxPurchaseModalBase_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxPurchaseModalBase.Initialize
struct UTgGFxPurchaseModalBase_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxRecentlyPlayed.FinishLoading
struct UTgGFxRecentlyPlayed_FinishLoading_Params
{
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxRecentlyPlayed.OnReceivePlayerNames
struct UTgGFxRecentlyPlayed_OnReceivePlayerNames_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	class UTgPlayerNameManager*                        pManager;                                                 // (Parm)
};

// Function TgClientBase.TgGFxRecentlyPlayed.OnPrivilegeCheck
struct UTgGFxRecentlyPlayed_OnPrivilegeCheck_Params
{
	TEnumAsByte<EFeaturePrivilege>                     ePriv;                                                    // (Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                eLevel;                                                   // (Parm)
};

// Function TgClientBase.TgGFxRecentlyPlayed.Populate
struct UTgGFxRecentlyPlayed_Populate_Params
{
};

// Function TgClientBase.TgGFxRecentlyPlayed.Uninitialize
struct UTgGFxRecentlyPlayed_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxRecentlyPlayed.Initialize
struct UTgGFxRecentlyPlayed_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxSocialList.USC_TryOpenDevMenu
struct UTgGFxSocialList_USC_TryOpenDevMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxSocialList.OnNavigate
struct UTgGFxSocialList_OnNavigate_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxSocialList.Uninitialize
struct UTgGFxSocialList_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxSocialList.Initialize
struct UTgGFxSocialList_Initialize_Params
{
	class UTgMoviePlayer*                              pMP;                                                      // (Parm)
};

// Function TgClientBase.TgGFxVGSGame.USC_GameOver
struct UTgGFxVGSGame_USC_GameOver_Params
{
	int                                                nCorrect;                                                 // (Parm)
	int                                                nLongestStreak;                                           // (Parm)
	int                                                nTimeSecs;                                                // (Parm)
	int                                                nBonusTimeSecs;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxVGSGame.USC_GetHighScore
struct UTgGFxVGSGame_USC_GetHighScore_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxVGSGame.USC_GetNewCombo
struct UTgGFxVGSGame_USC_GetNewCombo_Params
{
	int                                                ElapsedTime;                                              // (Parm)
	int                                                maxTime;                                                  // (Parm)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxVGSGame.OnQueueChange
struct UTgGFxVGSGame_OnQueueChange_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxVGSGame.OnGamepadInput
struct UTgGFxVGSGame_OnGamepadInput_Params
{
	struct FPointer                                    pInputEvent;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxVGSGame.Uninitialize
struct UTgGFxVGSGame_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxVGSGame.Initialize
struct UTgGFxVGSGame_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxViewerStore.USC_UpdateSelectedItem
struct UTgGFxViewerStore_USC_UpdateSelectedItem_Params
{
	int                                                nLootId;                                                  // (Parm)
};

// Function TgClientBase.TgGFxViewerStore.USC_GoToStream
struct UTgGFxViewerStore_USC_GoToStream_Params
{
};

// Function TgClientBase.TgGFxViewerStore.USC_GoToLinking
struct UTgGFxViewerStore_USC_GoToLinking_Params
{
};

// Function TgClientBase.TgGFxViewerStore.USC_TeamBuy
struct UTgGFxViewerStore_USC_TeamBuy_Params
{
	int                                                nLootId;                                                  // (Parm)
};

// Function TgClientBase.TgGFxViewerStore.USC_RotatorBuy
struct UTgGFxViewerStore_USC_RotatorBuy_Params
{
	int                                                nLootId;                                                  // (Parm)
};

// Function TgClientBase.TgGFxViewerStore.USC_StoreBuy
struct UTgGFxViewerStore_USC_StoreBuy_Params
{
	int                                                nLootId;                                                  // (Parm)
	int                                                nQuantity;                                                // (Parm)
};

// Function TgClientBase.TgGFxViewerStore.USC_MatchVote
struct UTgGFxViewerStore_USC_MatchVote_Params
{
	int                                                nGroupId;                                                 // (Parm)
	int                                                nTeamId;                                                  // (Parm)
};

// Function TgClientBase.TgGFxViewerStore.SetCameraModel
struct UTgGFxViewerStore_SetCameraModel_Params
{
	int                                                nClassId;                                                 // (Parm)
	int                                                nSkinId;                                                  // (Parm)
};

// Function TgClientBase.TgGFxViewerStore.SetCamera
struct UTgGFxViewerStore_SetCamera_Params
{
	struct FName                                       nmCameraName;                                             // (Parm)
};

// Function TgClientBase.TgGFxViewerStore.OnAcquisition
struct UTgGFxViewerStore_OnAcquisition_Params
{
	class UTgEventDataItem*                            pEvent;                                                   // (Parm)
};

// Function TgClientBase.TgGFxViewerStore.OnImageLoad
struct UTgGFxViewerStore_OnImageLoad_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxViewerStore.OnJsonUpdate
struct UTgGFxViewerStore_OnJsonUpdate_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxViewerStore.OnPicksUpdate
struct UTgGFxViewerStore_OnPicksUpdate_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxViewerStore.OnMatchUpdate
struct UTgGFxViewerStore_OnMatchUpdate_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxViewerStore.UpdateFromAvailable
struct UTgGFxViewerStore_UpdateFromAvailable_Params
{
};

// Function TgClientBase.TgGFxViewerStore.Uninitialize
struct UTgGFxViewerStore_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxViewerStore.Initialize
struct UTgGFxViewerStore_Initialize_Params
{
	class UTgMoviePlayer*                              theMovie;                                                 // (Parm)
};

// Function TgClientBase.TgGFxStoreDeals.OnAcquisition
struct UTgGFxStoreDeals_OnAcquisition_Params
{
	struct FPointer                                    pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxStoreDeals.OnInputMode
struct UTgGFxStoreDeals_OnInputMode_Params
{
	class UTgEventDataItem*                            pEventBase;                                               // (Parm)
};

// Function TgClientBase.TgGFxStoreDeals.OnFocusChange
struct UTgGFxStoreDeals_OnFocusChange_Params
{
	struct FGFxEventData                               Data;                                                     // (Parm)
};

// Function TgClientBase.TgGFxStoreDeals.OnClickBundle
struct UTgGFxStoreDeals_OnClickBundle_Params
{
	struct FGFxEventData                               Data;                                                     // (Parm)
};

// Function TgClientBase.TgGFxStoreDeals.OnClickDeal
struct UTgGFxStoreDeals_OnClickDeal_Params
{
	struct FGFxEventData                               Data;                                                     // (Parm)
};

// Function TgClientBase.TgGFxStoreDeals.OnToggleVisibility
struct UTgGFxStoreDeals_OnToggleVisibility_Params
{
	struct FGFxEventData                               Data;                                                     // (Parm)
};

// Function TgClientBase.TgGFxStoreDeals.OnTimer
struct UTgGFxStoreDeals_OnTimer_Params
{
	float                                              nDeltaTime;                                               // (Parm)
};

// Function TgClientBase.TgGFxStoreDeals.ShowPage
struct UTgGFxStoreDeals_ShowPage_Params
{
};

// Function TgClientBase.TgGFxStoreDeals.Uninitialize
struct UTgGFxStoreDeals_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxStoreDeals.Initialize
struct UTgGFxStoreDeals_Initialize_Params
{
};

// Function TgClientBase.TgGFxVGSShared.OnTextInput
struct UTgGFxVGSShared_OnTextInput_Params
{
	bool                                               bSuccess;                                                 // (Parm)
	struct FString                                     sText;                                                    // (Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxVGSShared.UpdatePrompts
struct UTgGFxVGSShared_UpdatePrompts_Params
{
};

// Function TgClientBase.TgGFxVGSShared.SendVGSChat
struct UTgGFxVGSShared_SendVGSChat_Params
{
	struct Fdword                                      nChannel;                                                 // (Parm)
	struct Fdword                                      nVgsId;                                                   // (Parm)
	struct FString                                     sCustomMsg;                                               // (OptionalParm, Parm, NeedCtorLink)
};

// Function TgClientBase.TgGFxVGSShared.OnInput
struct UTgGFxVGSShared_OnInput_Params
{
	struct FPointer                                    pInputEvent;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TgClientBase.TgGFxVGSShared.Uninitialize
struct UTgGFxVGSShared_Uninitialize_Params
{
};

// Function TgClientBase.TgGFxVGSShared.Initialize
struct UTgGFxVGSShared_Initialize_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
