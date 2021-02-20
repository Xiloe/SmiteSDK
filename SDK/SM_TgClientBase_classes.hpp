#pragma once

// SMITE (8.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SM_TgClientBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TgClientBase.TgAcquistionEvent
// 0x0080 (0x00F4 - 0x0074)
class UTgAcquistionEvent : public UTgEventDataItem
{
public:
	struct FUIQueuedAcquisition                        pAcq;                                                     // 0x0074(0x0080) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgAcquistionEvent");
		return ptr;
	}

};


// Class TgClientBase.TgAcquistionNotificationEvent
// 0x0008 (0x007C - 0x0074)
class UTgAcquistionNotificationEvent : public UTgEventDataItem
{
public:
	struct FPointer                                    pAcq;                                                     // 0x0074(0x0008) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgAcquistionNotificationEvent");
		return ptr;
	}

};


// Class TgClientBase.TgAnnouncerPreviewer
// 0x0010 (0x0070 - 0x0060)
class UTgAnnouncerPreviewer : public UObject
{
public:
	class UTgManifestGroup*                            c_AssetManifestGroup;                                     // 0x0060(0x0008) (ExportObject, NeedCtorLink, EditInline)
	struct FName                                       m_AnnouncerResName;                                       // 0x0068(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgAnnouncerPreviewer");
		return ptr;
	}


	void STATIC_PreviewAnnouncerByItemId(int nItemId, bool bAsync);
	void STATIC_OnAnnouncerLoaded();
	void Init();
};


// Class TgClientBase.TgMoviePlayer
// 0x075C (0x0954 - 0x01F8)
class UTgMoviePlayer : public UGFxMoviePlayer
{
public:
	struct FPointer                                    VfTable_ITgIntervalInterface;                             // 0x01F8(0x0008) (Const, Native, NoExport)
	TArray<struct FInputSensitiveComponent>            RegisteredInputSensitiveComponents;                       // 0x0200(0x0010) (NeedCtorLink)
	struct FMultiMap_Mirror                            RegisteredObjects;                                        // 0x0210(0x0048) (Const, Native)
	struct FMultiMap_Mirror                            RegisteredScenes;                                         // 0x0258(0x0048) (Const, Native)
	struct FMultiMap_Mirror                            RegisteredDataChunks;                                     // 0x02A0(0x0048) (Const, Native)
	struct FPointer                                    MarLobbyPlayback;                                         // 0x02E8(0x0008) (Native)
	struct FPointer                                    PkgLobbyPlayback;                                         // 0x02F0(0x0008) (Native)
	class APComVideoPlayer*                            m_PComVideoPlayer;                                        // 0x02F8(0x0008)
	struct FPointer                                    m_ConfigManager;                                          // 0x0300(0x0008) (Native)
	struct FString                                     GodPackOwnershipId;                                       // 0x0308(0x0010) (Config, NeedCtorLink)
	int                                                m_eButtonPromptSetting;                                   // 0x0318(0x0004)
	struct FName                                       ButtonPromptName;                                         // 0x031C(0x0008)
	unsigned long                                      m_bShownIntroMovie : 1;                                   // 0x0324(0x0004)
	unsigned long                                      m_bShownLoginBlocker : 1;                                 // 0x0324(0x0004)
	unsigned long                                      m_bShownPublicSystemMessages : 1;                         // 0x0324(0x0004)
	unsigned long                                      m_bShownPatchOverview : 1;                                // 0x0324(0x0004)
	unsigned long                                      m_bIsListeningForVivoxBtn : 1;                            // 0x0324(0x0004)
	unsigned long                                      m_bRenderGammaControls : 1;                               // 0x0324(0x0004)
	unsigned long                                      m_bHasNoPlayer : 1;                                       // 0x0324(0x0004)
	unsigned long                                      m_bAllowAllChat : 1;                                      // 0x0324(0x0004)
	unsigned long                                      m_bLeaver : 1;                                            // 0x0324(0x0004)
	unsigned long                                      m_bPrintClanPlayerInvites : 1;                            // 0x0324(0x0004)
	unsigned long                                      m_bShouldNotKillSeasonalMusic : 1;                        // 0x0324(0x0004)
	unsigned long                                      isNoItemPopup : 1;                                        // 0x0324(0x0004)
	unsigned long                                      isMatchLobbyTrade : 1;                                    // 0x0324(0x0004)
	unsigned long                                      disableNoItemPopup : 1;                                   // 0x0324(0x0004)
	unsigned long                                      m_bHUDVisible : 1;                                        // 0x0324(0x0004)
	unsigned long                                      m_bPrevLeader : 1;                                        // 0x0324(0x0004)
	unsigned long                                      m_isPlayingTutorial : 1;                                  // 0x0324(0x0004)
	unsigned long                                      m_bLoginComplete : 1;                                     // 0x0324(0x0004)
	unsigned long                                      m_bAllShopVendorsReceived : 1;                            // 0x0324(0x0004)
	unsigned long                                      m_bWaitingForAllShopVendors : 1;                          // 0x0324(0x0004)
	unsigned long                                      m_bEnableShopVendorTimer : 1;                             // 0x0324(0x0004)
	unsigned long                                      m_bFailedBatchPurchase : 1;                               // 0x0324(0x0004)
	unsigned long                                      m_HideEOMLTriumph : 1;                                    // 0x0324(0x0004)
	unsigned long                                      m_bInLoginQueue : 1;                                      // 0x0324(0x0004)
	unsigned long                                      m_bQueueStatsRequestOutstanding : 1;                      // 0x0324(0x0004)
	unsigned long                                      m_bInAccountLinkingProcess : 1;                           // 0x0324(0x0004)
	unsigned long                                      m_bInitialized : 1;                                       // 0x0324(0x0004)
	unsigned long                                      m_bInTransition : 1;                                      // 0x0324(0x0004)
	unsigned long                                      m_bResizeForSafeZones : 1;                                // 0x0324(0x0004)
	unsigned long                                      c_bChatReady : 1;                                         // 0x0324(0x0004)
	unsigned long                                      m_bFriendlyWon : 1;                                       // 0x0324(0x0004)
	unsigned long                                      m_bTutorialPlayed : 1;                                    // 0x0324(0x0004)
	unsigned long                                      m_bAutoQueueIntoPractice : 1;                             // 0x0328(0x0004)
	unsigned long                                      m_bPartySelectState : 1;                                  // 0x0328(0x0004)
	unsigned long                                      m_bHasLoadedTeamNames : 1;                                // 0x0328(0x0004)
	unsigned long                                      m_bConfigManagerProcessed : 1;                            // 0x0328(0x0004)
	unsigned long                                      m_bShowingEmailPopup : 1;                                 // 0x0328(0x0004)
	unsigned long                                      m_bMatchCheck : 1;                                        // 0x0328(0x0004)
	unsigned long                                      m_bWaitingForReferralEntries : 1;                         // 0x0328(0x0004)
	unsigned long                                      m_bAttemptingToJoinTutorial : 1;                          // 0x0328(0x0004)
	unsigned long                                      m_bHasTutorialAttemptTimeout : 1;                         // 0x0328(0x0004)
	unsigned long                                      m_PlayingIntroVideo : 1;                                  // 0x0328(0x0004)
	unsigned long                                      m_bForcingPSPlus : 1;                                     // 0x0328(0x0004)
	unsigned long                                      m_bListeningForInputConfirm : 1;                          // 0x0328(0x0004)
	struct FTgPlayerId                                 m_PlayerLookup;                                           // 0x032C(0x0024) (NeedCtorLink)
	class UTgVendorData*                               m_VendorData;                                             // 0x0350(0x0008)
	class UTgBrowserManager*                           m_WebBrowser;                                             // 0x0358(0x0008)
	TArray<struct FPendingChatMessage>                 m_PendingMessages;                                        // 0x0360(0x0010) (NeedCtorLink)
	TArray<struct FTgPlayerId>                         m_ChatMessagePlayerIds;                                   // 0x0370(0x0010) (NeedCtorLink)
	TArray<int>                                        m_QueuedAchievementId;                                    // 0x0380(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                m_nQueuedBattlePassLevel;                                 // 0x0390(0x0004)
	struct FQWord                                      m_nLastMessageTime;                                       // 0x0394(0x0008)
	int                                                m_nReturnToNavigationAction;                              // 0x039C(0x0004)
	int                                                m_nReturnToId;                                            // 0x03A0(0x0004)
	int                                                m_currentPurchaseId;                                      // 0x03A4(0x0004)
	int                                                m_nCurrentPurchaseQuantity;                               // 0x03A8(0x0004)
	class UTextureRenderTarget2D*                      m_RenderTarget;                                           // 0x03AC(0x0008)
	int                                                m_nAutoNavToPurchasedIndex;                               // 0x03B4(0x0004)
	int                                                m_nAutoNavToRewardIndex;                                  // 0x03B8(0x0004)
	int                                                m_activityRedirectId;                                     // 0x03BC(0x0004)
	int                                                m_goalRedirectId;                                         // 0x03C0(0x0004)
	int                                                m_nAutoNavItemId;                                         // 0x03C4(0x0004)
	struct FString                                     m_sPageAutoTab;                                           // 0x03C8(0x0010) (NeedCtorLink)
	int                                                m_uiDisplayMode;                                          // 0x03D8(0x0004)
	class UGFxObject*                                  _global;                                                  // 0x03DC(0x0008)
	float                                              m_fLobbyPlaybackTime;                                     // 0x03E4(0x0004)
	float                                              m_fLobbyNextFireTime;                                     // 0x03E8(0x0004)
	TArray<struct FLastMatchMember>                    m_lastMatchMembers;                                       // 0x03EC(0x0010) (NeedCtorLink)
	TArray<struct FLastPartiedMember>                  m_lastPartiedMembers;                                     // 0x03FC(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FRecentlyInvitedPlayers>             m_recentlyInvitedPlayers;                                 // 0x040C(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        m_PrevParty;                                              // 0x041C(0x0010) (NeedCtorLink)
	TArray<int>                                        m_NewQueueStatus;                                         // 0x042C(0x0010) (NeedCtorLink)
	int                                                m_PrevMatchQueueState;                                    // 0x043C(0x0004)
	struct FString                                     m_sSpectateTarget;                                        // 0x0440(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                m_nReplayId;                                              // 0x0450(0x0004)
	float                                              m_fWaitTimeoutForShopVendors;                             // 0x0454(0x0004)
	float                                              m_fShopVendorWaitTimer;                                   // 0x0458(0x0004)
	TArray<struct FIntStringPair>                      m_nCachedThemeIds;                                        // 0x045C(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct Fdword>                              m_MultiQueueList;                                         // 0x046C(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              m_fLoginQueueTimer;                                       // 0x047C(0x0004)
	float                                              m_fMatchCheckTime;                                        // 0x0480(0x0004)
	float                                              m_fTimerUpdate;                                           // 0x0484(0x0004)
	float                                              m_fLastQueueStatsRequest;                                 // 0x0488(0x0004)
	TArray<struct FCardTextureWidget>                  m_CardWidgets;                                            // 0x048C(0x0010) (NeedCtorLink)
	TArray<struct FName>                               GfxObjectBindings;                                        // 0x049C(0x0010) (NeedCtorLink)
	TArray<int>                                        m_AutoReinviteList;                                       // 0x04AC(0x0010) (NeedCtorLink)
	int                                                m_AutoReinviteQueueId;                                    // 0x04BC(0x0004)
	int                                                m_nClearTransitionTicks;                                  // 0x04C0(0x0004)
	int                                                m_nEventDefaultTab;                                       // 0x04C4(0x0004)
	class UTgEventDispatcher*                          m_pUIDispatcher;                                          // 0x04C8(0x0008) (ExportObject, NeedCtorLink, EditInline)
	TArray<struct FUIChangeStruct>                     m_UIChangeEvents;                                         // 0x04D0(0x0010) (NeedCtorLink)
	TArray<struct FSysCounterData>                     m_CountDatas;                                             // 0x04E0(0x0010) (NeedCtorLink)
	TArray<struct FWidgetBinding>                      m_WidgetsBound;                                           // 0x04F0(0x0010) (NeedCtorLink)
	TArray<struct FWidgetBinding>                      m_ButtonPromptStackss;                                    // 0x0500(0x0010) (NeedCtorLink)
	TArray<class UTgChatData*>                         m_arrPendingChat;                                         // 0x0510(0x0010) (AlwaysInit, NeedCtorLink)
	class UGFxObject*                                  m_mcGlobal;                                               // 0x0520(0x0008)
	class UTgGFxObject*                                m_mcRoot;                                                 // 0x0528(0x0008)
	class UTgDataHandler*                              m_DataHandler;                                            // 0x0530(0x0008)
	class UTgEventMediator*                            m_EventMediator;                                          // 0x0538(0x0008)
	class UTgSceneManager*                             m_SceneManager;                                           // 0x0540(0x0008)
	class UTgTimerManager*                             m_TimerManager;                                           // 0x0548(0x0008)
	class UTgPopupManager*                             m_PopupManager;                                           // 0x0550(0x0008)
	class UTgRewardCenterManagerBase*                  m_RewardCenterManager;                                    // 0x0558(0x0008)
	class UTgStreamManagerBase*                        m_StreamManager;                                          // 0x0560(0x0008)
	class UTgLandingPanelManagerBase*                  m_LandingPanelManager;                                    // 0x0568(0x0008)
	class UTgPlayerNameManager*                        m_pPlayerNameManager;                                     // 0x0570(0x0008)
	class UTgAcquisitionManager*                       m_AcquisitionManager;                                     // 0x0578(0x0008)
	class UTgSessionVars*                              m_SessionVars;                                            // 0x0580(0x0008)
	class UTgSystemNotifManagerBase*                   m_SystemNotificationManager;                              // 0x0588(0x0008)
	class UTgDeferManager*                             m_pDeferManager;                                          // 0x0590(0x0008)
	class UTgUIServerStates*                           m_pUIStateInfo;                                           // 0x0598(0x0008)
	struct FTgIntervalHandle                           m_EndMatchHandle;                                         // 0x05A0(0x0010)
	class UTgGFxSelection*                             m_pGFxSelection;                                          // 0x05B0(0x0008)
	class UTgPromptManager*                            m_pPromptManager;                                         // 0x05B8(0x0008)
	class UTgGFxNameDisplayManager*                    m_pNameDisplayManager;                                    // 0x05C0(0x0008)
	class UClass*                                      m_RewardCenterManagerClass;                               // 0x05C8(0x0008)
	class UClass*                                      m_StreamManagerClass;                                     // 0x05D0(0x0008)
	class UClass*                                      m_DataHandlerClass;                                       // 0x05D8(0x0008)
	class UClass*                                      m_EventMediatorClass;                                     // 0x05E0(0x0008)
	class UClass*                                      m_SceneManagerClass;                                      // 0x05E8(0x0008)
	class UClass*                                      m_MenuManagerClass;                                       // 0x05F0(0x0008)
	class UClass*                                      m_SessionVarsClass;                                       // 0x05F8(0x0008)
	int                                                m_nLastTimerIndex;                                        // 0x0600(0x0004)
	int                                                m_nFeedbackType;                                          // 0x0604(0x0004)
	int                                                m_PrevQueue;                                              // 0x0608(0x0004)
	int                                                m_nVaultIndex;                                            // 0x060C(0x0004)
	int                                                m_nUGPFavorRefund;                                        // 0x0610(0x0004)
	TArray<int>                                        c_DeferredChannelTabs;                                    // 0x0614(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_LobbyErrorMessage;                                      // 0x0624(0x0010) (AlwaysInit, NeedCtorLink)
	struct FIntStringPair                              m_LastLoginError;                                         // 0x0634(0x0014) (NeedCtorLink)
	int                                                m_nFeatureAutoGodId;                                      // 0x0648(0x0004)
	int                                                m_nFeatureAutoSkinId;                                     // 0x064C(0x0004)
	int                                                m_nFeatureAutoEmoteId;                                    // 0x0650(0x0004)
	int                                                m_nFeatureAutoWardSkinId;                                 // 0x0654(0x0004)
	int                                                m_nMatchDetailsAutoMatchId;                               // 0x0658(0x0004)
	struct FString                                     m_socialPageAutoTab;                                      // 0x065C(0x0010) (NeedCtorLink)
	int                                                m_rewardCenterTab;                                        // 0x066C(0x0004)
	int                                                m_rewardCenterItemId;                                     // 0x0670(0x0004)
	TEnumAsByte<ENavigationActions>                    m_nCurrentActionId;                                       // 0x0674(0x0001)
	TEnumAsByte<EActiveEvents>                         m_nCurrentEventId;                                        // 0x0675(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0676(0x0002) MISSED OFFSET
	struct FString                                     m_SpecTeamNameEnemy;                                      // 0x0678(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_SpecTeamNameFriendly;                                   // 0x0688(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_SpecClanNameFriendly;                                   // 0x0698(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_SpecClanNameEnemy;                                      // 0x06A8(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_SpecState;                                              // 0x06B8(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sGodPackImagePath;                                      // 0x06C8(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                m_nGodTargeterFlags;                                      // 0x06D8(0x0004)
	int                                                m_nGodTargeterPrevIndex;                                  // 0x06DC(0x0004)
	int                                                m_nGodTargeterPrevPawnId;                                 // 0x06E0(0x0004)
	struct FString                                     m_sGodTargeterDesc;                                       // 0x06E4(0x0010) (NeedCtorLink)
	int                                                m_nMorriganTargeterPrevBotId;                             // 0x06F4(0x0004)
	class UGFxObject*                                  m_nMorriganPassiveMeterTarget;                            // 0x06F8(0x0008)
	int                                                m_nPracticeQueueSkinId;                                   // 0x0700(0x0004)
	struct FTgLobbyStates                              c_PrevStates;                                             // 0x0704(0x0010)
	struct FTgLobbyStates                              c_CurrStates;                                             // 0x0714(0x0010)
	class UAlienFXManager*                             m_AlienFX;                                                // 0x0724(0x0008)
	struct FLeaderboardOpenData                        m_LeaderboardDelayedOptions;                              // 0x072C(0x0018) (NeedCtorLink)
	class UTgGfxGameInputInterceptor*                  m_pGameInputIntercept;                                    // 0x0744(0x0008)
	class UTgIntervalManager*                          m_pIntervalManager;                                       // 0x074C(0x0008)
	class UTgEsportsManager*                           m_pESportsManager;                                        // 0x0754(0x0008)
	struct FTgPurchaseRequest                          m_StoredPurchaseRequest;                                  // 0x075C(0x0028)
	float                                              m_fMatchingRemainingTimer;                                // 0x0784(0x0004)
	float                                              m_fStatusCheckTimer;                                      // 0x0788(0x0004)
	int                                                m_friendsAutoView;                                        // 0x078C(0x0004)
	struct FPointer                                    m_pTgCallbackDevice;                                      // 0x0790(0x0008) (Native)
	struct FPointer                                    m_pKeybindLookup;                                         // 0x0798(0x0008) (Native)
	float                                              m_fMatchCheckTimer;                                       // 0x07A0(0x0004)
	unsigned char                                      UnknownData01[0x48];                                      // 0x07A4(0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgMoviePlayer.m_mapPrivilegeChecks
	struct FTgIntervalEntry                            m_privDelay;                                              // 0x07EC(0x0028) (NeedCtorLink)
	struct FString                                     m_CustomQueueTarget;                                      // 0x0814(0x0010) (NeedCtorLink)
	TArray<struct Fdword>                              m_cachedGiftsRedeemedIds;                                 // 0x0824(0x0010) (NeedCtorLink)
	float                                              m_fBlockBackLockoutTime;                                  // 0x0834(0x0004)
	class UTgVirtualKeyboard*                          m_pVirtualKeyboard;                                       // 0x0838(0x0008)
	class UTgGFxItemHelperBinding*                     m_pGFxItemHelper;                                         // 0x0840(0x0008)
	TArray<struct FTgReferralEntry>                    m_arrReferrals;                                           // 0x0848(0x0010) (NeedCtorLink)
	int                                                m_nTutorialEntryTries;                                    // 0x0858(0x0004)
	float                                              m_fLoadHudTimer;                                          // 0x085C(0x0004)
	TArray<struct FTgNavProperties>                    m_arrNavProperties;                                       // 0x0860(0x0010) (NeedCtorLink)
	struct FString                                     m_cachedFailedJoinChallengeSessionGuid;                   // 0x0870(0x0010) (NeedCtorLink)
	struct FString                                     m_passwordForFailedJoinChallenge;                         // 0x0880(0x0010) (NeedCtorLink)
	class UTgAnnouncerPreviewer*                       m_AnnouncerPreview;                                       // 0x0890(0x0008)
	struct FTgReportPlayer                             m_ReportPlayer;                                           // 0x0898(0x0044) (NeedCtorLink)
	class UOnlineSubsystem*                            OnlineSub;                                                // 0x08DC(0x0008)
	TScriptInterface<class UOnlinePlayerInterface>     PlayerInterface;                                          // 0x08E4(0x0010)
	TScriptInterface<class UOnlineGameInterface>       GameInterface;                                            // 0x08F4(0x0010)
	TScriptInterface<class UOnlinePlayerInterfaceEx>   PlayerInterfaceEx;                                        // 0x0904(0x0010)
	TScriptInterface<class UOnlineMarketplaceInterface> MarketplaceInterface;                                     // 0x0914(0x0010)
	TScriptInterface<class UOnlineVoiceInterface>      VoiceInterface;                                           // 0x0924(0x0010)
	TScriptInterface<class UOnlineContentInterface>    ContentInterface;                                         // 0x0934(0x0010)
	struct FScriptDelegate                             __OnPrivilegeCallback__Delegate;                          // 0x0944(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0944(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgMoviePlayer");
		return ptr;
	}


	void STATIC_usc_PauseGame(bool shouldPause);
	void STATIC_usc_minimap_hovered(float X, float Y, const struct FString& MapName);
	void STATIC_usc_minimap_pinged(float X, float Y, const struct FString& Type, const struct FString& MapName);
	void STATIC_usc_PauseGameToggle();
	bool STATIC_usc_isAllowedPause();
	bool IsAccountPickerOpen();
	void usc_ShowContentPurchaseUI(const struct FString& SignedOffer);
	void GetAvailableProducts(int nControllerId, TEnumAsByte<EMediaItemType> MediaType, TArray<struct FMarketplaceProductDetails>* Products);
	void ShowContentPurchaseUI(const struct FString& SingedOffer);
	void GetInventoryItems(TArray<struct FMarketplaceInventoryItem>* InventoryItems);
	bool CanShowContentPurchaseUI();
	bool UnregisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex);
	bool RegisterLocalTalker(unsigned char LocalUserNum, unsigned char ChannelIndex);
	void ShowNotification(int nType, const struct FString& Message, const struct FString& Message2, class UGFxObject* Data);
	void HideNotification(int nType);
	void STATIC_TestShowNotification();
	void STATIC_TestHideNotification();
	void LogFocus();
	void SetGamepadMode(bool bIsGamepad);
	void SetModal(class UGFxObject* modalObj);
	void ClearModal();
	void EndLoading(const struct FString& KeyName);
	void StartLoading(const struct FString& KeyName);
	void GainFocus(class UGFxObject* focusObj);
	void FindFocus();
	void RegainFocus();
	void LostFocus();
	void SetOnlineStatus(unsigned char LocalUserNum, const struct FString& StatusString, bool PlayerActive);
	void DisableVideoRecording();
	void EnableVideoRecording();
	int STATIC_usc_get_gamestate();
	void STATIC_UIDebugModeEnd();
	void STATIC_UIDebugModeWatch(const struct FString& sPath, int nDrillInDepth);
	void STATIC_UIDebugModeNavigation();
	void STATIC_UIDebugModeHighlight(bool mousableOnly);
	void STATIC_ToggleAlienFX();
	void FlashCaptureMouse();
	void FlashReleaseMouse();
	void ListOpenScenes();
	void CloseAllScenes();
	void EnableItemWarningPopup();
	void DisableItemWarningPopup();
	void ClosePartyInviteDialog();
	void DisplayLoginUI();
	bool ShouldBlockKey(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> Event);
	void STATIC_usc_ClipboardCopy(const struct FString& Str);
	struct FString STATIC_usc_ClipboardPaste();
	void STATIC_OnPlayerCardComplete(bool bWasSuccessful);
	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void ReadOnlinePlayerData(TArray<struct FString> PlayerIDs, bool bIncludePresence);
	void CleanupUC();
	void InitOSSRef();
	void Init(class ULocalPlayer* LocPlay);
	void PostWidgetInit();
	void Tick(float DeltaTime);
	void STATIC_usc_findIndicesForCapitalSizeCharacters(const struct FString& sourceText, class UGFxObject* out_capitalIndices);
	void STATIC_usc_report_player(const struct FString& sPlayerName, int nReasonCode, const struct FString& sReason, int nTaskForce, int nPlayerCount, int nReportedPlayerTaskForce);
	void DebugSimulmediaVideoPlayer();
	void DebugIntroVideo();
	void DebugActivities();
	bool STATIC_usc_GetAppSettings(const struct FString& pSetting);
	void STATIC_OnClearCachedJoinChallengeTimer();
	void STATIC_OnJoinChallengePasswordPopup(class UTgPagePopup* pData, struct FPopupResponse* Response);
	void STATIC_FlushKeyboardBinds();
	void STATIC_ToggleInputConfirm(bool bEnable);
	void STATIC_TestInputHud(bool isGamePad);
	void ForcePSPlus(bool bShouldForce);
	void STATIC_usc_MuteVivoxPlayer(const struct FString& sPlayerId, bool Toggle, const struct FString& sPlatformId);
	void STATIC_OnReferralSelected(class UTgEventDataItem* pEvent);
	bool STATIC_usc_GetFinalInputMatchSetting();
	bool STATIC_usc_GetFinalCrossplaySetting();
	bool STATIC_ShowGodPackPurchase();
	bool GetOwnsGodPack();
	void DestroyVideoPlayer();
	void OnVideoError(class APComVideoPlayer* VideoPlayer, TEnumAsByte<EPComVideoPlayerError> ErrorCode);
	void SpawnVideoPlayer(class AActor* SpawningActor);
	void STATIC_PrintUIGameInputIntercepts();
	void STATIC_PrintInputCaptures();
	void STATIC_PrintFocusStack();
	void STATIC_PrintGameInfo();
	void NativeVideoPlayerDestroy();
	void HandleVideoPlayerErrorCallback(class APComVideoPlayer* VideoPlayer, TEnumAsByte<EPComVideoPlayerError> ErrorCode);
	bool CheckForGlobalKeyInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> Event);
	void STATIC_OnToggleSkillScreen(class UTgEventDataItem* pEvent);
	void STATIC_OnVendorStoreToggle(class UTgEventDataItem* pEvent);
	void STATIC_OnVendorStoreClose(class UTgEventDataItem* pEvent);
	void STATIC_OnVendorStoreOpen(class UTgEventDataItem* pEvent);
	void STATIC_usc_NativeLog(const struct FString& sValue);
	bool STATIC_usc_getIsGamePadInput();
	void STATIC_usc_saveTransformSettings(const struct FString& TransformSettings);
	struct FString STATIC_usc_loadTransformSettings();
	void STATIC_OnVideoPlaybackEnded();
	bool STATIC_usc_ShowKeyboardUI(class UGFxObject* FocusedTextField, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	bool STATIC_usc_HideKeyboardUI();
	bool STATIC_usc_IsShowingKeyboardUI();
	void STATIC_OnResolveChatMessage(bool bSuccess, class UTgPlayerNameManager* pManager);
	void STATIC_OpenPurchaseGems(const struct FString& SKUCode);
	void ClaimPendingChatMessages(TArray<class UTgChatData*>* out_arrData);
	void STATIC_ShowHudChatMessage(class UTgChatData* pData);
	void STATIC_TestShowMessage(const struct FString& msg);
	void STATIC_gfxProcessSound(const struct FName& aThemeName, const struct FName& aEventName);
	void STATIC_OnBattlePassToastUpdate(class UTgEventDataItem* pEvent);
	void STATIC_OnInputModeChanged(class UTgEventDataItem* pEvent);
	void HandleClanPlayerInviteUpdates(const struct FPointer& pEvent);
	bool STATIC_usc_send_chat(int nChannel, const struct FString& msg, const struct FString& Recipient);
	bool STATIC_usc_can_view_ugc();
	void ASC_ShowFriendsUI();
	void STATIC_SetupPurchaseWithProductId(const struct FString& sProductId);
	void ClaimGift(const struct FString& nAcqId);
	void STATIC_TestListPendingGifts();
	void STATIC_TestSendGift(int nPlayerId, int nMessageIndex, bool bAnon);
	struct FString FixLocalizationKeybinds(const struct FString& sMsg);
	class UTgGFxPlayerData* GetPlayerData(struct FTgPlayerId* pid);
	void AttemptToJoinTutorial(float DeltaTime);
	void CallPrivilegeDelegate(const struct FScriptDelegate& delCallback, TEnumAsByte<EFeaturePrivilege> ePriv, TEnumAsByte<EFeaturePrivilegeLevel> ePermiss);
	void CheckOnlinePrivileges(TEnumAsByte<EFeaturePrivilege> ePriv, const struct FScriptDelegate& delCallback);
	void CancelCheckOnlinePrivileges(class UObject* pScope);
	void STATIC_OnVGSCustomMessage(bool bSuccess, const struct FString& sText);
	void STATIC_TryEstablishPlatformSession(const struct FPointer& pMarshal);
	void STATIC_OnForceMatchDataUpdate(class UTgEventDataItem* pEvent);
	void STATIC_OnMatchDataChange(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveMatchData(const struct FPointer& pMarshal);
	bool STATIC_UnregisterLocalPlayerForVoice(unsigned char ChannelIndex);
	bool STATIC_RegisterLocalPlayerForVoice(unsigned char ChannelIndex);
	void STATIC_UpdateCameraBasedOnNavAction();
	void EquipLoadoutItem(int nItemId);
	void NavigateTo(struct FNavParams* Params);
	void HandleEscapeKey();
	void STATIC_usc_goto_item(int nItemId, bool bUseAltRedirect);
	void GotoItem(int nItemId, int nReturnToTarget, int nReturnToEvent, bool bUseAltRedirect);
	bool STATIC_RedirectToItemObtainLocation(int nItemId);
	bool STATIC_ShowGodVideo(int nGodVideoId, const struct FString& sGodVideoUrl);
	void goto_lobby(bool bAtEOM);
	class UTgGFxObject* GetRoot();
	class UGFxObject* GetWidget(const struct FName& WidgetName);
	void STATIC_TestMatchLobby(int nQueue, bool bPreSelect, int nTeamCount, int nPlayerPerTeam);
	struct FString GetHUDTeamName(bool bEnemy);
	void STATIC_SetLanguage();
	void STATIC_ShowLoginMessage(const struct FString& sMsg);
	void STATIC_ShowLoginUI();
	void STATIC_ShowNormalUI();
	struct FIntStringPair GetAndClearLastLoginError();
	void STATIC_TestClearDeferBlacklist();
	bool STATIC_TestAddDeferBlacklistEntry(int newEntry);
	void STATIC_TestDeferBlacklist(bool bQueue);
	void STATIC_TestShowPopupModal(int nType);
	void STATIC_TestSendPlayerTrackingEvent(int nEvent, int nSubEvent, const struct FString& sRefName, int nRefValue);
	void STATIC_TestPurchaseClanNameChange(const struct FString& sName, const struct FString& sTag);
	void STATIC_TestShowAcquisition(int nType, int nLootId);
	void STATIC_SendCloseAllPopup();
	void SendClosePopup();
	void SendOpenPopup(class UTgPagePopup* pPopup);
	void STATIC_SetSceneLoadPermissions(const struct Fdword& fPermiss);
	void STATIC_PlayerLoginError(int nError, const struct FString& sMessage);
	void STATIC_SetLoginReady(bool fromIntro);
	void STATIC_OnLobbyStateChange(class UTgEventDataItem* pEvent);
	void STATIC_OnHUDStateChange(class UTgEventDataItem* pEvent);
	void STATIC_OnSpectateFail(class UTgEventDataItem* pEvent);
	struct FString STATIC_USC_GetCurrencyName(int nCurrencyValidValue);
	int STATIC_usc_getConsolePlatform();
	bool STATIC_usc_isConsole();
	void AttemptAutoLogin();
	void STATIC_usc_acceptEULA();
	bool STATIC_usc_createPlayerName(const struct FString& sLoginName, const struct FString& sPass, const struct FString& sNewPlayerName);
	bool STATIC_USC_Login(const struct FString& sUsername, const struct FString& sPassword);
	bool STATIC_USC_LoginExits();
	bool STATIC_usc_isLoginReady();
	void STATIC_USC_ShowEndOfMatch(bool bShow);
	void UpdateVoiceChatPlayer(const struct FString& sPId, bool bIsActive, bool bIsSpeaking);
	void STATIC_usc_toggle_voice_mute(const struct FString& sConsoleId, int nPortalType, const struct FString& sPlayerName, const struct FString& sPlayerId, bool bMute);
	void STATIC_usc_toggle_player_mute(const struct FString& ConsoleIdString, const struct FString& PlayerName, const struct FString& sPlayerId);
	bool STATIC_usc_add_to_party(const struct FString& sConsoleId, int nPortalType, const struct FString& sPlayerId, const struct FString& sPlayerName);
	bool STATIC_usc_can_invite_to_party(const struct FString& sPlayerId);
	bool STATIC_usc_add_to_clan(const struct FString& sConsoleId, int nPortalType, const struct FString& sPlayerId, const struct FString& sPlayerName);
	bool STATIC_usc_can_invite_to_clan(const struct FString& sPlayerId);
	float STATIC_usc_get_queue_timer(int nQueueId);
	bool STATIC_usc_can_cancel_spectate();
	void STATIC_usc_disconnect();
	void STATIC_usc_CancelQueue();
	bool is_item_owned(int ItemId);
	bool STATIC_SetUIDisplayMode(int displayMode);
	class UGFxObject* STATIC_usc_getItemData(int ItemId, int quantityCount, int vendorId);
	void STATIC_usc_Scene_Manager_Scene_Unloaded(const struct FString& sSceneName);
	void STATIC_usc_Scene_Manager_Scene_Loaded(const struct FString& sSceneName);
	void STATIC_update_player_mute();
	void STATIC_TryToggleMute(bool bShouldMute);
	void STATIC_ShowPopupMessage(const struct FString& sTitle, const struct FString& sMessage);
	void STATIC_ShowErrorMessage(const struct FString& sTitle, const struct FString& sMessage, bool _user_must_close);
	void STATIC_SetHUDVisiblity();
	void STATIC_OnDemoReady();
	void AddRecentlyInvited(struct FTgPlayerId* pid);
	int GetRecentlyInvitedTimeRemain(struct FTgPlayerId* pid);
	bool HasRecentlyInvited(struct FTgPlayerId* pid);
	bool STATIC_usc_isItemEquippable(int nItemId);
	bool STATIC_usc_isItemEquipped(int nItemId);
	int STATIC_usc_GetActiveGamepadIndex(int nPlayerIndex);
	int STATIC_usc_RegisterCardTexture(class UGFxObject* Widget, int nItemId, float X, float Y, float Width, float Height, bool bOnlyIfMat);
	class UGFxObject* GetTestNotificationData();
	void STATIC_usc_UnregisterCardTextureById(int nCardId);
	void STATIC_usc_UnregisterCardTexture(class UGFxObject* Widget);
	void STATIC_StartBatchPurchaseRequest();
	void GetFeedback(int nType);
	void CompleteBatchPurchaseRequest();
	void AddBatchPurchaseRequest(int nVendorId, int nItemId, int nPriceInUI, int nCurrencyType, int nQuantity, const struct Fdword& locationId, int nCouponId);
	struct FString STATIC_usc_get_class_purchase_pricing(int nClassId);
	struct FString STATIC_usc_GetGameName();
	int GetSysCounterValue(int nCounterId);
	int GetPortalType();
	bool STATIC_usc_is_time_between(const struct FString& Start, const struct FString& End);
	bool STATIC_usc_isFriend(const struct FString& sPlayerId);
	bool STATIC_usc_is_party_leader();
	bool STATIC_usc_can_invite_players();
	bool STATIC_usc_ableToSkipTutorial();
	void STATIC_usc_watch_eom_replay(const struct FString& sInstanceId);
	void STATIC_usc_remove_music_theme(int nItemId, const struct FString& sEventName);
	void STATIC_usc_add_music_theme(int nItemId, const struct FString& sEventName);
	void STATIC_usc_test_music_theme(int nItemId, const struct FString& sEventName);
	void STATIC_usc_show_god_detail(int nClassId);
	void STATIC_usc_request_goto_lobby(const struct FString& Title, const struct FString& Desc);
	void STATIC_usc_redeem_login_bonus();
	void STATIC_usc_queue_create_team(int nQueueId, const struct FString& sPassword);
	void STATIC_usc_onServerStabilityFeedback();
	void STATIC_usc_match_suggest_pick(int nClassId);
	void STATIC_usc_match_suggest_ban(int nClassId);
	void STATIC_usc_match_cancel_role_trade();
	void STATIC_usc_match_request_role_trade(const struct FString& sPlayerId);
	void STATIC_usc_match_request_trade(const struct FString& sPlayerId);
	void STATIC_usc_match_request_random_class();
	void STATIC_usc_match_purchase_voice_pack(int nVoicePackItemId);
	void STATIC_usc_match_close_random_class_popup();
	void STATIC_usc_match_cancel_trade();
	void STATIC_usc_match_ban_class(int nClassId);
	void STATIC_usc_kick_team_player(const struct FString& sPlayerName);
	void STATIC_usc_introFinished();
	void STATIC_Replay(int nInstanceId, const struct FString& sPassword);
	void ChangeHudSection(const struct FString& Section, float percentX, float percentY, float Scale, float dockX, float dockY, const struct FString& dockObj, float dockObjX, float dockObjY, bool outX, bool outY);
	struct FString STATIC_usc_GetHudSkinPath();
	class UGFxObject* STATIC_usc_get_date_est();
	int STATIC_usc_get_time();
	int STATIC_usc_get_server_time_secs();
	int STATIC_usc_get_server_time();
	int STATIC_usc_SyncMorriganPassiveMeter(class UGFxObject* passiveMeter);
	int STATIC_usc_GetRentedTimeLeft(int nItemId, int nIdType);
	bool STATIC_usc_resize_browser(int surfaceId, float X, float Y, float Width, float Height, float widthReal, float heightReal);
	bool STATIC_usc_match_can_purchase_random_class(int nQueueId);
	bool STATIC_usc_is_item_owned(const struct FString& ItemId);
	bool STATIC_usc_is_in_game();
	bool STATIC_usc_isInTutorial();
	bool STATIC_usc_isInSiege();
	bool STATIC_usc_isCapsLockActive();
	bool STATIC_usc_can_play_again();
	bool STATIC_usc_IsGameBit(int iGB);
	bool STATIC_usc_ConfirmHudSkin(int nId);
	void STATIC_usc_viewStatsOnline(const struct FString& sInstanceId);
	void STATIC_usc_upgrade_item(int nItemId, int nUpgradeInvId);
	void STATIC_usc_unregister_mouse_region(const struct FString& Key);
	void STATIC_usc_test_voice_pack(int nVoicePackId, int nSkinId);
	void STATIC_usc_test_announcer_pack(int nItemId);
	void STATIC_usc_surrender(bool bSurrender);
	void STATIC_usc_show_skin(int nSkinId);
	void STATIC_usc_set_auto_skill_up(bool bAutoSkill, bool bForMatch);
	void STATIC_usc_set_auto_purchase(bool bAutoPurchase, bool bForMatch);
	void STATIC_usc_sell_item(int nInventoryId);
	void STATIC_usc_resend_private_messages();
	void STATIC_usc_request_treasure_roll(int nItemId, int CurrencyType);
	void STATIC_usc_keep_me_logged_in(bool bNewValue);
	void STATIC_usc_rejectNotification(int nNotificationType, int nId);
	void STATIC_usc_register_mouse_region(const struct FString& Key, int X, int Y, int Width, int Height);
	void STATIC_usc_redeem_reward(int nActId, int nGoalId, int nCount);
	void STATIC_usc_queue_leave();
	void STATIC_usc_purchase_item(int nItemId, int nAmount);
	void STATIC_usc_play_again();
	void STATIC_usc_passwordInputFocus();
	void STATIC_usc_open_triumph_chest(int nLootTableItemId);
	void STATIC_usc_nameInputFocus();
	void STATIC_usc_match_lock_in();
	void STATIC_usc_match_choose_skin(int nSkinId);
	void STATIC_usc_match_choose_class(int nClassId);
	void STATIC_usc_friend_action(const struct FString& sType, const struct FString& sPlayerId);
	void STATIC_usc_enable_browser_input(bool bEnable);
	void STATIC_usc_close_eom_lobby(int nNavigationTarget);
	void STATIC_usc_clearLeagueDC();
	void STATIC_usc_attempt_auto_login();
	void STATIC_usc_acceptNotification(int nNotificationType, int nId);
	void STATIC_usc_Accept_Match_Invite();
	void UnloadHudSection(const struct FString& Section);
	void STATIC_USC_ShowLeaderboard(const struct FString& sName, int nValue, int nOption);
	void STATIC_SetSpecTeamName(bool bEnemy, const struct FString& TeamName);
	void STATIC_SetSpecState(const struct FString& stateString);
	void EndLobbyPlayback();
	void CancelPlayback();
	void STATIC_USC_SelectedPopup(int nActionId, const struct FString& sInputValue, const struct FString& sSecondaryInputValue);
	bool STATIC_TryPopupCallback(int nActionId, const struct FString& sInputValue, const struct FString& sSecondaryInputValue);
	void AddInitialChatMessages();
	void FakeItemToast(int nItemId);
	void CloseChatTab(int nChannel, const struct FString& sSender);
	void STATIC_OpenChatTab(int nChannel, bool bForce);
	void STATIC_UpdateMapBackground();
	void AttemptAutoReplayDemoRecording();
	void STATIC_usc_chat_ready();
	void STATIC_usc_vgs_command(int nId, bool bSubMenu);
	void STATIC_usc_chat_close_tab(int nChannel, const struct FString& Sender);
	int STATIC_usc_get_sellback_price(int nItemId);
	int STATIC_usc_full_sellback_available(int nItemId);
	void STATIC_usc_set_chat_channel(int nChannel);
	void AddRemoveDeferredChannelTab(bool bAdd, int nChannelId);
	bool STATIC_usc_can_view_user_content();
	void STATIC_UnregisterForJSON(class UPComUIManagerBase* pRegistrant, const struct FString& sJsonName);
	void STATIC_RegisterForJSON(class UPComUIManagerBase* pRegistrant, const struct FString& sJsonName);
	void STATIC_UnregisterMctsCallbacks();
	void STATIC_RegisterMctsCallbacks();
	void STATIC_OpenWorldScene(const struct FString& CameraName, int cameraTransitionType);
	bool STATIC_usc_IME_Exists();
	bool STATIC_usc_IME_SetEnabled(bool bEnabled);
	void STATIC_usc_view_player_profile(const struct FString& sPlayerId, const struct FString& sPlayerName, const struct FString& sProfileTab);
	void STATIC_usc_view_platform_player_card(const struct FString& sPlayerId, const struct FString& sPlayerName);
	void STATIC_UpdatePromptMode(class UGFxObject* pObj);
	void STATIC_SetButtonPromptMode(int nMode);
	bool STATIC_usc_HasPlayerLogin();
	struct FString STATIC_usc_getFontSize(const struct FString& Identifier, const struct FString& SectionName);
	struct FString STATIC_usc_TranslateMsg(const struct FString& Identifier, const struct FString& SectionName);
	struct FString STATIC_usc_TranslateMsgId(int nId);
	void STATIC_ShowTransitionScene(bool bShow);
	bool STATIC_usc_is_safe_to_load(const struct FString& sUrl);
	void STATIC_usc_toggle_key_capture(bool bCapture);
	void STATIC_usc_toggle_cursor(bool bShow, bool bOnlyVisibility);
	void STATIC_usc_quit();
	void STATIC_usc_Console_Command(const struct FString& Cmd);
	void STATIC_usc_Scene_Manager_Created();
	void STATIC_usc_Event_Mediator_Created();
	void STATIC_usc_Data_Handler_Created();
	void GotoSendGift(const struct FPointer& pPID);
	void STATIC_ProcessUIEvents();
	void STATIC_UIChangeEvent(class AActor* refActor, TEnumAsByte<EUIChangeEvent> Event, bool bUnique, int subType);
	void UnregisterEngineCallbacks();
	void STATIC_RegisterEngineCallbacks();
	struct FString GetKeyBindText(const struct FString& Command, int nAlternate, bool bUseLookup);
	struct FString GetTranslatedSpecKeyBind(const struct FString& Command, int nAlternate, bool bUseLookup);
	struct FString GetTranslatedKeyBind(const struct FString& Command, int nAlternate, bool bUseLookup);
	void STATIC_UpdateViewportForSafeAreas();
	void STATIC_OnMatchTimeout(float nDeltaTime);
	void NativeTick(float DeltaTime);
	void OnClose();
	void PostInit();
	void InitializeSceneManager();
	void InitializeDataHandler();
	class UTgDataGroup_Settings* GetSettingsData();
	class UTgDataGroup_EOMLobby* GetEOMLobbyData();
	class UTgLobbyDC_BattlePass* GetBattlePassDataChunk();
	class UTgLobbyDC_Inventory* GetLobbyInventoryDataChunk();
	class UTgGameDC_Player* GetCharacterBuilderData();
	class UTgLobbyDC_Lobby* GetLobbyDataChunk();
	class UTgLobbyDC_Match* GetMatchDataChunk();
	class UTgDataGroup_Lobby* GetLobbyData();
	class UTgDataGroup_Game* GetGameData();
	class UTgUIServerStates* GetStateInfo();
	class UTgEsportsManager* GetESportsManager();
	class UTgDeferManager* GetDeferManager();
	class UTgIntervalManager* GetIntervalManager();
	class UTgEventDispatcher* STATIC_GetDispatcher();
	class ATgClientHUD* GetHUD();
	class ATgPlayerController* STATIC_GetPlayerOwner();
	void OnPrivilegeCallback(TEnumAsByte<EFeaturePrivilege> ePriv, TEnumAsByte<EFeaturePrivilegeLevel> ePermiss);
};


// Class TgClientBase.TgBrowserManager
// 0x00A0 (0x0100 - 0x0060)
class UTgBrowserManager : public UPComBrowserManager
{
public:
	class UTgMoviePlayer*                              m_pMovie;                                                 // 0x0060(0x0008)
	struct FString                                     URLGold;                                                  // 0x0068(0x0010) (NeedCtorLink)
	struct FString                                     URLCreateAccount;                                         // 0x0078(0x0010) (NeedCtorLink)
	struct FString                                     URLRecoverPassword;                                       // 0x0088(0x0010) (NeedCtorLink)
	struct FString                                     URLRecoverUsername;                                       // 0x0098(0x0010) (NeedCtorLink)
	struct FString                                     URLGodPack;                                               // 0x00A8(0x0010) (NeedCtorLink)
	struct FString                                     URLFacebookPromo;                                         // 0x00B8(0x0010) (NeedCtorLink)
	struct FString                                     URLTwitterPromo;                                          // 0x00C8(0x0010) (NeedCtorLink)
	struct FString                                     URLRecruitPromo;                                          // 0x00D8(0x0010) (NeedCtorLink)
	struct FString                                     URLReferLinkup;                                           // 0x00E8(0x0010) (NeedCtorLink)
	class UTgGFxBrowser*                               m_container;                                              // 0x00F8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgBrowserManager");
		return ptr;
	}


	void OpenWebPage(int pageType, bool bExternal, bool bShowNavButtons, bool bAddLang);
	struct FString GetURLByPageType(int pageType);
	void OpenWebPageWithTarget(int pageType, const struct FString& urlTarget, bool bExternal, bool bShowNavButtons);
	void STATIC_SetContainer(class UTgGFxBrowser* pContainer);
	void STATIC_ResizeView();
	void Close();
	void STATIC_OpenVideo(const struct FString& URL);
	void OpenURL(const struct FString& URL, bool bShowNavButtons, bool bSetFocus);
	void ExternalOpenURL(const struct FString& URL, bool bAddLang);
	void STATIC_OnLobbyStateChange(class UTgEventDataItem* pEvent);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	bool IsBrowserLoaded();
};


// Class TgClientBase.TgButtonPromptEvent
// 0x0008 (0x007C - 0x0074)
class UTgButtonPromptEvent : public UTgEventDataItem
{
public:
	struct FPointer                                    m_buttonPrompts;                                          // 0x0074(0x0008) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgButtonPromptEvent");
		return ptr;
	}

};


// Class TgClientBase.TgCanvasDrawInterface
// 0x0000 (0x0060 - 0x0060)
class UTgCanvasDrawInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgCanvasDrawInterface");
		return ptr;
	}


	void DrawCanvas(class UCanvas* pCanvas);
};


// Class TgClientBase.TgChangeHudSectionEvent
// 0x0040 (0x00B4 - 0x0074)
class UTgChangeHudSectionEvent : public UTgEventDataItem
{
public:
	struct FTgHudSectionInfo                           Info;                                                     // 0x0074(0x0040) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgChangeHudSectionEvent");
		return ptr;
	}

};


// Class TgClientBase.TgChatData
// 0x00A0 (0x0100 - 0x0060)
class UTgChatData : public UObject
{
public:
	int                                                m_nId;                                                    // 0x0060(0x0004)
	int                                                m_nSoundId;                                               // 0x0064(0x0004)
	int                                                m_nChannel;                                               // 0x0068(0x0004)
	unsigned long                                      m_bWarning : 1;                                           // 0x006C(0x0004)
	unsigned long                                      m_bFeedback : 1;                                          // 0x006C(0x0004)
	unsigned long                                      m_bHideSender : 1;                                        // 0x006C(0x0004)
	unsigned long                                      m_bNew : 1;                                               // 0x006C(0x0004)
	unsigned long                                      m_bIsVGS : 1;                                             // 0x006C(0x0004)
	unsigned long                                      m_bOnlyIfOpen : 1;                                        // 0x006C(0x0004)
	struct FString                                     m_sSender;                                                // 0x0070(0x0010) (NeedCtorLink)
	struct FString                                     m_sMessage;                                               // 0x0080(0x0010) (NeedCtorLink)
	struct FString                                     m_sTimestamp;                                             // 0x0090(0x0010) (NeedCtorLink)
	struct FString                                     m_sSenderColor;                                           // 0x00A0(0x0010) (NeedCtorLink)
	struct FString                                     m_sSenderClass;                                           // 0x00B0(0x0010) (NeedCtorLink)
	struct FString                                     m_sMessageColor;                                          // 0x00C0(0x0010) (NeedCtorLink)
	struct FString                                     m_ColorVGS;                                               // 0x00D0(0x0010) (NeedCtorLink)
	struct FString                                     m_ColorWarn;                                              // 0x00E0(0x0010) (NeedCtorLink)
	struct FString                                     m_sWarningToken;                                          // 0x00F0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgChatData");
		return ptr;
	}


	struct FString TokenReplace(const struct FString& Message, const struct FString& Token, const struct FString& sValue);
	bool CheckWarning(const struct FString& Message);
};


// Class TgClientBase.TgChatEvent
// 0x0044 (0x00B8 - 0x0074)
class UTgChatEvent : public UTgEventDataItem
{
public:
	int                                                nChatEvent;                                               // 0x0074(0x0004)
	struct FString                                     sMessage;                                                 // 0x0078(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sPlayerName;                                              // 0x0088(0x0010) (AlwaysInit, NeedCtorLink)
	struct FQWord                                      nPlayerId;                                                // 0x0098(0x0008)
	struct Fdword                                      nMessageId;                                               // 0x00A0(0x0004)
	int                                                nChatChannel;                                             // 0x00A4(0x0004)
	int                                                nTime;                                                    // 0x00A8(0x0004)
	int                                                nFlags;                                                   // 0x00AC(0x0004)
	struct FPointer                                    pMarshal;                                                 // 0x00B0(0x0008) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgChatEvent");
		return ptr;
	}

};


// Class TgClientBase.TgClientBaseHUD
// 0x0000 (0x0588 - 0x0588)
class ATgClientBaseHUD : public ATgHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgClientBaseHUD");
		return ptr;
	}

};


// Class TgClientBase.TgClientHUD
// 0x0068 (0x05F0 - 0x0588)
class ATgClientHUD : public ATgClientBaseHUD
{
public:
	struct FPointer                                    m_pTgCallbackDevice;                                      // 0x0588(0x0008) (Native)
	TArray<TScriptInterface<class UTgCanvasDrawInterface>> m_arrPostRenders;                                         // 0x0590(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UGFxMoviePlayer*>                     m_MoviePlayers;                                           // 0x05A0(0x0010) (AlwaysInit, NeedCtorLink)
	class UTgMoviePlayer*                              m_pMovie;                                                 // 0x05B0(0x0008) (AlwaysInit)
	class UClass*                                      m_MainMovieClass;                                         // 0x05B8(0x0008)
	struct Fdword                                      m_nHudState;                                              // 0x05C0(0x0004)
	unsigned long                                      m_bEOMLWasInTraining : 1;                                 // 0x05C4(0x0004)
	TArray<struct FSceneInfo>                          m_ScenePaths;                                             // 0x05C8(0x0010) (NeedCtorLink)
	class UTgDevMenuMoviePlayer*                       m_DevMenu;                                                // 0x05D8(0x0008) (AlwaysInit)
	struct FString                                     m_BulletToken;                                            // 0x05E0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgClientHUD");
		return ptr;
	}


	struct FString GetBulletPoint(int Index, const struct FString& Message);
	int GetGameState();
	void KillScene(const struct FString& SceneName);
	void ToggleScene(const struct FString& SceneName);
	void UnloadScene(const struct FString& SceneName);
	void LoadScene(const struct FString& SceneName);
	void Tick(float DeltaTime);
	void LogState(const struct FString& sName);
	void PostBeginPlay();
	void PostRender();
	void STATIC_OnEscapePressed();
	void STATIC_OnDisconnect();
	void STATIC_NotifyLobbyStateChange();
	void STATIC_SHC(bool bShow);
	void STATIC_ShowHardwareCursor(bool bShow);
	void STATIC_ToggleDevMenu();
	void STATIC_ToggleVGSScene();
	void STATIC_ToggleHUDScene(const struct FString& SceneName);
	void ToggleHUD();
	void STATIC_TestDidIt(int nActivityId, int nCount, int nGoalId);
	void UpdateSpectatorSettingsMenu();
	void UpdateKeyBindSettingsMenu(int settingtype);
	void STATIC_UpdateSpecKeyDisplay(const struct FString& Key);
	void STATIC_UpdateKeyDisplay(const struct FString& Key);
	void STATIC_gfxProcessSound(const struct FName& aThemeName, const struct FName& aEventName);
	bool IsInGame();
	bool IsLoggedIn();
	TEnumAsByte<ETgClientVisibilityMode> GetVisibilityMode();
	class UTgDataHandler* GetDataHandler();
	void NativePostRender();
	void STATIC_UnregisterForPostRender(const TScriptInterface<class UTgCanvasDrawInterface>& pObj);
	void STATIC_RegisterForPostRender(const TScriptInterface<class UTgCanvasDrawInterface>& pObj);
	void TutorialMessage(int msgId, bool bTips);
	void STATIC_ResetViewCenterPoint();
	void STATIC_SetViewCenterPoint(float X, float Y, float fScale);
	void DisplayBadConnectionAlert();
	void InitSceneManager();
	void InitMainMoviePlayer();
	void STATIC_ShowCursor(bool bShow, bool bUpdateCapture);
	void CloseMovie(class UGFxMoviePlayer* mp, bool bUnload);
	class UGFxMoviePlayer* CreateMovie(class UClass* MovieClass, bool bAutoFocus, bool bCaptureInput, TEnumAsByte<EGFxTimingMode> TimingMode, const struct FString& sMoviePath);
	void UnregisterEngineCallbacks();
	void STATIC_RegisterEngineCallbacks();
};


// Class TgClientBase.TgClientObject
// 0x0038 (0x0098 - 0x0060)
class UTgClientObject : public UObject
{
public:
	class UTgMoviePlayer*                              m_pMovie;                                                 // 0x0060(0x0008)
	struct FArray_Mirror                               MctsCallbackListeners;                                    // 0x0068(0x0010) (Const, Native)
	struct FArray_Mirror                               m_arrMctsEvents;                                          // 0x0078(0x0010) (Const, Native)
	TArray<struct FGameEventListener>                  GameEventListeners;                                       // 0x0088(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgClientObject");
		return ptr;
	}


	class UTgEventDispatcher* GetMovieDispatcher();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* pMoviePlayer);
};


// Class TgClientBase.TgAcquisitionManager
// 0x0080 (0x0118 - 0x0098)
class UTgAcquisitionManager : public UTgClientObject
{
public:
	struct FMultiMap_Mirror                            AcquisitionsNeedingVendors;                               // 0x0098(0x0048) (Const, Native)
	TArray<struct FUIQueuedAcquisition>                m_QueuedAcquisitions;                                     // 0x00E0(0x0010) (NeedCtorLink)
	TArray<struct FUIQueuedAcquisition>                m_QueuedAcquisitionsAlt;                                  // 0x00F0(0x0010) (NeedCtorLink)
	struct FPointer                                    m_FillingAcquisitionQueue;                                // 0x0100(0x0008) (Native)
	struct FPointer                                    m_ActiveAcquisitionQueue;                                 // 0x0108(0x0008) (Native)
	float                                              m_fAcquisitionProcessTime;                                // 0x0110(0x0004)
	unsigned long                                      m_bSquelchAcquisitions : 1;                               // 0x0114(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgAcquisitionManager");
		return ptr;
	}


	void AddQueuedAcquisition(struct FUIQueuedAcquisition* acqData);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgDeferManager
// 0x0028 (0x00C0 - 0x0098)
class UTgDeferManager : public UTgClientObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0098(0x0008) (Const, Native, NoExport)
	TArray<struct FTgDeferEntry>                       m_arrTasks;                                               // 0x00A0(0x0010) (AlwaysInit, NeedCtorLink)
	struct FScriptDelegate                             __OnDeferUpdate__Delegate;                                // 0x00B0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDeferManager");
		return ptr;
	}


	void CancelTask(class UTgDeferredTask* pTask);
	void STATIC_StartTask(class UTgDeferredTask* pTask, class UObject* pOwner, const struct FName& nmCallback);
	struct FTgDeferProgress GetProgress(class UTgDeferredTask* pTask);
	void ClearAllCallbacks(class UObject* pOwner);
	void ClearCallback(class UTgDeferredTask* pTask);
	void STATIC_SetAllCallbacks(class UObject* pOwner, const struct FName& nmCallback, TArray<struct FTgDeferTaskData>* arrTasks);
	int STATIC_SetCallback(class UTgDeferredTask* pTask, class UObject* pOwner, const struct FName& nmCallback);
	int GetTasks(class UObject* pOwner, TArray<struct FTgDeferTaskData>* out_arrData);
	bool IsTickable();
	void Tick(float nDeltaTime);
	void OnDeferUpdate(struct FTgDeferProgress* Progress);
};


// Class TgClientBase.TgDeferredTask
// 0x0000 (0x0098 - 0x0098)
class UTgDeferredTask : public UTgClientObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDeferredTask");
		return ptr;
	}


	void Tick(float nDeltaTime, struct FTgDeferProgress* Progress);
};


// Class TgClientBase.TgDeferDeclineFriendRequests
// 0x0030 (0x00C8 - 0x0098)
class UTgDeferDeclineFriendRequests : public UTgDeferredTask
{
public:
	TArray<struct Fdword>                              m_arrToDecline;                                           // 0x0098(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                m_nLastIndex;                                             // 0x00A8(0x0004)
	int                                                m_nUpdateCount;                                           // 0x00AC(0x0004)
	struct FQWord                                      m_nLastTime;                                              // 0x00B0(0x0008)
	struct FTgIntervalHandle                           m_FriendTimeout;                                          // 0x00B8(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDeferDeclineFriendRequests");
		return ptr;
	}


	void STATIC_OnFriendTimeout(float nDeltaTime);
	void STATIC_OnFriendUpdate(const struct FPointer& pEventBase);
	void Tick(float nDeltaTime, struct FTgDeferProgress* Progress);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgPopupManager
// 0x0030 (0x00C8 - 0x0098)
class UTgPopupManager : public UTgClientObject
{
public:
	TArray<class UTgPagePopup*>                        m_queued;                                                 // 0x0098(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UTgPagePopup*>                        m_dequeued;                                               // 0x00A8(0x0010) (AlwaysInit, NeedCtorLink)
	class UTgPagePopup*                                m_curPopup;                                               // 0x00B8(0x0008)
	unsigned long                                      m_bTempPopup : 1;                                         // 0x00C0(0x0004)
	unsigned long                                      m_bIsModalOpen : 1;                                       // 0x00C0(0x0004)
	float                                              m_nUpdateTime;                                            // 0x00C4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgPopupManager");
		return ptr;
	}


	void STATIC_OnQueueStateChange(class UTgEventDataItem* pEvent);
	void STATIC_OpenPopup();
	void STATIC_RemoveAllPopups();
	bool STATIC_RemovePopup();
	bool AddPopup(class UTgPagePopup* PopUp);
	void ClosePopup();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgRewardCenterManagerBase
// 0x00E0 (0x0178 - 0x0098)
class UTgRewardCenterManagerBase : public UTgClientObject
{
public:
	unsigned long                                      m_bHasSeenDealOfTheDay : 1;                               // 0x0098(0x0004)
	unsigned long                                      m_bPlayerLoggedIn : 1;                                    // 0x0098(0x0004)
	unsigned long                                      m_bDayHasRolledOver : 1;                                  // 0x0098(0x0004)
	unsigned long                                      m_bShouldSkipReturnBonus : 1;                             // 0x0098(0x0004)
	unsigned long                                      m_bHasQuestProgress : 1;                                  // 0x0098(0x0004)
	unsigned long                                      m_bHasQuestActivities : 1;                                // 0x0098(0x0004)
	unsigned long                                      m_bHasQuestRewards : 1;                                   // 0x0098(0x0004)
	unsigned long                                      m_bQuestsSeenToday : 1;                                   // 0x0098(0x0004)
	struct FDailyRewardInfo                            m_DailyReward;                                            // 0x009C(0x0014)
	TArray<struct FActivityGoal>                       m_pLevelUpGoals;                                          // 0x00B0(0x0010) (NeedCtorLink)
	int                                                m_nPlayerLevel;                                           // 0x00C0(0x0004)
	TArray<struct FGoalRewardItem>                     m_pReturningBonus;                                        // 0x00C4(0x0010) (NeedCtorLink)
	int                                                m_nPartyBonusStartTime;                                   // 0x00D4(0x0004)
	int                                                m_nPartyBonusEndTime;                                     // 0x00D8(0x0004)
	TArray<struct FPlayerPartyBonus>                   m_pPartyBonuses;                                          // 0x00DC(0x0010) (NeedCtorLink)
	TArray<struct FQuestData>                          m_QuestList;                                              // 0x00EC(0x0010) (NeedCtorLink)
	TArray<struct FQuestData>                          m_TrainingQuestList;                                      // 0x00FC(0x0010) (NeedCtorLink)
	TArray<struct FQuestData>                          m_SpecialEventQuestList;                                  // 0x010C(0x0010) (NeedCtorLink)
	TArray<struct FQuestData>                          m_ProgressedQuestList;                                    // 0x011C(0x0010) (NeedCtorLink)
	TArray<struct FQuestData>                          m_TempVisibleQuestList;                                   // 0x012C(0x0010) (NeedCtorLink)
	TArray<struct FCouponData>                         m_CouponList;                                             // 0x013C(0x0010) (NeedCtorLink)
	float                                              m_fNextCouponExpires;                                     // 0x014C(0x0004)
	TArray<struct FDailyBundleTrackingData>            m_DailyBundles;                                           // 0x0150(0x0010) (NeedCtorLink)
	int                                                m_LastSeenDeal;                                           // 0x0160(0x0004)
	int                                                m_LastGeneratedDealId;                                    // 0x0164(0x0004)
	struct FArray_Mirror                               PendingGifts;                                             // 0x0168(0x0010) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgRewardCenterManagerBase");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_UpdateLoginDay(const struct Fdword& nDay);
	void ClaimLoginBonus();
	bool STATIC_TryAutoCollectLoginBonus();
	bool STATIC_TryShowLoginBonus();
	bool STATIC_ShouldShowLoginBonus();
};


// Class TgClientBase.TgSessionVars
// 0x001C (0x00B4 - 0x0098)
class UTgSessionVars : public UTgClientObject
{
public:
	struct FString                                     m_PlayScreenFeaturedQueues;                               // 0x0098(0x0010) (NeedCtorLink)
	class UTgGFxPlayerGenerator*                       m_pPlayerGenerator;                                       // 0x00A8(0x0008) (ExportObject, NeedCtorLink, EditInline)
	unsigned long                                      m_bIsLiveSpectating : 1;                                  // 0x00B0(0x0004)
	unsigned long                                      m_bHudNotifyDebugging : 1;                                // 0x00B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSessionVars");
		return ptr;
	}


	class UTgGFxFriendData* GetFriendData();
	class UTgGFxPlayerGenerator* GetPlayerGenerator();
	void STATIC_OnHUDStateChange(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgStreamManagerBase
// 0x0068 (0x0100 - 0x0098)
class UTgStreamManagerBase : public UTgClientObject
{
public:
	struct FString                                     WatchEnd;                                                 // 0x0098(0x0010) (NeedCtorLink)
	struct FString                                     m_CurrentChannel;                                         // 0x00A8(0x0010) (NeedCtorLink)
	int                                                m_nNewsIndex;                                             // 0x00B8(0x0004)
	TArray<struct FGameStream>                         Streams;                                                  // 0x00BC(0x0010) (NeedCtorLink)
	unsigned long                                      m_hasReceivedStreams : 1;                                 // 0x00CC(0x0004)
	unsigned long                                      m_hasAnySpecial : 1;                                      // 0x00CC(0x0004)
	unsigned long                                      m_hasAnyFeatured : 1;                                     // 0x00CC(0x0004)
	struct FScriptDelegate                             __ViewerSort__Delegate;                                   // 0x00D0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __FeaturedSort__Delegate;                                 // 0x00E0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __LiveSort__Delegate;                                     // 0x00F0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00F0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgStreamManagerBase");
		return ptr;
	}


	struct FString GetFeatureDescription(int Count);
	struct FString GetFeatureName(int Count);
	bool HaveFeature();
	bool IsLiveAtIndex(int Index);
	struct FString GetDescriptionAtIndex(int Index);
	struct FString GetViewersAtIndex(int Index);
	struct FString GetTitleAtIndex(int Index);
	bool IsStream(int Index);
	int GetTypeCountWatching(TEnumAsByte<ESTREAMTYPE> Type);
	int GetTypeCount(TEnumAsByte<ESTREAMTYPE> Type);
	int LiveSort(const struct FGameStream& A, const struct FGameStream& B);
	int FeaturedSort(const struct FGameStream& A, const struct FGameStream& B);
	int ViewerSort(const struct FGameStream& A, const struct FGameStream& B);
	void ResolveChannelName(const struct FString& sChannel);
	void CompleteUpdate();
	bool ViewStreamIndex(int surfaceId, int Index, bool external, float X, float Y, float Width, float Height, float widthReal, float heightReal, bool joinChat);
	void STATIC_UpdateStreams();
	bool HasSpecialStreams();
	bool STATIC_OpenPlayerStream(int nPlayerId, bool external, float X, float Y, float Width, float Height, float widthReal, float heightReal);
	bool STATIC_OpenStream(int surfaceId, const struct FString& URL, bool external, float X, float Y, float Width, float Height, float widthReal, float heightReal, bool joinChat);
	void LoadStreams();
};


// Class TgClientBase.TgDamageInfoEvent
// 0x005C (0x00D0 - 0x0074)
class UTgDamageInfoEvent : public UTgEventDataItem
{
public:
	struct FCombatMessageInfo                          MessageInfo;                                              // 0x0074(0x0038)
	struct FString                                     sMessage;                                                 // 0x00AC(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nValue;                                                   // 0x00BC(0x0004)
	int                                                eDisplayType;                                             // 0x00C0(0x0004)
	struct FQWord                                      nItemId;                                                  // 0x00C4(0x0008)
	unsigned long                                      bLocalSource : 1;                                         // 0x00CC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDamageInfoEvent");
		return ptr;
	}

};


// Class TgClientBase.TgDataHandler
// 0x00B4 (0x0160 - 0x00AC)
class UTgDataHandler : public UGFxObject
{
public:
	class UTgMoviePlayer*                              m_MP;                                                     // 0x00AC(0x0008)
	class UTgDataGroup_Game*                           m_Game;                                                   // 0x00B4(0x0008)
	class UTgDataGroup_Config*                         m_Config;                                                 // 0x00BC(0x0008)
	class UTgDataGroup_Lobby*                          m_Lobby;                                                  // 0x00C4(0x0008)
	class UTgDataGroup_EOMLobby*                       m_EOMLobby;                                               // 0x00CC(0x0008)
	class UTgDataGroup_Settings*                       m_Settings;                                               // 0x00D4(0x0008)
	class UTgDataGroup_League*                         m_League;                                                 // 0x00DC(0x0008)
	float                                              m_nLastUpdateTime;                                        // 0x00E4(0x0004)
	float                                              m_nUpdateTime;                                            // 0x00E8(0x0004)
	unsigned char                                      m_nUpdateStep;                                            // 0x00EC(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	TArray<class UTgDataChunk*>                        m_DataChunkList;                                          // 0x00F0(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UTgDataChunk*>                        m_ChunksPendingDispatch;                                  // 0x0100(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgChunkUpdateQueue                         m_arrChunksToUpdate[0x4];                                 // 0x0110(0x0014) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataHandler");
		return ptr;
	}


	bool MoviePlayer_GetUseSpectateEOMLobby();
	void DispatchEvent_LobbyHud_ClearRolledOverSkin();
	void DispatchEvent_MoviePlayer_SetIsCustom(bool bIsCustom);
	void DispatchEvent_MatchLobbyClassSelection_SetSpectatorMode();
	void DispatchEvent_SpectatorHUD_ForceTeamUpdate();
	void ChatInput_SetReplyName(const struct FString& sSenderName);
	void DispatchEvent_VendorStore_UpdateInventory();
	void DispatchEvent_VendorStore_UpdateStats();
	void DoImmediateUpdate(float DeltaTime, class UTgDataChunk* Node, bool bParentIsSubscribed);
	void STATIC_QueueDirtyChunks(class UTgDataChunk* Node, bool bParentIsSubscribed);
	void STATIC_NotifyMapChange();
	void Update(float DeltaTime, bool bImmediate);
	void STATIC_Uninitialize();
	void InitializeDataHandler();
};


// Class TgClientBase.TgDataItemDoublePurchase
// 0x000C (0x0080 - 0x0074)
class UTgDataItemDoublePurchase : public UTgEventDataItem
{
public:
	struct Fdword                                      m_nLootId1;                                               // 0x0074(0x0004)
	struct Fdword                                      m_nLootId2;                                               // 0x0078(0x0004)
	struct Fdword                                      m_nLoc;                                                   // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataItemDoublePurchase");
		return ptr;
	}

};


// Class TgClientBase.TgDataItemEvent
// 0x0008 (0x007C - 0x0074)
class UTgDataItemEvent : public UTgEventDataItem
{
public:
	class UTgDataItem*                                 diData;                                                   // 0x0074(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataItemEvent");
		return ptr;
	}

};


// Class TgClientBase.TgDataItemFriendList
// 0x0034 (0x0094 - 0x0060)
class UTgDataItemFriendList : public UTgDataItem
{
public:
	TArray<class UTgGFxPlayerData*>                    arrFriendData;                                            // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bEnableSearch : 1;                                        // 0x0070(0x0004)
	unsigned long                                      bEnableSearchAnyPlayer : 1;                               // 0x0070(0x0004)
	struct FString                                     sMessage;                                                 // 0x0074(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sError;                                                   // 0x0084(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataItemFriendList");
		return ptr;
	}

};


// Class TgClientBase.TgDataItemPlayer
// 0x0024 (0x0098 - 0x0074)
class UTgDataItemPlayer : public UTgEventDataItem
{
public:
	struct FTgPlayerId                                 pid;                                                      // 0x0074(0x0024) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataItemPlayer");
		return ptr;
	}

};


// Class TgClientBase.TgDataItemPlayerItemGifting
// 0x0014 (0x00AC - 0x0098)
class UTgDataItemPlayerItemGifting : public UTgDataItemPlayer
{
public:
	struct Fdword                                      m_nLocation;                                              // 0x0098(0x0004)
	struct FString                                     m_overridePlayername;                                     // 0x009C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataItemPlayerItemGifting");
		return ptr;
	}

};


// Class TgClientBase.TgDialogEvent
// 0x0008 (0x007C - 0x0074)
class UTgDialogEvent : public UTgEventDataItem
{
public:
	int                                                nImageId;                                                 // 0x0074(0x0004)
	float                                              fTextSpeedMultiplier;                                     // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDialogEvent");
		return ptr;
	}

};


// Class TgClientBase.TgEsportsManager
// 0x00F8 (0x017C - 0x0084)
class UTgEsportsManager : public UPComUIManagerBase
{
public:
	struct FPointer                                    VfTable_ITgEventAccessInterface;                          // 0x0084(0x0008) (Const, Native, NoExport)
	struct FPointer                                    VfTable_ITgEventDispatcherInterface;                      // 0x008C(0x0008) (Const, Native, NoExport)
	TArray<struct FTgEsportsEvent>                     m_arrEvents;                                              // 0x0094(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgEsportsMatchGroup>                m_arrMatchSchedule;                                       // 0x00A4(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgEsportsStats>                     m_arrAccumulativeStats;                                   // 0x00B4(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgEsportsTeam>                      m_arrTeams;                                               // 0x00C4(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgEsportsFeaturedPanelData                 m_featuredPanelData;                                      // 0x00D4(0x0040) (NeedCtorLink)
	TArray<struct FString>                             m_arrTeamIconKeys;                                        // 0x0114(0x0010) (AlwaysInit, NeedCtorLink)
	class UTgEventDispatcher*                          m_pDispatcher;                                            // 0x0124(0x0008) (ExportObject, NeedCtorLink, EditInline)
	struct FArray_Mirror                               m_arrMctsMfuncListeners;                                  // 0x012C(0x0010) (Const, Native)
	struct FArray_Mirror                               m_arrMctsEventListeners;                                  // 0x013C(0x0010) (Const, Native)
	struct FQWord                                      m_nLastScheduleUpdate;                                    // 0x014C(0x0008)
	struct FQWord                                      m_nLastPicksUpdate;                                       // 0x0154(0x0008)
	TArray<struct FTgEsportsTeamConfig>                arrTeamConfigs;                                           // 0x015C(0x0010) (NeedCtorLink)
	TArray<struct FTgEsportsRosterTeams>               arrRosterTeams;                                           // 0x016C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgEsportsManager");
		return ptr;
	}


	void ClearData();
	void GetArrInputIntercepts(struct FPointer* pArr);
	void GetArrGameEventListeners(struct FPointer* pArr);
	void GetArrMctsListeners(struct FPointer* pArr);
	void GetArrOldMctsListeners(struct FPointer* pArr);
	class UTgEventDispatcher* STATIC_GetDispatcher();
	void STATIC_RequestESportsPicks();
	void STATIC_RequestESportsMatches();
	void STATIC_Uninitialize();
	void STATIC_Initialize();
};


// Class TgClientBase.TgEventAccessInterface
// 0x0000 (0x0060 - 0x0060)
class UTgEventAccessInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgEventAccessInterface");
		return ptr;
	}


	void GetArrInputIntercepts(struct FPointer* pArr);
	void GetArrGameEventListeners(struct FPointer* pArr);
	void GetArrMctsListeners(struct FPointer* pArr);
	void GetArrOldMctsListeners(struct FPointer* pArr);
};


// Class TgClientBase.TgEventMediator
// 0x0000 (0x00AC - 0x00AC)
class UTgEventMediator : public UGFxObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgEventMediator");
		return ptr;
	}


	void STATIC_DispatchEvent(const struct FString& sEventType, const struct FASValue& EventData);
};


// Class TgClientBase.TgEventSceneInterface
// 0x0000 (0x0060 - 0x0060)
class UTgEventSceneInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgEventSceneInterface");
		return ptr;
	}


	void GetAcquisitionSubtext(struct FUIQueuedAcquisition* acqData, struct FString* sOutSubtext);
};


// Class TgClientBase.TgFXEvent
// 0x0004 (0x0078 - 0x0074)
class UTgFXEvent : public UTgEventDataItem
{
public:
	float                                              nValue;                                                   // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgFXEvent");
		return ptr;
	}

};


// Class TgClientBase.TgGameLaunchBase
// 0x0024 (0x04D0 - 0x04AC)
class ATgGameLaunchBase : public AGameInfo
{
public:
	struct FString                                     LoginName;                                                // 0x04AC(0x0010) (Config, GlobalConfig, NeedCtorLink)
	struct FString                                     LoginPwd;                                                 // 0x04BC(0x0010) (Config, GlobalConfig, NeedCtorLink)
	unsigned long                                      SaveLoginName : 1;                                        // 0x04CC(0x0004) (Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameLaunchBase");
		return ptr;
	}

};


// Class TgClientBase.TgGameProfileEvent
// 0x0034 (0x00A8 - 0x0074)
class UTgGameProfileEvent : public UTgEventDataItem
{
public:
	struct FTgPlayerId                                 pidPlayerId;                                              // 0x0074(0x0024) (NeedCtorLink)
	struct FString                                     sProfileTab;                                              // 0x0098(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameProfileEvent");
		return ptr;
	}

};


// Class TgClientBase.TgGameQueueConst
// 0x0000 (0x0060 - 0x0060)
class UTgGameQueueConst : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameQueueConst");
		return ptr;
	}

};


// Class TgClientBase.TgGameUIDispatcher
// 0x0000 (0x0060 - 0x0060)
class UTgGameUIDispatcher : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameUIDispatcher");
		return ptr;
	}

};


// Class TgClientBase.TgGameViewportClientBase
// 0x0014 (0x01D8 - 0x01C4)
class UTgGameViewportClientBase : public UPComGameViewportClient
{
public:
	TArray<class UTgObjectReferencer*>                 m_DeferredManifests;                                      // 0x01C4(0x0010) (NeedCtorLink)
	unsigned long                                      m_dragging : 1;                                           // 0x01D4(0x0004)
	unsigned long                                      m_wasMaximized : 1;                                       // 0x01D4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameViewportClientBase");
		return ptr;
	}


	void GetSubtitleRegion(struct FVector2D* MinPos, struct FVector2D* MaxPos);
	void PostRender(class UCanvas* Canvas);
	void GameSessionEnded();
	void STATIC_NotifyConnectionError(TEnumAsByte<EProgressMessageType> MessageType, const struct FString& Message, const struct FString& Title);
	void AdjustViewportSafeZone(float Amount);
	void STATIC_SetViewportSafeZone(float SafeZone);
	void HandleConnectionError(TEnumAsByte<EProgressMessageType> MessageType);
	void NativePostRender(class UCanvas* Canvas);
	bool IsGfxMovieCapturingMouseInput();
	void NativeGameSessionEnded();
	void DrawTransition(class UCanvas* Canvas);
};


// Class TgClientBase.TgGfxGameInputInterceptor
// 0x005C (0x0108 - 0x00AC)
class UTgGfxGameInputInterceptor : public UGFxObject
{
public:
	unsigned long                                      bSuspend : 1;                                             // 0x00AC(0x0004)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B0(0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGfxGameInputInterceptor.registeredIntercepts
	struct FScriptDelegate                             __HandleInput_Delegate__Delegate;                         // 0x00F8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxGameInputInterceptor");
		return ptr;
	}


	void STATIC_PrintUIGameInputIntercepts();
	struct FString ASC_DebugPrint();
	struct FString DebugPrintAS();
	int ASC_HandleInterceptInput(class UGFxObject* Obj);
	int HandleInterceptInput(class UGFxObject* Obj);
	bool CallInputDelegate(const struct FScriptDelegate& delCallback, const struct FPointer& pInputEvent);
	void STATIC_USC_ToggleSuspend(bool suspend);
	void STATIC_USC_RemoveIntercept(const struct FString& sInput);
	void STATIC_USC_AddIntercept(const struct FString& sInput);
	void DebugPrint();
	bool HandleASIntercept(const struct FPointer& pInputEvent);
	void STATIC_RemoveASIntercept(const struct FString& sInput);
	void AddASIntercept(const struct FString& sInput);
	void STATIC_SetupBindings();
	bool HandleInput_Delegate(const struct FPointer& pInputEvent);
};


// Class TgClientBase.TgGfxGameVideoPlayerManager
// 0x0038 (0x00E4 - 0x00AC)
class UTgGfxGameVideoPlayerManager : public UGFxObject
{
public:
	class UGFxMoviePlayer*                             m_Movie;                                                  // 0x00AC(0x0008)
	class APComVideoPlayer*                            m_PComVideoPlayer;                                        // 0x00B4(0x0008)
	unsigned long                                      m_bIsPC : 1;                                              // 0x00BC(0x0004)
	unsigned long                                      m_bHasVP : 1;                                             // 0x00BC(0x0004)
	TEnumAsByte<EPComVideoPlayerError>                 m_eCurErrorCode;                                          // 0x00C0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             __USC_PlayVideo_Delegate__Delegate;                       // 0x00C4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C1(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __USC_StopVideo_Delegate__Delegate;                       // 0x00D4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00D4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxGameVideoPlayerManager");
		return ptr;
	}


	void USC_StopVideo_Delegate();
	void STATIC_USC_StopVideo();
	void USC_PlayVideo_Delegate(const struct FString& URL, class UGFxObject* dimensions);
	void STATIC_USC_PlayVideo(const struct FString& URL, class UGFxObject* dimensions);
	void DestroyVideoPlayer();
	void OnVideoComplete();
	void ASC_OnVideoComplete();
	void OnVideoError(int ErrorCode);
	void ASC_OnVideoError(int ErrorCode);
	void SpawnVideoPlayer(class AActor* SpawningActor);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UGFxMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxNameDisplayManager
// 0x0020 (0x0080 - 0x0060)
class UTgGFxNameDisplayManager : public UObject
{
public:
	TArray<struct FTgPlayerNameWidgetBind>             m_arrWidgets;                                             // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgWidgetNameRequest>                m_arrRequests;                                            // 0x0070(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxNameDisplayManager");
		return ptr;
	}


	void STATIC_OnReceiveFilteredNames(bool bSuccess, class UTgPlayerNameManager* pManager);
	void CancelRequest(class UTgGFxPlayerNameWidget* pWidget);
	void MakeRequest(class UTgGFxPlayerNameWidget* pWidget, struct FTgPlayerId* pid);
	void STATIC_RemoveWidget(const struct FName& WidgetPath, class UTgGFxPlayerNameWidget* pWidget);
	void AddWidget(const struct FName& WidgetPath, class UTgGFxPlayerNameWidget* pWidget);
	void STATIC_Uninitialize();
	void STATIC_Initialize();
};


// Class TgClientBase.TgGFxObject
// 0x0010 (0x00BC - 0x00AC)
class UTgGFxObject : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                                // 0x00AC(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxObject");
		return ptr;
	}


	void ASRemoveAllEventListenersImpl(const struct FString& Event);
	void ASRemoveEventListenerImpl(const struct FString& Type, class UGFxObject* O, const struct FString& func);
	void ASAddEventListenerImpl(const struct FString& Type, class UGFxObject* O, const struct FString& func);
	void ASRemoveListenerImpl(class UGFxObject* O, const struct FString& Member);
	void ASSetListenerImpl(class UGFxObject* O, const struct FString& Member, const struct FScriptDelegate& Listener);
	void ASRemoveAllEventListeners(const struct FName& nmEvent);
	void ASRemoveEventListener(const struct FName& nmEvent, class UObject* pScope, const struct FName& nmCallback);
	void ASAddEventListener(const struct FName& nmEvent, class UObject* pScope, const struct FName& nmCallback);
	void EventListener(const struct FGFxEventData& Data);
	void STATIC_ProjectXYTo(class UGFxObject* pTo, bool bIsPosition, float* nX, float* nY);
	void STATIC_ProjectXYFrom(class UGFxObject* pFrom, bool bIsPosition, float* nX, float* nY);
	void GlobalToParent(bool bIsPosition, float* nX, float* nY);
	void STATIC_ParentToGlobal(bool bIsPosition, float* nX, float* nY);
	void STATIC_ParentToLocal(bool bIsPosition, float* nX, float* nY);
	void LocalToParent(bool bIsPosition, float* nX, float* nY);
	void GlobalToLocal(bool bIsPosition, float* nX, float* nY);
	void LocalToGlobal(bool bIsPosition, float* nX, float* nY);
	struct FRect GetBoundsRelativeToStage();
	struct FRect GetHitAreaBounds(class UTgGFxObject* pRelativeTo);
	struct FRect GetBounds(class UTgGFxObject* pRelativeTo);
	void STATIC_SetBounds(struct FRect* rectBounds);
	void STATIC_SetPositionY(float nValue);
	void STATIC_SetPositionX(float nValue);
	float GetPositionY();
	float GetPositionX();
	class UGFxObject* CreateGFxArray(class UClass* pClass);
	class UGFxObject* CreateGFxObject(const struct FString& sClassPath, class UClass* pClass, TArray<struct FASValue> arrCtorArgs);
	void STATIC_OnCreateGFxObject(class UGFxObject* pObj, class UClass* pClass);
	void STATIC_UnbindFunction(const struct FName& nmFuncName);
	void BindFunction(const struct FName& nmFuncName);
	void SetFunction(const struct FString& sMember, class UObject* pContext, const struct FName& nmFuncName);
	void STATIC_RemoveChild(class UTgGFxObject* pChild);
	void STATIC_SwapDepthsI(int nTargetIndex);
	void STATIC_SwapDepths(class UGFxObject* pTarget);
	int GetDepth();
	int GetNextHighestDepth();
	class UGFxObject* DuplicateMovieClip(const struct FString& sName, int nDepth, class UGFxObject* pInitValues, class UClass* pClass);
	bool ContainsChild(class UTgGFxObject* pChild);
	class UTgGFxObject* GetGFxHitArea();
	class UTgGFxObject* GetGFxParent();
	struct FString GetGFxStagePath();
	struct FString GetGFxName();
	bool GetVisible();
	float GetAspectRatio();
	bool GetDisabled();
	void SetDisabled(bool bDisabled);
	float STATIC_SetScaleY(float nValue);
	float STATIC_SetScaleX(float nValue);
	float GetScaleY();
	float GetScaleX();
	void STATIC_SetScale(float nX, float nY);
	void GetScale(float* out_nX, float* out_nY);
	float STATIC_SetHeight(float nValue);
	float STATIC_SetWidth(float nValue);
	float GetHeight();
	float GetWidth();
	void STATIC_SetSize(float nWidth, float nHeight);
	void GetSize(float* out_nWidth, float* out_nHeight);
};


// Class TgClientBase.TgGFxButtonPrompt
// 0x0018 (0x00D4 - 0x00BC)
class UTgGFxButtonPrompt : public UTgGFxObject
{
public:
	struct FName                                       m_nmXboxType;                                             // 0x00BC(0x0008)
	struct FString                                     m_sText;                                                  // 0x00C4(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxButtonPrompt");
		return ptr;
	}


	void SetVisible(bool bValue);
	void STATIC_SetDefaultText(const struct FString& sText);
	void STATIC_SetPromptText(const struct FString& sText);
	void STATIC_SetDisplayButton(const struct FName& nmXboxType);
	void STATIC_SetPrompt(const struct FName& nmXboxType, const struct FString& sText);
};


// Class TgClientBase.TgGFxEventObject
// 0x00AC (0x0168 - 0x00BC)
class UTgGFxEventObject : public UTgGFxObject
{
public:
	struct FPointer                                    VfTable_ITgEventAccessInterface;                          // 0x00BC(0x0008) (Const, Native, NoExport)
	struct FArray_Mirror                               MctsCallbackListeners;                                    // 0x00C4(0x0010) (Const, Native)
	struct FArray_Mirror                               m_arrMctsEvents;                                          // 0x00D4(0x0010) (Const, Native)
	TArray<struct FGameEventListener>                  GameEventListeners;                                       // 0x00E4(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FGameEventListener>                  m_arrInputIntercepts;                                     // 0x00F4(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<unsigned char>                              m_arrGFxEvents;                                           // 0x0104(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      m_bOnlineCheck : 1;                                       // 0x0114(0x0004)
	unsigned long                                      m_bInitialized : 1;                                       // 0x0114(0x0004)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0118(0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGFxEventObject.m_mapUninit
	class UTgMoviePlayer*                              m_pMovie;                                                 // 0x0160(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxEventObject");
		return ptr;
	}


	void GetArrInputIntercepts(struct FPointer* pArr);
	void GetArrGameEventListeners(struct FPointer* pArr);
	void GetArrMctsListeners(struct FPointer* pArr);
	void GetArrOldMctsListeners(struct FPointer* pArr);
	bool IsInitialized();
	class UTgEventDispatcher* GetMovieDispatcher();
	void STATIC_OnCreateGFxObject(class UGFxObject* pObj, class UClass* pClass);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgDataChunk
// 0x0035 (0x019D - 0x0168)
class UTgDataChunk : public UTgGFxEventObject
{
public:
	class UTgDataHandler*                              m_DataHandler;                                            // 0x0168(0x0008)
	class UTgDataChunk*                                m_ParentChunk;                                            // 0x0170(0x0008)
	TArray<struct FDataField>                          m_DataList;                                               // 0x0178(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UTgDataChunk*>                        m_ChildChunks;                                            // 0x0188(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      m_bIsDirty : 1;                                           // 0x0198(0x0004)
	unsigned long                                      m_bIsSubscribed : 1;                                      // 0x0198(0x0004)
	unsigned long                                      m_bClearOnMapChange : 1;                                  // 0x0198(0x0004)
	unsigned long                                      m_bForceImmediateUpdates : 1;                             // 0x0198(0x0004)
	unsigned long                                      m_bQueuedToUpdate : 1;                                    // 0x0198(0x0004)
	unsigned char                                      m_fUpdateDelay;                                           // 0x019C(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataChunk");
		return ptr;
	}


	class UTgMoviePlayer* GetOuterTgMoviePlayer();
	void usc_ResetAllFields();
	void usc_Unsubscribe();
	void usc_Subscribe();
	class ATgPlayerController* GetPlayerController();
	bool NeedsUpdate(unsigned char fStep);
	bool IsSubscribed();
	void ForceNextUpdate();
	void SetDirty();
	bool GetFieldByHandle(struct FTgDataFieldHandle* InHandle, struct FASValue* NewValue);
	bool GetField(const struct FPointer& FieldName, struct FASValue* NewValue);
	bool STATIC_SetFieldByHandle(struct FTgDataFieldHandle* InHandle, struct FASValue* NewValue);
	bool STATIC_SetField(const struct FPointer& FieldName, bool bCreateIfMissing, struct FASValue* NewValue);
	struct FTgDataFieldHandle AddField(const struct FPointer& FieldName, struct FASValue* NewValue);
	void STATIC_ResetAllFields();
	void ClearDelegates();
	void STATIC_SetDelegates();
	void STATIC_RemoveChildChunk(class UTgDataChunk* Child, bool bClearDelegates);
	void AddChildChunk(class UTgDataChunk* Child);
	void STATIC_PostDataUpdatedEvent();
	void DataUpdateEvent();
	void Update(float DeltaTime, bool bSkipCallback);
	void STATIC_NotifyMapChange();
	void STATIC_UpdateInternal(float DeltaTime);
	void STATIC_Uninitialize();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGfxScene
// 0x011C (0x0284 - 0x0168)
class UTgGfxScene : public UTgGFxEventObject
{
public:
	struct FPointer                                    VfTable_ITgIntervalInterface;                             // 0x0168(0x0008) (Const, Native, NoExport)
	struct FString                                     m_SceneName;                                              // 0x0170(0x0010) (NeedCtorLink)
	struct FString                                     m_IconName;                                               // 0x0180(0x0010) (NeedCtorLink)
	struct FString                                     m_Focused;                                                // 0x0190(0x0010) (NeedCtorLink)
	struct FString                                     m_DataName;                                               // 0x01A0(0x0010) (NeedCtorLink)
	struct FString                                     m_ActionName;                                             // 0x01B0(0x0010) (NeedCtorLink)
	struct FString                                     m_Disabled;                                               // 0x01C0(0x0010) (NeedCtorLink)
	struct FString                                     m_Selected;                                               // 0x01D0(0x0010) (NeedCtorLink)
	struct FString                                     m_Click;                                                  // 0x01E0(0x0010) (NeedCtorLink)
	struct FString                                     m_RollOver;                                               // 0x01F0(0x0010) (NeedCtorLink)
	struct FString                                     m_RollOut;                                                // 0x0200(0x0010) (NeedCtorLink)
	struct FString                                     m_Change;                                                 // 0x0210(0x0010) (NeedCtorLink)
	struct FString                                     m_TextChange;                                             // 0x0220(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_Data;                                                   // 0x0230(0x0008)
	class UTgDataItem*                                 m_InitData;                                               // 0x0238(0x0008)
	TArray<struct FButtonPromptData>                   m_buttonPrompts;                                          // 0x0240(0x0010) (NeedCtorLink)
	unsigned long                                      m_bDisableBrowserInput : 1;                               // 0x0250(0x0004)
	TArray<struct FString>                             m_bScreensToUnload;                                       // 0x0254(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_bScreensToLoad;                                         // 0x0264(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_bScreensToPreload;                                      // 0x0274(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxScene");
		return ptr;
	}


	class ULocalPlayer* GetLP();
	void ClearLoadSceneData(const struct FString& sSceneName);
	class UTgDataItem* GetLoadSceneData(const struct FString& sSceneName);
	void SendGFxData(class UGFxObject* Data);
	void STATIC_ReceiveGFxData(class UGFxObject* Data);
	class UTgIntervalManager* GetIntervalManager();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxAcquisitionPopup
// 0x0090 (0x0314 - 0x0284)
class UTgGfxAcquisitionPopup : public UTgGfxScene
{
public:
	struct FMap_Mirror                                 LoadoutItemsToEquip;                                      // 0x0284(0x0048) (Const, Native)
	struct FMap_Mirror                                 SkinsToEquip;                                             // 0x02CC(0x0048) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxAcquisitionPopup");
		return ptr;
	}


	void HideAcquisition();
	void DoShowAcquisition(class UGFxObject* Data);
	void EquipAll();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void ClearAcquisitions(class UTgEventDataItem* pEvent);
	void STATIC_ShowAcquisition(class UTgEventDataItem* pEvent);
	void HideAcquisitionInternal();
	void STATIC_ShowAcquisitionInternal(class UGFxObject* Data);
};


// Class TgClientBase.TgGfxAdventureProgressArena
// 0x0034 (0x02B8 - 0x0284)
class UTgGfxAdventureProgressArena : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                            // 0x0284(0x0004)
	int                                                m_nBundleId;                                              // 0x0288(0x0004)
	int                                                m_nSpecificCurrencyId;                                    // 0x028C(0x0004)
	int                                                m_chestVendor1;                                           // 0x0290(0x0004)
	int                                                m_chestItem1;                                             // 0x0294(0x0004)
	int                                                m_chestItemLTI1;                                          // 0x0298(0x0004)
	int                                                m_chestVendor2;                                           // 0x029C(0x0004)
	int                                                m_chestItem2;                                             // 0x02A0(0x0004)
	int                                                m_chestItemLTI2;                                          // 0x02A4(0x0004)
	int                                                m_chestVendor3;                                           // 0x02A8(0x0004)
	int                                                m_chestItem3;                                             // 0x02AC(0x0004)
	int                                                m_chestItemLTI3;                                          // 0x02B0(0x0004)
	int                                                m_nPointBundleLTI;                                        // 0x02B4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxAdventureProgressArena");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxAdventureProgressCH09
// 0x0038 (0x02BC - 0x0284)
class UTgGfxAdventureProgressCH09 : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                            // 0x0284(0x0004)
	int                                                m_nBundleId;                                              // 0x0288(0x0004)
	int                                                m_nSpecificCurrencyId;                                    // 0x028C(0x0004)
	int                                                m_chestVendor1;                                           // 0x0290(0x0004)
	int                                                m_chestItem1;                                             // 0x0294(0x0004)
	int                                                m_chestItemLTI1;                                          // 0x0298(0x0004)
	int                                                m_chestVendor2;                                           // 0x029C(0x0004)
	int                                                m_chestItem2;                                             // 0x02A0(0x0004)
	int                                                m_chestItemLTI2;                                          // 0x02A4(0x0004)
	int                                                m_chestVendor3;                                           // 0x02A8(0x0004)
	int                                                m_chestItem3;                                             // 0x02AC(0x0004)
	int                                                m_chestItemLTI3;                                          // 0x02B0(0x0004)
	int                                                m_nPointBundleLTI;                                        // 0x02B4(0x0004)
	int                                                m_nPointPackId;                                           // 0x02B8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxAdventureProgressCH09");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxAdventureProgressCH10
// 0x0028 (0x02AC - 0x0284)
class UTgGfxAdventureProgressCH10 : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                            // 0x0284(0x0004)
	int                                                m_nBundleId;                                              // 0x0288(0x0004)
	int                                                m_nChestItemId;                                           // 0x028C(0x0004)
	int                                                m_nChestLTI;                                              // 0x0290(0x0004)
	int                                                m_nPointBundleLTI;                                        // 0x0294(0x0004)
	int                                                m_nItemLTI1;                                              // 0x0298(0x0004)
	int                                                m_nItemLTI2;                                              // 0x029C(0x0004)
	int                                                m_nItemLTI3;                                              // 0x02A0(0x0004)
	int                                                m_nItemLTI4;                                              // 0x02A4(0x0004)
	unsigned long                                      b_chestPurchaseLock : 1;                                  // 0x02A8(0x0004)
	unsigned long                                      b_requestedChestPurchase : 1;                             // 0x02A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxAdventureProgressCH10");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_SetupChestPurchaseFox();
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxAdventureProgressHel
// 0x0044 (0x02C8 - 0x0284)
class UTgGfxAdventureProgressHel : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                            // 0x0284(0x0004)
	int                                                m_nBundleId;                                              // 0x0288(0x0004)
	int                                                m_nChestItemId;                                           // 0x028C(0x0004)
	int                                                m_nPointBundleId;                                         // 0x0290(0x0004)
	unsigned long                                      b_chestPurchaseLock : 1;                                  // 0x0294(0x0004)
	unsigned long                                      b_requestedChestPurchase : 1;                             // 0x0294(0x0004)
	int                                                m_nBundleLTI;                                             // 0x0298(0x0004)
	int                                                m_nChestLTI;                                              // 0x029C(0x0004)
	int                                                m_nPointLTI;                                              // 0x02A0(0x0004)
	int                                                m_nStamp1LTI;                                             // 0x02A4(0x0004)
	int                                                m_nStamp2LTI;                                             // 0x02A8(0x0004)
	int                                                m_nStamp3LTI;                                             // 0x02AC(0x0004)
	int                                                m_nStamp4LTI;                                             // 0x02B0(0x0004)
	int                                                m_nStamp5LTI;                                             // 0x02B4(0x0004)
	int                                                m_nStamp6LTI;                                             // 0x02B8(0x0004)
	int                                                m_nStamp7LTI;                                             // 0x02BC(0x0004)
	int                                                m_nStamp8LTI;                                             // 0x02C0(0x0004)
	int                                                m_nStamp9LTI;                                             // 0x02C4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxAdventureProgressHel");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void STATIC_SetupChestPurchase();
};


// Class TgClientBase.TgGfxAdventuresVault
// 0x0008 (0x028C - 0x0284)
class UTgGfxAdventuresVault : public UTgGfxScene
{
public:
	int                                                m_nCurrentSceneIndex;                                     // 0x0284(0x0004)
	int                                                m_nCurrentAdventureId;                                    // 0x0288(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxAdventuresVault");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_PopulateVaultData();
	void STATIC_SetVaultOwnership(int vaultIdx);
	void ExitVault(int previousVault);
	void EnterVault(int EventIndex);
	void STATIC_SendLobbyCamEvent(int EventType, int camType);
	void ClickedVaultArea(int EventType, int indexLoc);
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxBattlePass
// 0x0048 (0x02CC - 0x0284)
class UTgGfxBattlePass : public UTgGfxScene
{
public:
	struct FPointer                                    VfTable_ITgEventSceneInterface;                           // 0x0284(0x0008) (Const, Native, NoExport)
	struct FString                                     m_sCameraTag;                                             // 0x028C(0x0010) (NeedCtorLink)
	struct FString                                     m_sCameraPedestalTag;                                     // 0x029C(0x0010) (NeedCtorLink)
	class UTgGFxObject*                                m_GotoFaqPageBtn;                                         // 0x02AC(0x0008)
	class UTgGFxObject*                                m_GotoFaqPagePrompt;                                      // 0x02B4(0x0008)
	class UTgGFxObject*                                m_GotoRulesPageBtn;                                       // 0x02BC(0x0008)
	class UTgGFxObject*                                m_GotoRulesPagePrompt;                                    // 0x02C4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxBattlePass");
		return ptr;
	}


	void GetAcquisitionSubtext(struct FUIQueuedAcquisition* acqData, struct FString* sOutSubtext);
	void STATIC_ReceiveEndTransition(class UTgEventDataItem* pDataItem);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxBattlePassToast
// 0x0000 (0x0284 - 0x0284)
class UTgGfxBattlePassToast : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxBattlePassToast");
		return ptr;
	}


	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxBrowser
// 0x0014 (0x0298 - 0x0284)
class UTgGFxBrowser : public UTgGfxScene
{
public:
	class UGFxObject*                                  m_browserFrame;                                           // 0x0284(0x0008)
	class UGFxObject*                                  m_browserShape;                                           // 0x028C(0x0008)
	unsigned long                                      m_bBrowserOpen : 1;                                       // 0x0294(0x0004)
	unsigned long                                      m_bBrowserLoading : 1;                                    // 0x0294(0x0004)
	unsigned long                                      m_bAutoClose : 1;                                         // 0x0294(0x0004)
	unsigned long                                      m_bDrawBorder : 1;                                        // 0x0294(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxBrowser");
		return ptr;
	}


	void STATIC_ToggleVisibility(bool bShow, bool bShowNav);
	void GetAbsoluteSize(float* Width, float* Height);
	void GetAbsolutePosition(float* X, float* Y);
	void STATIC_OnPopupOpened(class UTgEventDataItem* pEvent);
	void SetControls(bool prevDisabled, bool nextDisabled);
	void ToggleControls(bool showNav);
	void STATIC_USC_OnNavigate(int navId);
	void STATIC_USC_OnResize();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxBundlesPurchase
// 0x0004 (0x0288 - 0x0284)
class UTgGfxBundlesPurchase : public UTgGfxScene
{
public:
	int                                                m_nCurrentAdventureItem;                                  // 0x0284(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxBundlesPurchase");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_PopulateBundleData();
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxBuyAllModalBase
// 0x0010 (0x0294 - 0x0284)
class UTgGfxBuyAllModalBase : public UTgGfxScene
{
public:
	struct Fdword                                      m_dwLootId;                                               // 0x0284(0x0004)
	int                                                m_nActivityId;                                            // 0x0288(0x0004)
	int                                                m_nbonusChestItemId;                                      // 0x028C(0x0004)
	int                                                m_nBonusChestLootId;                                      // 0x0290(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxBuyAllModalBase");
		return ptr;
	}


	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxBuyAllModal
// 0x0000 (0x0294 - 0x0294)
class UTgGfxBuyAllModal : public UTgGfxBuyAllModalBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxBuyAllModal");
		return ptr;
	}

};


// Class TgClientBase.TgGfxCommendationPage
// 0x0000 (0x0284 - 0x0284)
class UTgGfxCommendationPage : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxCommendationPage");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxControllerDisconnect
// 0x0000 (0x0284 - 0x0284)
class UTgGFxControllerDisconnect : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxControllerDisconnect");
		return ptr;
	}


	void Unload();
	void STATIC_USC_CloseDialog();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxDailyDealPopup
// 0x0000 (0x0284 - 0x0284)
class UTgGFxDailyDealPopup : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxDailyDealPopup");
		return ptr;
	}


	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxDailyReward
// 0x0000 (0x0284 - 0x0284)
class UTgGfxDailyReward : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxDailyReward");
		return ptr;
	}


	void STATIC_UpdateDataToAS(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void UpdateDailyData();
};


// Class TgClientBase.TgGfxDebugActivity
// 0x0000 (0x0284 - 0x0284)
class UTgGfxDebugActivity : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxDebugActivity");
		return ptr;
	}


	void STATIC_USC_SearchActivity(int searchId, bool isActivity);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxEventBundleList
// 0x0010 (0x0294 - 0x0284)
class UTgGfxEventBundleList : public UTgGfxScene
{
public:
	TArray<struct Fdword>                              bundleItems;                                              // 0x0284(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxEventBundleList");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void STATIC_USC_UpdateBundles(class UGFxObject* Data);
};


// Class TgClientBase.TgGfxEventSceneBase
// 0x017C (0x0400 - 0x0284)
class UTgGfxEventSceneBase : public UTgGfxScene
{
public:
	struct FPointer                                    VfTable_ITgEventSceneInterface;                           // 0x0284(0x0008) (Const, Native, NoExport)
	class UTgGFxObject*                                m_ItemPanel;                                              // 0x028C(0x0008)
	class UTgGFxObject*                                m_ItemList;                                               // 0x0294(0x0008)
	class UTgGFxObject*                                m_RewardList;                                             // 0x029C(0x0008)
	class UTgGFxObject*                                m_QuestPanel;                                             // 0x02A4(0x0008)
	class UTgGFxObject*                                m_QuestList;                                              // 0x02AC(0x0008)
	class UTgGFxObject*                                m_InSceneItem;                                            // 0x02B4(0x0008)
	class UTgGFxObject*                                m_PurchasePanel;                                          // 0x02BC(0x0008)
	class UTgGFxObject*                                m_PurchaseBtnPC;                                          // 0x02C4(0x0008)
	class UTgGFxObject*                                m_PurchaseBtnConsole;                                     // 0x02CC(0x0008)
	class UTgGFxObject*                                m_EquipBtn;                                               // 0x02D4(0x0008)
	class UTgGFxObject*                                m_EquipBtnPC;                                             // 0x02DC(0x0008)
	class UTgGFxObject*                                m_EquipBtnConsole;                                        // 0x02E4(0x0008)
	class UTgGFxObject*                                m_InfoPanel;                                              // 0x02EC(0x0008)
	class UTgGFxObject*                                m_QuestInfoPanel;                                         // 0x02F4(0x0008)
	int                                                m_nActivityProgressTracking;                              // 0x02FC(0x0004)
	struct FString                                     m_sLoreSection;                                           // 0x0300(0x0010) (NeedCtorLink)
	struct FString                                     m_nEventNumber;                                           // 0x0310(0x0010) (NeedCtorLink)
	struct FString                                     m_sCameraTag;                                             // 0x0320(0x0010) (NeedCtorLink)
	struct FString                                     m_sCameraPedestalTag;                                     // 0x0330(0x0010) (NeedCtorLink)
	struct FString                                     m_sMusicTrack;                                            // 0x0340(0x0010) (NeedCtorLink)
	struct FString                                     m_sComingSoonText;                                        // 0x0350(0x0010) (NeedCtorLink)
	struct FString                                     m_sOwnedText;                                             // 0x0360(0x0010) (NeedCtorLink)
	struct FString                                     m_sUnlockText;                                            // 0x0370(0x0010) (NeedCtorLink)
	int                                                m_nEventIndex;                                            // 0x0380(0x0004)
	int                                                m_nUseActivityProgression;                                // 0x0384(0x0004)
	int                                                m_nQuestActivityId;                                       // 0x0388(0x0004)
	int                                                m_nMidpatchEventId;                                       // 0x038C(0x0004)
	int                                                m_nEventTimeframeId;                                      // 0x0390(0x0004)
	int                                                m_nCachedMusicThemePreview;                               // 0x0394(0x0004)
	int                                                m_nStartingItemIndexOverride;                             // 0x0398(0x0004)
	struct Fdword                                      m_nSelectedLootId;                                        // 0x039C(0x0004)
	struct Fdword                                      m_nSelectedItemType;                                      // 0x03A0(0x0004)
	struct Fdword                                      m_nUnlockPurchasedCount;                                  // 0x03A4(0x0004)
	unsigned long                                      m_bRewardBundlesDisplayAsSkins : 1;                       // 0x03A8(0x0004)
	unsigned long                                      m_bBlockEquipBtnFromShowing : 1;                          // 0x03A8(0x0004)
	unsigned long                                      m_bDiscardInactiveItems : 1;                              // 0x03A8(0x0004)
	struct Fdword                                      m_nBuyAllVendor;                                          // 0x03AC(0x0004)
	struct FBuyAllLinkage                              m_buyAllLinkage;                                          // 0x03B0(0x0050) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxEventSceneBase");
		return ptr;
	}


	void GetEventAcquisitionSubtext(struct FUIQueuedAcquisition* acqData, struct FString* OutSubtext);
	void GetAcquisitionSubtext(struct FUIQueuedAcquisition* acqData, struct FString* OutSubtext);
	void STATIC_OnSceneOpened(class UTgEventDataItem* pEvent);
	void STATIC_OnRedirect(class UTgEventDataItem* pEvent);
	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxCommunityEventBase
// 0x002C (0x042C - 0x0400)
class UTgGfxCommunityEventBase : public UTgGfxEventSceneBase
{
public:
	int                                                m_nEventItemActId;                                        // 0x0400(0x0004)
	int                                                m_nEventPersonalQuestsActId;                              // 0x0404(0x0004)
	int                                                m_nEventProgressActId;                                    // 0x0408(0x0004)
	struct FString                                     m_sDaysRemaining;                                         // 0x040C(0x0010) (NeedCtorLink)
	class UTgGFxObject*                                m_EventPage;                                              // 0x041C(0x0008)
	class UTgGFxObject*                                m_RulesPage;                                              // 0x0424(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxCommunityEventBase");
		return ptr;
	}


	void UpdateRewardItems();
	void UpdateEventBars();
	void STATIC_USC_ClaimNextReward(int itemGoalId);
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxDivineUprisingEventBase
// 0x0094 (0x0494 - 0x0400)
class UTgGfxDivineUprisingEventBase : public UTgGfxEventSceneBase
{
public:
	int                                                m_buyAllLootId;                                           // 0x0400(0x0004)
	int                                                m_nFinalRewardItemId;                                     // 0x0404(0x0004)
	int                                                m_nFinalRewardGoalId;                                     // 0x0408(0x0004)
	int                                                m_nEventDurationTimeframeId;                              // 0x040C(0x0004)
	TArray<int>                                        m_arrChapterChestIds;                                     // 0x0410(0x0010) (NeedCtorLink)
	class UTgGFxObject*                                m_LeftPanel;                                              // 0x0420(0x0008)
	int                                                m_nChapterOneChestId;                                     // 0x0428(0x0004)
	int                                                m_nChapterTwoChestId;                                     // 0x042C(0x0004)
	int                                                m_nChapterThreeChestId;                                   // 0x0430(0x0004)
	int                                                m_nChapterFourChestId;                                    // 0x0434(0x0004)
	int                                                m_nChapterOneCollectionId;                                // 0x0438(0x0004)
	int                                                m_nChapterTwoCollectionId;                                // 0x043C(0x0004)
	int                                                m_nChapterThreeCollectionId;                              // 0x0440(0x0004)
	int                                                m_nChapterFourCollectionId;                               // 0x0444(0x0004)
	int                                                m_nChapterOneRewardId;                                    // 0x0448(0x0004)
	int                                                m_nChapterTwoRewardId;                                    // 0x044C(0x0004)
	int                                                m_nChapterThreeRewardId;                                  // 0x0450(0x0004)
	int                                                m_nChapterFourRewardId;                                   // 0x0454(0x0004)
	int                                                m_nBuyAllBundleItemOneId;                                 // 0x0458(0x0004)
	int                                                m_nBuyAllBundleItemTwoId;                                 // 0x045C(0x0004)
	int                                                m_nChapterOneActivityId;                                  // 0x0460(0x0004)
	int                                                m_nChapterTwoActivityId;                                  // 0x0464(0x0004)
	int                                                m_nChapterThreeActivityId;                                // 0x0468(0x0004)
	int                                                m_nChapterFourActivityId;                                 // 0x046C(0x0004)
	int                                                m_nCompletionRewardActivityId;                            // 0x0470(0x0004)
	int                                                m_nChapterOneTimeframeId;                                 // 0x0474(0x0004)
	int                                                m_nChapterTwoTimeframeId;                                 // 0x0478(0x0004)
	int                                                m_nChapterThreeTimeframeId;                               // 0x047C(0x0004)
	int                                                m_nChapterFourTimeframeId;                                // 0x0480(0x0004)
	TArray<unsigned long>                              m_ActiveChapterQuestList;                                 // 0x0484(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxDivineUprisingEventBase");
		return ptr;
	}


	void UpdateTabs(int unseenQuests, int gotoTab);
	void STATIC_USC_UpdateQuestNotification();
	void GetActiveChapters();
	void STATIC_PopulateQuestData();
	void STATIC_PopulateRewardSkinProgress();
	void STATIC_PopulateRewardSkinData();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxEventBundleCollection
// 0x0000 (0x0400 - 0x0400)
class UTgGfxEventBundleCollection : public UTgGfxEventSceneBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxEventBundleCollection");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxSeasonalEventRedBull
// 0x0004 (0x0404 - 0x0400)
class UTgGfxSeasonalEventRedBull : public UTgGfxEventBundleCollection
{
public:
	int                                                m_flawesBundleId;                                         // 0x0400(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxSeasonalEventRedBull");
		return ptr;
	}

};


// Class TgClientBase.TgGfxEventTreasureRoll
// 0x0024 (0x0424 - 0x0400)
class UTgGfxEventTreasureRoll : public UTgGfxEventSceneBase
{
public:
	TArray<int>                                        m_nRewardActivityIds;                                     // 0x0400(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_sCameraTags;                                            // 0x0410(0x0010) (NeedCtorLink)
	int                                                m_nCurrentIndex;                                          // 0x0420(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxEventTreasureRoll");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxGiftingEventBase
// 0x0050 (0x0450 - 0x0400)
class UTgGfxGiftingEventBase : public UTgGfxEventSceneBase
{
public:
	TArray<int>                                        m_skinLootIds;                                            // 0x0400(0x0010) (NeedCtorLink)
	TArray<int>                                        m_giftBundleLootIds;                                      // 0x0410(0x0010) (NeedCtorLink)
	int                                                m_buyAllLootId;                                           // 0x0420(0x0004)
	int                                                m_nFinalRewardItemId;                                     // 0x0424(0x0004)
	int                                                m_nRewardActivityId;                                      // 0x0428(0x0004)
	int                                                m_nRewardActivityGoalId;                                  // 0x042C(0x0004)
	class UTgGFxObject*                                m_SkinsPage;                                              // 0x0430(0x0008)
	class UTgGFxObject*                                m_RewardsPage;                                            // 0x0438(0x0008)
	class UTgGFxObject*                                m_LorePage;                                               // 0x0440(0x0008)
	class UTgGFxObject*                                m_RulesPage;                                              // 0x0448(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxGiftingEventBase");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxSeasonalEvent2
// 0x0000 (0x0450 - 0x0450)
class UTgGfxSeasonalEvent2 : public UTgGfxGiftingEventBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxSeasonalEvent2");
		return ptr;
	}

};


// Class TgClientBase.TgGfxNewMoonEvent
// 0x0080 (0x0480 - 0x0400)
class UTgGfxNewMoonEvent : public UTgGfxEventSceneBase
{
public:
	int                                                m_buyAllLootId;                                           // 0x0400(0x0004)
	int                                                m_nFinalRewardItemId;                                     // 0x0404(0x0004)
	int                                                m_nFinalRewardGoalId;                                     // 0x0408(0x0004)
	int                                                m_nModelLoadedCount;                                      // 0x040C(0x0004)
	int                                                buyAllVendorId;                                           // 0x0410(0x0004)
	int                                                collectionReceiptId;                                      // 0x0414(0x0004)
	TArray<int>                                        arrRewardSkinIds;                                         // 0x0418(0x0010) (NeedCtorLink)
	TArray<int>                                        arrBundleIds;                                             // 0x0428(0x0010) (NeedCtorLink)
	TArray<int>                                        arrReceiptIds;                                            // 0x0438(0x0010) (NeedCtorLink)
	int                                                timeframeSecondHalf;                                      // 0x0448(0x0004)
	struct FString                                     m_sCameraTag2;                                            // 0x044C(0x0010) (NeedCtorLink)
	int                                                m_nEventDurationTimeframeId;                              // 0x045C(0x0004)
	TArray<int>                                        m_arrChapterChestIds;                                     // 0x0460(0x0010) (NeedCtorLink)
	TArray<unsigned long>                              m_ActiveChapterQuestList;                                 // 0x0470(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxNewMoonEvent");
		return ptr;
	}


	void GetEventAcquisitionSubtext(struct FUIQueuedAcquisition* acqData, struct FString* OutSubtext);
	void UpdateTabs(int unseenQuests, int gotoTab);
	void STATIC_USC_UpdateQuestNotification();
	void STATIC_onFinishModelLoad(class UTgEventDataItem* pEvent);
	void GetActiveChapters();
	void STATIC_PopulateQuestData();
	void STATIC_PopulateRewardSkinProgress();
	void STATIC_PopulateRewardSkinData();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxSeasonalEvent
// 0x0000 (0x0480 - 0x0480)
class UTgGfxSeasonalEvent : public UTgGfxNewMoonEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxSeasonalEvent");
		return ptr;
	}

};


// Class TgClientBase.TgGfxOdysseyEventBase
// 0x00E4 (0x04E4 - 0x0400)
class UTgGfxOdysseyEventBase : public UTgGfxEventSceneBase
{
public:
	int                                                m_selectedTabIndex;                                       // 0x0400(0x0004)
	int                                                m_finalRewardItemId;                                      // 0x0404(0x0004)
	int                                                m_finalRewardGoalId;                                      // 0x0408(0x0004)
	int                                                m_buyAllLootId;                                           // 0x040C(0x0004)
	int                                                m_buyAllLTI;                                              // 0x0410(0x0004)
	int                                                m_voyageVendorId;                                         // 0x0414(0x0004)
	int                                                m_territoryVendorId;                                      // 0x0418(0x0004)
	int                                                m_odysseyPointsActivityId;                                // 0x041C(0x0004)
	int                                                m_collectionRewardOne;                                    // 0x0420(0x0004)
	int                                                m_collectionRewardTwo;                                    // 0x0424(0x0004)
	int                                                m_collectionRewardThree;                                  // 0x0428(0x0004)
	class UTgGFxObject*                                m_QuestPage;                                              // 0x042C(0x0008)
	class UTgGFxObject*                                m_rulesFaqPage;                                           // 0x0434(0x0008)
	class UTgGFxObject*                                m_RewardsPage;                                            // 0x043C(0x0008)
	class UTgGFxObject*                                m_LorePage;                                               // 0x0444(0x0008)
	int                                                m_nMapFragmentActivityId;                                 // 0x044C(0x0004)
	int                                                m_nStarterTerritoryActivityId;                            // 0x0450(0x0004)
	int                                                m_nTerritoryOneActivityId;                                // 0x0454(0x0004)
	int                                                m_nTerritoryTwoActivityId;                                // 0x0458(0x0004)
	int                                                m_nTerritoryThreeActivityId;                              // 0x045C(0x0004)
	int                                                m_nTerritoryFourActivityId;                               // 0x0460(0x0004)
	int                                                m_nTerritoryFiveActivityId;                               // 0x0464(0x0004)
	int                                                m_nTerritorySixActivityId;                                // 0x0468(0x0004)
	int                                                m_nTerritorySevenActivityId;                              // 0x046C(0x0004)
	int                                                m_nTerritoryEightActivityId;                              // 0x0470(0x0004)
	int                                                m_nReleaseOneTimeframeId;                                 // 0x0474(0x0004)
	int                                                m_nReleaseTwoTimeframeId;                                 // 0x0478(0x0004)
	int                                                m_nReleaseThreeTimeframeId;                               // 0x047C(0x0004)
	int                                                m_nReleaseFourTimeframeId;                                // 0x0480(0x0004)
	int                                                m_nReleaseFiveTimeframeId;                                // 0x0484(0x0004)
	int                                                m_nReleaseSixTimeframeId;                                 // 0x0488(0x0004)
	TArray<unsigned long>                              m_TerritoryUnlockedStatus;                                // 0x048C(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        m_voyageActivityIds;                                      // 0x049C(0x0010) (NeedCtorLink)
	TArray<int>                                        m_territoryVoyageCount;                                   // 0x04AC(0x0010) (NeedCtorLink)
	TArray<int>                                        m_territoryLootIds;                                       // 0x04BC(0x0010) (NeedCtorLink)
	TArray<int>                                        m_voyageLootIds;                                          // 0x04CC(0x0010) (NeedCtorLink)
	struct FName                                       m_acquisitionDelayTimer;                                  // 0x04DC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxOdysseyEventBase");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxSeasonalEvent3
// 0x0000 (0x04E4 - 0x04E4)
class UTgGfxSeasonalEvent3 : public UTgGfxOdysseyEventBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxSeasonalEvent3");
		return ptr;
	}

};


// Class TgClientBase.TgGfxSeasonalEventCalendar
// 0x0028 (0x0428 - 0x0400)
class UTgGfxSeasonalEventCalendar : public UTgGfxEventSceneBase
{
public:
	int                                                m_questsActivityId;                                       // 0x0400(0x0004)
	int                                                m_rewardActivityId;                                       // 0x0404(0x0004)
	TArray<int>                                        m_dayRewards;                                             // 0x0408(0x0010) (NeedCtorLink)
	TArray<int>                                        m_titleRewards;                                           // 0x0418(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxSeasonalEventCalendar");
		return ptr;
	}


	void GetEventAcquisitionSubtext(struct FUIQueuedAcquisition* acqData, struct FString* OutSubtext);
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxEventTreasureRollList
// 0x0010 (0x0294 - 0x0284)
class UTgGfxEventTreasureRollList : public UTgGfxScene
{
public:
	TArray<struct Fdword>                              treasureRollBaseItems;                                    // 0x0284(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxEventTreasureRollList");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void STATIC_USC_UpdateTreasureRollContent(class UGFxObject* Data);
};


// Class TgClientBase.TgGfxFriendSelector
// 0x0028 (0x02AC - 0x0284)
class UTgGfxFriendSelector : public UTgGfxScene
{
public:
	class UTgGFxPlayerProvider*                        m_pFriendData;                                            // 0x0284(0x0008)
	class UTgGFxFriendSearchProvider*                  m_pSearch;                                                // 0x028C(0x0008)
	class UTgGFxDataProvider*                          m_pSearchProvider;                                        // 0x0294(0x0008)
	class UTgGFxDataGroup*                             m_pLocalResults;                                          // 0x029C(0x0008)
	class UTgGFxDataGroup*                             m_pOnlineResults;                                         // 0x02A4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxFriendSelector");
		return ptr;
	}


	void STATIC_OnSearchEmpty(class UTgEventDataItem* pEvent);
	void STATIC_OnServerSearchResults(class UTgEventDataItem* pEvent);
	void STATIC_OnLocalSearchResults(class UTgEventDataItem* pEvent);
	void STATIC_OnStartSearch(class UTgEventDataItem* pEvent);
	bool STATIC_USC_SearchFriends(const struct FString& PlayerName);
	void STATIC_USC_SelectFriend(class UTgGFxPlayerData* pPlayer);
	void STATIC_OnReceiveSearchQuery(const struct FPointer& pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxFullscreenBackground
// 0x0000 (0x0284 - 0x0284)
class UTgGFxFullscreenBackground : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxFullscreenBackground");
		return ptr;
	}


	void SetBackgroundImageAS(const struct FString& sImage);
	void STATIC_SetBackgroundImageInternal(const struct FString& sImage);
	void ClearBackgroundImage(class UTgEventDataItem* pEvent);
	void STATIC_SetBackgroundImage(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxGammaControls
// 0x0010 (0x0294 - 0x0284)
class UTgGfxGammaControls : public UTgGfxScene
{
public:
	class UMaterialInstanceConstant*                   m_GammaLogoMIC;                                           // 0x0284(0x0008)
	class UMaterialInstanceConstant*                   m_GammaBGMIC;                                             // 0x028C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxGammaControls");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void DrawGammaLogo(class UCanvas* Canvas);
};


// Class TgClientBase.TgGfxGiftingBase
// 0x009C (0x0320 - 0x0284)
class UTgGfxGiftingBase : public UTgGfxScene
{
public:
	TArray<int>                                        m_arrVVCodeList;                                          // 0x0284(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             m_arrVVStringList;                                        // 0x0294(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UTgGFxPlayerData*>                    m_arrFriendData;                                          // 0x02A4(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgPlayerId                                 m_pidRequesting;                                          // 0x02B4(0x0024) (NeedCtorLink)
	class UTgGFxObject*                                m_GiftLeftTriggerPrompt;                                  // 0x02D8(0x0008)
	class UTgGFxObject*                                m_GiftRightTriggerPrompt;                                 // 0x02E0(0x0008)
	class UTgGFxObject*                                m_GiftRightStickPrompt;                                   // 0x02E8(0x0008)
	class UTgGFxObject*                                m_GiftLeftStickPrompt;                                    // 0x02F0(0x0008)
	class UTgGFxObject*                                m_GiftLeftButtonPromptContainer;                          // 0x02F8(0x0008)
	class UTgGFxObject*                                m_GiftSendButtonPrompt;                                   // 0x0300(0x0008)
	class UTgGFxObject*                                m_GiftSelectorButtonsGamepad;                             // 0x0308(0x0008)
	class UTgGFxObject*                                m_GiftSelectorButtonsKeyboard;                            // 0x0310(0x0008)
	class UTgGFxObject*                                m_SendGiftButtonKeyboard;                                 // 0x0318(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxGiftingBase");
		return ptr;
	}


	void SetReceiverData(const struct FString& sPlayerName, const struct FString& sPlayerId);
	void SetMessageData(const struct FString& sMessage, int nMessageId);
	void ForceSingleReceiverPopup(const struct FString& sName, const struct FString& nPlayerId);
	void STATIC_USC_PurchaseGift(int giftItemId, const struct FString& sPlayerId, int nMsgIndex, bool bAnon);
	void GetSingleReceiverProfile(bool bSuccess, class UTgPlayerNameManager* pManager);
	void STATIC_SetSingleReceiver(class UTgEventDataItem* pEvent);
	void STATIC_OnReceiveFriends(class UTgGFxFriendData* pFriends);
	void STATIC_PopulateMessageSelector(class UTgEventDataItem* pEvent);
	void MessageSelected(class UTgEventDataItem* pEvent);
	void FriendSelected(class UTgEventDataItem* pEvent);
	void ForceSingleReceiver(const struct FString& overrideName, struct FTgPlayerId* pid);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxGiftNotification
// 0x0000 (0x0284 - 0x0284)
class UTgGfxGiftNotification : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxGiftNotification");
		return ptr;
	}


	void STATIC_OnReceiveNotification(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void GiftNotification(const struct FString& sMessage, int nFrameId);
	void ASC_GiftNotification(const struct FString& sMessage, int nFrameId);
};


// Class TgClientBase.TgGfxGiftSentPopup
// 0x0038 (0x02BC - 0x0284)
class UTgGfxGiftSentPopup : public UTgGfxScene
{
public:
	struct FTgPlayerId                                 m_pidPendingName;                                         // 0x0284(0x0024) (NeedCtorLink)
	struct Fdword                                      m_nGiftItem;                                              // 0x02A8(0x0004)
	class UTgGFxObject*                                m_ContinueBtnKeyboard;                                    // 0x02AC(0x0008)
	class UTgGFxObject*                                m_ContinueBtnGamepad;                                     // 0x02B4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxGiftSentPopup");
		return ptr;
	}


	void STATIC_OnReceivePlayerName(bool bSuccess, class UTgPlayerNameManager* pManager);
	void IncrementActivities();
	void STATIC_SetGiftPopupData(const struct Fdword& nItemId, struct FTgPlayerId* pid);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void GiftSentPopup(class UGFxObject* Data);
	void ASC_GiftSentPopup(class UGFxObject* Data);
};


// Class TgClientBase.TgGfxGodTargeter
// 0x0024 (0x02A8 - 0x0284)
class UTgGfxGodTargeter : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_descTF;                                                 // 0x0284(0x0008)
	int                                                m_nSelectedPreset;                                        // 0x028C(0x0004)
	int                                                m_nPreviousIndex;                                         // 0x0290(0x0004)
	int                                                m_nQuickClosePawnId;                                      // 0x0294(0x0004)
	unsigned long                                      m_bShouldQuickClose : 1;                                  // 0x0298(0x0004)
	int                                                m_nPrevThumbX;                                            // 0x029C(0x0004)
	int                                                m_nPrevThumbY;                                            // 0x02A0(0x0004)
	int                                                m_nSelectedButtonIndex;                                   // 0x02A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxGodTargeter");
		return ptr;
	}


	void Tick(float DeltaTime);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void AttemptGodSelect();
	void ASC_AttemptGodSelect();
	void UpdateThumbstickPos();
	void ASC_UpdateThumbstickPos();
};


// Class TgClientBase.TgGfxHelloWorld
// 0x0000 (0x0284 - 0x0284)
class UTgGfxHelloWorld : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxHelloWorld");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxHUD
// 0x0004 (0x0288 - 0x0284)
class UTgGFxHUD : public UTgGfxScene
{
public:
	unsigned long                                      m_bGameTypeSet : 1;                                       // 0x0284(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxHUD");
		return ptr;
	}


	void PlayTakeHit(int nDamage, float nDamageAngle);
	void SetPlayerSpeaking(const struct FString& sPlayerNetId, bool bIsSpeaking);
	void ToggleScoreboard(bool bShow, bool bFocused, int View);
	void ChangeHudSection(const struct FString& Section, float percentX, float percentY, float Scale, float dockX, float dockY, const struct FString& dockObj, float dockObjX, float dockObjY, bool outX, bool outY);
	void ToggleHudSection(const struct FString& sSectionName);
	void UnloadHudSection(const struct FString& sSectionName);
	void ToggleMatineeSkip(bool bShow);
	void ShowTutorialHighlighter(int nTutorialEvent);
	void ShowEventAccolade(int nIconId);
	void ShowConsoleStorePrompt(bool bShow);
	void SetHudVisible(bool bVisible);
	void ShowEndOfMatch(bool show);
	void GameTypeSet(int GameType, bool isConsole);
	void TogglePassiveMeter();
	void SetEndOfMatchVisibility();
	void STATIC_OnTutorialMessage(class UTgEventDataItem* pEvent);
	void STATIC_OnShowEndOfMatch(class UTgEventDataItem* pEvent);
	void STATIC_OnGameTypeSet(class UTgEventDataItem* pEvent);
	void STATIC_OnGameHUDEvent(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxLoadoutsBase
// 0x0034 (0x02B8 - 0x0284)
class UTgGfxLoadoutsBase : public UTgGfxScene
{
public:
	TArray<struct FGfxEquippedLoadoutItem>             m_EquippedLoadoutItem;                                    // 0x0284(0x0010) (NeedCtorLink)
	int                                                m_nCategoryScrollIndex;                                   // 0x0294(0x0004)
	int                                                m_nCategoryNumPerLine;                                    // 0x0298(0x0004)
	int                                                m_nCategoryMaxScroll;                                     // 0x029C(0x0004)
	class UTgGFxObject*                                m_CategoryScrollArrowUp;                                  // 0x02A0(0x0008)
	class UTgGFxObject*                                m_CategoryScrollArrowDown;                                // 0x02A8(0x0008)
	class UTgGFxObject*                                m_EquippedItemTabs;                                       // 0x02B0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxLoadoutsBase");
		return ptr;
	}


	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxLoginBlocker
// 0x00A0 (0x0324 - 0x0284)
class UTgGfxLoginBlocker : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_Image;                                                  // 0x0284(0x0008)
	class UTgGFxObject*                                m_Title;                                                  // 0x028C(0x0008)
	class UTgGFxObject*                                m_Desc;                                                   // 0x0294(0x0008)
	class UTgGFxObject*                                m_Button;                                                 // 0x029C(0x0008)
	class UTgGFxObject*                                m_Prompt;                                                 // 0x02A4(0x0008)
	struct FLoginBlockerData                           blockerData;                                              // 0x02AC(0x0068) (NeedCtorLink)
	struct FString                                     m_PendingAlreadySeenList;                                 // 0x0314(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxLoginBlocker");
		return ptr;
	}


	void LandingPanelImagesLoaded(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxMassInviteBase
// 0x0224 (0x04A8 - 0x0284)
class UTgGfxMassInviteBase : public UTgGfxScene
{
public:
	struct FString                                     m_lsInviteList;                                           // 0x0284(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsSeachByName;                                          // 0x0294(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsInvitePlayers;                                        // 0x02A4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsFilterByName;                                         // 0x02B4(0x0010) (Const, Localized, NeedCtorLink)
	unsigned long                                      m_bBuddiesAvailable : 1;                                  // 0x02C4(0x0004)
	class UTgGFxObject*                                m_SearchFriendsTF;                                        // 0x02C8(0x0008)
	class UTgGFxObject*                                m_FilterFriendsTF;                                        // 0x02D0(0x0008)
	class UTgGFxObject*                                m_InvitePlayerTF;                                         // 0x02D8(0x0008)
	struct FInviteRow                                  m_InviteRow[0x5];                                         // 0x02E0(0x0020)
	struct FFriendRow                                  m_FriendRow[0x6];                                         // 0x0380(0x0028)
	TArray<struct FOpenInvite>                         m_InvitedPlayers;                                         // 0x0470(0x0010) (NeedCtorLink)
	int                                                m_nInviteScrollPosition;                                  // 0x0480(0x0004)
	int                                                m_nBuddyScrollPosition;                                   // 0x0484(0x0004)
	struct FString                                     m_sSearch;                                                // 0x0488(0x0010) (NeedCtorLink)
	TArray<class UTgGFxPlayerData*>                    m_BuddyList;                                              // 0x0498(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxMassInviteBase");
		return ptr;
	}


	void STATIC_OnReceiveFriends(class UTgGFxFriendData* pFriends);
	void STATIC_OnPrivilegeCheck(TEnumAsByte<EFeaturePrivilege> ePriv, TEnumAsByte<EFeaturePrivilegeLevel> eLevel);
	void STATIC_OnFriendSelector(class UTgEventDataItem* pBaseEvent);
	void STATIC_OnPlayerQuery(const struct FPointer& pBaseEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxMatchInvitation
// 0x00CC (0x0350 - 0x0284)
class UTgGFxMatchInvitation : public UTgGfxScene
{
public:
	TArray<struct FTgPendingCustomInvite>              m_arrPendingCustom;                                       // 0x0284(0x0010) (AlwaysInit, NeedCtorLink)
	TScriptInterface<class UOnlinePlayerInterface>     m_pOnlinePlayerInterface;                                 // 0x0294(0x0010)
	class UTgGFxObject*                                m_HeaderTF;                                               // 0x02A4(0x0008)
	class UTgGFxObject*                                m_GameTypeTF;                                             // 0x02AC(0x0008)
	class UTgGFxObject*                                m_MatchSizeTF;                                            // 0x02B4(0x0008)
	class UTgGFxObject*                                m_PickTypeTF;                                             // 0x02BC(0x0008)
	class UTgGFxObject*                                m_QueueImage;                                             // 0x02C4(0x0008)
	class UTgGFxObject*                                m_QueueBorder;                                            // 0x02CC(0x0008)
	class UTgGFxObject*                                m_QueueDarkener;                                          // 0x02D4(0x0008)
	class UTgGFxObject*                                m_PenaltyTF;                                              // 0x02DC(0x0008)
	class UTgGFxObject*                                m_TimerTF;                                                // 0x02E4(0x0008)
	class UTgGFxObject*                                m_MatchAcceptedTF;                                        // 0x02EC(0x0008)
	class UTgGFxObject*                                m_AcceptBtn;                                              // 0x02F4(0x0008)
	class UTgGFxObject*                                m_DeclineBtn;                                             // 0x02FC(0x0008)
	class UTgGFxObject*                                m_ButtonPrompt;                                           // 0x0304(0x0008)
	class UTgGFxObject*                                m_PromptMessageTF;                                        // 0x030C(0x0008)
	class UForceFeedbackWaveform*                      NotificationWaveform;                                     // 0x0314(0x0008)
	unsigned long                                      m_bIsShowing : 1;                                         // 0x031C(0x0004)
	unsigned long                                      m_bIsCustom : 1;                                          // 0x031C(0x0004)
	int                                                m_nQueueStateChanged;                                     // 0x0320(0x0004)
	float                                              m_fQueueStateTimer;                                       // 0x0324(0x0004)
	float                                              m_fMatchAcceptTimer;                                      // 0x0328(0x0004)
	float                                              m_nPlayerAcceptCount;                                     // 0x032C(0x0004)
	struct FString                                     m_sMatchReadyString;                                      // 0x0330(0x0010) (NeedCtorLink)
	struct FString                                     m_sPenaltyString;                                         // 0x0340(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxMatchInvitation");
		return ptr;
	}


	bool CheckOnlinePermissions(const struct FUniqueNetId& nId);
	bool UCUninitialize();
	bool UCInitialize();
	TScriptInterface<class UOnlinePlayerInterface> GetPlayerInterface();
	void STATIC_OnInputChanged(class UTgEventDataItem* pEvent);
	void STATIC_OnLobbyStateChange(class UTgEventDataItem* pEvent);
	void STATIC_OnQueueStateChange(class UTgEventDataItem* pEvent);
	void STATIC_OnReceivePlayerInfo(const struct FPointer& pEventBase);
	void STATIC_OnReceivePlatformPermissions(unsigned char LocalUserNum, TEnumAsByte<EFeaturePrivilege> Privilege, TArray<struct FPermissionsResultByUniqueNetId> Results);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void Tick(float DeltaTime);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxMessageSelector
// 0x0008 (0x028C - 0x0284)
class UTgGfxMessageSelector : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_MessageSelectorButtonPrompt;                            // 0x0284(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxMessageSelector");
		return ptr;
	}


	void STATIC_USC_SelectMessage(const struct FString& Message, int MessageId);
	void STATIC_PopulateMessages(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxNotificationCenter
// 0x0004 (0x0288 - 0x0284)
class UTgGfxNotificationCenter : public UTgGfxScene
{
public:
	int                                                m_SelectedTab;                                            // 0x0284(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxNotificationCenter");
		return ptr;
	}


	class UGFxObject* STATIC_USC_GetTabs();
	void STATIC_USC_ClearAllNotifications(int tabIndex);
	void STATIC_USC_RespondToClanInvite(bool bAccept, const struct FString& clanId);
	void STATIC_USC_RespondToPartyInvite(bool bAccept);
	void STATIC_USC_RespondToFriendInvite(bool bAccept, const struct FString& PlayerID);
	void STATIC_USC_EquipItem(int nItemId);
	void STATIC_USC_SelectTab(int tabIndex);
	void STATIC_UpdateNotifications(class UTgEventDataItem* pEvent);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxPatchOverview
// 0x00A8 (0x032C - 0x0284)
class UTgGfxPatchOverview : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_Image;                                                  // 0x0284(0x0008)
	class UTgGFxObject*                                m_Button;                                                 // 0x028C(0x0008)
	class UTgGFxObject*                                m_Prompt;                                                 // 0x0294(0x0008)
	struct FPatchOverviewData                          PatchOverviewData;                                        // 0x029C(0x0080) (NeedCtorLink)
	struct FString                                     m_PendingAlreadySeenList;                                 // 0x031C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxPatchOverview");
		return ptr;
	}


	void LandingPanelImagesLoaded(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxPlay
// 0x0124 (0x03A8 - 0x0284)
class UTgGFxPlay : public UTgGfxScene
{
public:
	struct FString                                     m_lsServerRestartLocked;                                  // 0x0284(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsSafeModeLocked;                                       // 0x0294(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsQueueTimeLocked;                                      // 0x02A4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsTimeRemainingHours;                                   // 0x02B4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsTimeRemainingSecs;                                    // 0x02C4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsStartTime;                                            // 0x02D4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsNow;                                                  // 0x02E4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsAvailable_MOTD;                                       // 0x02F4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsAvailable_level_6;                                    // 0x0304(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLaunchIn;                                             // 0x0314(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsMinShort;                                             // 0x0324(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsSecShort;                                             // 0x0334(0x0010) (Const, Localized, NeedCtorLink)
	unsigned long                                      m_bMultiplayerDisabled : 1;                               // 0x0344(0x0004)
	unsigned long                                      m_bGotPlayerStats : 1;                                    // 0x0344(0x0004)
	unsigned long                                      m_bNeedsToCacheFeaturedQueues : 1;                        // 0x0344(0x0004)
	TArray<struct FPlayQueueData>                      m_PlayQueueDatas;                                         // 0x0348(0x0010) (NeedCtorLink)
	TArray<struct FTutorialVideoQueue>                 m_TutorialVideoQueues;                                    // 0x0358(0x0010) (NeedCtorLink)
	TEnumAsByte<EPlaySharedTabs>                       m_CurrentTab;                                             // 0x0368(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	class UGFxObject*                                  m_TabData;                                                // 0x036C(0x0008)
	class UGFxObject*                                  m_FeaturedQueueData;                                      // 0x0374(0x0008)
	class UGFxObject*                                  m_NormalQueueData;                                        // 0x037C(0x0008)
	class UGFxObject*                                  m_RankedQueueData;                                        // 0x0384(0x0008)
	class UGFxObject*                                  m_CoopQueueData;                                          // 0x038C(0x0008)
	class UGFxObject*                                  m_TrainingQueueData;                                      // 0x0394(0x0008)
	float                                              m_fQueueTimerRefresh;                                     // 0x039C(0x0004)
	class UTgGFxObject*                                m_TriumphChest;                                           // 0x03A0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPlay");
		return ptr;
	}


	void STATIC_OnQueueStateChange(class UTgEventDataItem* pEvent);
	void STATIC_OnPopup(class UTgPagePopup* pData, struct FPopupResponse* Response);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void Tick(float DeltaTime);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxPlayCustom
// 0x0048 (0x02CC - 0x0284)
class UTgGFxPlayCustom : public UTgGfxScene
{
public:
	unsigned long                                      m_bIsInCustomLobby : 1;                                   // 0x0284(0x0004)
	struct FString                                     m_sCurrentlyJoiningGameName;                              // 0x0288(0x0010) (NeedCtorLink)
	float                                              m_fCustomListRefreshWaitTime;                             // 0x0298(0x0004)
	TArray<int>                                        m_StartGoldValues;                                        // 0x029C(0x0010) (NeedCtorLink)
	TArray<int>                                        m_BonusTimeValues;                                        // 0x02AC(0x0010) (NeedCtorLink)
	TArray<struct Fdword>                              m_KickedMemberIds;                                        // 0x02BC(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPlayCustom");
		return ptr;
	}


	void STATIC_OnCreateCustomGame(const struct FString& SessionGuid);
	void STATIC_OnPeoplePickerComplete(bool bWasSuccessful, TArray<struct FOnlineFriend> PeoplePicked);
	void OnReadFriendsListComplete(bool bWasSuccessful);
	void ShowPeoplePickerForCustomGameInvite();
	bool CreateDataForCustomGameInvite(TArray<unsigned char>* OutInviteData);
	void ClearDelegates();
	void UpdateOnlineGame();
	void OnCreateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	void CreateOnlineSession(int MaxPlayers, bool bPrivate);
	void FilterFriendListForPeoplePicker(TArray<struct FOnlineFriend>* FriendList, TArray<struct FSessionMemberInfo>* SessionMemberList, int* MaxInviteSize);
	void STATIC_OnQueueStateChange(class UTgEventDataItem* pEvent);
	void STATIC_OnCustomGameHudEvent(class UTgEventDataItem* pEvent);
	void STATIC_OnPopup(class UTgPagePopup* pData, struct FPopupResponse* Response);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void Tick(float DeltaTime);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxPopupModal
// 0x0010 (0x0294 - 0x0284)
class UTgGfxPopupModal : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SelectedPopup_Delegate__Delegate;                   // 0x0284(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxPopupModal");
		return ptr;
	}


	void STATIC_OnPopupClosed(class UTgEventDataItem* pEvent);
	void STATIC_OnPopupOpened(class UTgEventDataItem* pEvent);
	void STATIC_USC_SelectedPopup(int nActionId, const struct FString& sInputValue, const struct FString& sSecondaryInputValue);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void USC_SelectedPopup_Delegate(int nActionId, const struct FString& sInputValue, const struct FString& sSecondaryInputValue);
	void SendAnnounceReportPlayer(const struct FString& sReportedId);
	void SendClosePopup();
	void SendOpenPopup(class UGFxObject* Obj);
};


// Class TgClientBase.TgGfxProfileCommendations
// 0x001C (0x02A0 - 0x0284)
class UTgGfxProfileCommendations : public UTgGfxScene
{
public:
	int                                                m_playerId;                                               // 0x0284(0x0004)
	int                                                m_searchedPlayerId;                                       // 0x0288(0x0004)
	unsigned long                                      m_gotAllActivities : 1;                                   // 0x028C(0x0004)
	int                                                m_nCommendationActivityId;                                // 0x0290(0x0004)
	int                                                m_nCommendationUnlockActivityId;                          // 0x0294(0x0004)
	int                                                m_nCommendationEOYActivityId;                             // 0x0298(0x0004)
	int                                                m_nYearRewardId;                                          // 0x029C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxProfileCommendations");
		return ptr;
	}


	void UpdateAll();
	void asc_updateAll();
	void STATIC_USC_SeenCommendationUpdate();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxProfileReferral
// 0x0020 (0x02A4 - 0x0284)
class UTgGfxProfileReferral : public UTgGfxScene
{
public:
	TArray<struct FReferLevelRewardData>               m_levelRewardDatas;                                       // 0x0284(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FReferPlayedRewardData>              m_playedRewardDatas;                                      // 0x0294(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxProfileReferral");
		return ptr;
	}


	void CreateMilestones();
	void STATIC_Initialize(class UTgMoviePlayer* pMoviePlayer);
};


// Class TgClientBase.TgGfxPurchaseGems
// 0x0130 (0x03B4 - 0x0284)
class UTgGfxPurchaseGems : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_APrompt;                                                // 0x0284(0x0008)
	class UTgGFxObject*                                m_BPrompt;                                                // 0x028C(0x0008)
	TArray<struct FProductInfo>                        m_XboxProducts;                                           // 0x0294(0x0010) (NeedCtorLink)
	TArray<struct FProductInfo>                        m_GemProducts;                                            // 0x02A4(0x0010) (NeedCtorLink)
	TArray<struct FProductInfo>                        m_BaseProducts;                                           // 0x02B4(0x0010) (NeedCtorLink)
	struct FString                                     GodPackProductId;                                         // 0x02C4(0x0010) (NeedCtorLink)
	struct FString                                     GodPackOwnershipId;                                       // 0x02D4(0x0010) (NeedCtorLink)
	struct FString                                     SeasonPassProductId;                                      // 0x02E4(0x0010) (NeedCtorLink)
	struct FString                                     SeasonPassOwnershipId;                                    // 0x02F4(0x0010) (NeedCtorLink)
	struct FString                                     DigitalDeluxeProductId;                                   // 0x0304(0x0010) (NeedCtorLink)
	struct FString                                     DigitalDeluxeOwnershipId;                                 // 0x0314(0x0010) (NeedCtorLink)
	struct FString                                     WelcomePackId;                                            // 0x0324(0x0010) (NeedCtorLink)
	struct FString                                     WelcomePackOwnershipId;                                   // 0x0334(0x0010) (NeedCtorLink)
	struct FString                                     Gems200ProductId;                                         // 0x0344(0x0010) (NeedCtorLink)
	struct FString                                     Gems400ProductId;                                         // 0x0354(0x0010) (NeedCtorLink)
	struct FString                                     Gems800ProductId;                                         // 0x0364(0x0010) (NeedCtorLink)
	struct FString                                     Gems1500ProductId;                                        // 0x0374(0x0010) (NeedCtorLink)
	struct FString                                     Gems2500ProductId;                                        // 0x0384(0x0010) (NeedCtorLink)
	struct FString                                     Gems3500ProductId;                                        // 0x0394(0x0010) (NeedCtorLink)
	struct FString                                     Gems8000ProductId;                                        // 0x03A4(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxPurchaseGems");
		return ptr;
	}


	void SetMarketplaceVisibility(bool Visible, unsigned char IconPosition);
	void GetAvailableProducts(TEnumAsByte<EMediaItemType> MediaType, TArray<struct FMarketplaceProductDetails>* AvailableProducts);
	void GetMarketPlaceCatalog(TEnumAsByte<EMediaItemType> MediaType, TArray<struct FProductInfo>* Products);
	void GetInventoryItems(TArray<struct FMarketplaceInventoryItem>* InventoryItems);
	void GetAllXBProducts(TArray<struct FProductInfo>* Products);
	void STATIC_PopulateXboxProduct(const struct FString& ProductId, TArray<struct FProductInfo>* Products);
	void STATIC_PopulateProduct(const struct FString& ProductId, const struct FString& Header, const struct FString& Description, TArray<struct FProductImageInfo> ProductImages, TArray<struct FProductInfo>* Products);
	void GetGemProducts(TArray<struct FProductInfo>* Products);
	void GetBaseProducts(TArray<struct FProductInfo>* Products);
	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void UpdateData();
	void ASC_UpdateData();
	void HideOverlay();
	void ASC_HideOverlay();
	void ShowOverlay();
	void ASC_ShowOverlay();
	void STATIC_USC_CancelPurchase();
	void STATIC_USC_SetupLongDescModal(const struct FString& ItemName, const struct FString& longDesc, const struct FString& SignedOffer);
	void STATIC_USC_ShowEmptyMessage();
	void STATIC_USC_PurchaseItem(const struct FString& SKUCode, int lootId);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxQuestAcquisition
// 0x0004 (0x0288 - 0x0284)
class UTgGfxQuestAcquisition : public UTgGfxScene
{
public:
	unsigned long                                      m_bCheckForNewQuests : 1;                                 // 0x0284(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxQuestAcquisition");
		return ptr;
	}


	void STATIC_OnNewQuests(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxQuestList
// 0x001C (0x02A0 - 0x0284)
class UTgGfxQuestList : public UTgGfxScene
{
public:
	int                                                m_nQuestToAbandonId;                                      // 0x0284(0x0004)
	class UTgGFxObject*                                m_Header;                                                 // 0x0288(0x0008)
	TArray<int>                                        m_EventQuestSubTypeList;                                  // 0x0290(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxQuestList");
		return ptr;
	}


	void STATIC_UpdateQuests(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxQuickTestMenu
// 0x0000 (0x0284 - 0x0284)
class UTgGFxQuickTestMenu : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxQuickTestMenu");
		return ptr;
	}


	void STATIC_USC_CallConsoleCommand(const struct FString& sCommand);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxReturnPlayer
// 0x0010 (0x0294 - 0x0284)
class UTgGfxReturnPlayer : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_ClaimBtnKeyboard;                                       // 0x0284(0x0008)
	class UTgGFxObject*                                m_ClaimBtnGamepad;                                        // 0x028C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxReturnPlayer");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void STATIC_USC_ClaimReturnRewards();
};


// Class TgClientBase.TgGfxRewardCenter
// 0x0094 (0x0318 - 0x0284)
class UTgGfxRewardCenter : public UTgGfxScene
{
public:
	unsigned long                                      m_bShowLevelUpTab : 1;                                    // 0x0284(0x0004)
	unsigned long                                      m_bShowCouponTab : 1;                                     // 0x0284(0x0004)
	unsigned long                                      m_bShowGiftsTab : 1;                                      // 0x0284(0x0004)
	unsigned long                                      m_bShowChestsTab : 1;                                     // 0x0284(0x0004)
	unsigned long                                      m_bShowEventInfoTab : 1;                                  // 0x0284(0x0004)
	unsigned long                                      m_bShowItemReceiptsTab : 1;                               // 0x0284(0x0004)
	TArray<int>                                        m_VisibleChests;                                          // 0x0288(0x0010) (AlwaysInit, NeedCtorLink)
	class UTgGFxObject*                                m_ChestClaimBtn;                                          // 0x0298(0x0008)
	class UTgGFxObject*                                m_ChestClaimBanner;                                       // 0x02A0(0x0008)
	class UTgGFxObject*                                m_ChestsClaimPrompt;                                      // 0x02A8(0x0008)
	class UTgGFxObject*                                m_ChestsUpDownPrompt;                                     // 0x02B0(0x0008)
	class UTgGFxObject*                                m_ChestsLeftRightPrompt;                                  // 0x02B8(0x0008)
	class UTgGFxObject*                                m_GiftsClaimBtn;                                          // 0x02C0(0x0008)
	class UTgGFxObject*                                m_GiftsClaimGamepad;                                      // 0x02C8(0x0008)
	struct FMap_Mirror                                 m_GiftSenders;                                            // 0x02D0(0x0048) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxRewardCenter");
		return ptr;
	}


	void STATIC_RepopulateInformation(class UTgEventDataItem* pEvent);
	void STATIC_UpdateRewards(class UTgEventDataItem* pEvent);
	void STATIC_USC_GotoReceiptItem(int nItemId);
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void STATIC_RepopulateGiftsFromName(bool bSuccess, class UTgPlayerNameManager* pManager);
};


// Class TgClientBase.TgGfxSeasonalEventQuestView
// 0x0000 (0x0284 - 0x0284)
class UTgGfxSeasonalEventQuestView : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxSeasonalEventQuestView");
		return ptr;
	}


	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxSimulmediaBase
// 0x001C (0x02A0 - 0x0284)
class UTgGFxSimulmediaBase : public UTgGfxScene
{
public:
	struct FString                                     sAdUrl;                                                   // 0x0284(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                m_nSimulmediaGoalGroupId;                                 // 0x0294(0x0004)
	int                                                m_nSimulmediaGoalId;                                      // 0x0298(0x0004)
	int                                                m_nSimulmediaActivityId;                                  // 0x029C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxSimulmediaBase");
		return ptr;
	}


	void HasOpportunities();
	void NoOpportunities();
	void UpdateSimulmediaPopupOpportunities(float DeltaTime);
	void RemoveSimulmediaDelegate();
	void SetOnPostAdvanceDelegateSimulmedia();
	void STATIC_OnOpportunityUpdated();
	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_OnVideoPlayerClosed(class UTgEventDataItem* pEvent);
	void STATIC_USC_UpdateRewards();
	void STATIC_USC_UpdateState();
	void STATIC_USC_OpenVideoPlayer();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxSimulmediaVideoPlayer
// 0x001C (0x02A0 - 0x0284)
class UTgGFxSimulmediaVideoPlayer : public UTgGfxScene
{
public:
	class APComVideoPlayer*                            m_PComVideoPlayer;                                        // 0x0284(0x0008)
	struct FString                                     m_sAdUrl;                                                 // 0x028C(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      m_bWatchingAd : 1;                                        // 0x029C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxSimulmediaVideoPlayer");
		return ptr;
	}


	void OnVideoError(class APComVideoPlayer* VideoPlayer, TEnumAsByte<EPComVideoPlayerError> ErrorCode);
	void DestroyVideoPlayer();
	void CompleteWatchingAd();
	void SpawnVideoPlayer(class AActor* SpawningActor);
	void STATIC_USC_AbortAd();
	void CloseVideoPlayer();
	void CompleteAd();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxSovereigntyVendorStore
// 0x094C (0x0BD0 - 0x0284)
class UTgGfxSovereigntyVendorStore : public UTgGfxScene
{
public:
	unsigned long                                      m_bIsStoreOpen : 1;                                       // 0x0284(0x0004)
	TEnumAsByte<EShopActionMode>                       m_actionMode;                                             // 0x0288(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0289(0x0003) MISSED OFFSET
	int                                                m_nShopSelectedIndex;                                     // 0x028C(0x0004)
	int                                                m_randomShopItems[0x6];                                   // 0x0290(0x0004)
	struct FItemData                                   m_randomShopItemData[0x6];                                // 0x02A8(0x00A8) (NeedCtorLink)
	int                                                m_currentlyEquippedItems[0x6];                            // 0x0698(0x0004)
	struct FItemData                                   m_currentlyEquippedItemData[0x6];                         // 0x06B0(0x00A8) (NeedCtorLink)
	class UTgGFxObject*                                m_mainPanel;                                              // 0x0AA0(0x0008)
	class UTgGFxObject*                                m_sidePanel;                                              // 0x0AA8(0x0008)
	struct FItemMovieClip                              m_mcShopItems[0x6];                                       // 0x0AB0(0x0018)
	struct FItemMovieClip                              m_mcInvItems[0x6];                                        // 0x0B40(0x0018)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxSovereigntyVendorStore");
		return ptr;
	}


	void STATIC_USC_TryAction();
	void STATIC_USC_TryReroll();
	void STATIC_USC_OnInvItemFocused(int Index);
	void STATIC_USC_OnShopItemFocused(int Index);
	void PlayCloseAnimation();
	void PlayOpenAnimation();
	void STATIC_OnGameUIEvent(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxStoreChest
// 0x0004 (0x0288 - 0x0284)
class UTgGfxStoreChest : public UTgGfxScene
{
public:
	unsigned long                                      m_bIsClanChest : 1;                                       // 0x0284(0x0004)
	unsigned long                                      m_bIsDirty : 1;                                           // 0x0284(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxStoreChest");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void ASC_PurchaseTreasureChest();
	void STATIC_PurchaseTreasureChest();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxStoreFeatures
// 0x0000 (0x0284 - 0x0284)
class UTgGfxStoreFeatures : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxStoreFeatures");
		return ptr;
	}


	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void ApplyGemPrices(class UGFxObject* pArray);
	void ClearDailyDeal(class UTgEventDataItem* pEvent);
	void LandingPanelImagesLoaded(class UTgEventDataItem* pEvent);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void ASC_UpdateDP();
	void UpdateDP();
	void STATIC_USC_ForwardFeature(int pItemType, const struct FString& pItemData, const struct FString& pItemData2, int nLocationId);
	void STATIC_USC_Initialize();
};


// Class TgClientBase.TgGfxStoreInfo
// 0x0000 (0x0284 - 0x0284)
class UTgGfxStoreInfo : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxStoreInfo");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxStoreMixer
// 0x0014 (0x0298 - 0x0284)
class UTgGfxStoreMixer : public UTgGfxScene
{
public:
	struct FString                                     m_sCamera;                                                // 0x0284(0x0010) (NeedCtorLink)
	unsigned long                                      m_bIsLinked : 1;                                          // 0x0294(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxStoreMixer");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxStoreShared
// 0x0030 (0x02B4 - 0x0284)
class UTgGFxStoreShared : public UTgGfxScene
{
public:
	struct FString                                     m_sChangingName;                                          // 0x0284(0x0010) (NeedCtorLink)
	struct FString                                     m_sCameraTag;                                             // 0x0294(0x0010) (NeedCtorLink)
	TArray<struct FTgStoreTab>                         m_arrOtherTabs;                                           // 0x02A4(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxStoreShared");
		return ptr;
	}


	void UpdateNameChangePrice(int nPrice);
	void SetSelectedTab(int nIndex);
	void STATIC_OnGameUIEvent(class UTgEventDataItem* pEvent);
	void STATIC_USC_BuyGems();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxStoreViewer
// 0x0058 (0x02DC - 0x0284)
class UTgGfxStoreViewer : public UTgGfxScene
{
public:
	int                                                m_nCurrentTab;                                            // 0x0284(0x0004)
	struct FString                                     m_sCamera;                                                // 0x0288(0x0010) (NeedCtorLink)
	struct FString                                     m_sCamera_Pedestal;                                       // 0x0298(0x0010) (NeedCtorLink)
	struct FString                                     m_sCurCamera;                                             // 0x02A8(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      m_bSeenGods : 1;                                          // 0x02B8(0x0004)
	struct FString                                     m_sPendingName;                                           // 0x02BC(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgStoreItemData>                    m_arrItemData;                                            // 0x02CC(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxStoreViewer");
		return ptr;
	}


	void STATIC_UpdateItems();
	void STATIC_OnNameChangeConfirm(class UTgPagePopup* pData, struct FPopupResponse* Response);
	void STATIC_TryBuyNameChange(const struct FString& sName);
	void STATIC_TryRedeemCode(const struct FString& sCode);
	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_UpdateUGPValue(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxTriumphChest
// 0x0010 (0x0294 - 0x0284)
class UTgGfxTriumphChest : public UTgGfxScene
{
public:
	int                                                m_nTriumphActivity;                                       // 0x0284(0x0004)
	int                                                m_nTriumphResetGoal;                                      // 0x0288(0x0004)
	int                                                m_nTriumphGoal;                                           // 0x028C(0x0004)
	int                                                m_nTriumphCycle;                                          // 0x0290(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxTriumphChest");
		return ptr;
	}


	void STATIC_ShowAboutPanel(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxVendorStore_PC
// 0x2FAC (0x3230 - 0x0284)
class UTgGfxVendorStore_PC : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_TutorialMC;                                             // 0x0284(0x0008)
	class UTgGFxObject*                                m_TutorialArrow;                                          // 0x028C(0x0008)
	class UTgGFxObject*                                m_TutorialLabel;                                          // 0x0294(0x0008)
	class UTgGFxObject*                                m_TutorialBlocker;                                        // 0x029C(0x0008)
	class UTgGFxObject*                                m_TutorialPurchaseMC;                                     // 0x02A4(0x0008)
	class UTgGFxObject*                                m_TabGroup;                                               // 0x02AC(0x0008)
	class UTgGFxObject*                                m_TabBtn[0x3];                                            // 0x02B4(0x0008)
	int                                                m_statid[0x14];                                           // 0x02CC(0x0004)
	float                                              m_StatValue[0x14];                                        // 0x031C(0x0004)
	class UTgGFxObject*                                m_StatGroup;                                              // 0x036C(0x0008)
	class UTgGFxObject*                                m_StatItem[0x14];                                         // 0x0374(0x0008)
	class UTgGFxObject*                                m_StandardView;                                           // 0x0414(0x0008)
	class UTgGFxObject*                                m_FilterGroup;                                            // 0x041C(0x0008)
	struct FItemFilter                                 m_Filter[0x4];                                            // 0x0424(0x0030) (NeedCtorLink)
	struct FItemFilter                                 m_SubFilter[0x13];                                        // 0x04E4(0x0030) (NeedCtorLink)
	class UTgGFxObject*                                m_StdTopBtns[0x2];                                        // 0x0874(0x0008)
	class UTgGFxObject*                                m_StdDisplayBtns[0x2];                                    // 0x0884(0x0008)
	class UTgGFxObject*                                m_RelicUpgradeLabel;                                      // 0x0894(0x0008)
	class UTgGFxObject*                                m_SearchText;                                             // 0x089C(0x0008)
	class UTgGFxObject*                                m_MultiPurchase;                                          // 0x08A4(0x0008)
	class UTgGFxObject*                                m_StdListGroup;                                           // 0x08AC(0x0008)
	class UTgGFxObject*                                m_StdListScroll;                                          // 0x08B4(0x0008)
	struct FDisplayItem                                m_StdListItem[0xC];                                       // 0x08BC(0x0078)
	class UTgGFxObject*                                m_StdGridGroup;                                           // 0x0E5C(0x0008)
	class UTgGFxObject*                                m_StdGridScroll;                                          // 0x0E64(0x0008)
	struct FDisplayItem                                m_StdGridItem[0x18];                                      // 0x0E6C(0x0078)
	class UTgGFxObject*                                m_RecommendedView;                                        // 0x19AC(0x0008)
	class UTgGFxObject*                                m_RoleDropDown;                                           // 0x19B4(0x0008)
	struct FDisplayItem                                m_RecListItem[0xC];                                       // 0x19BC(0x0078)
	struct FDisplayItem                                m_RecGridItem[0x10];                                      // 0x1F5C(0x0078)
	class UTgGFxObject*                                m_RecHeader[0x4];                                         // 0x26DC(0x0008)
	class UTgGFxObject*                                m_RecHeaderTF[0x4];                                       // 0x26FC(0x0008)
	class UTgGFxObject*                                m_RecHeaderBlock[0x4];                                    // 0x271C(0x0008)
	class UTgGFxObject*                                m_PurchaseGroup;                                          // 0x273C(0x0008)
	class UTgGFxObject*                                m_StoreDivider;                                           // 0x2744(0x0008)
	class UTgGFxObject*                                m_Tier[0x4];                                              // 0x274C(0x0008)
	struct FDisplayItem                                m_Tier1Btn[0x4];                                          // 0x276C(0x0078)
	struct FDisplayItem                                m_Tier2Btn[0x4];                                          // 0x294C(0x0078)
	struct FDisplayItem                                m_Tier3Btn[0x4];                                          // 0x2B2C(0x0078)
	struct FDisplayItem                                m_Tier4Btn[0x4];                                          // 0x2D0C(0x0078)
	struct FDisplayItem                                m_SelectedGroup;                                          // 0x2EEC(0x0078)
	class UTgGFxObject*                                m_CurrencyTF;                                             // 0x2F64(0x0008)
	class UTgGFxObject*                                m_CurrencyBG;                                             // 0x2F6C(0x0008)
	class UTgGFxObject*                                m_SummaryTF;                                              // 0x2F74(0x0008)
	struct FDisplayItem                                m_SellBtn;                                                // 0x2F7C(0x0078)
	struct FDisplayItem                                m_UndoBtn;                                                // 0x2FF4(0x0078)
	class UTgGFxObject*                                m_SellBtnBG;                                              // 0x306C(0x0008)
	class UTgGFxObject*                                m_SelectBtn;                                              // 0x3074(0x0008)
	struct FDisplayItem                                m_PurchaseBtn;                                            // 0x307C(0x0078)
	class UTgGFxObject*                                m_PurchaseBtnBG;                                          // 0x30F4(0x0008)
	class UTgGFxObject*                                m_AutoPurchase;                                           // 0x30FC(0x0008)
	class UTgGFxObject*                                m_StoreInactive;                                          // 0x3104(0x0008)
	int                                                tutorialItemIndex;                                        // 0x310C(0x0004)
	int                                                m_nFilter;                                                // 0x3110(0x0004)
	int                                                m_nCurrency;                                              // 0x3114(0x0004)
	int                                                m_nRoleIndex;                                             // 0x3118(0x0004)
	int                                                m_nScrollIndex;                                           // 0x311C(0x0004)
	int                                                m_nPlayerClass;                                           // 0x3120(0x0004)
	int                                                m_nSelectedItem;                                          // 0x3124(0x0004)
	unsigned long                                      m_bIsCustomRole : 1;                                      // 0x3128(0x0004)
	unsigned long                                      m_bActive : 1;                                            // 0x3128(0x0004)
	unsigned long                                      m_bGridTip : 1;                                           // 0x3128(0x0004)
	unsigned long                                      m_bPhysical : 1;                                          // 0x3128(0x0004)
	unsigned long                                      m_bIsInStore : 1;                                         // 0x3128(0x0004)
	unsigned long                                      m_bForceHideAutoPurchase : 1;                             // 0x3128(0x0004)
	unsigned long                                      m_bIsGridTier : 1;                                        // 0x3128(0x0004)
	unsigned long                                      m_bIsConsumableGrid : 1;                                  // 0x3128(0x0004)
	unsigned long                                      m_bIsSelectedFromTier : 1;                                // 0x3128(0x0004)
	int                                                m_nHighlightIndex;                                        // 0x312C(0x0004)
	float                                              m_fDblClickItem;                                          // 0x3130(0x0004)
	float                                              m_fDblClickTimer;                                         // 0x3134(0x0004)
	float                                              m_fDblClickDuration;                                      // 0x3138(0x0004)
	float                                              m_fRefreshTimer;                                          // 0x313C(0x0004)
	float                                              m_fTipWaitTimer;                                          // 0x3140(0x0004)
	float                                              m_fTipWaitDuration;                                       // 0x3144(0x0004)
	struct FString                                     m_sSearch;                                                // 0x3148(0x0010) (NeedCtorLink)
	struct FString                                     m_sSearchField;                                           // 0x3158(0x0010) (NeedCtorLink)
	TArray<int>                                        m_ShownList;                                              // 0x3168(0x0010) (NeedCtorLink)
	TArray<int>                                        m_ShownGrid;                                              // 0x3178(0x0010) (NeedCtorLink)
	TArray<int>                                        m_ShownCategories;                                        // 0x3188(0x0010) (NeedCtorLink)
	TArray<int>                                        m_PopularItems;                                           // 0x3198(0x0010) (NeedCtorLink)
	TArray<int>                                        m_nTier1Items;                                            // 0x31A8(0x0010) (NeedCtorLink)
	TArray<int>                                        m_nTier2Items;                                            // 0x31B8(0x0010) (NeedCtorLink)
	TArray<int>                                        m_nTier3Items;                                            // 0x31C8(0x0010) (NeedCtorLink)
	TArray<int>                                        m_nTier4Items;                                            // 0x31D8(0x0010) (NeedCtorLink)
	TArray<int>                                        m_nWishList;                                              // 0x31E8(0x0010) (NeedCtorLink)
	int                                                m_nLastSelectedItem;                                      // 0x31F8(0x0004)
	int                                                m_nRecentlyPurchasedTutorialItem;                         // 0x31FC(0x0004)
	float                                              m_fUpdateSaleTimer;                                       // 0x3200(0x0004)
	class UTgVendorData*                               m_VendorData;                                             // 0x3204(0x0008)
	TEnumAsByte<EItemDisplayType>                      m_nStdItemDisplay;                                        // 0x320C(0x0001)
	TEnumAsByte<EStoreDisplayType>                     m_nStoreDisplay;                                          // 0x320D(0x0001)
	TEnumAsByte<EVendorRecommendedBuildMode>           m_eVendorRecommendedBuildMode;                            // 0x320E(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x320F(0x0001) MISSED OFFSET
	TArray<struct FItemCategory>                       m_Categories;                                             // 0x3210(0x0010) (NeedCtorLink)
	TArray<struct FItemCategory>                       m_CustomCategories;                                       // 0x3220(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxVendorStore_PC");
		return ptr;
	}


	void STATIC_OnPopupEvent(class UTgEventDataItem* pEvent);
	void CheckCurrency(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxVendorStoreUnit
// 0x00D0 (0x0354 - 0x0284)
class UTgGfxVendorStoreUnit : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_UnitShopSlot[0x6];                                      // 0x0284(0x0008)
	class UTgGFxObject*                                m_ActiveUnitSlot[0xA];                                    // 0x02B4(0x0008)
	class UTgGFxObject*                                m_InactiveUnitSlot[0xA];                                  // 0x0304(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxVendorStoreUnit");
		return ptr;
	}


	void STATIC_OnUnitShopUpdate(class UTgEventDataItem* pEvent);
	void STATIC_SwapUnits(int initPos, int finalPos);
	void BuffUnit(int Id);
	void STATIC_SellUnit(int Position);
	void STATIC_PurchaseUnit(int Id, int Position);
	void STATIC_UpdateInventory();
	void STATIC_UpdateShop();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxVendorStoreV2_Console
// 0x23B8 (0x263C - 0x0284)
class UTgGfxVendorStoreV2_Console : public UTgGfxScene
{
public:
	struct FString                                     m_lsRecommended;                                          // 0x0284(0x0010) (NeedCtorLink)
	struct FString                                     m_lsCustomBuild;                                          // 0x0294(0x0010) (NeedCtorLink)
	struct FString                                     m_lsPopular;                                              // 0x02A4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsOffensive;                                            // 0x02B4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsDefensive;                                            // 0x02C4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsUtility;                                              // 0x02D4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsEssential;                                            // 0x02E4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsActive;                                               // 0x02F4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsConsumable;                                           // 0x0304(0x0010) (NeedCtorLink)
	struct FString                                     m_lsStarter;                                              // 0x0314(0x0010) (NeedCtorLink)
	struct FString                                     m_lsPower;                                                // 0x0324(0x0010) (NeedCtorLink)
	struct FString                                     m_lsAttackSpeed;                                          // 0x0334(0x0010) (NeedCtorLink)
	struct FString                                     m_lsLifesteal;                                            // 0x0344(0x0010) (NeedCtorLink)
	struct FString                                     m_lsPenetration;                                          // 0x0354(0x0010) (NeedCtorLink)
	struct FString                                     m_lsCriticalChance;                                       // 0x0364(0x0010) (NeedCtorLink)
	struct FString                                     m_lsPhysicalDefense;                                      // 0x0374(0x0010) (NeedCtorLink)
	struct FString                                     m_lsMagicalDefense;                                       // 0x0384(0x0010) (NeedCtorLink)
	struct FString                                     m_lsGeneralDefense;                                       // 0x0394(0x0010) (NeedCtorLink)
	struct FString                                     m_lsMovement;                                             // 0x03A4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsCooldown;                                             // 0x03B4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsSelect;                                               // 0x03C4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsClose;                                                // 0x03D4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsSell;                                                 // 0x03E4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsBuy;                                                  // 0x03F4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsBack;                                                 // 0x0404(0x0010) (NeedCtorLink)
	struct FString                                     m_lsInventory;                                            // 0x0414(0x0010) (NeedCtorLink)
	struct FString                                     m_lsHealth;                                               // 0x0424(0x0010) (NeedCtorLink)
	struct FString                                     m_lsHP5;                                                  // 0x0434(0x0010) (NeedCtorLink)
	struct FString                                     m_lsAura;                                                 // 0x0444(0x0010) (NeedCtorLink)
	struct FString                                     m_lsCCR;                                                  // 0x0454(0x0010) (NeedCtorLink)
	struct FString                                     m_lsMana;                                                 // 0x0464(0x0010) (NeedCtorLink)
	struct FString                                     m_lsMP5;                                                  // 0x0474(0x0010) (NeedCtorLink)
	struct FString                                     m_lsToggleStats;                                          // 0x0484(0x0010) (NeedCtorLink)
	struct FString                                     m_lsUndo;                                                 // 0x0494(0x0010) (NeedCtorLink)
	struct FString                                     m_lsMultiPurchaseLabel;                                   // 0x04A4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsRelicRestrictedLabel;                                 // 0x04B4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsEquip;                                                // 0x04C4(0x0010) (NeedCtorLink)
	struct FString                                     m_lsUnequip;                                              // 0x04D4(0x0010) (NeedCtorLink)
	unsigned long                                      m_bUpdateNeeded : 1;                                      // 0x04E4(0x0004)
	unsigned long                                      m_bTestMode : 1;                                          // 0x04E4(0x0004)
	unsigned long                                      m_bReturnedToItemStore : 1;                               // 0x04E4(0x0004)
	unsigned long                                      m_bIsInTutorial : 1;                                      // 0x04E4(0x0004)
	unsigned long                                      m_bShouldBlockKeys : 1;                                   // 0x04E4(0x0004)
	unsigned long                                      m_bIsFastScroll : 1;                                      // 0x04E4(0x0004)
	unsigned long                                      m_bIsViewingTop : 1;                                      // 0x04E4(0x0004)
	unsigned long                                      m_bIsStoreOpen : 1;                                       // 0x04E4(0x0004)
	unsigned long                                      m_bCanBuyItems : 1;                                       // 0x04E4(0x0004)
	unsigned long                                      m_bShouldShowAllRecommendedBuilds : 1;                    // 0x04E4(0x0004)
	unsigned long                                      m_bClearData : 1;                                         // 0x04E4(0x0004)
	int                                                m_nHighlighterElement;                                    // 0x04E8(0x0004)
	int                                                m_nLastSelectedTutorialIndex;                             // 0x04EC(0x0004)
	int                                                m_nTutorialItemIndex;                                     // 0x04F0(0x0004)
	int                                                m_nTutorialTierItemId;                                    // 0x04F4(0x0004)
	struct FString                                     m_FilterStrings[0xB];                                     // 0x04F8(0x0010) (NeedCtorLink)
	int                                                m_CurrentScrollPos[0x5];                                  // 0x05A8(0x0004)
	int                                                m_nPlayerClassId;                                         // 0x05BC(0x0004)
	int                                                m_nStoreSelectionIndex;                                   // 0x05C0(0x0004)
	int                                                m_nETCSelectionIndex;                                     // 0x05C4(0x0004)
	int                                                m_nCurrency;                                              // 0x05C8(0x0004)
	int                                                m_nStoreSelectionItemId;                                  // 0x05CC(0x0004)
	struct FPointer                                    m_SelectedTierDisplay;                                    // 0x05D0(0x0008) (Native)
	int                                                m_nMaxItems;                                              // 0x05D8(0x0004)
	int                                                m_nMaxInventory;                                          // 0x05DC(0x0004)
	int                                                m_nMaxActive;                                             // 0x05E0(0x0004)
	int                                                m_nMaxConsumable;                                         // 0x05E4(0x0004)
	int                                                m_nGoldNeededForInventoryUpgrade;                         // 0x05E8(0x0004)
	int                                                m_nGoldNeededForUpdate;                                   // 0x05EC(0x0004)
	int                                                m_nLeftPanelSelectedItem;                                 // 0x05F0(0x0004)
	TEnumAsByte<EVendorStoreNavigationMode>            m_nNavigationMode;                                        // 0x05F4(0x0001)
	TEnumAsByte<EVendorStoreFilterMode>                m_nCurrentFilterMode;                                     // 0x05F5(0x0001)
	TEnumAsByte<EVendorStorePanelMode>                 m_nCurrentPanelMode;                                      // 0x05F6(0x0001)
	TEnumAsByte<EVendorRecommendedBuildMode>           m_eVendorRecommendedBuildMode;                            // 0x05F7(0x0001)
	struct FPointer                                    m_CurrentFilteredItems;                                   // 0x05F8(0x0008) (Native)
	TArray<struct FStoreItemCategory>                  m_RecommendedItems;                                       // 0x0600(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_RecommendedItems2;                                      // 0x0610(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_RecommendedItems3;                                      // 0x0620(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_RecommendedItems4;                                      // 0x0630(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_RecommendedItems5;                                      // 0x0640(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_CustomItems;                                            // 0x0650(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_PopularItems;                                           // 0x0660(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_OffensiveItems;                                         // 0x0670(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_DefensiveItems;                                         // 0x0680(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_UtilityItems;                                           // 0x0690(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_StarterItems;                                           // 0x06A0(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_ConsumableItems;                                        // 0x06B0(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_OffensiveTopItems;                                      // 0x06C0(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_DefensiveTopItems;                                      // 0x06D0(0x0010) (NeedCtorLink)
	TArray<struct FStoreItemCategory>                  m_UtilityTopItems;                                        // 0x06E0(0x0010) (NeedCtorLink)
	TArray<int>                                        m_nTier1Items;                                            // 0x06F0(0x0010) (NeedCtorLink)
	TArray<int>                                        m_nTier2Items;                                            // 0x0700(0x0010) (NeedCtorLink)
	TArray<int>                                        m_nTier3Items;                                            // 0x0710(0x0010) (NeedCtorLink)
	TArray<int>                                        m_nTier4Items;                                            // 0x0720(0x0010) (NeedCtorLink)
	TArray<int>                                        m_nRelicList;                                             // 0x0730(0x0010) (NeedCtorLink)
	class UTgGFxObject*                                m_RecommendedDividers[0x5];                               // 0x0740(0x0008)
	struct FStoreStatDisplay                           m_StatDisplay[0x14];                                      // 0x0768(0x0034) (NeedCtorLink)
	int                                                m_statid[0x14];                                           // 0x0B78(0x0004)
	class UTgGFxObject*                                m_CircularSelections[0xB];                                // 0x0BC8(0x0008)
	class UTgGFxObject*                                m_RecommendedText[0x5];                                   // 0x0C20(0x0008)
	struct FStoreItemDisplay                           m_ItemDisplay[0x1E];                                      // 0x0C48(0x0078)
	struct FStoreItemDisplay                           m_InventoryDisplay[0x6];                                  // 0x1A58(0x0078)
	class UTgGFxObject*                                m_InventoryFlashDisplay[0x8];                             // 0x1D28(0x0008)
	struct FStoreItemDisplay                           m_ActiveDisplay[0x2];                                     // 0x1D68(0x0078)
	struct FStoreItemDisplay                           m_ConsumableDisplay[0x2];                                 // 0x1E58(0x0078)
	class UTgGFxObject*                                m_ButtonStackDisplay[0x4];                                // 0x1F48(0x0008)
	class UTgGFxObject*                                m_ButtonCommandDisplay[0x4];                              // 0x1F68(0x0008)
	class UTgGFxObject*                                m_autoBuyPrompt;                                          // 0x1F88(0x0008)
	class UTgGFxObject*                                m_ButtonAutoBuy;                                          // 0x1F90(0x0008)
	class UTgGFxObject*                                m_LeftTutorialHighlight;                                  // 0x1F98(0x0008)
	class UTgGFxObject*                                m_RightTutorialHighlight;                                 // 0x1FA0(0x0008)
	class UTgGFxObject*                                m_Tier[0x4];                                              // 0x1FA8(0x0008)
	struct FStoreTierDisplay                           m_Tier1Btn[0x4];                                          // 0x1FC8(0x0058)
	struct FStoreTierDisplay                           m_Tier2Btn[0x4];                                          // 0x2128(0x0058)
	struct FStoreTierDisplay                           m_Tier3Btn[0x4];                                          // 0x2288(0x0058)
	struct FStoreTierDisplay                           m_Tier4Btn[0x4];                                          // 0x23E8(0x0058)
	class UTgGFxObject*                                m_FilterHeader;                                           // 0x2548(0x0008)
	class UTgGFxObject*                                m_SelectedItemName;                                       // 0x2550(0x0008)
	class UTgGFxObject*                                m_RightArrow;                                             // 0x2558(0x0008)
	class UTgGFxObject*                                m_LeftArrow;                                              // 0x2560(0x0008)
	class UTgGFxObject*                                m_InventoryLabel;                                         // 0x2568(0x0008)
	class UTgGFxObject*                                m_ActiveLabel;                                            // 0x2570(0x0008)
	class UTgGFxObject*                                m_ConsumableLabel;                                        // 0x2578(0x0008)
	class UTgGFxObject*                                m_DividerActCon;                                          // 0x2580(0x0008)
	class UTgGFxObject*                                m_MultiTreeLabel;                                         // 0x2588(0x0008)
	class UTgGFxObject*                                m_StoreInactiveLabel;                                     // 0x2590(0x0008)
	class UTgGFxObject*                                m_PurchaseDescriptionPanel;                               // 0x2598(0x0008)
	class UTgGFxObject*                                m_PurchaseDescriptionItemNameTF;                          // 0x25A0(0x0008)
	class UTgGFxObject*                                m_PurchaseDescriptionCostTF;                              // 0x25A8(0x0008)
	class UTgGFxObject*                                m_OwnedGoldTF;                                            // 0x25B0(0x0008)
	class UTgGFxObject*                                m_ItemScrollbar;                                          // 0x25B8(0x0008)
	class UTgGFxObject*                                m_InventoryOwnedGoldTF;                                   // 0x25C0(0x0008)
	class UTgGFxObject*                                m_SellAmountTF;                                           // 0x25C8(0x0008)
	class UTgGFxObject*                                m_HeaderLeftTF;                                           // 0x25D0(0x0008)
	class UTgGFxObject*                                m_HeaderRightTF;                                          // 0x25D8(0x0008)
	class UTgGFxObject*                                m_ItemSummaryTF;                                          // 0x25E0(0x0008)
	class UTgGFxObject*                                m_TierView;                                               // 0x25E8(0x0008)
	class UTgGFxObject*                                m_TierBtnPrompt;                                          // 0x25F0(0x0008)
	class UTgGFxObject*                                m_TriggerCommand;                                         // 0x25F8(0x0008)
	class UTgVendorData*                               m_VendorData;                                             // 0x2600(0x0008)
	int                                                m_nGridTierMode;                                          // 0x2608(0x0004)
	int                                                m_nRecentlyPurchasedItem;                                 // 0x260C(0x0004)
	int                                                m_nRecentlyPurchasedTutorialItem;                         // 0x2610(0x0004)
	int                                                m_nBlockAllKeysExcept;                                    // 0x2614(0x0004)
	float                                              m_fTutorialBlockTimer;                                    // 0x2618(0x0004)
	struct FScriptDelegate                             __USC_ToggleStore_Delegate__Delegate;                     // 0x261C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x261C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __USC_HandleButtonInput_Delegate__Delegate;               // 0x262C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x262C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxVendorStoreV2_Console");
		return ptr;
	}


	void UpdateTierSummary(int pItemId);
	void ASC_UpdateTierSummary(int pItemId);
	void ToggleStatDisplay();
	void ASC_ToggleStatDisplay();
	void CloseStoreOnDelay();
	void ASC_CloseStoreOnDelay();
	void UpdateSelectedPrice();
	void ASC_UpdateSelectedPrice();
	void AnimateItemPurchase();
	void ASC_AnimateItemPurchase();
	void FocusRightPanel();
	void ASC_FocusRightPanel();
	void FocusLeftPanel();
	void ASC_FocusLeftPanel();
	void PlayCloseAnimation();
	void ASC_PlayCloseAnimation();
	void PlayOpenAnimation();
	void ASC_PlayOpenAnimation();
	bool STATIC_USC_HandleButtonInput(int nControllerId, int nKeyCode, int nPressType);
	void STATIC_USC_ToggleStore();
	void USC_HandleButtonInput_Delegate(int nControllerId, int nKeyCode, int nPressType);
	void USC_ToggleStore_Delegate();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void CheckCurrency(class UTgEventDataItem* pEvent);
};


// Class TgClientBase.TgSystemNotifManagerBase
// 0x005C (0x01C4 - 0x0168)
class UTgSystemNotifManagerBase : public UTgGFxEventObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0168(0x0008) (Const, Native, NoExport)
	TArray<struct FSystemMessage>                      m_SystemMessages;                                         // 0x0170(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FSystemMessage>                      m_arrPendingPrivilegeMessages;                            // 0x0180(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FSystemMessage>                      m_arrPendingUserInfoMessages;                             // 0x0190(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgSystemMessageTag>                 m_arrPendingNameMsgs;                                     // 0x01A0(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      m_bClanInvitesInitialized : 1;                            // 0x01B0(0x0004)
	TScriptInterface<class UOnlinePlayerInterface>     m_pOnlinePlayerInterface;                                 // 0x01B4(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSystemNotifManagerBase");
		return ptr;
	}


	bool UCUninitialize();
	bool UCInitialize();
	TScriptInterface<class UOnlinePlayerInterface> GetPlayerInterface();
	void STATIC_OnReceivePlatformPermissions(unsigned char nLocalUserNum, TEnumAsByte<EFeaturePrivilege> ePrivilege, TArray<struct FPermissionsResultByUniqueNetId> arrResults);
	void STATIC_OnLoginEvent(class UTgEventDataItem* pEvent);
	void STATIC_OnAcquisitionNotification(class UTgEventDataItem* pEvent);
	void STATIC_OnAddSystemMessageNotification(class UTgEventDataItem* pEvent);
	void STATIC_OnQuestComplete(class UTgEventDataItem* pEvent);
	void AddQuestCompletedNotification(const struct FString& msg, int nIconIndex);
	void ExpireSystemMessageTeamInvite();
	void AddSystemMessageTeamInvite();
	void STATIC_RejectPartySystemMessage();
	void AcceptPartySystemMessage();
	void STATIC_RejectClanSystemMessage(int nClanId);
	void AcceptClanSystemMessage(int nClanId);
	void InitializeClanInvites();
	int GetNotificationCount(TEnumAsByte<ESystemMessageType> nType);
	void STATIC_OnSystemMessageAdded();
	void STATIC_RejectNotification(TEnumAsByte<ESystemMessageType> nType, int nId);
	void AcceptNotification(TEnumAsByte<ESystemMessageType> nType, int nId);
	void STATIC_RemoveNotification(TEnumAsByte<ESystemMessageType> nType, int nIndex);
	void STATIC_RemoveAllNotifications(TEnumAsByte<ESystemMessageType> nType);
	int GetNewSystemMessageCount(TEnumAsByte<ESystemMessageType> nType);
	bool IsAnySystemMessageNew(TEnumAsByte<ESystemMessageType> nType);
	void STATIC_SetAllSystemMessagesSeen(TEnumAsByte<ESystemMessageType> nType);
	void AddSystemAcquisitionNotification(class UGFxObject* pObj);
	void AddSystemMessageNotification(const struct FString& msg, TEnumAsByte<ESystemMessageType> nType, TEnumAsByte<ESystemMessageSubType> nSubType);
	void STATIC_ShowPlayerNotif(struct FSystemMessage* msg);
	void STATIC_OnReceivePlatformNames(bool bSuccess, class UTgPlayerNameManager* pManager);
	void STATIC_OnPlayerInfo(const struct FPointer& pEventBase);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxNativeWidget
// 0x0074 (0x0130 - 0x00BC)
class UTgGFxNativeWidget : public UTgGFxObject
{
public:
	struct FPointer                                    VfTable_ITgEventAccessInterface;                          // 0x00BC(0x0008) (Const, Native, NoExport)
	struct FArray_Mirror                               m_arrOldMcts;                                             // 0x00C4(0x0010) (Native)
	struct FArray_Mirror                               m_arrMcts;                                                // 0x00D4(0x0010) (Native)
	TArray<struct FGameEventListener>                  m_arrGameEvents;                                          // 0x00E4(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FGameEventListener>                  m_arrInputEvents;                                         // 0x00F4(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      OwnsSubWidgets : 1;                                       // 0x0104(0x0004)
	unsigned long                                      m_bDisableBrowserInput : 1;                               // 0x0104(0x0004)
	unsigned long                                      m_bInitialized : 1;                                       // 0x0104(0x0004)
	unsigned long                                      m_bHasError : 1;                                          // 0x0104(0x0004)
	TArray<struct FTgCustomAStoUCBind>                 Bindings;                                                 // 0x0108(0x0010) (NeedCtorLink)
	class UTgMoviePlayer*                              m_pMovie;                                                 // 0x0118(0x0008)
	TArray<class UObject*>                             m_arrChildren;                                            // 0x0120(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxNativeWidget");
		return ptr;
	}


	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void GetArrInputIntercepts(struct FPointer* pArr);
	void GetArrGameEventListeners(struct FPointer* pArr);
	void GetArrMctsListeners(struct FPointer* pArr);
	void GetArrOldMctsListeners(struct FPointer* pArr);
	bool STATIC_TryUnbindProperty(const struct FName& WidgetName, class UGFxObject* Widget);
	bool STATIC_TryBindProperty(const struct FName& WidgetName, class UGFxObject* Widget);
	void STATIC_Uninitialize();
	void PostInit();
	void STATIC_Initialize();
	void STATIC_PreInit();
	void STATIC_UninitImpl();
	void InitImpl(const struct FString& sPath);
	bool IsInitialized();
};


// Class TgClientBase.TgGfxMainMenu
// 0x0064 (0x0194 - 0x0130)
class UTgGfxMainMenu : public UTgGFxNativeWidget
{
public:
	class UTgGFxObject*                                Sizer;                                                    // 0x0130(0x0008)
	struct FTgMainMenuPanel                            Panel;                                                    // 0x0138(0x0020) (NeedCtorLink)
	TArray<struct FTgMainMenuBtn>                      m_arrData;                                                // 0x0158(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgIntervalHandle                           m_IntervalUpdate;                                         // 0x0168(0x0010)
	class UTgPatchOverviewDataItem*                    m_patchOverviewDataItem;                                  // 0x0178(0x0008)
	unsigned long                                      m_hasPatchOverviewData : 1;                               // 0x0180(0x0004)
	struct FScriptDelegate                             __HandleAction__Delegate;                                 // 0x0184(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0184(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxMainMenu");
		return ptr;
	}


	void STATIC_OnRedeemCodeResponse(class UTgPagePopup* pData, struct FPopupResponse* Response);
	bool HandleInput(struct FInputDetails* Details, TArray<class UGFxObject*>* arrPathToFocus);
	void CloseScene();
	void STATIC_OnRefreshMenu(class UTgEventDataItem* pEventBase);
	void STATIC_OnTutorialUpdate(class UTgEventDataItem* pEventBase);
	void STATIC_OnButtonFocus(struct FGFxEventData* evtData);
	void STATIC_OnButtonClick(struct FGFxEventData* evtData);
	void STATIC_OnUpdateInterval(float nDeltaTime);
	void AnimateIn();
	void STATIC_SetupButtons();
	void AutoPopulate();
	void STATIC_Uninitialize();
	void STATIC_Initialize();
	bool HandleAction(const struct Fdword& nAction);
};


// Class TgClientBase.TgGFxPlayerNameWidget
// 0x0008 (0x0138 - 0x0130)
class UTgGFxPlayerNameWidget : public UTgGFxNativeWidget
{
public:
	class UTgGFxNameDisplayManager*                    m_pManager;                                               // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPlayerNameWidget");
		return ptr;
	}


	void OnNameUpdate(bool bSuccess, class UGFxObject* pForId, const struct FString& sName);
	void STATIC_USC_RequestName(const struct FString& sPlayerId, const struct FString& sUserId, int nPortalType);
	void STATIC_Initialize();
};


// Class TgClientBase.TgGFxPriceData
// 0x0090 (0x014C - 0x00BC)
class UTgGFxPriceData : public UTgGFxObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00BC(0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGFxPriceData.m_mapPrices
	unsigned char                                      UnknownData01[0x48];                                      // 0x0104(0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGFxPriceData.m_mapPresalePrices

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPriceData");
		return ptr;
	}


	void ClearPrices();
	void SetData(const struct Fdword& nLTI, const struct Fdword& nVendor);
};


// Class TgClientBase.TgGFxVendorItemData
// 0x0008 (0x00C4 - 0x00BC)
class UTgGFxVendorItemData : public UTgGFxObject
{
public:
	struct FPointer                                    m_pItem;                                                  // 0x00BC(0x0008) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxVendorItemData");
		return ptr;
	}


	void STATIC_Populate();
	void SetData(const struct Fdword& nLTI, const struct Fdword& nVendorId);
};


// Class TgClientBase.TgGFxBundleData
// 0x0000 (0x00C4 - 0x00C4)
class UTgGFxBundleData : public UTgGFxVendorItemData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxBundleData");
		return ptr;
	}


	void STATIC_Populate();
};


// Class TgClientBase.TgSceneManager
// 0x0040 (0x00FC - 0x00BC)
class UTgSceneManager : public UTgGFxObject
{
public:
	TArray<struct FTgSceneDef>                         m_arrScenes;                                              // 0x00BC(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             m_arrExclusions;                                          // 0x00CC(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      m_fCurrLoadPermission;                                    // 0x00DC(0x0004)
	TArray<struct FTgLoadSceneData>                    m_arrLoadSceneData;                                       // 0x00E0(0x0010) (AlwaysInit, NeedCtorLink)
	class UGFxObject*                                  m_loadedScenes;                                           // 0x00F0(0x0008)
	unsigned long                                      bMouseCaptured : 1;                                       // 0x00F8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSceneManager");
		return ptr;
	}


	class UGFxObject* asc_getScenesAsArray();
	void asc_pushSceneToFocusStack(const struct FString& SceneName, class UGFxObject* modalObj, class UGFxObject* focusObj);
	void asc_popSceneFromFocusStack(const struct FString& SceneName);
	bool IsMouseCaptured();
	void STATIC_PopSceneFromFocusStack(const struct FString& sSceneName);
	void STATIC_PushSceneToFocusStack(const struct FString& sSceneName, class UGFxObject* pModal, class UGFxObject* pFocus);
	bool HasDismissableScene();
	bool DismissHighestScene();
	void STATIC_ShowCharacterCard(int nClassId);
	void STATIC_PopKeyCapture(const struct FString& sKeyName);
	void STATIC_PushKeyCapture(const struct FString& sKeyName);
	void STATIC_PopMouseCapture(const struct FString& sKeyName);
	void STATIC_PushMouseCapture(const struct FString& sKeyName);
	void KillAllScenes();
	void STATIC_UnloadAllScenes(TArray<struct FString> arrExclusions, bool bKill);
	class UTgDataItem* ConsumeLoadSceneData(const struct FString& sSceneName);
	class UTgDataItem* GetLoadSceneData(const struct FString& SceneName);
	void STATIC_SetLoadPermissions(const struct Fdword& fPermiss);
	bool IsSceneBlockingAcquisitions();
	bool IsSceneLoaded(const struct FString& SceneName);
	void ListOpenScenes();
	bool ToggleScene(const struct FString& SceneName, class UTgDataItem* pLoadData);
	bool STATIC_PreloadScene(const struct FString& SceneName);
	bool UnloadScene(const struct FString& SceneName);
	bool LoadScene(const struct FString& SceneName, class UTgDataItem* pLoadData);
	bool KillScene(const struct FString& SceneName);
	void STATIC_Uninitialize();
	void STATIC_Initialize();
};


// Class TgClientBase.TgGFxObjectEvent
// 0x0008 (0x007C - 0x0074)
class UTgGFxObjectEvent : public UTgEventDataItem
{
public:
	class UGFxObject*                                  pObj;                                                     // 0x0074(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxObjectEvent");
		return ptr;
	}

};


// Class TgClientBase.TgGFxSoundEvent
// 0x0010 (0x0084 - 0x0074)
class UTgGFxSoundEvent : public UTgEventDataItem
{
public:
	struct FName                                       nmTheme;                                                  // 0x0074(0x0008)
	struct FName                                       nmEvent;                                                  // 0x007C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxSoundEvent");
		return ptr;
	}

};


// Class TgClientBase.TgGodTargeterEvent
// 0x0014 (0x0088 - 0x0074)
class UTgGodTargeterEvent : public UTgEventDataItem
{
public:
	int                                                fFlags;                                                   // 0x0074(0x0004)
	struct FString                                     sDescription;                                             // 0x0078(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGodTargeterEvent");
		return ptr;
	}

};


// Class TgClientBase.TgIdValueEvent
// 0x0030 (0x00A4 - 0x0074)
class UTgIdValueEvent : public UTgEventDataItem
{
public:
	struct FTgPlayerId                                 Id;                                                       // 0x0074(0x0024) (NeedCtorLink)
	struct FTgDataItemValue                            Value;                                                    // 0x0098(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgIdValueEvent");
		return ptr;
	}

};


// Class TgClientBase.TgInitInterface
// 0x0000 (0x0060 - 0x0060)
class UTgInitInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgInitInterface");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_Initialize();
};


// Class TgClientBase.TgSceneManagerInterface
// 0x0000 (0x0060 - 0x0060)
class UTgSceneManagerInterface : public UTgInitInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSceneManagerInterface");
		return ptr;
	}


	bool HasDismissableScene();
	bool DismissHighestScene();
	void STATIC_PopSceneFromFocusStack(const struct FString& sSceneName);
	void STATIC_PushSceneToFocusStack(const struct FString& sSceneName, class UGFxObject* pModal, class UGFxObject* pFocus);
	void STATIC_PopKeyCapture(class UGFxObject* pOwner);
	void STATIC_PushKeyCapture(class UGFxObject* pOwner);
	void STATIC_PopMouseCapture(class UGFxObject* pOwner);
	void STATIC_PushMouseCapture(class UGFxObject* pOwner);
	void ListOpenScenes();
	bool IsSceneLoaded(const struct FString& SceneName);
	void STATIC_UnloadAllScenes(TArray<struct FString> exclusionList, bool bKill);
	void ToggleScene(const struct FString& SceneName, class UTgDataItem* pLoadData);
	void UnloadScene(const struct FString& SceneName);
	void LoadScene(const struct FString& SceneName, class UTgDataItem* pLoadData);
	void KillScene(const struct FString& SceneName);
};


// Class TgClientBase.TgInputDataEvent
// 0x0008 (0x007C - 0x0074)
class UTgInputDataEvent : public UTgEventDataItem
{
public:
	struct FTgInputWrapper                             Value;                                                    // 0x0074(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgInputDataEvent");
		return ptr;
	}

};


// Class TgClientBase.TgIntervalInterface
// 0x0000 (0x0060 - 0x0060)
class UTgIntervalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgIntervalInterface");
		return ptr;
	}


	class UTgIntervalManager* GetIntervalManager();
};


// Class TgClientBase.TgIntervalManager
// 0x0070 (0x00D0 - 0x0060)
class UTgIntervalManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0060(0x0008) (Const, Native, NoExport)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgIntervalManager.m_mapIntervals
	struct FQWord                                      m_nLastId;                                                // 0x00B0(0x0008)
	struct FQWord                                      m_nCurrentTime;                                           // 0x00B8(0x0008)
	struct FScriptDelegate                             __IntervalDelegate__Delegate;                             // 0x00C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgIntervalManager");
		return ptr;
	}


	struct FQWord GetNextId();
	void ClearAll(class UObject* pScope);
	bool ClearTimeout(struct FTgIntervalHandle* Handle);
	bool ClearInterval(struct FTgIntervalHandle* Handle);
	struct FTgIntervalHandle STATIC_SetIntervalEx(float nTimeSecs, int nRepeatCount, const struct FScriptDelegate& delCallback);
	struct FTgIntervalHandle STATIC_SetInterval(float nTimeSecs, const struct FScriptDelegate& delCallback);
	struct FTgIntervalHandle STATIC_SetTimeout(float nTimeSecs, const struct FScriptDelegate& delCallback);
	void IntervalDelegate(float nDeltaTime);
};


// Class TgClientBase.TgLandingPanelManagerBase
// 0x001C (0x00A0 - 0x0084)
class UTgLandingPanelManagerBase : public UPComUIManagerBase
{
public:
	class UTgMoviePlayer*                              m_pMovie;                                                 // 0x0084(0x0008)
	struct FString                                     GodPackOwnershipId;                                       // 0x008C(0x0010) (Config, NeedCtorLink)
	unsigned long                                      m_bShowJSONWarnings : 1;                                  // 0x009C(0x0004) (Config)
	unsigned long                                      m_bFoundGodPack : 1;                                      // 0x009C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLandingPanelManagerBase");
		return ptr;
	}

};


// Class TgClientBase.TgLoginEvent
// 0x0014 (0x0088 - 0x0074)
class UTgLoginEvent : public UTgEventDataItem
{
public:
	struct FTgLoginEventData                           Data;                                                     // 0x0074(0x0014) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLoginEvent");
		return ptr;
	}

};


// Class TgClientBase.TgDevMenuMoviePlayer
// 0x0008 (0x095C - 0x0954)
class UTgDevMenuMoviePlayer : public UTgMoviePlayer
{
public:
	class UGFxObject*                                  m_DevMenu;                                                // 0x0954(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDevMenuMoviePlayer");
		return ptr;
	}


	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> Event);
	void OnClose();
	void PostInit();
	void STATIC_usc_FillCommands(const struct FString& MenuName);
	void AddSubMenu(const struct FString& Section, const struct FString& submenuname, const struct FString& DisplayName);
	void AddCommand(const struct FString& Section, const struct FString& Command, const struct FString& DisplayName);
	void FillSubMenuCommands(const struct FString& submenuname);
	void FillMenuCommands();
};


// Class TgClientBase.TgMultiStringEvent
// 0x0010 (0x0084 - 0x0074)
class UTgMultiStringEvent : public UTgEventDataItem
{
public:
	TArray<struct FString>                             sValues;                                                  // 0x0074(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgMultiStringEvent");
		return ptr;
	}

};


// Class TgClientBase.TgPagePopup
// 0x0208 (0x0268 - 0x0060)
class UTgPagePopup : public UObject
{
public:
	struct FString                                     m_sTitle;                                                 // 0x0060(0x0010) (NeedCtorLink)
	struct FString                                     m_sButtonLabel1;                                          // 0x0070(0x0010) (NeedCtorLink)
	int                                                m_nButtonActionID1;                                       // 0x0080(0x0004)
	struct FString                                     m_sButtonLabel2;                                          // 0x0084(0x0010) (NeedCtorLink)
	int                                                m_nButtonActionID2;                                       // 0x0094(0x0004)
	struct FString                                     m_sButtonLabel3;                                          // 0x0098(0x0010) (NeedCtorLink)
	int                                                m_nButtonActionID3;                                       // 0x00A8(0x0004)
	int                                                m_nPopupType;                                             // 0x00AC(0x0004)
	struct FString                                     m_sPopupDesc;                                             // 0x00B0(0x0010) (NeedCtorLink)
	struct FString                                     m_sInputTextLabel;                                        // 0x00C0(0x0010) (NeedCtorLink)
	struct FString                                     m_sInputTextFill;                                         // 0x00D0(0x0010) (NeedCtorLink)
	struct FString                                     m_sDropDownLabel;                                         // 0x00E0(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_sDropDownData;                                          // 0x00F0(0x0008)
	int                                                m_nDropDownIndex;                                         // 0x00F8(0x0004)
	int                                                m_nDropDownIndex2;                                        // 0x00FC(0x0004)
	struct FString                                     m_sSubSectionLabel1;                                      // 0x0100(0x0010) (NeedCtorLink)
	struct FString                                     m_sOptionLabel1;                                          // 0x0110(0x0010) (NeedCtorLink)
	int                                                m_nOptionActionID1;                                       // 0x0120(0x0004)
	struct FString                                     m_sOptionSalePrice1;                                      // 0x0124(0x0010) (NeedCtorLink)
	struct FString                                     m_sOptionPrice1;                                          // 0x0134(0x0010) (NeedCtorLink)
	struct FString                                     m_sOptionCallAction1;                                     // 0x0144(0x0010) (NeedCtorLink)
	struct FString                                     m_sOptionLabel2;                                          // 0x0154(0x0010) (NeedCtorLink)
	int                                                m_nOptionActionID2;                                       // 0x0164(0x0004)
	struct FString                                     m_sOptionSalePrice2;                                      // 0x0168(0x0010) (NeedCtorLink)
	struct FString                                     m_sOptionPrice2;                                          // 0x0178(0x0010) (NeedCtorLink)
	struct FString                                     m_sOptionCallAction2;                                     // 0x0188(0x0010) (NeedCtorLink)
	struct FString                                     m_sSubSectionLabel2;                                      // 0x0198(0x0010) (NeedCtorLink)
	struct FString                                     m_sOptionLabel3;                                          // 0x01A8(0x0010) (NeedCtorLink)
	int                                                m_nOptionActionID3;                                       // 0x01B8(0x0004)
	struct FString                                     m_sOptionSalePrice3;                                      // 0x01BC(0x0010) (NeedCtorLink)
	struct FString                                     m_sOptionPrice3;                                          // 0x01CC(0x0010) (NeedCtorLink)
	struct FString                                     m_sOptionCallAction3;                                     // 0x01DC(0x0010) (NeedCtorLink)
	struct FString                                     m_sOptionLabel4;                                          // 0x01EC(0x0010) (NeedCtorLink)
	int                                                m_nOptionActionID4;                                       // 0x01FC(0x0004)
	struct FString                                     m_sOptionSalePrice4;                                      // 0x0200(0x0010) (NeedCtorLink)
	struct FString                                     m_sOptionPrice4;                                          // 0x0210(0x0010) (NeedCtorLink)
	struct FString                                     m_sOptionCallAction4;                                     // 0x0220(0x0010) (NeedCtorLink)
	int                                                m_purchaseItemId;                                         // 0x0230(0x0004)
	int                                                m_purchaseItemType;                                       // 0x0234(0x0004)
	int                                                m_nReplacementCancelAction;                               // 0x0238(0x0004)
	unsigned long                                      m_bImportant : 1;                                         // 0x023C(0x0004)
	unsigned long                                      m_bMustSelectButton : 1;                                  // 0x023C(0x0004)
	unsigned long                                      m_bUserMustClose : 1;                                     // 0x023C(0x0004)
	unsigned long                                      m_bDisableTreasurePurchase : 1;                           // 0x023C(0x0004)
	int                                                m_purchaseItemSubType;                                    // 0x0240(0x0004)
	int                                                m_purchaseItemIconId;                                     // 0x0244(0x0004)
	struct FString                                     m_purchaseItemIconSource;                                 // 0x0248(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __OnPopupDelegate__Delegate;                              // 0x0258(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0258(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgPagePopup");
		return ptr;
	}


	void HandleResponse(struct FPopupResponse* Response);
	void STATIC_RemoveCallback(class UObject* pObject);
	void STATIC_SetCallback(const struct FScriptDelegate& delCallback);
	void FillPopupData(class UGFxObject* popupData);
	void OnPopupDelegate(class UTgPagePopup* pData, struct FPopupResponse* Response);
};


// Class TgClientBase.TgPlayerIdEvent
// 0x0024 (0x0098 - 0x0074)
class UTgPlayerIdEvent : public UTgEventDataItem
{
public:
	struct FTgPlayerId                                 Value;                                                    // 0x0074(0x0024) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgPlayerIdEvent");
		return ptr;
	}

};


// Class TgClientBase.TgPlayerNameManager
// 0x00CC (0x012C - 0x0060)
class UTgPlayerNameManager : public UObject
{
public:
	struct FPointer                                    VfTable_ITgInitInterface;                                 // 0x0060(0x0008) (Const, Native, NoExport)
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0068(0x0008) (Const, Native, NoExport)
	struct FTgPlayerNameMap                            m_mapProfiles;                                            // 0x0070(0x003C) (NeedCtorLink)
	class UTgPlayerNameProcessor*                      m_pProcessor;                                             // 0x00AC(0x0008) (ExportObject, NeedCtorLink, EditInline)
	struct FScriptDelegate                             m_delPlayerCardClosed;                                    // 0x00B4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UOnlineSubsystem*                            m_pOnlineSubsystem;                                       // 0x00C4(0x0008)
	TScriptInterface<class UOnlinePlayerInterface>     m_pPlayerInterface;                                       // 0x00CC(0x0010)
	TScriptInterface<class UOnlinePlayerInterfaceEx>   m_pPlayerInterfaceEx;                                     // 0x00DC(0x0010)
	TScriptInterface<class UOnlineVoiceInterface>      m_pVoiceInterface;                                        // 0x00EC(0x0010)
	TArray<struct FQWord>                              m_MutedVivoxPlayerIds;                                    // 0x00FC(0x0010) (AlwaysInit, NeedCtorLink)
	struct FScriptDelegate                             __NameRequestDelegate__Delegate;                          // 0x010C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __SystemCall__Delegate;                                   // 0x011C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x011C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgPlayerNameManager");
		return ptr;
	}


	class ULocalPlayer* GetLP();
	unsigned char GetLocalUserNum();
	bool IsPlayerMutedImpl(const struct FUniqueNetId& ConsoleId);
	bool UnmutePlayerImpl(unsigned char LocalUserNum, const struct FUniqueNetId& ConsoleId);
	bool MutePlayerImpl(unsigned char LocalUserNum, const struct FUniqueNetId& ConsoleId);
	struct FString GetPlayerNicknameFromInterface();
	bool ShowPlayerCardByUserNameImpl(const struct FString& UserName, const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& completeCallback);
	bool ShowPlayerCardImpl(const struct FUniqueNetId& PlayerID, const struct FScriptDelegate& completeCallback);
	void UnregisterOSSFriends();
	void RegisterOSSFriends();
	struct Fdword ClearCachedOnlineProfiles();
	bool IsOnline(const struct FPointer& pStateOwner, struct FTgPlayerId* pid);
	void STATIC_OnPlayerCardClosed(bool bSuccess);
	bool IsPlayerMuted(struct FTgPlayerId* pid);
	bool STATIC_UnmutePlayer(struct FTgPlayerId* pid);
	bool MutePlayer(struct FTgPlayerId* pid);
	bool STATIC_ShowPlayerCard(const struct FScriptDelegate& delComplete, struct FTgPlayerId* pid);
	struct FTgPlayerId STATIC_GetLocalPlayer(unsigned char nIndex);
	bool CancelProfileRequests(class UObject* pOwner);
	bool STATIC_RequestProfileAsync(const struct FScriptDelegate& delCallback, bool bWaitOnly, bool bNoFilter, struct FTgPlayerId* pid);
	bool STATIC_RequestNamesByGFxPlayersAsync(class UGFxObject* arrPlayers, const struct FScriptDelegate& delCallback, bool bWaitOnly, bool bNoFilter);
	bool HasUnfilteredNameFor(struct FTgPlayerId* Id);
	bool HasProfileFor(struct FTgPlayerId* Id);
	bool HasNameFor(struct FTgPlayerId* Id);
	void STATIC_Uninitialize();
	void STATIC_Initialize();
	void SystemCall(bool bSuccess);
	void NameRequestDelegate(bool bSuccess, class UTgPlayerNameManager* pManager);
};


// Class TgClientBase.TgPlayerNameProcessor
// 0x0138 (0x0198 - 0x0060)
class UTgPlayerNameProcessor : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0060(0x0008) (Const, Native, NoExport)
	class UOnlineSubsystem*                            m_pProcOnlineSubsystem;                                   // 0x0068(0x0008)
	TScriptInterface<class UOnlinePlayerInterfaceEx>   m_pProcPlayerInterfaceEx;                                 // 0x0070(0x0010)
	struct FTgNameRequestBuffer                        buffer_;                                                  // 0x0080(0x0108) (NeedCtorLink)
	struct FScriptDelegate                             __NameRequestDelegate__Delegate;                          // 0x0188(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0188(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgPlayerNameProcessor");
		return ptr;
	}


	void Tick(float nDeltaTime);
	bool IsTickable();
	void STATIC_RequestPlatformProfile(const struct FString& sId, const struct FScriptDelegate& delCallback);
	void STATIC_RequestMctsProfile(const struct Fdword& nId, const struct FScriptDelegate& delCallback, bool bWaitOnly, bool bNoFilter);
	void STATIC_RequestProfile(const struct FScriptDelegate& delCallback, bool bWaitOnly, bool bNoFilter, struct FTgPlayerId* pid);
	void STATIC_OnReadPlatformFriends();
	void STATIC_ReceivePlatformInfo(bool bSuccess, TArray<struct FString>* arrIds, TArray<struct FOnlineProfile>* arrProfiles);
	void STATIC_ReceiveMctsInfo(const struct Fdword& nPid, const struct FString& sFilter, struct FTgUserId* Uid);
	void STATIC_OnFilterResult(const struct FString& sOriginal, const struct FString& sFiltered, bool bTotalCensor);
	void STATIC_RequestPlatformProfiles(TArray<struct FString>* arrUids);
	void Empty();
	void STATIC_Uninitialize();
	void STATIC_Initialize();
	void UnregisterOSS();
	void RegisterOSS();
	void SubmitProfilesRequest(TArray<struct FString>* arrPlayerIdStrings);
	void STATIC_OnReadOnlinePlayerDataComplete(bool bWasSuccessful, TArray<struct FString> PlayerIDs, TArray<struct FOnlineProfile> OnlineProfiles);
	void NameRequestDelegate(bool bSuccess, class UTgPlayerNameManager* pManager);
};


// Class TgClientBase.TgPlayerSpeakingEvent
// 0x0014 (0x0088 - 0x0074)
class UTgPlayerSpeakingEvent : public UTgEventDataItem
{
public:
	struct FString                                     sPlayerNetId;                                             // 0x0074(0x0010) (NeedCtorLink)
	unsigned long                                      bIsSpeaking : 1;                                          // 0x0084(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgPlayerSpeakingEvent");
		return ptr;
	}

};


// Class TgClientBase.TgPromptManager
// 0x0000 (0x00AC - 0x00AC)
class UTgPromptManager : public UGFxObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgPromptManager");
		return ptr;
	}


	void RestoreButtonPrompts();
	void CacheAndClearButtonPrompts();
	void UnsuppressGlobalPrompt(const struct FString& sButtonDisplay, class UGFxObject* Owner);
	void SuppressGlobalPrompt(const struct FString& sButtonDisplay, class UGFxObject* Owner);
	void ClearAllButtonPrompts();
	void ClearButtonPrompt(const struct FString& sButtonDisplay);
	void SetPrompts(TArray<class UGFxObject*> prompts);
	void UpdateButtonPromptText(const struct FString& sButtonDisplay, const struct FString& sPromptText);
	void UpdateButtonPrompt(const struct FString& sButtonDisplay, const struct FString& sPromptMsg);
	void SetPrimaryDisplay(class UGFxObject* Clip);
};


// Class TgClientBase.TgRewardProgressEvent
// 0x0004 (0x0078 - 0x0074)
class UTgRewardProgressEvent : public UTgEventDataItem
{
public:
	float                                              nValue;                                                   // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgRewardProgressEvent");
		return ptr;
	}

};


// Class TgClientBase.TgRoundUIEvent
// 0x000C (0x0080 - 0x0074)
class UTgRoundUIEvent : public UTgEventDataItem
{
public:
	int                                                nGameTipId;                                               // 0x0074(0x0004)
	int                                                nRoundTitleId;                                            // 0x0078(0x0004)
	int                                                nCurrentRound;                                            // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgRoundUIEvent");
		return ptr;
	}

};


// Class TgClientBase.TgScoreboardEvent
// 0x0008 (0x007C - 0x0074)
class UTgScoreboardEvent : public UTgEventDataItem
{
public:
	unsigned long                                      bShow : 1;                                                // 0x0074(0x0004)
	unsigned long                                      bFocused : 1;                                             // 0x0074(0x0004)
	int                                                nView;                                                    // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgScoreboardEvent");
		return ptr;
	}

};


// Class TgClientBase.TgSelectedPopupEvent
// 0x0024 (0x0098 - 0x0074)
class UTgSelectedPopupEvent : public UTgEventDataItem
{
public:
	int                                                nActionId;                                                // 0x0074(0x0004)
	struct FString                                     sInputValue;                                              // 0x0078(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sSecondaryInputValue;                                     // 0x0088(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSelectedPopupEvent");
		return ptr;
	}

};


// Class TgClientBase.TgSelectorPopulateEvent
// 0x0020 (0x0094 - 0x0074)
class UTgSelectorPopulateEvent : public UTgEventDataItem
{
public:
	TArray<struct FString>                             strList;                                                  // 0x0074(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        idList;                                                   // 0x0084(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSelectorPopulateEvent");
		return ptr;
	}

};


// Class TgClientBase.TgSpecSyncEvent
// 0x0004 (0x0078 - 0x0074)
class UTgSpecSyncEvent : public UTgEventDataItem
{
public:
	unsigned long                                      bSpectatorMaster : 1;                                     // 0x0074(0x0004)
	unsigned long                                      bSyncWithMasterEnabled : 1;                               // 0x0074(0x0004)
	unsigned long                                      bIsSyncingWithMaster : 1;                                 // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSpecSyncEvent");
		return ptr;
	}

};


// Class TgClientBase.TgSpectatorStatEvent
// 0x000C (0x0080 - 0x0074)
class UTgSpectatorStatEvent : public UTgEventDataItem
{
public:
	class AActor*                                      pActor;                                                   // 0x0074(0x0008)
	struct Fdword                                      nActorId;                                                 // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSpectatorStatEvent");
		return ptr;
	}

};


// Class TgClientBase.TgStringDataItem
// 0x0010 (0x0070 - 0x0060)
class UTgStringDataItem : public UTgDataItem
{
public:
	struct FString                                     sValue;                                                   // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgStringDataItem");
		return ptr;
	}

};


// Class TgClientBase.TgStringValueEvent
// 0x001C (0x0090 - 0x0074)
class UTgStringValueEvent : public UTgEventDataItem
{
public:
	struct FString                                     sString;                                                  // 0x0074(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgDataItemValue                            Value;                                                    // 0x0084(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgStringValueEvent");
		return ptr;
	}

};


// Class TgClientBase.TgSynchronizedTimer
// 0x0018 (0x00C4 - 0x00AC)
class UTgSynchronizedTimer : public UGFxObject
{
public:
	int                                                m_nIndex;                                                 // 0x00AC(0x0004)
	unsigned long                                      m_bPausedByGame : 1;                                      // 0x00B0(0x0004)
	unsigned long                                      m_bSuppressCallback : 1;                                  // 0x00B0(0x0004)
	unsigned long                                      m_bRunning : 1;                                           // 0x00B0(0x0004)
	unsigned long                                      m_bPaused : 1;                                            // 0x00B0(0x0004)
	class UTgMoviePlayer*                              m_MP;                                                     // 0x00B4(0x0008)
	class UTgTimerManager*                             m_TimerManager;                                           // 0x00BC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSynchronizedTimer");
		return ptr;
	}


	bool STATIC_IsPaused();
	bool IsRunning();
	void EventCallback(int nTimerId, TEnumAsByte<ETGT_EVENT> eEvent);
	void ExpireTimer(bool bFromCallback);
	void STATIC_UpdateTimer(float fElapsed, float fTotal, bool bPaused, bool bFromCallback);
	void STATIC_StartTimer(float fSeconds);
};


// Class TgClientBase.TgTakeHitEvent
// 0x0008 (0x007C - 0x0074)
class UTgTakeHitEvent : public UTgEventDataItem
{
public:
	int                                                nDamage;                                                  // 0x0074(0x0004)
	float                                              nDamageAngle;                                             // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgTakeHitEvent");
		return ptr;
	}

};


// Class TgClientBase.TgTutorialImageEvent
// 0x0010 (0x0084 - 0x0074)
class UTgTutorialImageEvent : public UTgEventDataItem
{
public:
	unsigned long                                      bShow : 1;                                                // 0x0074(0x0004)
	struct Fdword                                      nHeaderMsgId;                                             // 0x0078(0x0004)
	struct Fdword                                      nImageId;                                                 // 0x007C(0x0004)
	struct Fdword                                      nMsgId;                                                   // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgTutorialImageEvent");
		return ptr;
	}

};


// Class TgClientBase.TgTutorialMessageEvent
// 0x0010 (0x0084 - 0x0074)
class UTgTutorialMessageEvent : public UTgEventDataItem
{
public:
	TArray<struct FString>                             arrMessages;                                              // 0x0074(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgTutorialMessageEvent");
		return ptr;
	}

};


// Class TgClientBase.TgTutorialSubtitleEvent
// 0x0014 (0x0088 - 0x0074)
class UTgTutorialSubtitleEvent : public UTgEventDataItem
{
public:
	int                                                nDuration;                                                // 0x0074(0x0004)
	struct FString                                     sMessage;                                                 // 0x0078(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgTutorialSubtitleEvent");
		return ptr;
	}

};


// Class TgClientBase.TgUIMarshalEvent
// 0x0008 (0x007C - 0x0074)
class UTgUIMarshalEvent : public UTgEventDataItem
{
public:
	struct FPointer                                    pMarshal;                                                 // 0x0074(0x0008) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgUIMarshalEvent");
		return ptr;
	}

};


// Class TgClientBase.TgMarshalValueEvent
// 0x0004 (0x0080 - 0x007C)
class UTgMarshalValueEvent : public UTgUIMarshalEvent
{
public:
	int                                                nValue;                                                   // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgMarshalValueEvent");
		return ptr;
	}

};


// Class TgClientBase.TgUIMctsEvent
// 0x0010 (0x0084 - 0x0074)
class UTgUIMctsEvent : public UTgEventDataItem
{
public:
	struct FPointer                                    pEvent;                                                   // 0x0074(0x0008) (Native)
	struct FPointer                                    pEventBase;                                               // 0x007C(0x0008) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgUIMctsEvent");
		return ptr;
	}

};


// Class TgClientBase.TgUIServerStates
// 0x0028 (0x0088 - 0x0060)
class UTgUIServerStates : public UObject
{
public:
	struct FPointer                                    VfTable_ITgEventDispatcherInterface;                      // 0x0060(0x0008) (Const, Native, NoExport)
	struct Fdword                                      m_nLastMatch;                                             // 0x0068(0x0004)
	unsigned long                                      m_bQueuedSpectating : 1;                                  // 0x006C(0x0004)
	TEnumAsByte<EStateQueuePrivilegeState>             m_ePendingPrivilegeCheck;                                 // 0x0070(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	struct Fdword                                      m_nMatchPendingPrivilege;                                 // 0x0074(0x0004)
	class UTgMoviePlayer*                              m_pMovie;                                                 // 0x0078(0x0008)
	class UTgEventDispatcher*                          m_pDispatcher;                                            // 0x0080(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgUIServerStates");
		return ptr;
	}


	class UTgEventDispatcher* STATIC_GetDispatcher();
	void Update();
	bool IsQueuedToSpectate();
	bool STATIC_IsSpectating();
	bool IsInGame();
	bool IsInMatch();
	bool IsInQueue();
	struct Fdword GetLastMatchId();
	struct Fdword GetCurrentQueueId();
	struct Fdword GetCurrentMatchId();
	void STATIC_SetPendingPrivilegeAllowed(const struct Fdword& nMatchId);
	void STATIC_SetPendingPrivilegeDenied(const struct Fdword& nMatchId);
	void STATIC_StartPendingPrivilegeCheck(const struct Fdword& nMatchId);
	void STATIC_SetSpectatingState(bool bSpectating);
	void STATIC_SetMatchComplete(const struct Fdword& nMatchId);
};


// Class TgClientBase.TgValueChangeEvent
// 0x0018 (0x008C - 0x0074)
class UTgValueChangeEvent : public UTgEventDataItem
{
public:
	struct FTgDataItemValue                            Previous;                                                 // 0x0074(0x000C)
	struct FTgDataItemValue                            Current;                                                  // 0x0080(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgValueChangeEvent");
		return ptr;
	}

};


// Class TgClientBase.TgValueDataItemBuyAll
// 0x00A0 (0x010C - 0x006C)
class UTgValueDataItemBuyAll : public UTgValueDataItem
{
public:
	struct FBuyAllLinkage                              linkageStrings;                                           // 0x006C(0x0050) (NeedCtorLink)
	struct FString                                     sOverviewLinkage;                                         // 0x00BC(0x0010) (NeedCtorLink)
	struct FString                                     sListHeaderLinkage;                                       // 0x00CC(0x0010) (NeedCtorLink)
	struct FString                                     sListDividerLinkage;                                      // 0x00DC(0x0010) (NeedCtorLink)
	struct FString                                     sListItemLinkage;                                         // 0x00EC(0x0010) (NeedCtorLink)
	struct FString                                     sScrollBarLinkage;                                        // 0x00FC(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgValueDataItemBuyAll");
		return ptr;
	}

};


// Class TgClientBase.TgVendorData
// 0x005C (0x00BC - 0x0060)
class UTgVendorData : public UObject
{
public:
	int                                                m_nCurrentVendorId;                                       // 0x0060(0x0004)
	unsigned long                                      m_bHasLoaded : 1;                                         // 0x0064(0x0004)
	unsigned long                                      m_bItemBrowser : 1;                                       // 0x0064(0x0004)
	unsigned long                                      m_bSaved : 1;                                             // 0x0064(0x0004)
	unsigned long                                      m_bTopTier : 1;                                           // 0x0064(0x0004)
	unsigned long                                      m_bPhysical : 1;                                          // 0x0064(0x0004)
	unsigned long                                      m_bSubFilter : 1;                                         // 0x0064(0x0004)
	unsigned long                                      m_PopularIsLoaded : 1;                                    // 0x0064(0x0004)
	int                                                m_nPlayerClassId;                                         // 0x0068(0x0004)
	TArray<int>                                        m_Filters;                                                // 0x006C(0x0010) (NeedCtorLink)
	TArray<int>                                        m_PopularItems;                                           // 0x007C(0x0010) (NeedCtorLink)
	TArray<int>                                        m_RecommendedProps;                                       // 0x008C(0x0010) (NeedCtorLink)
	int                                                m_advItems[0x6];                                          // 0x009C(0x0004)
	class UTgMoviePlayer*                              m_pMovie;                                                 // 0x00B4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgVendorData");
		return ptr;
	}

};


// Class TgClientBase.TgVendorItemEvent
// 0x0008 (0x007C - 0x0074)
class UTgVendorItemEvent : public UTgEventDataItem
{
public:
	struct FPointer                                    pValue;                                                   // 0x0074(0x0008) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgVendorItemEvent");
		return ptr;
	}

};


// Class TgClientBase.TgVirtualKeyboard
// 0x002C (0x008C - 0x0060)
class UTgVirtualKeyboard : public UObject
{
public:
	TScriptInterface<class UOnlinePlayerInterface>     m_PlayerInterface;                                        // 0x0060(0x0010)
	class UGFxObject*                                  m_CurrentKeyboardFocusObject;                             // 0x0070(0x0008)
	int                                                m_nMaxLength;                                             // 0x0078(0x0004)
	struct FScriptDelegate                             __OnVirtualKeyboard__Delegate;                            // 0x007C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgVirtualKeyboard");
		return ptr;
	}


	void STATIC_OnKeyboardInputComplete(bool bWasSuccessful);
	void STATIC_OnGFxVirtualKeyboard(bool bSuccess, const struct FString& sText);
	bool ShowKeyboardUIGFx(class UGFxObject* FocusedTextField, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	bool STATIC_usc_IsShowingKeyboardUI();
	bool IsShowingKeyboardUI();
	bool ShowKeyboardUI(const struct FScriptDelegate& delCallback, const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	bool HideKeyboardUI();
	bool DoShowKeyboardUI(const struct FString& TitleText, const struct FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength);
	void Cleanup();
	void InitOSSRef();
	void STATIC_Uninitialize();
	void STATIC_Initialize();
	void OnVirtualKeyboard(bool bSuccess, const struct FString& sText);
};


// Class TgClientBase.TgBlinder
// 0x0000 (0x0060 - 0x0060)
class UTgBlinder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgBlinder");
		return ptr;
	}


	void Draw(class UCanvas* DestinationCanvas, float BlindnessFactor);
};


// Class TgClientBase.TgGameHUD
// 0x00BC (0x06AC - 0x05F0)
class ATgGameHUD : public ATgClientHUD
{
public:
	class UTgOverlayMoviePlayer*                       m_OverlayMP;                                              // 0x05F0(0x0008) (AlwaysInit)
	class AActor*                                      m_LastTarget;                                             // 0x05F8(0x0008)
	int                                                m_nLastVendorTableId;                                     // 0x0600(0x0004)
	unsigned long                                      m_bPlayingIntro : 1;                                      // 0x0604(0x0004)
	unsigned long                                      m_bShowCursor : 1;                                        // 0x0604(0x0004)
	unsigned long                                      m_bUpdateMinimapThisTick : 1;                             // 0x0604(0x0004)
	unsigned long                                      m_bIsInMapPingMode : 1;                                   // 0x0604(0x0004)
	unsigned long                                      m_bMayEnterVGS : 1;                                       // 0x0604(0x0004)
	unsigned long                                      m_bInSpamDetention : 1;                                   // 0x0604(0x0004)
	unsigned long                                      m_bRecapMode : 1;                                         // 0x0604(0x0004)
	class UTgMiniMap*                                  m_MiniMap;                                                // 0x0608(0x0008)
	class UTgMiniMap_Targeting*                        m_TargetingMap;                                           // 0x0610(0x0008)
	float                                              m_fMMUpdateTimer;                                         // 0x0618(0x0004)
	class UTgBlinder*                                  m_Blinder;                                                // 0x061C(0x0008)
	class USoundCue*                                   c_ShowSound;                                              // 0x0624(0x0008)
	class USoundCue*                                   c_HideSound;                                              // 0x062C(0x0008)
	struct FString                                     m_HudSceneName;                                           // 0x0634(0x0010) (NeedCtorLink)
	class ATgRepInfo_Player*                           m_AdventuresPRITemp;                                      // 0x0644(0x0008)
	float                                              m_TargetingMovementScalar;                                // 0x064C(0x0004)
	float                                              m_fLastMinimapUpdateTime;                                 // 0x0650(0x0004)
	float                                              m_fSpamPreventionTime;                                    // 0x0654(0x0004) (Const)
	int                                                m_nMaxPingsPerTime;                                       // 0x0658(0x0004) (Const)
	float                                              m_fSpamDetentionTime;                                     // 0x065C(0x0004) (Const)
	int                                                m_nCurrentPingsInTime;                                    // 0x0660(0x0004)
	int                                                m_ObjectiveCount;                                         // 0x0664(0x0004)
	int                                                m_nGodVideoId;                                            // 0x0668(0x0004)
	struct FString                                     m_sGodVideoUrl;                                           // 0x066C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgMuteReportTracking                       m_muteReport;                                             // 0x067C(0x0030) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameHUD");
		return ptr;
	}


	void LeaveSpamDetention();
	void STATIC_SpamPrevention();
	void STATIC_ShowGodTargeter(bool bShow);
	void STATIC_ShowTargetingMap(bool bShow);
	void CheckForGameType();
	void InitializeUIData();
	int GetGameState();
	void STATIC_UpdateMinimapFrame();
	void HoverMap(float X, float Y, const struct FString& MapName);
	void STATIC_PingMap(float X, float Y, const struct FString& Type, const struct FString& MapName);
	class UTgMiniMap* GetMapByName(const struct FString& MapName);
	void STATIC_UpdateMMTimer(float fNew);
	void HideOverlay();
	void ShowOverlay();
	void STATIC_ToggleOverlay();
	void ToggleMiniMap();
	void HideMiniMap();
	void ShowMiniMap();
	void STATIC_UpdateMiniMap();
	void DrawMiniMap(class UCanvas* theCanvas);
	void PreDemoRewind();
	void PostRender();
	void InitCapturePoints();
	void SetInitialState();
	void PostBeginPlay();
	void LeaveMapPingMode();
	void STATIC_UpdateChatDCPriority();
	bool OnInputAxis(int ControllerId, const struct FName& Key, float Delta, float DeltaTime);
	void EnterMapPingMode();
	void STATIC_ShowCrosshair(bool bShow);
	void Destroyed();
	void STATIC_PlayDeviceFailResponse(TEnumAsByte<EDeviceFailType> failType);
	bool OnRawInputKey(int ControllerId, const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed);
	void STATIC_SetGameTypeReady(int GameType);
	void TogglePassiveMeter();
	void ToggleHudSection(const struct FString& SectionName);
	void STATIC_NotifyInGame();
	void ToggleHUD();
	TEnumAsByte<ETgClientVisibilityMode> GetVisibilityMode();
	void STATIC_ToggleStoreDisplay(bool bShow);
	void HideFinalEOMScene();
	void HideEOMScene();
	void FinishIntro();
	void STATIC_PlayIntro();
	void ToggleViewSkipCinematic(bool bShow);
	void DoReportPlayerMutedImpl(float nDeltaTime);
	void STATIC_ReportPlayerMuted(class UTgEventDataItem* pEvent);
	void STATIC_HideGameTip(bool bNoSound);
	void STATIC_ShowGameTip(int nTipId, bool bNoSound, bool bPopup);
	void STATIC_SetWaypointPing(bool bSetWaypointActive, const struct FVector& vWaypointLoc, int* nWaypointId);
	void STATIC_PingWorldLocation(const struct FVector& PingLocation, TEnumAsByte<EPING_TYPE> Type);
	void STATIC_PrecacheClass(const struct FString& godName, const struct FString& SkinName);
	void STATIC_TestAchievement();
	void STATIC_TestPrecache(int nBotId, int nSkinId, bool bAll);
	void STATIC_TestEquipLobbyPassiveItems(int nItemId1, int nItemId2);
	void STATIC_TestEquipLobbyActiveItems(int nItemId1, int nItemId2);
	void STATIC_SetRecapMode(bool bRecap);
	bool GetRecapMode();
	void STATIC_EndMission(bool bPlayerAttacker, TEnumAsByte<EGAME_WIN_STATE> finalWinState);
	bool UpdateItemStoreItems(class ATgRepInfo_Player* PRI);
	void UpdateScoreboard();
	void STATIC_ToggleConsoleDeathRecap();
	void STATIC_ToggleConsoleScoreBoard();
	void STATIC_StartMapPingMode();
	void STATIC_StartVGS();
	void ToggleScoreboard(bool bShow);
	void PlayTakeHit(const struct FRotator& HitDir, int nDamage, class UClass* DamageType);
	void SellItem(int nInventoryId);
	void STATIC_UpgradeItem(int nItemId, int nUpgradeInvId);
	void PurchaseItem(int nItemId, int nAmount);
	void CloseSkillScreen();
	void STATIC_OpenSkillScreen();
	void STATIC_OpenVendorUnit();
	void STATIC_OpenVendorMenu();
	void STATIC_DeviceChangeEvent(class ATgDevice* Dev, TEnumAsByte<EDeviceChangeEvent> Event);
	void UpdateReleaseTimeRemaining(float fTimeRemaining);
	void UpdatePlayerReady(class ATgRepInfo_Player* PRI);
	bool UpdatePlayerStatUI(class ATgPawn* changedPawn);
	bool STATIC_UpdateGameTypeByQueue();
	bool STATIC_UpdateTeamUI();
	bool UpdatePlayerVitalsUI(class ATgPlayerController* PC);
	bool STATIC_UpdatePlayerPause(class ATgRepInfo_Player* PRI);
	bool STATIC_UpdatePlayerSurrender(class ATgRepInfo_Player* PRI);
	bool UpdatePlayerInfoUI(class ATgRepInfo_Player* PRI);
	bool STATIC_UpdateGameCapturePointControlUI(int Index);
	bool UpdateGameScoreUI();
	bool UpdateGameClockUI();
	void STATIC_UpdateBuildupTimer(class ATgDevice* Dev);
	void STATIC_UpdateRefireTimer(class ATgDevice* Dev);
	void STATIC_UpdateHoverTarget();
	void STATIC_UpdateDebugDraws();
	void STATIC_UpdateOverlay();
	void STATIC_Uninit();
	void STATIC_UninitOverlayMoviePlayer();
	void InitOverlayMoviePlayer();
	void STATIC_UpdateGammaControls();
	void InitMainMoviePlayer();
	void UnregisterEngineCallbacks();
	void STATIC_RegisterEngineCallbacks();
};


// Class TgClientBase.TgGameHUDOverlay
// 0x00EC (0x0198 - 0x00AC)
class UTgGameHUDOverlay : public UGFxObject
{
public:
	class UTgOverlayMoviePlayer*                       m_MP;                                                     // 0x00AC(0x0008)
	TArray<class UGFxObject*>                          m_ReferencedObjects;                                      // 0x00B4(0x0010) (NeedCtorLink)
	TArray<struct FPointer>                            m_TagReferences;                                          // 0x00C4(0x0010) (Native, AlwaysInit)
	TArray<struct FPointer>                            m_OverlayList;                                            // 0x00D4(0x0010) (Native, AlwaysInit)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00E4(0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGameHUDOverlay.m_OverlayMap
	TArray<struct FTG_HUD_INFO>                        c_ActorInfo;                                              // 0x012C(0x0010) (NeedCtorLink)
	TArray<struct FDamageInfoData>                     m_MiscDamageInfoQueue;                                    // 0x013C(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x48];                                      // 0x014C(0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGameHUDOverlay.m_DamageInfoQueues
	int                                                m_AllowedLineCheckIndex;                                  // 0x0194(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameHUDOverlay");
		return ptr;
	}


	void STATIC_RemoveReferencedClip(class UGFxObject* pObj);
	void AddReferencedClip(class UGFxObject* pObj);
	void STATIC_OnGameUIEvent(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize();
	void usc_TweenFinished(class UGFxObject* Obj);
	void ForceRebuildOverlays();
};


// Class TgClientBase.TgDataGroup_Game
// 0x003B (0x01D8 - 0x019D)
class UTgDataGroup_Game : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UTgGameDC_LocalPlayer*                       m_PlayerData;                                             // 0x01A0(0x0008)
	class UTgGameDC_Target*                            m_TargetData;                                             // 0x01A8(0x0008)
	class UTgGameDC_PlayerVitals*                      m_PlayerVitals;                                           // 0x01B0(0x0008)
	class UTgGameDC_Chat*                              m_Chat;                                                   // 0x01B8(0x0008)
	class UTgGameDC_Game*                              m_GameData;                                               // 0x01C0(0x0008)
	class UTgGameDC_DeviceList*                        m_DevicesData;                                            // 0x01C8(0x0008)
	class UTgGameDC_EffectList*                        m_EffectData;                                             // 0x01D0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataGroup_Game");
		return ptr;
	}


	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_Chat
// 0x00BF (0x025C - 0x019D)
class UTgGameDC_Chat : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	struct FQueueMessage                               c_CurrentMessage;                                         // 0x01A0(0x0030) (NeedCtorLink)
	TArray<struct FQueueMessage>                       c_QueuedMessages;                                         // 0x01D0(0x0010) (NeedCtorLink)
	float                                              c_fProcessTime;                                           // 0x01E0(0x0004)
	TArray<class UTgChatData*>                         c_DeferredMessages;                                       // 0x01E4(0x0010) (NeedCtorLink)
	TArray<struct Fdword>                              m_MutedPlayers;                                           // 0x01F4(0x0010) (NeedCtorLink)
	TArray<struct FMessageToken>                       m_MessageTokens;                                          // 0x0204(0x0010) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0214(0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGameDC_Chat.m_PlayerLastPingTime

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_Chat");
		return ptr;
	}


	struct FString TokenReplace(const struct FString& Message, const struct FString& Token, const struct FString& sValue);
	void STATIC_SubmitDeferredMessages(int nChannel);
	void STATIC_PlayVGSSound(int nMsgId, int nPackId, int nBotId, int nSkinId, const struct FString& customSuffix);
	void STATIC_PlayMessageSound(int nMsgId, int nPackId, TEnumAsByte<ETG_CHAT_PRIORITY> ePriority);
	void AddDeferredMessage(class UTgChatData* pData);
	void AddNotifyMsg(const struct FString& sMessage, bool bIsMain, int nDelay, int nColor, int nSize, int nFill);
	void AddAlert(const struct FString& Message);
	void STATIC_UpdateMessageSoundQueue();
	void AddPopupMsg(const struct FString& msg);
	void AddCombatMsg(const struct FString& msg);
	void AddLocalChatMsg(const struct FString& msg, const struct FString& senderName, bool bIsMapPing);
	void AddChatMsg(const struct FString& msg, const struct FString& senderName, int nTime, int nChannel, bool bIsFeedback, bool bIsVGS, bool bOnlyIfOpen, bool bHideSender, bool bNew);
	void STATIC_UpdatePriorityQueue(float Delay);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_Device
// 0x0013 (0x01B0 - 0x019D)
class UTgGameDC_Device : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	int                                                m_nDeviceInstanceId;                                      // 0x01A0(0x0004)
	unsigned long                                      m_bWasShowingAltIcon : 1;                                 // 0x01A4(0x0004)
	class UTgSynchronizedTimer*                        m_CooldownTimer;                                          // 0x01A8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_Device");
		return ptr;
	}


	void STATIC_usc_set_cast_mode(int nCastMode);
	void STATIC_usc_get_mode_tooltip(int nRank);
	void STATIC_NotifyMapChange();
	void STATIC_UpdateCastMode();
	void STATIC_UpdateIcon(class ATgDevice* Dev, bool ForceUpdate);
	void STATIC_UpdateInstanceCount(class ATgDevice* Dev);
	void STATIC_UpdateHasBeenTrained(class ATgDevice* Dev);
	void STATIC_UpdatePtsAlloc(class ATgDevice* Dev);
	void STATIC_UpdateToggleState(class ATgDevice* Dev);
	void STATIC_UpdateCooldown(class ATgDevice* Dev);
	void STATIC_UpdateCanFire(class ATgDevice* Dev);
	void STATIC_UpdateSelected(bool bSelected);
	void STATIC_UpdateRelicValues(class ATgDevice* Dev);
	void UpdateValues(class ATgDevice* Dev);
	void STATIC_DeviceChangeEvent(class ATgDevice* Dev, TEnumAsByte<EDeviceChangeEvent> Event);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_DeviceList
// 0x00CB (0x0268 - 0x019D)
class UTgGameDC_DeviceList : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UTgGameDC_Device*                            m_DeviceList[0x19];                                       // 0x01A0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_DeviceList");
		return ptr;
	}


	void STATIC_SetEmpty(TEnumAsByte<ETG_EQUIP_POINT> eSlot);
	void STATIC_UpdatePtsAlloc(class ATgDevice* Dev);
	void STATIC_UpdateToggleState(class ATgDevice* Dev);
	void STATIC_UpdateSelected(class ATgDevice* Dev);
	void STATIC_UpdateDevice(class ATgDevice* Dev);
	void STATIC_DeviceChangeEvent(class ATgDevice* Dev, TEnumAsByte<EDeviceChangeEvent> Event);
	class UTgGameDC_Device* GetDeviceChunk(class ATgDevice* Dev);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_Effect
// 0x000B (0x01A8 - 0x019D)
class UTgGameDC_Effect : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UTgSynchronizedTimer*                        m_lifeTimer;                                              // 0x01A0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_Effect");
		return ptr;
	}


	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_EffectList
// 0x0103 (0x02A0 - 0x019D)
class UTgGameDC_EffectList : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UTgGameDC_Effect*                            m_EffectList[0x20];                                       // 0x01A0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_EffectList");
		return ptr;
	}


	void STATIC_UpdateEffects(class ATgEffectManager* effectManager, int indexChanged);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_Game
// 0x009B (0x0238 - 0x019D)
class UTgGameDC_Game : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UTgSynchronizedTimer*                        m_GameTimer;                                              // 0x01A0(0x0008)
	class UGFxObject*                                  m_TeamDatas;                                              // 0x01A8(0x0008)
	class UTgGameDC_MapEntity*                         m_FireGiant;                                              // 0x01B0(0x0008)
	class UTgGameDC_MapEntity*                         m_GoldFury;                                               // 0x01B8(0x0008)
	TEnumAsByte<EGAME_MODE_TYPE>                       currentGameType;                                          // 0x01C0(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	int                                                m_nPauseType;                                             // 0x01C4(0x0004)
	unsigned long                                      m_nPauseTaskForce : 1;                                    // 0x01C8(0x0004)
	class UGFxObject*                                  m_GameCustomVals;                                         // 0x01CC(0x0008)
	TArray<class UTgGameDC_Team*>                      m_ValidTaskForces;                                        // 0x01D4(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgGameDCGameHandles                        m_Handles;                                                // 0x01E4(0x0054)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_Game");
		return ptr;
	}


	void OnTaskForceDataUpdate(int Index);
	void SetupTaskForceData(int Index);
	void asc_OnTaskForceDataUpdate(int Index);
	void asc_SetupTaskForceData(int Index);
	void STATIC_OnRankedTeamUpdate(class UTgEventDataItem* pEvent);
	void STATIC_OnFogNextPhase(class UTgEventDataItem* pEvent);
	void STATIC_OnFogGrowTime(class UTgEventDataItem* pEvent);
	void STATIC_OnTaskForceUpdate(class UTgEventDataItem* pEvent);
	void STATIC_OnPauseTimerUpdate(class UTgEventDataItem* pEvent);
	void STATIC_OnSurrenderTimerUpdate(class UTgEventDataItem* pEvent);
	void STATIC_OnRoundUIUpdate(class UTgEventDataItem* pEvent);
	bool STATIC_UpdateGame(class ATgRepInfo_Game* GameRepInfo);
	void STATIC_UpdateRound(int nRound);
	void STATIC_UpdateEncounter(const struct FString& sRoundString);
	void STATIC_UpdateGameCapturePoint(int Index, int TaskForce);
	void STATIC_UpdateGameClock();
	void STATIC_UpdatePauseStatus();
	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_MapEntity
// 0x000F (0x01AC - 0x019D)
class UTgGameDC_MapEntity : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	int                                                m_nPawnId;                                                // 0x01A0(0x0004)
	int                                                m_nBotId;                                                 // 0x01A4(0x0004)
	unsigned long                                      m_bBotSpecificDataSet : 1;                                // 0x01A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_MapEntity");
		return ptr;
	}


	void STATIC_SetBotSpecificData(int nBotId);
	bool STATIC_SetObjectiveData(class ATgPawn* PRI, const struct FString& sEntityName, int nLane, bool bShow);
	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_Player
// 0x017C (0x0328 - 0x01AC)
class UTgGameDC_Player : public UTgGameDC_MapEntity
{
public:
	class UTgSynchronizedTimer*                        m_ReviveTimer;                                            // 0x01AC(0x0008)
	class UTgSynchronizedTimer*                        m_UltimateTimer;                                          // 0x01B4(0x0008)
	class UTgSynchronizedTimer*                        m_Relic1Timer;                                            // 0x01BC(0x0008)
	class UTgSynchronizedTimer*                        m_Relic2Timer;                                            // 0x01C4(0x0008)
	float                                              m_PrevUltTimer;                                           // 0x01CC(0x0004)
	float                                              m_PrevRelic1Timer;                                        // 0x01D0(0x0004)
	float                                              m_PrevRelic2Timer;                                        // 0x01D4(0x0004)
	class UGFxObject*                                  m_ItemStoreArray;                                         // 0x01D8(0x0008)
	class UGFxObject*                                  m_ActiveItemArray;                                        // 0x01E0(0x0008)
	class UGFxObject*                                  m_ConsumableArray;                                        // 0x01E8(0x0008)
	class UGFxObject*                                  m_EffectArray;                                            // 0x01F0(0x0008)
	TArray<struct FTgGameDC_PlayerEffectEntry>         m_EffectData;                                             // 0x01F8(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_DeviceArray;                                            // 0x0208(0x0008)
	TArray<struct FTgGameDC_DeviceEntry>               m_DeviceData;                                             // 0x0210(0x0010) (NeedCtorLink)
	TEnumAsByte<ETeamUpdateState>                      m_eUpdateState;                                           // 0x0220(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	class UGFxObject*                                  m_PlayerCustomValsInt;                                    // 0x0224(0x0008)
	class UGFxObject*                                  m_PlayerCustomValsFloat;                                  // 0x022C(0x0008)
	class UTgGameDC_PlayerStats*                       m_PlayerStats;                                            // 0x0234(0x0008)
	struct FTgDataFieldHandle                          m_playerIdHandle;                                         // 0x023C(0x0004)
	struct FTgDataFieldHandle                          m_consoleIdHandle;                                        // 0x0240(0x0004)
	struct FTgDataFieldHandle                          m_playerNameHandle;                                       // 0x0244(0x0004)
	struct FTgDataFieldHandle                          m_displayNameHandle;                                      // 0x0248(0x0004)
	struct FTgDataFieldHandle                          m_profileNameHandle;                                      // 0x024C(0x0004)
	struct FTgDataFieldHandle                          m_playerShieldPctHandle;                                  // 0x0250(0x0004)
	struct FTgDataFieldHandle                          m_playerHealthPctHandle;                                  // 0x0254(0x0004)
	struct FTgDataFieldHandle                          m_playerPowerPctHandle;                                   // 0x0258(0x0004)
	struct FTgDataFieldHandle                          m_playerShieldHandle;                                     // 0x025C(0x0004)
	struct FTgDataFieldHandle                          m_playerHealthHandle;                                     // 0x0260(0x0004)
	struct FTgDataFieldHandle                          m_playerHealthMaxHandle;                                  // 0x0264(0x0004)
	struct FTgDataFieldHandle                          m_playerPowerHandle;                                      // 0x0268(0x0004)
	struct FTgDataFieldHandle                          m_playerPowerMaxHandle;                                   // 0x026C(0x0004)
	struct FTgDataFieldHandle                          m_bFriendlyHandle;                                        // 0x0270(0x0004)
	struct FTgDataFieldHandle                          m_bVisibleHandle;                                         // 0x0274(0x0004)
	struct FTgDataFieldHandle                          m_levelHandle;                                            // 0x0278(0x0004)
	struct FTgDataFieldHandle                          m_playerClassIdHandle;                                    // 0x027C(0x0004)
	struct FTgDataFieldHandle                          m_matchKillsHandle;                                       // 0x0280(0x0004)
	struct FTgDataFieldHandle                          m_matchDeathsHandle;                                      // 0x0284(0x0004)
	struct FTgDataFieldHandle                          m_matchAssistsHandle;                                     // 0x0288(0x0004)
	struct FTgDataFieldHandle                          m_botKillsHandle;                                         // 0x028C(0x0004)
	struct FTgDataFieldHandle                          m_healingHandle;                                          // 0x0290(0x0004)
	struct FTgDataFieldHandle                          m_reviveTimerHandle;                                      // 0x0294(0x0004)
	struct FTgDataFieldHandle                          m_ultimateTimerHandle;                                    // 0x0298(0x0004)
	struct FTgDataFieldHandle                          m_relic1TimerHandle;                                      // 0x029C(0x0004)
	struct FTgDataFieldHandle                          m_relic2TimerHandle;                                      // 0x02A0(0x0004)
	struct FTgDataFieldHandle                          m_matchGoldHandle;                                        // 0x02A4(0x0004)
	struct FTgDataFieldHandle                          m_currentGoldHandle;                                      // 0x02A8(0x0004)
	struct FTgDataFieldHandle                          m_goldPerMinHandle;                                       // 0x02AC(0x0004)
	struct FTgDataFieldHandle                          m_xpPerMinHandle;                                         // 0x02B0(0x0004)
	struct FTgDataFieldHandle                          m_xpNeededHandle;                                         // 0x02B4(0x0004)
	struct FTgDataFieldHandle                          m_playerDmgHandle;                                        // 0x02B8(0x0004)
	struct FTgDataFieldHandle                          m_botDmgHandle;                                           // 0x02BC(0x0004)
	struct FTgDataFieldHandle                          m_structDmgHandle;                                        // 0x02C0(0x0004)
	struct FTgDataFieldHandle                          m_powerPoolTypeHandle;                                    // 0x02C4(0x0004)
	struct FTgDataFieldHandle                          m_magicalPercentHandle;                                   // 0x02C8(0x0004)
	struct FTgDataFieldHandle                          m_physicalPercentHandle;                                  // 0x02CC(0x0004)
	struct FTgDataFieldHandle                          m_defensePercentHandle;                                   // 0x02D0(0x0004)
	struct FTgDataFieldHandle                          m_utilityPercentHandle;                                   // 0x02D4(0x0004)
	struct FTgDataFieldHandle                          m_surrenderStatusHandle;                                  // 0x02D8(0x0004)
	struct FTgDataFieldHandle                          m_pauseStatusHandle;                                      // 0x02DC(0x0004)
	struct FTgDataFieldHandle                          m_ultimateReadyHandle;                                    // 0x02E0(0x0004)
	struct FTgDataFieldHandle                          m_ultimateInSecsHandle;                                   // 0x02E4(0x0004)
	struct FTgDataFieldHandle                          m_relic1InSecsHandle;                                     // 0x02E8(0x0004)
	struct FTgDataFieldHandle                          m_relic2InSecsHandle;                                     // 0x02EC(0x0004)
	struct FTgDataFieldHandle                          m_bChatMutedHandle;                                       // 0x02F0(0x0004)
	struct FTgDataFieldHandle                          m_isLocalPlayerHandle;                                    // 0x02F4(0x0004)
	struct FTgDataFieldHandle                          m_isDisconnectedHandle;                                   // 0x02F8(0x0004)
	struct FTgDataFieldHandle                          m_pawnIdHandle;                                           // 0x02FC(0x0004)
	struct FTgDataFieldHandle                          m_wardsPlacedHandle;                                      // 0x0300(0x0004)
	struct FTgDataFieldHandle                          m_timeSpentDeadHandle;                                    // 0x0304(0x0004)
	struct FTgDataFieldHandle                          m_xpPctHandle;                                            // 0x0308(0x0004)
	struct FTgDataFieldHandle                          m_isBotHandle;                                            // 0x030C(0x0004)
	struct FTgDataFieldHandle                          m_dmgMitigated;                                           // 0x0310(0x0004)
	struct FTgDataFieldHandle                          m_characterRankedFrame;                                   // 0x0314(0x0004)
	struct FTgDataFieldHandle                          m_portalId;                                               // 0x0318(0x0004)
	struct FTgDataFieldHandle                          m_matchFlagCaptures;                                      // 0x031C(0x0004)
	struct FTgDataFieldHandle                          m_matchFlagReturns;                                       // 0x0320(0x0004)
	unsigned long                                      m_bSendRelicCooldowns : 1;                                // 0x0324(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_Player");
		return ptr;
	}


	bool IsPlayerMuted(const struct FUniqueNetId& ConsoleId);
	void STATIC_USC_ForceStatsUpdate();
	void STATIC_NotifyMapChange();
	void UpdateItemStoreItems(class ATgRepInfo_Player* PRI);
	void STATIC_UpdateStats(class ATgPawn* changedPawn);
	void UpdatePlayer(class ATgRepInfo_Player* PRI);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_LocalPlayer
// 0x0038 (0x0360 - 0x0328)
class UTgGameDC_LocalPlayer : public UTgGameDC_Player
{
public:
	struct FTgGameDCPlayerHandles                      m_Handles;                                                // 0x0328(0x0030)
	struct FTgGameDCPlayerData                         m_Data;                                                   // 0x0358(0x0004)
	int                                                m_PrevTaskforce;                                          // 0x035C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_LocalPlayer");
		return ptr;
	}


	void STATIC_UpdateTutorialOptions(bool bDisableSkills, bool bDisableStore, bool bDisableActives);
	void STATIC_PostDataUpdatedEvent();
	void STATIC_NotifyMapChange();
	void STATIC_UpdateCourierData(class ATgPawn* Pawn);
	void STATIC_UpdateSpectatorViewTarget(class UTgGameDC_MapEntity* entity);
	void STATIC_SetVendorItemList(TArray<int> nItemIds);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_Minion
// 0x0000 (0x0328 - 0x0328)
class UTgGameDC_Minion : public UTgGameDC_Player
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_Minion");
		return ptr;
	}

};


// Class TgClientBase.TgGameDC_Turret
// 0x0000 (0x0328 - 0x0328)
class UTgGameDC_Turret : public UTgGameDC_Minion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_Turret");
		return ptr;
	}

};


// Class TgClientBase.TgGameDC_PlayerStats
// 0x0008 (0x01B4 - 0x01AC)
class UTgGameDC_PlayerStats : public UTgGameDC_MapEntity
{
public:
	class UGFxObject*                                  m_StatsArray;                                             // 0x01AC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_PlayerStats");
		return ptr;
	}


	void STATIC_NotifyMapChange();
	void STATIC_UpdateStats(class ATgPawn* changedPawn);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_PlayerVitals
// 0x00A8 (0x0254 - 0x01AC)
class UTgGameDC_PlayerVitals : public UTgGameDC_MapEntity
{
public:
	class UTgGameDC_MapEntity*                         m_pCurrentObjectiveDC;                                    // 0x01AC(0x0008)
	class ATgPawn*                                     m_pCurrentObjectivePawn;                                  // 0x01B4(0x0008)
	class UTgSynchronizedTimer*                        m_ReviveTimer;                                            // 0x01BC(0x0008)
	class UTgSynchronizedTimer*                        m_RefireTimer;                                            // 0x01C4(0x0008)
	class UTgSynchronizedTimer*                        m_RecallTimer;                                            // 0x01CC(0x0008)
	struct FTgDCPlayerVitalsHandles                    m_Handles;                                                // 0x01D4(0x0080)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_PlayerVitals");
		return ptr;
	}


	void STATIC_UpdatePawnVitals(class ATgPawn_Character* Pawn);
	void STATIC_OnDamageEvent(class UTgEventDataItem* pEvent);
	void CheckObjectivePawnSetup(const struct Fdword& nPawnId);
	void STATIC_SetNearestObjective(class ATgPawn* pPawn);
	void STATIC_UpdateCoreStats();
	void STATIC_UpdateDamageDealt();
	void STATIC_UpdateDamageTaken();
	void STATIC_UpdateDamageRecap();
	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_RespawnLocation
// 0x0000 (0x01AC - 0x01AC)
class UTgGameDC_RespawnLocation : public UTgGameDC_MapEntity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_RespawnLocation");
		return ptr;
	}

};


// Class TgClientBase.TgGameDC_Tower
// 0x0000 (0x01AC - 0x01AC)
class UTgGameDC_Tower : public UTgGameDC_MapEntity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_Tower");
		return ptr;
	}


	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_Target
// 0x0003 (0x01A0 - 0x019D)
class UTgGameDC_Target : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_Target");
		return ptr;
	}


	bool UpdateTarget(class AActor* NewTarget, bool bHovered);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGameDC_Team
// 0x009F (0x023C - 0x019D)
class UTgGameDC_Team : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	int                                                m_nTaskForce;                                             // 0x01A0(0x0004)
	TArray<class UTgGameDC_Player*>                    m_Members;                                                // 0x01A4(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                m_nMaxMemberCount;                                        // 0x01B4(0x0004)
	class UGFxObject*                                  m_MemberList;                                             // 0x01B8(0x0008)
	class UTgGameDC_MapEntity*                         m_Guardian;                                               // 0x01C0(0x0008)
	class UTgGameDC_Tower*                             m_Towers[0x9];                                            // 0x01C8(0x0008)
	class UTgSynchronizedTimer*                        m_SurrenderTimer;                                         // 0x0210(0x0008)
	class UTgSynchronizedTimer*                        m_PauseTimer;                                             // 0x0218(0x0008)
	int                                                m_UpdatePlayersTeamsTimeout;                              // 0x0220(0x0004)
	TArray<float>                                      m_SiegeHealths;                                           // 0x0224(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_TFCustomVals;                                           // 0x0234(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGameDC_Team");
		return ptr;
	}


	void STATIC_PostDataUpdatedEvent();
	void STATIC_SetupMemberData(int nIndex);
	bool STATIC_UpdateMembersTick();
	class UTgGameDC_Tower* FindTower(int nPawnId, int* nNextIndex);
	class UTgGameDC_Player* FindPlayer(int nPawnId, int nPlayerCount);
	void STATIC_ParseUpdatablePlayers(class ATgRepInfo_TaskForce* tfri, TArray<class ATgRepInfo_Player*>* arrPlayers);
	bool STATIC_UpdatePlayerPause(class ATgRepInfo_Player* PRI);
	bool STATIC_UpdatePlayerSurrender(class ATgRepInfo_Player* PRI);
	bool STATIC_UpdatePlayerItemStoreItems(class ATgRepInfo_Player* PRI);
	bool STATIC_UpdatePlayerStat(class ATgPawn* changedPawn);
	int UpdateTaskForce(class ATgRepInfo_TaskForce* tfri);
	bool STATIC_UpdateMembers();
	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGFxHomeMenuScreen
// 0x00C0 (0x0344 - 0x0284)
class UTgGFxHomeMenuScreen : public UTgGfxScene
{
public:
	struct FStreamTimeData                             streamDataPC;                                             // 0x0284(0x0050) (NeedCtorLink)
	class UTgGFxObject*                                m_FeatureButtonPrompts;                                   // 0x02D4(0x0008)
	class UTgGFxObject*                                m_SkinRotatorPrompts;                                     // 0x02DC(0x0008)
	class UTgGFxObject*                                m_SimulmediaButton;                                       // 0x02E4(0x0008)
	TArray<class UTgGFxObject*>                        m_MenuButtons;                                            // 0x02EC(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FHomeMenuItem>                       m_MenuItems;                                              // 0x02FC(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FSceneModelData>                     m_ModelDataList;                                          // 0x030C(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                m_nSeasonalCount;                                         // 0x031C(0x0004)
	int                                                m_nCurrentModelBotRefId;                                  // 0x0320(0x0004)
	int                                                m_nCurrentModelItemId;                                    // 0x0324(0x0004)
	int                                                m_nPreloadModelBotRefId;                                  // 0x0328(0x0004)
	int                                                m_nPreloadModelItemId;                                    // 0x032C(0x0004)
	int                                                m_nCurCamPos;                                             // 0x0330(0x0004)
	unsigned long                                      m_bFirstModel : 1;                                        // 0x0334(0x0004)
	unsigned long                                      m_bSimulmediaBtnActive : 1;                               // 0x0334(0x0004)
	unsigned long                                      m_bShowSimulmediaBtn : 1;                                 // 0x0334(0x0004)
	int                                                m_nCloseCamIndex;                                         // 0x0338(0x0004)
	int                                                m_nMediumCamIndex;                                        // 0x033C(0x0004)
	int                                                m_nFarCamIndex;                                           // 0x0340(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxHomeMenuScreen");
		return ptr;
	}


	void UpdateSimulmediaOpportunities(float DeltaTime);
	void RemoveSimulmediaDelegate();
	void SetOnPostAdvanceDelegate();
	void STATIC_OnSimulmediaPopupClosed(class UTgEventDataItem* pEvent);
	void STATIC_OnSimulmediaPopupOpened(class UTgEventDataItem* pEvent);
	void STATIC_OnEsportsMatchupDataReceived(class UTgEventDataItem* pEvent);
	void STATIC_OnQueueStateChange(class UTgEventDataItem* pEvent);
	void STATIC_USC_ForwardFeature(int pItemType, const struct FString& pItemData, const struct FString& pItemData2, int nLocationId);
	class UTgGFxObject* FindNavigationButton(int hmiActionId, int hmiActionDataId);
	void STATIC_OnOpportunityUpdated();
	void STATIC_SendLobbyCamEvent(int EventType, int camType);
	void STATIC_UpdateQuests(class UTgEventDataItem* pEvent);
	void STATIC_onFinishModelLoad(class UTgEventDataItem* pEvent);
	void STATIC_UpdatePreviewModel(int Index);
	void STATIC_UpdateImage(class UTgEventDataItem* pEvent);
	void STATIC_UpdateFeatures(class UTgEventDataItem* pEvent);
	void STATIC_UpdateCallouts(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* pMoviePlayer);
	void ApplyGemPrices(class UGFxObject* pArray);
	void STATIC_OnNavigateButton(bool isMenu, int Index);
	void STATIC_UpdateMenuButtons(class UTgEventDataItem* pEvent);
	void STATIC_PopulateMenuData();
};


// Class TgClientBase.TgGfxHudChatBase
// 0x0110 (0x0394 - 0x0284)
class UTgGfxHudChatBase : public UTgGfxScene
{
public:
	int                                                m_nIndex;                                                 // 0x0284(0x0004)
	int                                                m_nWidth;                                                 // 0x0288(0x0004)
	int                                                m_nScroll;                                                // 0x028C(0x0004)
	unsigned long                                      m_bInput : 1;                                             // 0x0290(0x0004)
	unsigned long                                      m_bShowCombat : 1;                                        // 0x0290(0x0004)
	unsigned long                                      m_bAddToCombat : 1;                                       // 0x0290(0x0004)
	unsigned long                                      m_bCanChat : 1;                                           // 0x0290(0x0004)
	float                                              m_fBuffer;                                                // 0x0294(0x0004)
	float                                              m_fFadeDelay;                                             // 0x0298(0x0004)
	struct FString                                     m_sRemaining;                                             // 0x029C(0x0010) (NeedCtorLink)
	class UTgChatData*                                 m_pData;                                                  // 0x02AC(0x0008)
	class UTgGFxObject*                                m_BufferText;                                             // 0x02B4(0x0008)
	class UTgGFxObject*                                m_TextMovies[0x8];                                        // 0x02BC(0x0008)
	class UTgGFxObject*                                m_TextFields[0x8];                                        // 0x02FC(0x0008)
	float                                              m_fFadeTimer[0x8];                                        // 0x033C(0x0004)
	TArray<struct FString>                             m_CombatLog;                                              // 0x035C(0x0010) (NeedCtorLink)
	TArray<struct FTgChatMessage>                      m_Messages;                                               // 0x036C(0x0010) (NeedCtorLink)
	class UTgGFxObject*                                m_TabGroup;                                               // 0x037C(0x0008)
	class UTgGFxObject*                                m_TabBtn[0x2];                                            // 0x0384(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxHudChatBase");
		return ptr;
	}


	bool STATIC_ShouldShowCombat();
	void CachePrivilegeInfo();
	bool CanSeeUserMessages();
	void STATIC_OnGameUIEvent(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* pMP);
};


// Class TgClientBase.TgGfxPlayerSkills
// 0x0050 (0x02D4 - 0x0284)
class UTgGfxPlayerSkills : public UTgGfxScene
{
public:
	class UTgGfxVGSData*                               m_pRoot;                                                  // 0x0284(0x0008)
	class UTgGfxVGSData*                               m_pCurrent;                                               // 0x028C(0x0008)
	unsigned long                                      m_bIntercept : 1;                                         // 0x0294(0x0004)
	unsigned long                                      m_bOpen : 1;                                              // 0x0294(0x0004)
	unsigned long                                      m_bCloseSet : 1;                                          // 0x0294(0x0004)
	int                                                m_curIndex;                                               // 0x0298(0x0004)
	struct FKeyBind                                    m_keyBindOpen;                                            // 0x029C(0x001C) (NeedCtorLink)
	struct FKeyBind                                    m_keyBindClose;                                           // 0x02B8(0x001C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxPlayerSkills");
		return ptr;
	}


	void STATIC_OnDeviceLevelUp(class UTgEventDataItem* pEvent);
	void STATIC_OnToggleSkillScreen(class UTgEventDataItem* pEvent);
	void STATIC_OnOffhandSlotReleased(class UTgEventDataItem* pEvent);
	void STATIC_OnOffhandSlotPressed(class UTgEventDataItem* pEvent);
	bool STATIC_OnInput(const struct FPointer& pInputEvent);
	void LevelUpOffhandSlot(int eqp, class ATgPlayerController* PC);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* pMP);
};


// Class TgClientBase.TgGfxVGS
// 0x0198 (0x041C - 0x0284)
class UTgGfxVGS : public UTgGfxScene
{
public:
	class UTgGFxObject*                                m_Label[0xF];                                             // 0x0284(0x0008)
	class UTgGFxObject*                                m_Keybind[0xF];                                           // 0x02FC(0x0008)
	class UTgGFxObject*                                m_ListItem[0xF];                                          // 0x0374(0x0008)
	class UTgGfxVGSData*                               m_pRoot;                                                  // 0x03EC(0x0008)
	class UTgGfxVGSData*                               m_pCurrent;                                               // 0x03F4(0x0008)
	int                                                m_VGSPlatform;                                            // 0x03FC(0x0004)
	class UGFxObject*                                  m_DisplayPrompts;                                         // 0x0400(0x0008)
	int                                                m_stepIndex;                                              // 0x0408(0x0004)
	TArray<struct FString>                             m_CloseInputs;                                            // 0x040C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxVGS");
		return ptr;
	}


	bool STATIC_OnInput(const struct FPointer& tgInput);
	void STATIC_usc_CloseScene();
	void STATIC_usc_UnsetVGS(bool bRemoveInput);
	void STATIC_usc_ForceInput(const struct FString& Input);
	void CloseVGS(class UTgEventDataItem* pEvent);
	void STATIC_Unset();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* pMP);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
};


// Class TgClientBase.TgGfxVGSData
// 0x004C (0x00AC - 0x0060)
class UTgGfxVGSData : public UObject
{
public:
	int                                                m_nId;                                                    // 0x0060(0x0004)
	int                                                m_nParentId;                                              // 0x0064(0x0004)
	int                                                m_nScopeVal;                                              // 0x0068(0x0004)
	struct FString                                     m_sLabel;                                                 // 0x006C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sOutput;                                                // 0x007C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sKeybind;                                               // 0x008C(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UTgGfxVGSData*>                       m_Children;                                               // 0x009C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxVGSData");
		return ptr;
	}

};


// Class TgClientBase.TgMiniMap
// 0x0E50 (0x0EB0 - 0x0060)
class UTgMiniMap : public UObject
{
public:
	class UTexture2D*                                  m_MinimapMinionIcon;                                      // 0x0060(0x0008)
	class UTexture2D*                                  m_MinimapFireMinionIcon;                                  // 0x0068(0x0008)
	class UTexture2D*                                  m_MinimapMinionOutline;                                   // 0x0070(0x0008)
	class UTexture2D*                                  m_MinimapFireMinionOutline;                               // 0x0078(0x0008)
	int                                                m_nMiniMapMode;                                           // 0x0080(0x0004)
	unsigned long                                      m_bShouldDisplayMiniMap : 1;                              // 0x0084(0x0004)
	unsigned long                                      m_bHasMiniMapTexture : 1;                                 // 0x0084(0x0004)
	unsigned long                                      m_bRequiresLOS : 1;                                       // 0x0084(0x0004)
	unsigned long                                      m_bUseFlashSizing : 1;                                    // 0x0084(0x0004)
	unsigned long                                      m_bSpectating : 1;                                        // 0x0084(0x0004)
	float                                              m_fLastUpdateTime;                                        // 0x0088(0x0004)
	class UMaterialInstanceConstant*                   m_MiniMapBaseMIC;                                         // 0x008C(0x0008)
	class UMaterialInstanceConstant*                   m_MiniMapMIC;                                             // 0x0094(0x0008)
	class UMaterialInstanceConstant*                   m_DeathFogBaseMIC;                                        // 0x009C(0x0008)
	class UMaterialInstanceConstant*                   m_DeathFogMIC;                                            // 0x00A4(0x0008)
	class UTexture2DDynamic*                           m_DynamicMask;                                            // 0x00AC(0x0008)
	int                                                m_nMaskSize;                                              // 0x00B4(0x0004)
	float                                              m_fIconScale;                                             // 0x00B8(0x0004)
	struct FVector2D                                   m_vMapLocation;                                           // 0x00BC(0x0008)
	int                                                m_nMapSize;                                               // 0x00C4(0x0004)
	struct FPointer                                    m_MiniMapRender;                                          // 0x00C8(0x0008) (Const, Native, Transient)
	class ATgPlayerController*                         m_OwnerPC;                                                // 0x00D0(0x0008)
	int                                                m_nWorldMapSize;                                          // 0x00D8(0x0004)
	class UMaterialInstanceConstant*                   m_MICPinging;                                             // 0x00DC(0x0008)
	class UMaterialInstanceConstant*                   m_MICPingingEnemy;                                        // 0x00E4(0x0008)
	class UMaterialInstanceConstant*                   m_MICRetreat;                                             // 0x00EC(0x0008)
	class UMaterialInstanceConstant*                   m_MICRetreatEnemy;                                        // 0x00F4(0x0008)
	class UMaterialInstanceConstant*                   m_MICAlert;                                               // 0x00FC(0x0008)
	class UMaterialInstanceConstant*                   m_MICAlertEnemy;                                          // 0x0104(0x0008)
	class UMaterialInstanceConstant*                   m_MICAlertSilent;                                         // 0x010C(0x0008)
	class UMaterialInstanceConstant*                   m_MICLocalPlayer;                                         // 0x0114(0x0008)
	class UMaterialInstanceConstant*                   m_MICLocalSpectator;                                      // 0x011C(0x0008)
	float                                              PingUpdateX;                                              // 0x0124(0x0004)
	float                                              PingUpdateY;                                              // 0x0128(0x0004)
	float                                              m_fForceOpacity;                                          // 0x012C(0x0004)
	class UGFxObject*                                  m_pMapFrame;                                              // 0x0130(0x0008)
	class UMaterialInstanceConstant*                   m_MICPlayer[0x6];                                         // 0x0138(0x0008)
	class UMaterialInstanceConstant*                   m_MICMinion[0x6];                                         // 0x0168(0x0008)
	class UMaterialInstanceConstant*                   m_MICFireMinion[0x6];                                     // 0x0198(0x0008)
	class UMaterialInstanceConstant*                   m_MICMinionOni[0x6];                                      // 0x01C8(0x0008)
	class UMaterialInstanceConstant*                   m_MICFireMinionOni[0x6];                                  // 0x01F8(0x0008)
	class UMaterialInstanceConstant*                   m_MICWard[0x6];                                           // 0x0228(0x0008)
	class UMaterialInstanceConstant*                   m_MICWardSentry[0x6];                                     // 0x0258(0x0008)
	class UMaterialInstanceConstant*                   m_MICVulcanThumper[0x6];                                  // 0x0288(0x0008)
	class UMaterialInstanceConstant*                   m_MICChangECourier[0x6];                                  // 0x02B8(0x0008)
	class UMaterialInstanceConstant*                   m_MICKaldr[0x6];                                          // 0x02E8(0x0008)
	class UMaterialInstanceConstant*                   m_MICBabaYagaHut[0x6];                                    // 0x0318(0x0008)
	class UMaterialInstanceConstant*                   m_MICAhMuzenCabHive[0x6];                                 // 0x0348(0x0008)
	class UMaterialInstanceConstant*                   m_MICCapturePoint[0x6];                                   // 0x0378(0x0008)
	class UMaterialInstanceConstant*                   m_MICCapturePointContest[0x6];                            // 0x03A8(0x0008)
	class UMaterialInstanceConstant*                   m_MICPortal[0x6];                                         // 0x03D8(0x0008)
	class UMaterialInstanceConstant*                   m_MICTimedPortal[0x6];                                    // 0x0408(0x0008)
	class UMaterialInstanceConstant*                   m_MICLanePusher[0x6];                                     // 0x0438(0x0008)
	class UMaterialInstanceConstant*                   m_MICArachneWebWall[0x6];                                 // 0x0468(0x0008)
	class UMaterialInstanceConstant*                   m_MICSylvanusBloom[0x6];                                  // 0x0498(0x0008)
	class UMaterialInstanceConstant*                   m_MICAhPuchCorpse[0x6];                                   // 0x04C8(0x0008)
	class UMaterialInstanceConstant*                   m_MICCamazotzEssence[0x6];                                // 0x04F8(0x0008)
	class UMaterialInstanceConstant*                   m_MICPersephonePlant[0x6];                                // 0x0528(0x0008)
	class UMaterialInstanceConstant*                   m_MICDajiFox;                                             // 0x0558(0x0008)
	class UMaterialInstanceConstant*                   m_MICFlagCTF[0x6];                                        // 0x0560(0x0008)
	class UMaterialInstanceConstant*                   m_MICMinotaur[0x6];                                       // 0x0590(0x0008)
	class UMaterialInstanceConstant*                   m_MICTower[0x6];                                          // 0x05C0(0x0008)
	class UMaterialInstanceConstant*                   m_MICTitan[0x6];                                          // 0x05F0(0x0008)
	struct FBuffMonsterMIC                             m_MICPhoenix[0x6];                                        // 0x0620(0x0018)
	class UMaterialInstanceConstant*                   m_MICJungleShrine;                                        // 0x06B0(0x0008)
	class UMaterialInstanceConstant*                   m_MICTitanMultiTeam[0x6];                                 // 0x06B8(0x0008)
	struct FBuffMonsterMIC                             m_MICPhoenixMultiTeam[0x6];                               // 0x06E8(0x0018)
	class UMaterialInstanceConstant*                   m_MICMonster;                                             // 0x0778(0x0008)
	struct FLinearColor                                m_PortalLinkColor[0x6];                                   // 0x0780(0x0010)
	struct FBuffMonsterMIC                             m_MICBuffMonster[0x37];                                   // 0x07E0(0x0018)
	class UMaterialInstanceConstant*                   m_MICTowerDestroyed;                                      // 0x0D08(0x0008)
	class UMaterialInstanceConstant*                   m_PlayerBackground[0x6];                                  // 0x0D10(0x0008)
	class UMaterialInstanceConstant*                   m_TowerAttackBackground[0x6];                             // 0x0D40(0x0008)
	class UMaterialInstanceConstant*                   m_MICDeviceVolume[0x2];                                   // 0x0D70(0x0008)
	class UMaterialInstanceConstant*                   m_MICOracleWard[0x6];                                     // 0x0D80(0x0008)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0DB0(0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgMiniMap.m_IconMap
	struct FBitArray_Mirror                            m_MaskPoints;                                             // 0x0DF8(0x0020) (Const, Native, Transient)
	TEnumAsByte<ETgMapOrientation>                     m_Orientation;                                            // 0x0E18(0x0001)
	TEnumAsByte<ETgMapTeam>                            m_LocalTeam;                                              // 0x0E19(0x0001)
	TEnumAsByte<ETgClientVisibilityMode>               m_VisibilityMode;                                         // 0x0E1A(0x0001)
	unsigned char                                      bUpdateCapturePoint[0x5];                                 // 0x0E1B(0x0001)
	float                                              m_PingMovementScaling;                                    // 0x0E20(0x0004)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0E24(0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgMiniMap.m_EntityMap
	TArray<struct FLayerIndex>                         m_PortalLayeringIdx;                                      // 0x0E6C(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FLayerIndex>                         m_LayeringIdx;                                            // 0x0E7C(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FMiniMapEntity>                      m_TeleportationEntities;                                  // 0x0E8C(0x0010) (NeedCtorLink)
	int                                                teleportionIdx;                                           // 0x0E9C(0x0004)
	TArray<struct FMiniMapPingInfo>                    m_IndependentPings;                                       // 0x0EA0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgMiniMap");
		return ptr;
	}


	bool CheckSpectatorState();
	void STATIC_UpdateMapSize(int newX);
	void STATIC_UpdateMiniMapTexture();
	void CreateMiniMapTexture();
	void STATIC_RemoveAllEntities();
	bool STATIC_VerifyMapLocation(float X, float Y);
	void GetRepInfosForLocation(const struct FVector& mapLoc, TArray<class AReplicationInfo*>* repInfos);
	struct FVector STATIC_WorldToMap(const struct FVector& Loc);
	struct FVector MapToWorld(const struct FVector& Loc);
	void ClearHover();
	void HoverMap(float X, float Y);
	void STATIC_PingMap(float X, float Y, TEnumAsByte<EPING_TYPE> Pt);
	bool STATIC_ShouldRender();
	void STATIC_RemoveWaypoint(int nWaypointId);
	void STATIC_PlaceWaypoint(const struct FVector& vWaypointLoc, int* nWaypointId);
	void STATIC_SetWaypointPing(bool bSetWaypointActive, const struct FVector& vWaypointLoc, int* nWaypointId);
	void STATIC_PingWorldLocation(const struct FVector& PingLocation, TEnumAsByte<EPING_TYPE> Pt);
	void Init(class ATgPlayerController* PC);
	void Draw(class UCanvas* theCanvas);
	void UpdateThreaded();
	void Update();
};


// Class TgClientBase.TgMiniMap_Targeting
// 0x0030 (0x0EE0 - 0x0EB0)
class UTgMiniMap_Targeting : public UTgMiniMap
{
public:
	class UMaterialInstanceConstant*                   m_MICWardTarget[0x6];                                     // 0x0EB0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgMiniMap_Targeting");
		return ptr;
	}

};


// Class TgClientBase.TgOverlayMoviePlayer
// 0x000C (0x0204 - 0x01F8)
class UTgOverlayMoviePlayer : public UGFxMoviePlayer
{
public:
	unsigned long                                      m_bEnableOverlay : 1;                                     // 0x01F8(0x0004)
	class UTgGameHUDOverlay*                           m_mcOverlay;                                              // 0x01FC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgOverlayMoviePlayer");
		return ptr;
	}


	void OnClose();
	void usc_TweenFinished(class UGFxObject* Obj);
	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	struct FString STATIC_usc_TranslateMsg(const struct FString& Identifier, const struct FString& SectionName);
};


// Class TgClientBase.TgConfigDC_Cached
// 0x0003 (0x01A0 - 0x019D)
class UTgConfigDC_Cached : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgConfigDC_Cached");
		return ptr;
	}


	void STATIC_PrecacheData();
	class UGFxObject* CreateDataObject(int nId);
	bool STATIC_usc_load_data(int nId);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgConfigDC_Classes
// 0x0000 (0x01A0 - 0x01A0)
class UTgConfigDC_Classes : public UTgConfigDC_Cached
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgConfigDC_Classes");
		return ptr;
	}


	class UGFxObject* CreateDataObject(int nId);
};


// Class TgClientBase.TgConfigDC_GameTip
// 0x0000 (0x01A0 - 0x01A0)
class UTgConfigDC_GameTip : public UTgConfigDC_Cached
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgConfigDC_GameTip");
		return ptr;
	}


	class UGFxObject* CreateDataObject(int nId);
};


// Class TgClientBase.TgConfigDC_Items
// 0x0000 (0x01A0 - 0x01A0)
class UTgConfigDC_Items : public UTgConfigDC_Cached
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgConfigDC_Items");
		return ptr;
	}


	class UGFxObject* CreateDataObject(int nId);
};


// Class TgClientBase.TgConfigDC_LangMessages
// 0x0000 (0x01A0 - 0x01A0)
class UTgConfigDC_LangMessages : public UTgConfigDC_Cached
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgConfigDC_LangMessages");
		return ptr;
	}


	bool STATIC_usc_load_data(int nId);
};


// Class TgClientBase.TgDataGroup_Config
// 0x0023 (0x01C0 - 0x019D)
class UTgDataGroup_Config : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UTgConfigDC_LangMessages*                    m_MessageData;                                            // 0x01A0(0x0008)
	class UTgConfigDC_Classes*                         m_ClassData;                                              // 0x01A8(0x0008)
	class UTgConfigDC_Items*                           m_ItemData;                                               // 0x01B0(0x0008)
	class UTgConfigDC_GameTip*                         m_GameTipData;                                            // 0x01B8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataGroup_Config");
		return ptr;
	}


	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGFxEvent
// 0x0001 (0x00AD - 0x00AC)
class UTgGFxEvent : public UGFxObject
{
public:
	TEnumAsByte<EGFxEvent>                             m_eType;                                                  // 0x00AC(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxEvent");
		return ptr;
	}


	class UGFxObject* STATIC_GetTarget(class UClass* pClass);
};


// Class TgClientBase.TgGFxMouseEvent
// 0x0003 (0x00B0 - 0x00AD)
class UTgGFxMouseEvent : public UTgGFxEvent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxMouseEvent");
		return ptr;
	}


	TEnumAsByte<EGFxMouseState> GetButtonState();
	TEnumAsByte<EGFxMouseButton> GetButton();
	int GetWheelAmount();
	int GetY();
	int GetX();
};


// Class TgClientBase.TgGFxValidationEvent
// 0x0007 (0x00B4 - 0x00AD)
class UTgGFxValidationEvent : public UTgGFxEvent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	struct Fdword                                      m_nValidationType;                                        // 0x00B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxValidationEvent");
		return ptr;
	}


	bool GetDataBool();
	struct FString GetDataString();
	float GetDataFloat();
	int GetDataInt();
	class UGFxObject* GetDataObject();
	bool HasInvalidAll(const struct Fdword& Flags);
	bool HasInvalidAny(const struct Fdword& Flags);
	struct Fdword GetValidationType();
};


// Class TgClientBase.TgGFxMouse
// 0x0000 (0x00AC - 0x00AC)
class UTgGFxMouse : public UGFxObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxMouse");
		return ptr;
	}


	int GetGFxConst(const struct FPointer& pField);
	int GetMouseIndex();
	void STATIC_SetCursorType(int nCursorType, int nMouseIndex);
	struct FVector2D STATIC_GetMousePosition(int nMouseIndex);
	class UGFxObject* GetTopMostEntity();
	int GetButtonState(int nMouseIndex);
	int HideMouse();
	int STATIC_ShowMouse();
	void STATIC_RemoveListener(class UGFxObject* pListener);
	void AddListener(class UGFxObject* pListener);
};


// Class TgClientBase.TgGFxSelection
// 0x0000 (0x00BC - 0x00BC)
class UTgGFxSelection : public UTgGFxObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxSelection");
		return ptr;
	}


	struct Fdword GetControllerMaskByFocusGroup(int nFocusGroupIdx);
	struct Fdword GetFocusBitmask(class UGFxObject* pMovieClip);
	class UGFxObject* GetFocusArray(class UGFxObject* pMovieClip);
	int GetControllerFocusGroup(int nControllerIndex);
	bool STATIC_SetControllerFocusGroup(int nControllerIndex, int nFocusGroupIdx);
	void STATIC_SetSelection(int nBegin, int nEnd);
	int GetEndIndex();
	int GetCaretIndex();
	int GetBeginIndex();
	void STATIC_RemoveListener(class UGFxObject* pListener);
	void AddListener(class UGFxObject* pListener);
	class UGFxObject* GetModalClip(int nControllerIdx);
	class UGFxObject* STATIC_SetModalClip(class UGFxObject* pModal, int nControllerIdx);
	class UGFxObject* FindFocus(const struct FString& sKeyToSimulate, class UGFxObject* pParentMovie, bool bLoop, class UGFxObject* pStartFromMovie, bool bIncludeFocusEnabledChars, int nControllerIndex);
	class UGFxObject* MoveFocus(const struct FString& sKeyToSimulate, class UGFxObject* pStartFromMovie);
	class UGFxObject* GetFocusObject();
	struct FString GetFocusPath();
	bool STATIC_SetFocus(class UGFxObject* pFocus);
	void STATIC_Uninitialize();
	void STATIC_Initialize();
};


// Class TgClientBase.TgGFxWidget
// 0x0024 (0x00E0 - 0x00BC)
class UTgGFxWidget : public UTgGFxObject
{
public:
	unsigned long                                      m_bInitialized : 1;                                       // 0x00BC(0x0004)
	TArray<class UTgGFxWidget*>                        m_arrSubWidgets;                                          // 0x00C0(0x0010) (AlwaysInit, NeedCtorLink)
	struct FScriptDelegate                             __OnGFxEvent__Delegate;                                   // 0x00D0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxWidget");
		return ptr;
	}


	void STATIC_RemoveGFxEventListener(unsigned char Evt, const struct FScriptDelegate& delCallback);
	void AddGFxEventListener(unsigned char Evt, const struct FScriptDelegate& delCallback);
	class UTgGFxObject* GetChildDirect(const struct FPointer& sName, bool bRequired, class UClass* pClass);
	class UTgGFxObject* GetChild(const struct FString& sName, bool bRequired, class UClass* pClass);
	void SetDisabled(bool bValue);
	bool STATIC_IsDisabled();
	bool IsASInitialized();
	bool IsUCInitialized();
	void STATIC_Uninitialize();
	void STATIC_Initialize();
	bool OnGFxEvent(class UTgGFxEvent* pEvent);
};


// Class TgClientBase.TgGFxFriendSearchProvider
// 0x00A4 (0x013C - 0x0098)
class UTgGFxFriendSearchProvider : public UTgClientObject
{
public:
	struct FPointer                                    VfTable_ITgEventDispatcherInterface;                      // 0x0098(0x0008) (Const, Native, NoExport)
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x00A0(0x0008) (Const, Native, NoExport)
	struct FTgSearchResults                            m_Results;                                                // 0x00A8(0x003C) (NeedCtorLink)
	struct Fdword                                      m_fSearch;                                                // 0x00E4(0x0004)
	struct FString                                     m_sLocalSearch;                                           // 0x00E8(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sOnlineSearch;                                          // 0x00F8(0x0010) (AlwaysInit, NeedCtorLink)
	class UTgGFxPlayerProvider*                        m_pLocalSource;                                           // 0x0108(0x0008)
	unsigned long                                      m_bIncludeServerOffline : 1;                              // 0x0110(0x0004)
	struct FTgIntervalHandle                           m_ServerTimeout;                                          // 0x0114(0x0010)
	class UTgEventDispatcher*                          m_pDispatcher;                                            // 0x0124(0x0008) (ExportObject, NeedCtorLink, EditInline)
	TArray<struct FQWord>                              m_RecentRequestedIDs;                                     // 0x012C(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxFriendSearchProvider");
		return ptr;
	}


	int STATIC_Num();
	bool IsInvalid();
	void Empty();
	void STATIC_OnServerTimeout(float nDeltaTime);
	void LocalSearchIncrement();
	void STATIC_OnSearchFriendRequest(class UTgGFxPlayerProvider* pProvider);
	void STATIC_OnReceivePlayerQuery(const struct FPointer& pEvent);
	class UTgEventDispatcher* STATIC_GetDispatcher();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxPlayerGenerator
// 0x0078 (0x0110 - 0x0098)
class UTgGFxPlayerGenerator : public UTgClientObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0098(0x0008) (Const, Native, NoExport)
	struct Fdword                                      m_nCurrentFlag;                                           // 0x00A0(0x0004)
	int                                                m_nLocalPlayer;                                           // 0x00A4(0x0004)
	struct FQWord                                      m_nLastNameReq;                                           // 0x00A8(0x0008)
	class UTgGFxPlayerProvider*                        m_pParty;                                                 // 0x00B0(0x0008)
	class UTgGFxPlayerProvider*                        m_pFriends;                                               // 0x00B8(0x0008)
	class UTgGFxPlayerProvider*                        m_pClan;                                                  // 0x00C0(0x0008)
	TArray<struct FTgPlayerId>                         m_arrPendingNames;                                        // 0x00C8(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgGenPlayerData>                    m_arrPlayers;                                             // 0x00D8(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgGenPidLookup                             m_PidLookup;                                              // 0x00E8(0x0014) (NeedCtorLink)
	struct FTgGenUidLookup                             m_UidLookup;                                              // 0x00FC(0x0014) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPlayerGenerator");
		return ptr;
	}


	void STATIC_OnReceiveNames(bool bSucces, class UTgPlayerNameManager* pManager);
	class UTgGFxClanData* GetClanData();
	class UTgGFxPartyData* GetPartyData();
	class UTgGFxFriendData* GetFriendData();
	void Empty();
	void STATIC_OnMctsEvent(const struct FPointer& pEvent);
	class UTgGFxPlayerData* FindOrCreatePlayer(bool bWaitForNames, struct FTgPlayerId* pid);
	class UTgGFxPlayerData* CreatePlayer(bool bWaitForNames, struct FTgPlayerId* pid);
	class UTgGFxPlayerData* FindPlayer(int nFlags, struct FTgPlayerId* pid);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgDataProvider
// 0x003C (0x009C - 0x0060)
class UTgDataProvider : public UObject
{
public:
	struct FPointer                                    VfTable_ITgEventDispatcherInterface;                      // 0x0060(0x0008) (Const, Native, NoExport)
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0068(0x0008) (Const, Native, NoExport)
	class UTgEventDispatcher*                          m_pDispatcher;                                            // 0x0070(0x0008) (ExportObject, NeedCtorLink, EditInline)
	unsigned long                                      m_bIsInvalid : 1;                                         // 0x0078(0x0004)
	struct FScriptDelegate                             __OnPopulateRange__Delegate;                              // 0x007C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __OnPopulateItem__Delegate;                               // 0x008C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataProvider");
		return ptr;
	}


	void Invalidate();
	bool STATIC_RequestItemAt(int nIndex, const struct FScriptDelegate& delCallback);
	bool STATIC_RequestItemRange(int nStartIndex, int nCount, const struct FScriptDelegate& delCallback);
	class UTgEventDispatcher* STATIC_GetDispatcher();
	void STATIC_Uninitialize();
	void STATIC_Initialize();
	void OnPopulateItem(class UObject* Obj, int nIndex);
	void OnPopulateRange(const struct FPointer& arrData);
};


// Class TgClientBase.TgBasicDataProvider
// 0x0010 (0x00AC - 0x009C)
class UTgBasicDataProvider : public UTgDataProvider
{
public:
	TArray<class UObject*>                             m_arrData;                                                // 0x009C(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgBasicDataProvider");
		return ptr;
	}


	void Invalidate();
	bool STATIC_RequestItemAt(int nIndex, const struct FScriptDelegate& delCallback);
	bool STATIC_RequestItemRange(int nStartIndex, int nCount, const struct FScriptDelegate& delCallback);
	void STATIC_Populate(TArray<class UObject*> arrData);
};


// Class TgClientBase.TgGFxExternalLinkData
// 0x0040 (0x00A0 - 0x0060)
class UTgGFxExternalLinkData : public UTgDataItem
{
public:
	struct FString                                     sHeader;                                                  // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDesc;                                                    // 0x0070(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sQRFrame;                                                 // 0x0080(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sLink;                                                    // 0x0090(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxExternalLinkData");
		return ptr;
	}

};


// Class TgClientBase.TgGFxItemHelperBinding
// 0x0008 (0x00B4 - 0x00AC)
class UTgGFxItemHelperBinding : public UGFxObject
{
public:
	struct FPointer                                    VfTable_ITgInitInterface;                                 // 0x00AC(0x0008) (Const, Native, NoExport)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxItemHelperBinding");
		return ptr;
	}


	void NotifyItemUpdate(TArray<struct Fdword>* arrLTI);
	void NotifyCouponChange();
	class UGFxObject* GetItemDataByLootId(int nLootId, int nVendorId);
	class UGFxObject* GetItemDataByItemId(int nItemId);
	class UGFxObject* GetCouponDataByLootId(int nLootId, int nVendorId);
	class UGFxObject* GetCouponDataByItemId(int nItemId);
	void STATIC_Uninitialize();
	void STATIC_Initialize();
};


// Class TgClientBase.TgGFxDataGroup
// 0x0030 (0x0198 - 0x0168)
class UTgGFxDataGroup : public UTgGFxEventObject
{
public:
	class UTgGFxDataProvider*                          m_pData;                                                  // 0x0168(0x0008)
	struct FString                                     m_sLabel;                                                 // 0x0170(0x0010) (NeedCtorLink)
	struct FString                                     m_sLabel2;                                                // 0x0180(0x0010) (NeedCtorLink)
	int                                                m_nGroupId;                                               // 0x0190(0x0004)
	unsigned long                                      m_bOpenByDefault : 1;                                     // 0x0194(0x0004)
	unsigned long                                      m_bIsPending : 1;                                         // 0x0194(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxDataGroup");
		return ptr;
	}


	void Invalidate();
	class UTgGFxDataProvider* GetData();
	bool GetIsPending();
	bool GetOpenByDefault();
	int GetGroupId();
	struct FString GetLabel2();
	struct FString GetLabel();
	void STATIC_SetIsPending(bool bValue);
	void STATIC_SetOpenByDefault(bool bValue);
	void STATIC_SetGroupId(int nValue);
	void STATIC_SetLabel2(const struct FString& sValue);
	void STATIC_SetLabel(const struct FString& sValue);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxDataProviderBase
// 0x0010 (0x0178 - 0x0168)
class UTgGFxDataProviderBase : public UTgGFxEventObject
{
public:
	struct FPointer                                    VfTable_ITgEventDispatcherInterface;                      // 0x0168(0x0008) (Const, Native, NoExport)
	class UTgEventDispatcher*                          m_pDispatcher;                                            // 0x0170(0x0008) (ExportObject, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxDataProviderBase");
		return ptr;
	}


	void Invalidate();
	void ValidateNow();
	void AddItemUnique(class UGFxObject* pObject);
	void AddItem(class UGFxObject* pObject);
	void Empty(int nReserve);
	void STATIC_Populate(const struct FPointer& pData, int nCount);
	void STATIC_SetAt(int nPos, class UGFxObject* pObject);
	class UGFxObject* GetAt(int nPos, class UClass* pClass);
	void STATIC_SetNum(int nValue);
	int STATIC_Num();
	bool IsInvalid();
	void STATIC_USC_CancelPendingRequests(class UGFxObject* pRequester);
	int STATIC_USC_IndexOf(class UGFxObject* pItem, class UGFxObject* pScope, const struct FString& sCallback);
	class UGFxObject* STATIC_USC_RequestItemRange(int nStartIndex, int nEndIndex, class UGFxObject* pScope, const struct FString& sCallback);
	class UGFxObject* STATIC_USC_RequestItemAt(int nIndex, class UGFxObject* pScope, const struct FString& sCallback);
	class UTgEventDispatcher* STATIC_GetDispatcher();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxDataProvider
// 0x0010 (0x0188 - 0x0178)
class UTgGFxDataProvider : public UTgGFxDataProviderBase
{
public:
	TArray<class UGFxObject*>                          m_arrData;                                                // 0x0178(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxDataProvider");
		return ptr;
	}


	void Empty(int nReserve);
	void STATIC_Populate(const struct FPointer& pData, int nCount);
	void STATIC_SetAt(int nPos, class UGFxObject* pObject);
	class UGFxObject* GetAt(int nPos, class UClass* pClass);
	void STATIC_SetNum(int nLen);
	int STATIC_Num();
};


// Class TgClientBase.TgGFxPlayerProvider
// 0x0058 (0x01D0 - 0x0178)
class UTgGFxPlayerProvider : public UTgGFxDataProviderBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0178(0x0008) (Const, Native, NoExport)
	struct Fdword                                      m_nRefFlag;                                               // 0x0180(0x0004)
	unsigned long                                      m_bReqNames : 1;                                          // 0x0184(0x0004)
	unsigned long                                      m_bNeedsUpdate : 1;                                       // 0x0184(0x0004)
	TArray<struct FTgPlayerId>                         m_arrPlayers;                                             // 0x0188(0x0010) (AlwaysInit, NeedCtorLink)
	class UTgGFxPlayerGenerator*                       m_pOwner;                                                 // 0x0198(0x0008)
	TArray<struct FRequestASCallback>                  m_arrASCallbacks;                                         // 0x01A0(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FScriptDelegate>                     m_arrUCCallbacks;                                         // 0x01B0(0x0010) (AlwaysInit, NeedCtorLink)
	struct FScriptDelegate                             __PlayerUpdateDelegate__Delegate;                         // 0x01C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01C0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPlayerProvider");
		return ptr;
	}


	void CallUCCallback(const struct FScriptDelegate& delCallback);
	void STATIC_USC_CancelPendingRequests(class UGFxObject* pRequester);
	int STATIC_USC_IndexOf(class UGFxObject* pItem, class UGFxObject* pScope, const struct FString& sCallback);
	class UGFxObject* STATIC_USC_RequestItemRange(int nStartIndex, int nEndIndex, class UGFxObject* pScope, const struct FString& sCallback);
	class UGFxObject* STATIC_USC_RequestItemAt(int nIndex, class UGFxObject* pScope, const struct FString& sCallback);
	void DoUpdate();
	bool NeedsUpdate();
	void STATIC_SetAt(int nPos, class UGFxObject* pObject);
	class UGFxObject* GetAt(int nPos, class UClass* pClass);
	struct Fdword GetRefFlag();
	void STATIC_SetNum(int nCount);
	int STATIC_Num();
	bool IsInvalid();
	bool STATIC_TryRequestPlayers();
	bool IsEmpty();
	void Empty(int nReserve);
	void SetDirty();
	bool IsDirty();
	void STATIC_SetOwner(class UTgGFxPlayerGenerator* pOwner);
	class UTgGFxPlayerData* GetPlayerAt(int nIndex);
	void GetList(TArray<class UTgGFxPlayerData*>* out_arrList);
	void CancelRequests(class UObject* pScope);
	bool STATIC_RequestPlayers(const struct FScriptDelegate& delCallback);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void PlayerUpdateDelegate(class UTgGFxPlayerProvider* Data);
};


// Class TgClientBase.TgGFxClanData
// 0x0034 (0x0204 - 0x01D0)
class UTgGFxClanData : public UTgGFxPlayerProvider
{
public:
	struct FString                                     m_sClanName;                                              // 0x01D0(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sClanTag;                                               // 0x01E0(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      m_bReqClan : 1;                                           // 0x01F0(0x0004)
	TArray<class UTgGFxPlayerData*>                    m_arrClanTemps;                                           // 0x01F4(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxClanData");
		return ptr;
	}


	struct FString GetClanTag();
	struct FString GetClanName();
	void STATIC_SetClanTag(const struct FString& sValue);
	void STATIC_SetClanName(const struct FString& sValue);
	void STATIC_OnClanUpdate();
	bool STATIC_TryRequestPlayers();
	bool IsInvalid();
	void STATIC_OnMctsEvent(const struct FPointer& pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxFriendData
// 0x0038 (0x0208 - 0x01D0)
class UTgGFxFriendData : public UTgGFxPlayerProvider
{
public:
	TArray<struct Fdword>                              m_arrUpdateIds;                                           // 0x01D0(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      m_nLastUpdate;                                            // 0x01E0(0x0004)
	unsigned long                                      m_bReqMcts : 1;                                           // 0x01E4(0x0004)
	unsigned long                                      m_bReqPortal : 1;                                         // 0x01E4(0x0004)
	unsigned long                                      m_bReqPortalHRInfo : 1;                                   // 0x01E4(0x0004)
	unsigned long                                      m_bHasASListeners : 1;                                    // 0x01E4(0x0004)
	struct FTgIntervalHandle                           m_UpdateTimeout;                                          // 0x01E8(0x0010)
	struct FTgIntervalHandle                           m_GiveupTimeout;                                          // 0x01F8(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxFriendData");
		return ptr;
	}


	void STATIC_USC_NotifyListenersChange(bool bHasListener);
	bool IsInvalid();
	void GiveUpOnResponse(float nDelta);
	void STATIC_OnUpdate(float nDelta);
	bool STATIC_TryRequestPlayers();
	void Empty(int nReserve);
	void STATIC_OnReceivePlatformFriends(const struct FPointer& pEventBase);
	void STATIC_OnReceivePlatformHRUpdate(const struct FPointer& pEventBase);
	void STATIC_OnMctsEvent(const struct FPointer& pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxPartyData
// 0x0014 (0x01E4 - 0x01D0)
class UTgGFxPartyData : public UTgGFxPlayerProvider
{
public:
	struct Fdword                                      m_nPartyId;                                               // 0x01D0(0x0004)
	class UTgGFxPlayerData*                            m_pLeader;                                                // 0x01D4(0x0008)
	struct FQWord                                      m_nLastUpdate;                                            // 0x01DC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPartyData");
		return ptr;
	}


	bool IsInParty();
	class UTgGFxPlayerData* GetLeader();
	void STATIC_SetLeader(class UTgGFxPlayerData* pLeader);
	bool STATIC_TryRequestPlayers();
	void STATIC_OnMctsEvent(const struct FPointer& pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxRoleQueuePopup
// 0x0000 (0x0284 - 0x0284)
class UTgGFxRoleQueuePopup : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxRoleQueuePopup");
		return ptr;
	}


	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxPlayerClanData
// 0x0040 (0x00FC - 0x00BC)
class UTgGFxPlayerClanData : public UTgGFxObject
{
public:
	struct Fdword                                      m_nClanId;                                                // 0x00BC(0x0004)
	struct FString                                     m_sClanName;                                              // 0x00C0(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sClanTag;                                               // 0x00D0(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sClanRankName;                                          // 0x00E0(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      m_nClanRankId;                                            // 0x00F0(0x0004)
	struct Fdword                                      m_nClanHonor;                                             // 0x00F4(0x0004)
	unsigned long                                      m_bIsLeader : 1;                                          // 0x00F8(0x0004)
	unsigned long                                      m_bIsInClan : 1;                                          // 0x00F8(0x0004)
	unsigned long                                      m_bIsPending : 1;                                         // 0x00F8(0x0004)
	unsigned long                                      m_bCanInvite : 1;                                         // 0x00F8(0x0004)
	unsigned long                                      m_bCanPromote : 1;                                        // 0x00F8(0x0004)
	unsigned long                                      m_bCanRemove : 1;                                         // 0x00F8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPlayerClanData");
		return ptr;
	}


	void Invalidate();
	struct Fdword GetClanHonor();
	struct Fdword GetClanId();
	bool GetIsPending();
	bool GetIsLeader();
	bool GetIsInClan();
	struct Fdword GetClanRankId();
	struct FString GetClanRankName();
	struct FString GetClanTag();
	struct FString GetClanName();
	void STATIC_SetClanHonor(const struct Fdword& nValue);
	void STATIC_SetClanId(const struct Fdword& nValue);
	void STATIC_SetIsPending(bool bValue);
	void STATIC_SetIsLeader(bool bValue);
	void STATIC_SetIsInClan(bool bValue);
	void STATIC_SetClanRankId(const struct Fdword& nRank);
	void STATIC_SetClanRankName(const struct FString& sRank);
	void STATIC_SetClanTag(const struct FString& sTag);
	void STATIC_SetClanName(const struct FString& sName);
};


// Class TgClientBase.TgGFxPlayerData
// 0x007C (0x0138 - 0x00BC)
class UTgGFxPlayerData : public UTgGFxObject
{
public:
	struct FTgPlayerId                                 m_pid;                                                    // 0x00BC(0x0024) (NeedCtorLink)
	struct FString                                     m_sStatus;                                                // 0x00E0(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sRichStatus;                                            // 0x00F0(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sNote;                                                  // 0x0100(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                m_nAvatarId;                                              // 0x0110(0x0004)
	int                                                m_nStatusStartTime;                                       // 0x0114(0x0004)
	struct Fdword                                      m_nWorshipperCount;                                       // 0x0118(0x0004)
	struct Fdword                                      m_nWorshipperLevel;                                       // 0x011C(0x0004)
	struct Fdword                                      m_nPlayerLevel;                                           // 0x0120(0x0004)
	struct Fdword                                      m_nStatusFlags;                                           // 0x0124(0x0004)
	class UTgGFxPlayerClanData*                        m_pClanData;                                              // 0x0128(0x0008)
	class UTgGFxPlayerPartyData*                       m_pPartyData;                                             // 0x0130(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPlayerData");
		return ptr;
	}


	int STATIC_USC_GetFriendRequestCount();
	bool STATIC_USC_SetNote();
	bool STATIC_USC_SetStatus();
	bool STATIC_USC_ToggleDND();
	bool STATIC_USC_ReportPlayer(int nReasonCode, const struct FString& sReasonMsg, int nPlayerCount, int nSourceTaskForce, int nTargetTaskForce);
	bool STATIC_USC_ReferFriend();
	bool STATIC_USC_DeclineFriend();
	bool STATIC_USC_AcceptFriend();
	bool STATIC_USC_RemoveFriend();
	bool STATIC_USC_AddFriend();
	bool STATIC_USC_Whisper();
	bool STATIC_USC_ToggleBlock();
	bool STATIC_USC_Spectate();
	bool STATIC_USC_SendGift();
	bool STATIC_USC_ClanInvite();
	bool STATIC_USC_PartyMakeLeader();
	bool STATIC_USC_SetCanPartyInvite();
	bool STATIC_USC_PartyKick();
	bool STATIC_USC_PartyInvite();
	bool STATIC_USC_ViewMatchHistory();
	bool STATIC_USC_ViewSmiteProfile();
	bool STATIC_USC_ViewPortalProfile();
	void Invalidate();
	void STATIC_OnBlockPopup(class UTgPagePopup* pPopup, struct FPopupResponse* Response);
	void STATIC_OnRemoveFriendPopup(class UTgPagePopup* pPopup, struct FPopupResponse* Response);
	void STATIC_OnNotePopup(class UTgPagePopup* pPopup, struct FPopupResponse* Response);
	void STATIC_OnStatusPopup(class UTgPagePopup* pPopup, struct FPopupResponse* Response);
	void STATIC_OnWhisperPopup(class UTgPagePopup* pPopup, struct FPopupResponse* Response);
	void STATIC_RemoveClanData();
	void STATIC_RemovePartyData();
	void STATIC_RemoveFriendData();
	class UTgGFxPlayerClanData* GetClanData();
	class UTgGFxPlayerPartyData* GetPartyData();
	class UTgGFxPlayerClanData* CreateClanData();
	class UTgGFxPlayerPartyData* CreatePartyData();
	void STATIC_PopulateAS_Level();
	void STATIC_PopulateAS_PrestigeData();
	bool GetIsHirezFriend();
	bool GetIsPortalFriend();
	bool GetDoNotDisturb();
	bool GetFriendRequesting();
	bool GetFriendRequested();
	struct Fdword GetPlayerLevel();
	bool GetIsInOurParty();
	bool GetIsInOurClan();
	bool GetIsMuted();
	bool GetIsBlocked();
	bool GetIsOnline();
	int GetAvatarId();
	struct FString GetNote();
	struct FString GetRichStatus();
	struct FString GetStatus();
	struct FString GetPlayerName();
	void CheckStatusIntegrity();
	void STATIC_UpdateIsMuted();
	void STATIC_UpdatePlayerName();
	bool STATIC_SetId(struct FTgPlayerId* pid);
	void STATIC_SetPlayerLevelByXp(const struct Fdword& nValue);
	void STATIC_SetPlayerLevel(const struct Fdword& nValue);
	void STATIC_SetStatusTimeElapsed(int nTimeSecs);
	void STATIC_SetDoNotDisturb(bool bValue);
	void STATIC_SetFriendRequesting(bool bValue);
	void STATIC_SetFriendRequested(bool bValue);
	void STATIC_SetIsInOurParty(bool bValue);
	void STATIC_SetIsInOurClan(bool bValue);
	void STATIC_SetWorshiperCount(const struct Fdword& nValue);
	void STATIC_SetIsBlocked(bool bValue);
	void STATIC_SetIsOnline(bool bValue);
	void STATIC_SetAvatarId(int nAvatarId);
	void STATIC_SetNote(const struct FString& sNote);
	void STATIC_SetRichStatus(const struct FString& sStatus);
	void STATIC_SetStatus(const struct FString& sStatus);
	bool IsValid();
	void STATIC_Initialize(struct FTgPlayerId* pid);
};


// Class TgClientBase.TgGFxPlayerPartyData
// 0x000C (0x00C8 - 0x00BC)
class UTgGFxPlayerPartyData : public UTgGFxObject
{
public:
	unsigned long                                      m_bCanInvite : 1;                                         // 0x00BC(0x0004)
	unsigned long                                      m_bIsLeader : 1;                                          // 0x00BC(0x0004)
	unsigned long                                      m_bIsPending : 1;                                         // 0x00BC(0x0004)
	struct Fdword                                      m_nPartyId;                                               // 0x00C0(0x0004)
	struct Fdword                                      m_nPartyCount;                                            // 0x00C4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPlayerPartyData");
		return ptr;
	}


	void Invalidate();
	struct Fdword GetPartyCount();
	struct Fdword GetPartyId();
	bool GetIsPending();
	bool GetIsLeader();
	bool GetCanInvite();
	void STATIC_SetPartyCount(const struct Fdword& nValue);
	void STATIC_SetPartyId(const struct Fdword& nValue);
	void STATIC_SetIsPending(bool bValue);
	void STATIC_SetIsLeader(bool bValue);
	void STATIC_SetCanInvite(bool bValue);
};


// Class TgClientBase.TgLoginBlockerDataItem
// 0x0078 (0x00D8 - 0x0060)
class UTgLoginBlockerDataItem : public UTgDataItem
{
public:
	struct FLoginBlockerData                           m_loginBlockerData;                                       // 0x0060(0x0068) (NeedCtorLink)
	struct FString                                     m_alreadySeenBlockers;                                    // 0x00C8(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLoginBlockerDataItem");
		return ptr;
	}

};


// Class TgClientBase.TgMainMenuData
// 0x0010 (0x0070 - 0x0060)
class UTgMainMenuData : public UTgDataItem
{
public:
	TArray<struct FTgMainMenuBtn>                      arrButtons;                                               // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgMainMenuData");
		return ptr;
	}

};


// Class TgClientBase.TgPatchOverviewDataItem
// 0x0090 (0x00F0 - 0x0060)
class UTgPatchOverviewDataItem : public UTgDataItem
{
public:
	struct FPatchOverviewData                          m_patchOverviewData;                                      // 0x0060(0x0080) (NeedCtorLink)
	struct FString                                     m_alreadySeenBlockers;                                    // 0x00E0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgPatchOverviewDataItem");
		return ptr;
	}

};


// Class TgClientBase.TgPlayerIdValueData
// 0x0024 (0x0090 - 0x006C)
class UTgPlayerIdValueData : public UTgValueDataItem
{
public:
	struct FTgPlayerId                                 PlayerID;                                                 // 0x006C(0x0024) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgPlayerIdValueData");
		return ptr;
	}

};


// Class TgClientBase.TgReportPlayerEvent
// 0x0044 (0x00B8 - 0x0074)
class UTgReportPlayerEvent : public UTgEventDataItem
{
public:
	struct FTgPlayerId                                 pidPlayer;                                                // 0x0074(0x0024) (NeedCtorLink)
	struct FString                                     sReason;                                                  // 0x0098(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      nReasonCode;                                              // 0x00A8(0x0004)
	struct Fdword                                      nPlayerCount;                                             // 0x00AC(0x0004)
	struct Fdword                                      nSourceTaskForce;                                         // 0x00B0(0x0004)
	struct Fdword                                      nTargetTaskForce;                                         // 0x00B4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgReportPlayerEvent");
		return ptr;
	}

};


// Class TgClientBase.TgTeamBoostEvent
// 0x0010 (0x0084 - 0x0074)
class UTgTeamBoostEvent : public UTgEventDataItem
{
public:
	struct Fdword                                      nPlayerId;                                                // 0x0074(0x0004)
	float                                              nMultiplier;                                              // 0x0078(0x0004)
	struct Fdword                                      nBoosterType;                                             // 0x007C(0x0004)
	struct Fdword                                      nTaskForce;                                               // 0x0080(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgTeamBoostEvent");
		return ptr;
	}

};


// Class TgClientBase.TgVendorItemDataItem
// 0x0008 (0x0068 - 0x0060)
class UTgVendorItemDataItem : public UTgDataItem
{
public:
	struct FPointer                                    pData;                                                    // 0x0060(0x0008) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgVendorItemDataItem");
		return ptr;
	}

};


// Class TgClientBase.TgSetupPurchaseEvent
// 0x0014 (0x007C - 0x0068)
class UTgSetupPurchaseEvent : public UTgVendorItemDataItem
{
public:
	struct Fdword                                      dwLocationId;                                             // 0x0068(0x0004)
	int                                                nQuantity;                                                // 0x006C(0x0004)
	int                                                nGiftPlayerId;                                            // 0x0070(0x0004)
	int                                                nGiftMsgId;                                               // 0x0074(0x0004)
	unsigned long                                      bIsAnonGift : 1;                                          // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSetupPurchaseEvent");
		return ptr;
	}

};


// Class TgClientBase.TgLobbyHUDBase
// 0x0064 (0x0654 - 0x05F0)
class ATgLobbyHUDBase : public ATgClientHUD
{
public:
	int                                                c_PendingClassId;                                         // 0x05F0(0x0004)
	int                                                c_PendingSkinId;                                          // 0x05F4(0x0004)
	int                                                c_CurrentClassId;                                         // 0x05F8(0x0004)
	int                                                c_CurrentSkinId;                                          // 0x05FC(0x0004)
	int                                                c_RolledOverSkinId;                                       // 0x0600(0x0004)
	int                                                c_PendingPedestalSkinId;                                  // 0x0604(0x0004)
	int                                                c_CurrentPedestalSkinId;                                  // 0x0608(0x0004)
	class ATgLobbyCamera*                              c_CurrentCamera;                                          // 0x060C(0x0008)
	struct FName                                       m_PendingCamera;                                          // 0x0614(0x0008)
	class UTgCameraModifier_EmoteZoom*                 EmoteZoomModifier;                                        // 0x061C(0x0008) (Transient)
	struct FString                                     m_MenuContentDataClassName;                               // 0x0624(0x0010) (NeedCtorLink)
	class UTgMenuContentData*                          m_MenuContentData;                                        // 0x0634(0x0008) (Transient)
	unsigned long                                      c_EOML_to_MatchLobby : 1;                                 // 0x063C(0x0004)
	unsigned long                                      c_UseEOMMusic : 1;                                        // 0x063C(0x0004)
	unsigned long                                      m_bTestRenderMode : 1;                                    // 0x063C(0x0004)
	unsigned long                                      m_bTestRenderLoadMovie : 1;                               // 0x063C(0x0004)
	unsigned long                                      m_bHasLoadedTeamNames : 1;                                // 0x063C(0x0004)
	float                                              c_fTimeQueued;                                            // 0x0640(0x0004)
	class ATgPawn*                                     m_CharacterBuild;                                         // 0x0644(0x0008)
	class UAudioComponent*                             m_LobbyAC;                                                // 0x064C(0x0008) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLobbyHUDBase");
		return ptr;
	}


	void Destroyed();
	void PostRender();
	void CommitPedestalSelectionChange();
	void BeginPedestalSelectionChange(int nPedestalSkinId);
	void CommitClassSelectionChange();
	void BeginClassSelectionChange(int nClassId, int nSkinId);
	void NotifyLoggedIn();
	void PostBeginPlay();
	void STATIC_TriggerLazyPrecache();
	void PreBeginPlay();
	void STATIC_NotifyKismetToLoadMusicTheme();
	void STATIC_OnGameStateChange(class UTgEventDataItem* pEvent);
	void STATIC_OnMatchUpdate(class UTgEventDataItem* pEvent);
	TEnumAsByte<EMenuContentDataType> GetLoginDataType();
	void STATIC_OnCameraReady(class ATgLobbyCamera* PCam);
	void DisableEmoteZoom(bool bImmediate);
	void EnableEmoteZoom();
	void PlayEmote(int nVgsId);
	void STATIC_UpdateCardDraws(class UCanvas* CanvasIn);
	void STATIC_UpdateDebugDraws();
	void STATIC_NotifyLobbyStateChange();
	void STATIC_UpdateGammaControls();
	void STATIC_TestTrayPopup(unsigned char popupType);
	void STATIC_TestEOMLobby(bool bVictory, const struct FString& ClassName, const struct FString& skinName_EOML);
	void STATIC_TestTransition(bool bShow, bool bAddData, int frameItemID, int godId);
	class ATgLobbyCamera* STATIC_SwitchToCamera(const struct FName& CamTag, TEnumAsByte<ECameraTransType> camDirection);
	void STATIC_UnsuspendLoadingClassModels();
	void STATIC_SuspendLoadingClassModels();
	void ChangePedestalEnemyModel(int nIndex, int nPedestalSkinId, TEnumAsByte<ELobbyAnimPose> pose, bool bAsync);
	void ChangeClassEnemyModel(int nIndex, int nClassId, int nSkinId, TEnumAsByte<ELobbyAnimPose> pose, bool bAsync, bool bLockedIn);
	void ChangePedestalFriendlyModel(int nIndex, int nPedestalSkinId, TEnumAsByte<ELobbyAnimPose> pose, bool bAsync);
	void ChangeClassFriendlyModel(int nIndex, int nClassId, int nSkinId, TEnumAsByte<ELobbyAnimPose> pose, bool bAsync, bool bLockedIn);
	bool IsCurrentCameraMatchLobby();
	struct FName GetMatchLobbyCameraName();
	void ChangePreloadModel(int nClassId, int nSkinId, const struct FName& CameraTag);
	void STATIC_OnPedestalSelected(int nPedestalSkinId, bool bChangedPedestal);
	void STATIC_OnClassSelected(int nClassId, int nSkinId, bool bChangedClass, bool bChangedSkin);
	void STATIC_RotateModel(float fValue);
	void STATIC_TestLobbyModel(int nSkinId);
	void ChangeClassModel(int nClassId, int nSkinId, int nPedestalSkinId, TEnumAsByte<ELobbyAnimPose> pose, const struct FName& CameraTag, TEnumAsByte<ECameraTransType> camDirection, bool bAsync, bool bShowFlag, bool bShowCard);
	void ChangeMenuModel(TEnumAsByte<EMenuContentDataType> Type, TEnumAsByte<ECameraTransType> camDirection);
	void AsynchNotifies();
	void STATIC_OnDisconnect();
	void STATIC_SetUpEOMLobby();
	bool HaveEOMLobbyData();
	void CleanupSessionForDisconnect();
	void UnregisterEngineCallbacks();
	void STATIC_RegisterEngineCallbacks();
	void InitMainMoviePlayer();
	void InitializeDisconnectedState();
};


// Class TgClientBase.TgClanDC_Player
// 0x000B (0x01A8 - 0x019D)
class UTgClanDC_Player : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	int                                                m_nPlayerId;                                              // 0x01A0(0x0004)
	int                                                m_nClanPermissions;                                       // 0x01A4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgClanDC_Player");
		return ptr;
	}


	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgDataGroup_EOMLobby
// 0x0013 (0x01B0 - 0x019D)
class UTgDataGroup_EOMLobby : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UTgEOMLobbyDC_Lobby*                         m_LobbyData;                                              // 0x01A0(0x0008)
	class UTgEOMLobbyDC_ChatLobby*                     m_ChatLobbyData;                                          // 0x01A8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataGroup_EOMLobby");
		return ptr;
	}


	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgDataGroup_League
// 0x0013 (0x01B0 - 0x019D)
class UTgDataGroup_League : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UTgLeagueDC_PlayerSummary*                   m_PlayerSummary;                                          // 0x01A0(0x0008)
	class UTgLeagueDC_Leaderboard*                     m_Leaderboard;                                            // 0x01A8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataGroup_League");
		return ptr;
	}


	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgDataGroup_Lobby
// 0x0033 (0x01D0 - 0x019D)
class UTgDataGroup_Lobby : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UTgLobbyDC_Login*                            m_LoginData;                                              // 0x01A0(0x0008)
	class UTgLobbyDC_Match*                            m_MatchData;                                              // 0x01A8(0x0008)
	class UTgLobbyDC_Lobby*                            m_LobbyData;                                              // 0x01B0(0x0008)
	class UTgGameDC_Player*                            m_CharacterBuilderData;                                   // 0x01B8(0x0008)
	class UTgLobbyDC_Inventory*                        m_PlayerInventory;                                        // 0x01C0(0x0008)
	class UTgLobbyDC_BattlePass*                       m_BattlePassData;                                         // 0x01C8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataGroup_Lobby");
		return ptr;
	}


	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgEOMLobbyDC_ChatLobby
// 0x0013 (0x01B0 - 0x019D)
class UTgEOMLobbyDC_ChatLobby : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	TArray<class UTgEOMLobbyDC_ChatPlayer*>            m_Players;                                                // 0x01A0(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgEOMLobbyDC_ChatLobby");
		return ptr;
	}


	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgEOMLobbyDC_ChatPlayer
// 0x0007 (0x01A4 - 0x019D)
class UTgEOMLobbyDC_ChatPlayer : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	int                                                m_nPlayerId;                                              // 0x01A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgEOMLobbyDC_ChatPlayer");
		return ptr;
	}


	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgEOMLobbyDC_Lobby
// 0x001F (0x01BC - 0x019D)
class UTgEOMLobbyDC_Lobby : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UTgEOMLobbyDC_Team*                          m_FriendTeamData;                                         // 0x01A0(0x0008)
	class UTgEOMLobbyDC_Team*                          m_EnemyTeamData;                                          // 0x01A8(0x0008)
	class UGFxObject*                                  m_TeamDatas;                                              // 0x01B0(0x0008)
	float                                              m_SecInMatch;                                             // 0x01B8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgEOMLobbyDC_Lobby");
		return ptr;
	}


	void asc_SetupTaskForceEOML(int Index);
	void SetupTaskForceEOML(int Index);
	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgEOMLobbyDC_Player
// 0x000B (0x01A8 - 0x019D)
class UTgEOMLobbyDC_Player : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	struct FUniqueNetId                                m_nConsoleUserId;                                         // 0x01A0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgEOMLobbyDC_Player");
		return ptr;
	}


	bool IsPlayerMuted(const struct FUniqueNetId& ConsoleId);
	void STATIC_UpdatePlayerInventory(const struct FPointer& pMarshal);
	void STATIC_UpdatePlayerBehaviour(const struct FPointer& pMarshal);
	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgEOMLobbyDC_Team
// 0x0017 (0x01B4 - 0x019D)
class UTgEOMLobbyDC_Team : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	TArray<class UTgEOMLobbyDC_Player*>                m_Players;                                                // 0x01A0(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                teamTaskForce;                                            // 0x01B0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgEOMLobbyDC_Team");
		return ptr;
	}


	void STATIC_OnPlayerMute(class UTgEventDataItem* pEvent);
	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgLeagueDC_Leaderboard
// 0x0057 (0x01F4 - 0x019D)
class UTgLeagueDC_Leaderboard : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	TArray<struct FUpdatedPlayerInfo>                  m_arrUpdatedPlayerInfo;                                   // 0x01A0(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FPlayerIdPointer>                    m_arrLeaderboardPlayerIDs;                                // 0x01B0(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FPlayerIdPointer>                    m_arrPendingNames;                                        // 0x01C0(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgIntervalHandle                           m_UpdateTimeout;                                          // 0x01D0(0x0010)
	unsigned long                                      m_bReadFriends : 1;                                       // 0x01E0(0x0004)
	int                                                m_prevLeagueId;                                           // 0x01E4(0x0004)
	int                                                m_FriendsReadCallbackLeagueId;                            // 0x01E8(0x0004)
	class UGFxObject*                                  m_arrLeaderboardData;                                     // 0x01EC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLeagueDC_Leaderboard");
		return ptr;
	}


	void STATIC_USC_GetLeaderboard(int nLeagueId, int nTierId);
	void STATIC_RequestPlayerName(class UGFxObject* pObj, struct FTgPlayerId* pid);
	void STATIC_UpdateNames(bool bSucces, class UTgPlayerNameManager* pManager);
	void STATIC_OnUpdate(float nDelta);
	void STATIC_Uninitialize();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgLeagueDC_PlayerSummary
// 0x0003 (0x01A0 - 0x019D)
class UTgLeagueDC_PlayerSummary : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLeagueDC_PlayerSummary");
		return ptr;
	}


	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgLobbyDC_BattlePass
// 0x0007 (0x01A4 - 0x019D)
class UTgLobbyDC_BattlePass : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	unsigned long                                      m_bInitialDataSet : 1;                                    // 0x01A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLobbyDC_BattlePass");
		return ptr;
	}


	void STATIC_USC_PurchaseBattlePass();
	void STATIC_USC_PurchaseNextLevel(int nQuantity);
	void STATIC_OnHUDStateChange(class UTgEventDataItem* pEvent);
	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgLobbyDC_Class
// 0x002B (0x01C8 - 0x019D)
class UTgLobbyDC_Class : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	struct Fdword                                      m_nClassId;                                               // 0x01A0(0x0004)
	unsigned long                                      m_bAvailable : 1;                                         // 0x01A4(0x0004)
	unsigned long                                      m_bVisible : 1;                                           // 0x01A4(0x0004)
	unsigned long                                      m_bOwned : 1;                                             // 0x01A4(0x0004)
	unsigned long                                      m_bIsBannable : 1;                                        // 0x01A4(0x0004)
	unsigned long                                      m_bIsBanned : 1;                                          // 0x01A4(0x0004)
	unsigned long                                      m_bSelectedByUs : 1;                                      // 0x01A4(0x0004)
	TArray<struct FTgRestrictedSkinUpdate>             m_RestrictedSkins;                                        // 0x01A8(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UTgLobbyDC_Skin*>                     m_Skins;                                                  // 0x01B8(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLobbyDC_Class");
		return ptr;
	}


	void STATIC_UpdateFreeRotation();
	class UTgLobbyDC_Skin* GetSkinByIndex(const struct Fdword& nIndex);
	class UTgLobbyDC_Skin* GetSkinById(const struct Fdword& nSkinId);
	void STATIC_SetSessionDefaultSkin(const struct Fdword& nSkinId);
	bool STATIC_SetSelectedByUs(bool bSelByUs);
	bool GetSelectedByUs();
	bool STATIC_SetBanned(bool bIsBanned);
	bool GetBanned();
	bool STATIC_SetBannable(bool bCanBan);
	bool GetBannable();
	void SetVisible(bool Visible);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgLobbyDC_Currencies
// 0x0013 (0x01B0 - 0x019D)
class UTgLobbyDC_Currencies : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	TArray<struct FTgDCCurrency>                       m_arrCurrencies;                                          // 0x01A0(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLobbyDC_Currencies");
		return ptr;
	}


	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgLobbyDC_Inventory
// 0x001B (0x01B8 - 0x019D)
class UTgLobbyDC_Inventory : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	TArray<struct FTgBoosterEntry>                     m_arrBoosters;                                            // 0x01A0(0x0010) (AlwaysInit, NeedCtorLink)
	class UGFxObject*                                  m_pTeamBoosters;                                          // 0x01B0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLobbyDC_Inventory");
		return ptr;
	}


	int STATIC_USC_CountActiveBoosters();
	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgLobbyDC_Lobby
// 0x00AF (0x024C - 0x019D)
class UTgLobbyDC_Lobby : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	int                                                m_nNbrInQueue;                                            // 0x01A0(0x0004)
	int                                                m_nNbrInMatch;                                            // 0x01A4(0x0004)
	int                                                m_nNbrInParty;                                            // 0x01A8(0x0004)
	float                                              m_fInviteStartTime;                                       // 0x01AC(0x0004)
	unsigned long                                      m_bIsPartyLeader : 1;                                     // 0x01B0(0x0004)
	class UTgLobbyDC_Currencies*                       m_Currencies;                                             // 0x01B4(0x0008)
	struct FString                                     m_lsLabelName;                                            // 0x01BC(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLabelLevel;                                           // 0x01CC(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLabelGold;                                            // 0x01DC(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLabelFavor;                                           // 0x01EC(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLabelBoost;                                           // 0x01FC(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLabelParty;                                           // 0x020C(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLabelStatus;                                          // 0x021C(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLabelGoodwill;                                        // 0x022C(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLabelPlayerAccount;                                   // 0x023C(0x0010) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLobbyDC_Lobby");
		return ptr;
	}


	void STATIC_usc_OpenGifting(const struct FString& PlayerName, const struct FString& sPlayerId, const struct FString& ConsoleIdString);
	void STATIC_OnQueueStateChange(class UTgEventDataItem* pEvent);
	void STATIC_OnPartyUpdate(class UTgEventDataItem* pEvent);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgLobbyDC_Login
// 0x0003 (0x01A0 - 0x019D)
class UTgLobbyDC_Login : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLobbyDC_Login");
		return ptr;
	}


	void STATIC_RefreshData();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgLobbyDC_Match
// 0x0C98 (0x0E35 - 0x019D)
class UTgLobbyDC_Match : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	struct FMap_Mirror                                 SkinsToEquip;                                             // 0x01A0(0x0048) (Const, Native)
	class UTgSynchronizedTimer*                        m_MatchTimer;                                             // 0x01E8(0x0008)
	unsigned long                                      m_bStateTimesLoaded : 1;                                  // 0x01F0(0x0004)
	unsigned long                                      m_bSpectator : 1;                                         // 0x01F0(0x0004)
	unsigned long                                      m_bAllGodsAvailable : 1;                                  // 0x01F0(0x0004)
	struct FTgClassUpdateInfo                          m_Classes[0x96];                                          // 0x01F4(0x000C)
	struct FTgLobbyClassLookup                         m_arrSortedClasses[0x96];                                 // 0x08FC(0x0008)
	class UTgLobbyDC_PlayerTrade*                      m_TradeData[0x5];                                         // 0x0DAC(0x0008)
	int                                                m_nClassCount;                                            // 0x0DD4(0x0004)
	struct Fdword                                      m_nLastSelectedProfile;                                   // 0x0DD8(0x0004)
	struct Fdword                                      m_nLastSelectedSkin;                                      // 0x0DDC(0x0004)
	class UTgLobbyDC_Team*                             m_FriendTeamData;                                         // 0x0DE0(0x0008)
	class UTgLobbyDC_Team*                             m_EnemyTeamData;                                          // 0x0DE8(0x0008)
	struct Fdword                                      m_nTeamCount;                                             // 0x0DF0(0x0004)
	class UTgLobbyDC_Team*                             m_arrTeams[0x4];                                          // 0x0DF4(0x0008)
	class UTgSynchronizedTimer*                        m_BonusTimers[0x4];                                       // 0x0E14(0x0008)
	unsigned char                                      m_fUpdate;                                                // 0x0E34(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLobbyDC_Match");
		return ptr;
	}


	bool ConsumeEquipSkinId(const struct Fdword& nClassId);
	struct Fdword GetEquipSkinId(const struct Fdword& nClassId);
	class UTgLobbyDC_Team* GetOtherTeam(int nIndex);
	class UTgLobbyDC_Team* GetFriendTeam();
	void STATIC_OnMatchUpdate(class UTgEventDataItem* pEvent);
	int GetLocalSelectedClassId();
	void ClearMatchData();
	void ClearBonusTimers();
	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgLobbyDC_Player
// 0x002F (0x01CC - 0x019D)
class UTgLobbyDC_Player : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	int                                                m_nPlayerId;                                              // 0x01A0(0x0004)
	int                                                m_nClassId;                                               // 0x01A4(0x0004)
	int                                                m_nTaskForce;                                             // 0x01A8(0x0004)
	struct Fdword                                      m_nPosition;                                              // 0x01AC(0x0004)
	unsigned long                                      m_bIsBanning : 1;                                         // 0x01B0(0x0004)
	unsigned long                                      m_bIsPicking : 1;                                         // 0x01B0(0x0004)
	struct FUniqueNetId                                m_nConsoleUserId;                                         // 0x01B4(0x0008)
	struct FRoleCallInfo                               m_RoleCall;                                               // 0x01BC(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLobbyDC_Player");
		return ptr;
	}


	bool IsPlayerMuted(const struct FUniqueNetId& ConsoleId);
	struct Fdword GetMatchPosition();
	void STATIC_UpdateRoleCall(struct FRoleCallInfo* rci);
	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgLobbyDC_PlayerTrade
// 0x0003 (0x01A0 - 0x019D)
class UTgLobbyDC_PlayerTrade : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLobbyDC_PlayerTrade");
		return ptr;
	}


	void STATIC_NotifyMapChange();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgLobbyDC_Skin
// 0x000F (0x01AC - 0x019D)
class UTgLobbyDC_Skin : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	struct Fdword                                      m_nSkinId;                                                // 0x01A0(0x0004)
	struct Fdword                                      m_dwSubtype;                                              // 0x01A4(0x0004)
	unsigned long                                      m_bAvailable : 1;                                         // 0x01A8(0x0004)
	unsigned long                                      m_bVisible : 1;                                           // 0x01A8(0x0004)
	unsigned long                                      m_bSelectedByUs : 1;                                      // 0x01A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLobbyDC_Skin");
		return ptr;
	}


	bool GetSelectedByUs();
	bool GetAvailable();
	struct Fdword GetSubtype();
	struct Fdword GetSkinId();
	void STATIC_SetOwned(bool bOwned);
	void STATIC_SetPurchasable(bool bCanPurchase);
	void STATIC_SetAvailable(bool bIsAvail);
	void STATIC_SetSelectedByUs(bool bSelByUs);
	void SetVisible(bool Visible);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgLobbyDC_Team
// 0x00B3 (0x0250 - 0x019D)
class UTgLobbyDC_Team : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UTgLobbyDC_Player*                           m_Members[0xA];                                           // 0x01A0(0x0008)
	class UTgLobbyDC_Class*                            m_Bans[0x5];                                              // 0x01F0(0x0008)
	struct FTgIncomingBan                              m_BanWorkItems[0x5];                                      // 0x0218(0x0008)
	unsigned long                                      m_bLocalTeam : 1;                                         // 0x0240(0x0004)
	unsigned long                                      m_bHasPicking : 1;                                        // 0x0240(0x0004)
	unsigned long                                      m_bHasBanning : 1;                                        // 0x0240(0x0004)
	struct Fdword                                      m_nTaskForce;                                             // 0x0244(0x0004)
	int                                                m_nMemberCount;                                           // 0x0248(0x0004)
	int                                                m_nBanCount;                                              // 0x024C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgLobbyDC_Team");
		return ptr;
	}


	void ClearMatchData();
	void EndUpdateBans(bool bShowSpectateInfo);
	void STATIC_UpdateNextBan(const struct FPointer& pRow, bool bShowSpectateInfo);
	void BeginUpdateBans();
	void EndUpdateMembers();
	void STATIC_UpdateNextMember(const struct FPointer& pRow);
	void BeginUpdateMembers();
	void ClearRoleCalls();
	void STATIC_OnMatchMessageIDTag(const struct FPointer& pEvent);
	void STATIC_OnPlayerMute(class UTgEventDataItem* pEvent);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGFxMatchInventory
// 0x0048 (0x02CC - 0x0284)
class UTgGFxMatchInventory : public UTgGfxScene
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0284(0x0048) UNKNOWN PROPERTY: MapProperty TgClientBase.TgGFxMatchInventory.m_mapTextures

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxMatchInventory");
		return ptr;
	}


	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void ActivateTeamBooster(const struct Fdword& dwItemLootId, const struct Fdword& dwItemSubType);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgDataGroup_Settings
// 0x0033 (0x01D0 - 0x019D)
class UTgDataGroup_Settings : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UTgSettingsDC_Video*                         m_VideoSettings;                                          // 0x01A0(0x0008)
	class UTgSettingsDC_Audio*                         m_AudioSettings;                                          // 0x01A8(0x0008)
	class UTgSettingsDC_UI*                            m_UISettings;                                             // 0x01B0(0x0008)
	class UTgSettingsDC_KeyBinding*                    m_KeyBindings;                                            // 0x01B8(0x0008)
	class UTgSettingsDC_Spectator*                     m_Spectator;                                              // 0x01C0(0x0008)
	class UTgSettingsDC_Account*                       m_Account;                                                // 0x01C8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgDataGroup_Settings");
		return ptr;
	}


	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgSettingsDC_Account
// 0x0003 (0x01A0 - 0x019D)
class UTgSettingsDC_Account : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSettingsDC_Account");
		return ptr;
	}


	void STATIC_usc_ResetEmailResponse();
	void STATIC_usc_SetAccountSettings(bool optInSmiteNewsLetter, const struct FString& sEmail);
	void STATIC_PopulateAccountData();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgSettingsDC_Audio
// 0x0003 (0x01A0 - 0x019D)
class UTgSettingsDC_Audio : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSettingsDC_Audio");
		return ptr;
	}


	void STATIC_usc_requestDeviceList();
	void STATIC_usc_SetAudioSettings(float Master, float sfx, float music, float voice, float matchNotifier, bool AllPlayerMute, bool skipSave, bool MasterMute, bool SFXMute, bool MusicMute, bool VoiceMute, bool MatchNotifierMute, bool ChatNotifierMute, const struct FString& DefaultAudioDevice, bool VivoxEnabled, float vivoxVol, bool vivoxVolMute, float vivoxMic, bool VivoxMicMute, int VivoxInputType);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgSettingsDC_KeyBinding
// 0x002B (0x01C8 - 0x019D)
class UTgSettingsDC_KeyBinding : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UGFxObject*                                  m_KeyBindings;                                            // 0x01A0(0x0008)
	TArray<class UGFxObject*>                          m_KeybindObjects;                                         // 0x01A8(0x0010) (NeedCtorLink)
	TArray<struct FTgKeyBind>                          m_BindableCommands;                                       // 0x01B8(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSettingsDC_KeyBinding");
		return ptr;
	}


	void STATIC_OnInputSettingChange(class UTgEventDataItem* pEvent);
	void STATIC_OnKeyBindMenuUpdate(class UTgEventDataItem* pEvent);
	void STATIC_OnKeyDisplayUpdate(class UTgEventDataItem* pEvent);
	void STATIC_usc_SetControllerSettings(bool bInvertMouse, bool bControllerFeedback, float fLookSensitivityX, float fLookSensitivityY, float fLookAccelSpeed, float fDeadZoneLeft, float fDeadZoneRight, bool bJumpEnabled, bool bPublicParty, bool bSkipSave, bool bEnableBasicAttackControllerFeedback, bool bEnableAimAssist, bool bUseFixedPitchMode);
	void STATIC_PopulateKeybinding(int settingtype);
	void InitializeBindingData();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgSettingsDC_Spectator
// 0x002B (0x01C8 - 0x019D)
class UTgSettingsDC_Spectator : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UGFxObject*                                  m_KeyBindings;                                            // 0x01A0(0x0008)
	TArray<class UGFxObject*>                          m_KeybindObjects;                                         // 0x01A8(0x0010) (NeedCtorLink)
	TArray<struct FTgKeyBind>                          m_BindableCommands;                                       // 0x01B8(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSettingsDC_Spectator");
		return ptr;
	}


	void STATIC_OnSpecMenuUpdate(class UTgEventDataItem* pEvent);
	void STATIC_OnSpecKeyDisplayUpdate(class UTgEventDataItem* pEvent);
	void STATIC_PopulateKeybinding();
	void InitializeBindingData();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgSettingsDC_UI
// 0x0013 (0x01B0 - 0x019D)
class UTgSettingsDC_UI : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	TArray<int>                                        m_LoadingPlateIDs;                                        // 0x01A0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSettingsDC_UI");
		return ptr;
	}


	void STATIC_usc_SetCrossplaySetting(int newCrossplaySetting);
	int STATIC_usc_GetClientCrossplaySearchValue();
	void STATIC_usc_SetUISettings(const struct FString& SettingName, const struct FString& settingValue, int settingtype);
	void STATIC_OnInputSettingChange(class UTgEventDataItem* pEvent);
	void STATIC_OnLoginSuccess(class UTgEventDataItem* pEvent);
	void STATIC_UpdateUISettings(int settingtype);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgSettingsDC_Video
// 0x0003 (0x01A0 - 0x019D)
class UTgSettingsDC_Video : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgSettingsDC_Video");
		return ptr;
	}


	void STATIC_ShowSettingsChangedPopup();
	void CreateResolutionList();
	void STATIC_UpdateVideoSettings();
	void STATIC_ViewportResized();
	void STATIC_usc_SetConsoleSettings(float fGamma, bool bVsync, float fSafeFrame);
	void STATIC_usc_SetVsyncValue(bool bVsync);
	void STATIC_usc_AutoConfig();
	void STATIC_usc_SetGammaValue(float nGamma);
	void STATIC_usc_SetVideoSettings(float nWorldDetail, float nTextureDetail, float nShadowDetail, float nParticleDetail, bool bUseVSync, bool bUseSpecialMatEffects, bool bUseRagdollPhysics, bool bFullScreen, bool bBorderless, float nResX, float nResY, int nMultiSampleCount, bool bD3D11Enabled, int nFXAAQuality, int nShaderQuality, int nResolutionScale);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClientBase.TgGFxClanListBase
// 0x0000 (0x0168 - 0x0168)
class UTgGFxClanListBase : public UTgGFxEventObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxClanListBase");
		return ptr;
	}


	void FinishLoading(const struct FString& sMessage);
	void STATIC_USC_RequestUpdate();
	void STATIC_SetList(class UGFxObject* pArray, const struct FString& sMessage);
	void STATIC_OnPlayerRequest(class UTgGFxPlayerProvider* pSource);
	void STATIC_OnPrivilegeCheck(TEnumAsByte<EFeaturePrivilege> ePriv, TEnumAsByte<EFeaturePrivilegeLevel> ePermiss);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxFriendsListView
// 0x002C (0x0194 - 0x0168)
class UTgGFxFriendsListView : public UTgGFxEventObject
{
public:
	unsigned long                                      m_bCanPlayOnline : 1;                                     // 0x0168(0x0004)
	class UTgGFxFriendSearchProvider*                  m_pSearch;                                                // 0x016C(0x0008)
	class UTgGFxDataProvider*                          m_pGFxSearchData;                                         // 0x0174(0x0008)
	class UTgGFxDataGroup*                             m_pGFxLocalData;                                          // 0x017C(0x0008)
	class UTgGFxDataGroup*                             m_pGFxServerData;                                         // 0x0184(0x0008)
	class UTgGFxObject*                                m_pProcessingIndicator;                                   // 0x018C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxFriendsListView");
		return ptr;
	}


	void STATIC_USC_DeclineAllFriendRequests();
	void FinishLoading(const struct FString& Message);
	void STATIC_OnDeclineRequestProgress(struct FTgDeferProgress* Progress);
	void STATIC_OnServerSearchResults(class UTgEventDataItem* pEvent);
	void STATIC_OnLocalSearchResults(class UTgEventDataItem* pEvent);
	void STATIC_OnSearchEmpty(class UTgEventDataItem* pEvent);
	void STATIC_OnStartSearch(class UTgEventDataItem* pEvent);
	bool STATIC_USC_Search(const struct FString& sSearch, bool bIsLocal);
	void STATIC_USC_RequestUpdateList();
	void STATIC_SetList(class UGFxObject* pArray, const struct FString& sError);
	void STATIC_OnPrivilegeCheck(TEnumAsByte<EFeaturePrivilege> ePriv, TEnumAsByte<EFeaturePrivilegeLevel> eLevel);
	void STATIC_OnFriendsUpdate(class UTgEventDataItem* pEventBase);
	void STATIC_OnReceiveFriends(class UTgGFxFriendData* pFriends);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxLearnVGS
// 0x0000 (0x0168 - 0x0168)
class UTgGFxLearnVGS : public UTgGFxEventObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxLearnVGS");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxPartyInvitePane
// 0x0010 (0x0178 - 0x0168)
class UTgGFxPartyInvitePane : public UTgGFxEventObject
{
public:
	class UTgGFxFriendSearchProvider*                  m_pSearch;                                                // 0x0168(0x0008)
	class UTgGFxDataProvider*                          m_pResults;                                               // 0x0170(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPartyInvitePane");
		return ptr;
	}


	void STATIC_OnSearchServer(class UTgEventDataItem* pEvent);
	void STATIC_OnSearchLocal(class UTgEventDataItem* pEvent);
	void STATIC_OnSearchEmpty(class UTgEventDataItem* pEvent);
	void STATIC_OnSearchStart(class UTgEventDataItem* pEvent);
	void STATIC_USC_Search(const struct FString& sSearch);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxPartyList
// 0x0028 (0x0190 - 0x0168)
class UTgGFxPartyList : public UTgGFxEventObject
{
public:
	struct FTgPlayerId                                 m_pidAutoSelect;                                          // 0x0168(0x0024) (NeedCtorLink)
	unsigned long                                      m_bFirstLoad : 1;                                         // 0x018C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPartyList");
		return ptr;
	}


	void FinishLoading(const struct FString& Message);
	class UGFxObject* STATIC_USC_GetPartiablePlayers();
	void STATIC_USC_Disband();
	void STATIC_USC_KickPlayer(class UTgGFxPlayerData* pGFxPlayer);
	void STATIC_USC_MakeLeader(class UTgGFxPlayerData* pGFxPlayer);
	void STATIC_USC_AddPlayer(class UTgGFxPlayerData* pGFxPlayer);
	void STATIC_OnMctsEvent(const struct FPointer& pEvent);
	void STATIC_OnPartyUpdate(class UTgEventDataItem* pEvent);
	void STATIC_OnFriendRequest(class UTgGFxPlayerProvider* pProvider);
	void STATIC_Repopulate();
	void STATIC_OnPrivilegeCheck(TEnumAsByte<EFeaturePrivilege> ePriv, TEnumAsByte<EFeaturePrivilegeLevel> eLevel);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxChatModalBase
// 0x0030 (0x02B4 - 0x0284)
class UTgGFxChatModalBase : public UTgGfxScene
{
public:
	struct FTgIntervalHandle                           m_InfoUpdateDelay;                                        // 0x0284(0x0010)
	struct FTgIntervalHandle                           m_InfoQuitDelay;                                          // 0x0294(0x0010)
	TArray<struct Fdword>                              m_arrPidToUpdate;                                         // 0x02A4(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxChatModalBase");
		return ptr;
	}


	void ClearTimeouts();
	void STATIC_OnInfoDelay(float nDeltaTime);
	void STATIC_ReceivePlayerInfo(const struct FPointer& pEventBase);
	void SetChannelMembers(class UGFxObject* Data);
	void MinimizeChat();
	void MaximizeChat();
	void STATIC_UpdateChannelMembers(class UGFxObject* Obj);
	void STATIC_OnChatEvent(class UTgEventDataItem* pEventBase);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxExternalLink
// 0x0000 (0x0284 - 0x0284)
class UTgGFxExternalLink : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxExternalLink");
		return ptr;
	}


	void STATIC_USC_GoTolink(const struct FString& sLink);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGfxFooterBase
// 0x00AC (0x0330 - 0x0284)
class UTgGfxFooterBase : public UTgGfxScene
{
public:
	TEnumAsByte<EFooterDisplayStates>                  m_eLastMode;                                              // 0x0284(0x0001)
	TEnumAsByte<ETopBarPlayerInfoStates>               m_eLastPlayerDisplayMode;                                 // 0x0285(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0286(0x0002) MISSED OFFSET
	class UTgGFxObject*                                m_PlayerInfo;                                             // 0x0288(0x0008)
	class UTgGFxObject*                                m_FooterButtons;                                          // 0x0290(0x0008)
	class UTgGFxObject*                                m_FooterBg;                                               // 0x0298(0x0008)
	class UTgGFxObject*                                m_PromptBar;                                              // 0x02A0(0x0008)
	class UTgGFxButtonPrompt*                          m_pOptionsPrompt;                                         // 0x02A8(0x0008)
	class UTgGFxObject*                                m_QuestsBtnCount;                                         // 0x02B0(0x0008)
	class UTgGFxObject*                                m_RewardsBtnCount;                                        // 0x02B8(0x0008)
	class UTgGFxObject*                                m_NotificationBtnCount;                                   // 0x02C0(0x0008)
	class UTgGFxObject*                                m_FriendsBtnCount;                                        // 0x02C8(0x0008)
	class UTgGFxObject*                                m_GiftBtnCount;                                           // 0x02D0(0x0008)
	class UTgGFxObject*                                m_FooterBtnsGotoPrompt;                                   // 0x02D8(0x0008)
	class UTgGFxObject*                                m_LeaveQueueGamepad;                                      // 0x02E0(0x0008)
	class UTgGFxObject*                                m_LeaveQueueKeyboard;                                     // 0x02E8(0x0008)
	class UTgGFxObject*                                m_BackButtonContainer;                                    // 0x02F0(0x0008)
	class UTgGFxObject*                                m_BackButton;                                             // 0x02F8(0x0008)
	class UTgGFxObject*                                m_ChatContainer;                                          // 0x0300(0x0008)
	class UTgGFxObject*                                m_ChatMultibox;                                           // 0x0308(0x0008)
	int                                                m_nFooterButtonHideCount;                                 // 0x0310(0x0004)
	struct FTgIntervalHandle                           m_FriendTimeout;                                          // 0x0314(0x0010)
	int                                                m_nMissQueueCount;                                        // 0x0324(0x0004)
	unsigned long                                      m_bMissQueuePopupArmed : 1;                               // 0x0328(0x0004)
	unsigned long                                      m_bQueueTimeoutArmed : 1;                                 // 0x0328(0x0004)
	float                                              m_fTimerDelay;                                            // 0x032C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGfxFooterBase");
		return ptr;
	}


	void ShowCalloutNotification(const struct FString& sValue, float fTime);
	void UpdateBoostBtn(int Time);
	void ShowSpectateQueued(bool bQueued);
	void STATIC_OnFriendUpdateTimeout(float nDeltaTime);
	void STATIC_OnFriendUpdate(const struct FPointer& pEventBase);
	void STATIC_OnPopupClosed(class UTgEventDataItem* pEvent);
	void STATIC_OnNoMatchFound(class UTgEventDataItem* pEvent);
	void STATIC_OnInputModeChanged(class UTgEventDataItem* pEvent);
	void STATIC_OnNavigationAction(class UTgEventDataItem* pEvent);
	void STATIC_OnFocusFooterMain(class UTgEventDataItem* pEvent);
	void STATIC_RefreshBoosterTimer(class UTgEventDataItem* pEvent);
	void STATIC_RefreshDisplayMode(class UTgEventDataItem* pEvent);
	void STATIC_OnUpdateLogoState(class UTgEventDataItem* pEvent);
	void STATIC_OnLobbyStateChange(class UTgEventDataItem* pEvent);
	void STATIC_UpdateCallouts(class UTgEventDataItem* pEvent);
	void STATIC_OnSetFooterDisplayMode(class UTgEventDataItem* pEvent);
	void STATIC_OnUpdatePlayerInfoVisibility(class UTgEventDataItem* pEvent);
	void STATIC_OnSpectateQueuedState(class UTgEventDataItem* pEvent);
	void Tick(float DeltaTime);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxLoginBase
// 0x0028 (0x02AC - 0x0284)
class UTgGFxLoginBase : public UTgGfxScene
{
public:
	struct FTgIntervalHandle                           m_handleServerCheck;                                      // 0x0284(0x0010)
	unsigned long                                      m_bLinkAccountExisting : 1;                               // 0x0294(0x0004)
	unsigned long                                      m_bHideCreateAccountBtn : 1;                              // 0x0294(0x0004)
	unsigned long                                      m_bInLinkingProcess : 1;                                  // 0x0294(0x0004)
	TArray<struct FName>                               m_arrGamepadCombo;                                        // 0x0298(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                m_nConsolePlatformType;                                   // 0x02A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxLoginBase");
		return ptr;
	}


	struct FString STATIC_USC_GetConsoleLoginPrompt(bool bLoginEnabled);
	bool STATIC_USC_SettingsMenuLoaded();
	bool STATIC_USC_CheckServerStatusIsUp();
	void STATIC_USC_ShowLinkingPopup();
	void STATIC_USC_CancelAccountCreation();
	bool STATIC_USC_LoginGoogle();
	bool STATIC_USC_LoginFacebook();
	bool STATIC_USC_CreateHirezAccount(const struct FString& sName, const struct FString& sPassword, const struct FString& sEmail, bool ageRequirement);
	void STATIC_USC_Login(const struct FString& sUsername, const struct FString& sPassword);
	void STATIC_USC_Reconnect();
	void ShowAccountCreationScreen(bool bShowCreateScreen, bool bDisableCreateAccountBtn);
	void SetLoginEnabled(bool bCanLogin);
	void LoginQueue();
	void LockOutUser(const struct FString& sProcessing, bool bShowLoading, bool bForceCall);
	void LoginConsole(int nControllerIdx);
	void asc_LoginReady(int nAuthType);
	void asc_MustAcceptEula(const struct FString& sMessage);
	void ReloadLoginScreen();
	void CreateAccountError(const struct FString& sMessage);
	void DefaultLoginError(const struct FString& sMessage);
	void LoginAccepted(const struct FString& sMessage);
	void GameNotOnAccount(const struct FString& sMessage);
	void LoginInvalid(const struct FString& sMessage);
	void AccountSuspend(const struct FString& sMessage);
	void WrongVersion(const struct FString& sMessage);
	void NameInvalid(const struct FString& sMessage);
	void NameUnavailable(const struct FString& sMessage);
	void NameUnacceptable(const struct FString& sMessage);
	void AccountNameChange(const struct FString& sMessage);
	void AccountHasNoPlayer(const struct FString& sMessage);
	void STATIC_OnPopup(class UTgPagePopup* pData, struct FPopupResponse* Response);
	void STATIC_ServerUnderMaintenance();
	void STATIC_SetLoginReady(int nAuthType);
	void STATIC_OnServerStatusTimeout(float nDeltaTime);
	void CheckServerStatus();
	void STATIC_OnSceneOpened(class UTgEventDataItem* pEvent);
	void STATIC_OnLoginError(class UTgEventDataItem* pEvent);
	void STATIC_OverrideStatusLockout();
	void MustAcceptEula(const struct FString& sError);
	bool STATIC_OnInput(const struct FPointer& pInputEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxMatchAutoOptions
// 0x0000 (0x0284 - 0x0284)
class UTgGFxMatchAutoOptions : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxMatchAutoOptions");
		return ptr;
	}


	void STATIC_USC_SaveOptions(bool bAutoSkill, bool bAutoBuy, bool bAutoFilter, bool bShowGameTips, bool bShowRoleGuides, bool bShowAllRecommendedBuilds);
	void STATIC_USC_RequestOptions();
	void UpdateValues(bool bAutoSkill, bool bAutoBuy, bool bAutoFilter, bool bShowGameTips, bool bShowRoleGuides, bool bIsTutorial, bool bShowAllRecommendedBuilds);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxMatchCharacterConfirm
// 0x0014 (0x0298 - 0x0284)
class UTgGFxMatchCharacterConfirm : public UTgGfxScene
{
public:
	struct Fdword                                      m_nClassId;                                               // 0x0284(0x0004)
	struct FTgIntervalHandle                           m_handleStateCheck;                                       // 0x0288(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxMatchCharacterConfirm");
		return ptr;
	}


	void STATIC_USC_Confirm();
	bool GetLocalPlayerBanning();
	void STATIC_OnUpdate(float nDeltaTime);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxMatchLobbyShared
// 0x0030 (0x02B4 - 0x0284)
class UTgGFxMatchLobbyShared : public UTgGfxScene
{
public:
	class UTgPagePopup*                                m_pCurPopup;                                              // 0x0284(0x0008)
	struct Fdword                                      m_nItemIdToBuy;                                           // 0x028C(0x0004)
	struct Fdword                                      m_nLastProfileId;                                         // 0x0290(0x0004)
	struct Fdword                                      m_nOverrideSkinId;                                        // 0x0294(0x0004)
	int                                                m_nRerollsRemaining;                                      // 0x0298(0x0004)
	int                                                m_nGuideCalloutCount;                                     // 0x029C(0x0004)
	TEnumAsByte<EMatchLobbyDemoState>                  m_eDemoState;                                             // 0x02A0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	struct FTgIntervalHandle                           m_RerollTimeout;                                          // 0x02A4(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxMatchLobbyShared");
		return ptr;
	}


	bool STATIC_USC_ToggleChat();
	void STATIC_USC_OpenActions();
	bool STATIC_USC_PreviewItem(int nItemId, int nItemType);
	bool STATIC_USC_RequestReroll();
	bool STATIC_USC_CanPurchaseReroll();
	bool STATIC_USC_LeaveLobby();
	bool STATIC_USC_LobbyAction();
	bool STATIC_USC_RequestTrade(int nPlayerId);
	bool STATIC_USC_SelectEmote(int nEmoteId, bool isAux);
	bool STATIC_USC_SelectVoice(int nVoiceIndex, bool isAux);
	bool STATIC_USC_SelectSkin(int nSkinId, bool isAux);
	bool STATIC_USC_SelectClass(int nClassId, bool isAux);
	void OpenTeamBoosters();
	void NotifyUpdateGuideCallout(int nCount);
	void NotifyUpdateEmoteData(class UGFxObject* pData);
	void NotifyUpdateVoiceData(class UGFxObject* pData);
	void NotifySelectVoice(int nVoiceValueId);
	void NotifyRerollsRemaining(int nCount);
	void NotifyLockIn(class UGFxObject* Result);
	void NotifySelectClass(int nProfileId);
	class UTgLobbyDC_Match* GetMatchDC();
	void ClearSkinOverride();
	bool ActionError(const struct FString& sMessage);
	void STATIC_PlayErrorSound();
	bool STATIC_SetSkinPreview(const struct Fdword& nSkinId);
	class UGFxObject* CreateEmoteData(const struct Fdword& nBotId);
	class UGFxObject* CreateVoiceData(const struct Fdword& nBotId);
	class UGFxObject* CreateLockInResult(const struct Fdword& nBotId);
	void STATIC_OnRerollTimeout(float nDeltaTime);
	void STATIC_SetDemoState(TEnumAsByte<EMatchLobbyDemoState> eDemoState);
	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	bool STATIC_OnMenuAction(const struct Fdword& nAction);
	void STATIC_OnLeaveLobbyPopup(class UTgPagePopup* pData, struct FPopupResponse* Response);
	void STATIC_OnMctsEvent(const struct FPointer& pEvent);
	void STATIC_OnUpdateGuideCallout(class UTgEventDataItem* pEventBase);
	void STATIC_OnTeamBooster(class UTgEventDataItem* pEventBase);
	void STATIC_OnDemoEvent(class UTgEventDataItem* pEventBase);
	void STATIC_OnCancelPurchase(class UTgEventDataItem* pEventBase);
	void STATIC_OnMatchStateChange(class UTgEventDataItem* pEventBase);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxMatchRoleCall
// 0x0000 (0x0284 - 0x0284)
class UTgGFxMatchRoleCall : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxMatchRoleCall");
		return ptr;
	}


	void STATIC_USC_CallRole(int nValueId);
	void STATIC_USC_RequestDataProvider();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxMatchTradePopup
// 0x0008 (0x028C - 0x0284)
class UTgGFxMatchTradePopup : public UTgGfxScene
{
public:
	struct Fdword                                      m_nActiveTradePlayer;                                     // 0x0284(0x0004)
	unsigned long                                      m_bIsGodTrade : 1;                                        // 0x0288(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxMatchTradePopup");
		return ptr;
	}


	void STATIC_USC_RespondToTrade(bool bAccept);
	void STATIC_RejectTrade();
	void AcceptTrade();
	void CloseScene();
	void STATIC_OnRoleTradeRequest(const struct FPointer& pMarshal);
	void STATIC_OnTradeCancel(const struct FPointer& pMarshal);
	void STATIC_OnTradeRequest(const struct FPointer& pMarshal);
	void STATIC_OnMctsEvent(const struct FPointer& pEvent);
	bool STATIC_PopulateRoleTradeData(const struct FPointer& pRequester, const struct FPointer& pUs, const struct Fdword& traderRole, const struct Fdword& playerRole);
	bool STATIC_PopulateTradeData(const struct FPointer& pRequester, const struct FPointer& pUs);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxPausedDisplay
// 0x0008 (0x028C - 0x0284)
class UTgGFxPausedDisplay : public UTgGfxScene
{
public:
	struct FName                                       m_nmLastBind;                                             // 0x0284(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPausedDisplay");
		return ptr;
	}


	void STATIC_OnKeyBindChange(class UTgEventDataItem* pEventBase);
	bool STATIC_OnInputIntercept(const struct FPointer& pInputEvent);
	void STATIC_UpdateBindIntercept();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxPurchaseModalBase
// 0x0010 (0x0294 - 0x0284)
class UTgGFxPurchaseModalBase : public UTgGfxScene
{
public:
	struct Fdword                                      m_Location;                                               // 0x0284(0x0004)
	unsigned long                                      m_bLongDescOpen : 1;                                      // 0x0288(0x0004)
	unsigned long                                      m_bIsAnonGift : 1;                                        // 0x0288(0x0004)
	int                                                m_nGiftPlayerId;                                          // 0x028C(0x0004)
	int                                                m_nGiftMsgIndex;                                          // 0x0290(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxPurchaseModalBase");
		return ptr;
	}


	void HideMarketplaceVisibility();
	void STATIC_SetupLongDescEvent(class UTgEventDataItem* pEvent);
	void CloseScreen();
	void SetupBattlePassPurchaseLevelModal(int toLevel, int bundleQuantity);
	void SetupDoubleBundle(class UGFxObject* Data, class UGFxObject* Data2, int Location);
	void SetupBundleCompare(class UGFxObject* Data, class UGFxObject* Data2);
	void SetupData(class UGFxObject* Data, int popupType);
	void STATIC_SetupLongDesc(const struct FString& sItemName, const struct FString& sLongDesc, const struct FString& sSignedOffer);
	bool STATIC_USC_ShowErrorIfNotEnoughCurrency(int nCurrencyType, int nQuantity, int nCouponId, TArray<class UGFxObject*> arrItemDatas);
	void STATIC_USC_CompleteBatchPurchase();
	void STATIC_USC_AddBatchPurchaseItem(int ItemId, int nVendorId, int nPriceInUI, int CurrencyType, int Quantity, int nCouponId);
	void STATIC_USC_StartBatchPurchase();
	void STATIC_USC_OnCloseScreen();
	void STATIC_USC_CloseLongDesc();
	void STATIC_USC_OnClickConfirm();
	void STATIC_USC_PurchaseItem(int ItemId, int nVendorId, int nPriceInUI, int CurrencyType, int Quantity, int nCouponId);
	void STATIC_OpenOdysseyVoyagePurchaseModal(class UTgEventDataItem* pEvent);
	void STATIC_OpenOdysseyTerritoryPurchaseModal(class UTgEventDataItem* pEvent);
	void STATIC_OpenBattlePassPurchaseLevelModal(class UTgEventDataItem* pEvent);
	void STATIC_OpenBattlePassPurchaseModal(class UTgDataItemDoublePurchase* pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxRecentlyPlayed
// 0x0020 (0x02A4 - 0x0284)
class UTgGFxRecentlyPlayed : public UTgGfxScene
{
public:
	TArray<class UTgGFxPlayerData*>                    m_arrRequestedNames;                                      // 0x0284(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UTgGFxPlayerData*>                    m_arrPlayers;                                             // 0x0294(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxRecentlyPlayed");
		return ptr;
	}


	void FinishLoading(const struct FString& Message);
	void STATIC_OnReceivePlayerNames(bool bSuccess, class UTgPlayerNameManager* pManager);
	void STATIC_OnPrivilegeCheck(TEnumAsByte<EFeaturePrivilege> ePriv, TEnumAsByte<EFeaturePrivilegeLevel> eLevel);
	void STATIC_Populate();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxSocialList
// 0x0000 (0x0284 - 0x0284)
class UTgGFxSocialList : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxSocialList");
		return ptr;
	}


	bool STATIC_USC_TryOpenDevMenu();
	void STATIC_OnNavigate(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* pMP);
};


// Class TgClientBase.TgGFxVGSGame
// 0x0050 (0x02D4 - 0x0284)
class UTgGFxVGSGame : public UTgGfxScene
{
public:
	TArray<struct FVGSGameData>                        m_arrCommands;                                            // 0x0284(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        m_arrEasyCmds;                                            // 0x0294(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        m_arrHardCmds;                                            // 0x02A4(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FPointer>                            m_arrRecentCmds;                                          // 0x02B4(0x0010) (Const, Native, AlwaysInit)
	struct FString                                     m_sHighScore;                                             // 0x02C4(0x0010) (Config, AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxVGSGame");
		return ptr;
	}


	int STATIC_USC_GameOver(int nCorrect, int nLongestStreak, int nTimeSecs, int nBonusTimeSecs);
	int STATIC_USC_GetHighScore();
	class UGFxObject* STATIC_USC_GetNewCombo(int ElapsedTime, int maxTime);
	void STATIC_OnQueueChange(class UTgEventDataItem* pEvent);
	bool STATIC_OnGamepadInput(const struct FPointer& pInputEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxViewerStore
// 0x0088 (0x030C - 0x0284)
class UTgGFxViewerStore : public UTgGfxScene
{
public:
	struct FTgEsportsData                              m_SeasonData;                                             // 0x0284(0x0080) (NeedCtorLink)
	struct FName                                       m_nmCamera;                                               // 0x0304(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxViewerStore");
		return ptr;
	}


	void STATIC_USC_UpdateSelectedItem(int nLootId);
	void STATIC_USC_GoToStream();
	void STATIC_USC_GoToLinking();
	void STATIC_USC_TeamBuy(int nLootId);
	void STATIC_USC_RotatorBuy(int nLootId);
	void STATIC_USC_StoreBuy(int nLootId, int nQuantity);
	void STATIC_USC_MatchVote(int nGroupId, int nTeamId);
	void STATIC_SetCameraModel(int nClassId, int nSkinId);
	void STATIC_SetCamera(const struct FName& nmCameraName);
	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_OnImageLoad(class UTgEventDataItem* pEventBase);
	void STATIC_OnJsonUpdate(class UTgEventDataItem* pEventBase);
	void STATIC_OnPicksUpdate(class UTgEventDataItem* pEventBase);
	void STATIC_OnMatchUpdate(class UTgEventDataItem* pEventBase);
	void STATIC_UpdateFromAvailable();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClientBase.TgGFxStoreDeals
// 0x0094 (0x01C4 - 0x0130)
class UTgGFxStoreDeals : public UTgGFxNativeWidget
{
public:
	TArray<struct FTgStoreDealButton>                  arrDeal;                                                  // 0x0130(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgStoreDealBundles                         gfxRightPanel;                                            // 0x0140(0x0040) (NeedCtorLink)
	class UTgGFxObject*                                gfxDealsLabel;                                            // 0x0180(0x0008)
	class UTgGFxObject*                                gfxTimerLabel;                                            // 0x0188(0x0008)
	class UTgGFxObject*                                gfxBackground;                                            // 0x0190(0x0008)
	struct FRect                                       m_rectDealArea;                                           // 0x0198(0x0010)
	struct FQWord                                      m_nEndTime;                                               // 0x01A8(0x0008)
	unsigned long                                      m_bFirstAppearance : 1;                                   // 0x01B0(0x0004)
	struct FTgIntervalHandle                           m_TimerInterval;                                          // 0x01B4(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxStoreDeals");
		return ptr;
	}


	void STATIC_OnAcquisition(const struct FPointer& pEventBase);
	void STATIC_OnInputMode(class UTgEventDataItem* pEventBase);
	void STATIC_OnFocusChange(const struct FGFxEventData& Data);
	void STATIC_OnClickBundle(const struct FGFxEventData& Data);
	void STATIC_OnClickDeal(const struct FGFxEventData& Data);
	void STATIC_OnToggleVisibility(const struct FGFxEventData& Data);
	void STATIC_OnTimer(float nDeltaTime);
	void STATIC_ShowPage();
	void STATIC_Uninitialize();
	void STATIC_Initialize();
};


// Class TgClientBase.TgGFxVGSShared
// 0x0098 (0x01C8 - 0x0130)
class UTgGFxVGSShared : public UTgGFxNativeWidget
{
public:
	struct FVGSPrompt                                  PromptA;                                                  // 0x0130(0x0018)
	struct FVGSPrompt                                  PromptB;                                                  // 0x0148(0x0018)
	struct FVGSPrompt                                  PromptX;                                                  // 0x0160(0x0018)
	struct FVGSPrompt                                  PromptY;                                                  // 0x0178(0x0018)
	struct FVGSPrompt                                  PromptLB;                                                 // 0x0190(0x0018)
	struct FVGSPrompt                                  PromptRB;                                                 // 0x01A8(0x0018)
	struct Fdword                                      m_nGroupId;                                               // 0x01C0(0x0004)
	struct Fdword                                      m_nVGSId;                                                 // 0x01C4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClientBase.TgGFxVGSShared");
		return ptr;
	}


	void STATIC_OnTextInput(bool bSuccess, const struct FString& sText);
	void STATIC_UpdatePrompts();
	void STATIC_SendVGSChat(const struct Fdword& nChannel, const struct Fdword& nVgsId, const struct FString& sCustomMsg);
	bool STATIC_OnInput(const struct FPointer& pInputEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
