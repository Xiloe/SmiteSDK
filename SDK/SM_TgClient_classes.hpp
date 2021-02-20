#pragma once

// SMITE (8.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SM_TgClient_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TgClient.TgGameLaunch
// 0x0000 (0x04D0 - 0x04D0)
class ATgGameLaunch : public ATgGameLaunchBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameLaunch");
		return ptr;
	}

};


// Class TgClient.TgGameViewportClient
// 0x0000 (0x01D8 - 0x01D8)
class UTgGameViewportClient : public UTgGameViewportClientBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameViewportClient");
		return ptr;
	}

};


// Class TgClient.TgGfxAchievementPopup
// 0x0000 (0x0284 - 0x0284)
class UTgGfxAchievementPopup : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxAchievementPopup");
		return ptr;
	}


	void QueueAchievement();
	void STATIC_asc_QueueAchievement();
	void STATIC_Initialize(class UTgMoviePlayer* pMoviePlayer);
};


// Class TgClient.TgGfxAchievementSelection
// 0x0014 (0x0298 - 0x0284)
class UTgGfxAchievementSelection : public UTgGfxScene
{
public:
	int                                                m_requestedPlayerId;                                      // 0x0284(0x0004)
	struct FScriptDelegate                             __USC_ApplySelections_Delegate__Delegate;                 // 0x0288(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0288(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxAchievementSelection");
		return ptr;
	}


	void UpdateSelectedAchievements();
	void STATIC_ASC_UpdateSelectedAchievements();
	void UpdateScreen();
	void STATIC_ASC_UpdateScreen();
	void STATIC_USC_ApplySelections(int as1, int as2, int as3, int as4);
	void USC_ApplySelections_Delegate(int as1, int as2, int as3, int as4);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxAdventureProgress
// 0x0008 (0x028C - 0x0284)
class UTgGfxAdventureProgress : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                            // 0x0284(0x0004)
	int                                                m_nVictoryLaps;                                           // 0x0288(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxAdventureProgress");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxAdventureProgressDungeon2
// 0x0014 (0x0298 - 0x0284)
class UTgGfxAdventureProgressDungeon2 : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                            // 0x0284(0x0004)
	int                                                m_nBundleId;                                              // 0x0288(0x0004)
	int                                                m_nStatueActivityId;                                      // 0x028C(0x0004)
	int                                                m_nStatueGoalId;                                          // 0x0290(0x0004)
	int                                                m_nStatueCompleteGoalId;                                  // 0x0294(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxAdventureProgressDungeon2");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxAdventureProgressFox
// 0x0034 (0x02B8 - 0x0284)
class UTgGfxAdventureProgressFox : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                            // 0x0284(0x0004)
	int                                                m_nBundleId;                                              // 0x0288(0x0004)
	int                                                m_nChestItemId;                                           // 0x028C(0x0004)
	int                                                m_nPointBundleId;                                         // 0x0290(0x0004)
	int                                                m_nFox1LTI;                                               // 0x0294(0x0004)
	int                                                m_nFox2LTI;                                               // 0x0298(0x0004)
	int                                                m_nFox3LTI;                                               // 0x029C(0x0004)
	int                                                m_nFox4LTI;                                               // 0x02A0(0x0004)
	int                                                m_nFox1ItemId;                                            // 0x02A4(0x0004)
	int                                                m_nFox2ItemId;                                            // 0x02A8(0x0004)
	int                                                m_nFox3ItemId;                                            // 0x02AC(0x0004)
	int                                                m_nFox4ItemId;                                            // 0x02B0(0x0004)
	unsigned long                                      b_chestPurchaseLock : 1;                                  // 0x02B4(0x0004)
	unsigned long                                      b_requestedChestPurchase : 1;                             // 0x02B4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxAdventureProgressFox");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_SetupChestPurchaseFox();
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxAdventureProgressMMO
// 0x0008 (0x028C - 0x0284)
class UTgGfxAdventureProgressMMO : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                            // 0x0284(0x0004)
	int                                                m_nBundleId;                                              // 0x0288(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxAdventureProgressMMO");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxAdventuresHub
// 0x0074 (0x02F8 - 0x0284)
class UTgGfxAdventuresHub : public UTgGfxScene
{
public:
	int                                                m_nBundleId;                                              // 0x0284(0x0004)
	int                                                m_nChestItemId;                                           // 0x0288(0x0004)
	int                                                m_nPointBundleLTI;                                        // 0x028C(0x0004)
	unsigned long                                      b_chestPurchaseLock : 1;                                  // 0x0290(0x0004)
	unsigned long                                      b_requestedChestPurchase : 1;                             // 0x0290(0x0004)
	int                                                m_nCurrentQueueId;                                        // 0x0294(0x0004)
	int                                                m_nChestLTI;                                              // 0x0298(0x0004)
	int                                                m_nPointLTI;                                              // 0x029C(0x0004)
	int                                                m_nItemLTI1;                                              // 0x02A0(0x0004)
	int                                                m_nItemLTI2;                                              // 0x02A4(0x0004)
	int                                                m_nItemLTI3;                                              // 0x02A8(0x0004)
	int                                                m_nItemLTI4;                                              // 0x02AC(0x0004)
	int                                                m_nCurrentAdventureItem;                                  // 0x02B0(0x0004)
	int                                                m_nActivityId;                                            // 0x02B4(0x0004)
	struct FScriptDelegate                             __USC_SetUserViewedEvent_Delegate__Delegate;              // 0x02B8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __USC_GetAdventureLeaderboard_Delegate__Delegate;         // 0x02C8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02C8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __USC_GotoVault_Delegate__Delegate;                       // 0x02D8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02D8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __USC_OpenEventCam_Delegate__Delegate;                    // 0x02E8(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02E8(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxAdventuresHub");
		return ptr;
	}


	void SceneTick(float Delta);
	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_SetBundleOwnership();
	void STATIC_TriggerLobbyEventHub(int nType, int nTarget);
	void TriggerLobbyCamEvent(int nType, int nTarget);
	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void STATIC_LeaveQueue();
	void STATIC_PopulateGoalData();
	void STATIC_USC_OpenEventCam(bool isSmall);
	void STATIC_USC_GotoVault(bool bIsSmall);
	void STATIC_USC_SetUserViewedEvent();
	void STATIC_USC_GetAdventureLeaderboard(int nEventId);
	void USC_OpenEventCam_Delegate();
	void USC_GotoVault_Delegate();
	void USC_GetAdventureLeaderboard_Delegate();
	void USC_SetUserViewedEvent_Delegate();
};


// Class TgClient.TgGfxBooster
// 0x0010 (0x0294 - 0x0284)
class UTgGfxBooster : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_ShowPurchasePopup_Delegate__Delegate;               // 0x0284(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxBooster");
		return ptr;
	}


	void STATIC_UpdateBoosterTime();
	void STATIC_USC_ShowPurchasePopup(int ItemId, int nQuantity);
	void USC_ShowPurchasePopup_Delegate(int ItemId, int nQuantity);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxCharacterBuilder
// 0x16E8 (0x196C - 0x0284)
class UTgGfxCharacterBuilder : public UTgGfxScene
{
public:
	struct FString                                     m_lsItems;                                                // 0x0284(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsActives;                                              // 0x0294(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsConsumables;                                          // 0x02A4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsPassive;                                              // 0x02B4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsActivated;                                            // 0x02C4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsAbilities;                                            // 0x02D4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsSkip;                                                 // 0x02E4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsSaveItems;                                            // 0x02F4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsSaveAbilities;                                        // 0x0304(0x0010) (Const, Localized, NeedCtorLink)
	int                                                m_playerClassId;                                          // 0x0314(0x0004)
	int                                                m_nSelectedTab;                                           // 0x0318(0x0004)
	class UTgGFxObject*                                m_Tabs[0x2];                                              // 0x031C(0x0008)
	class UTgGFxObject*                                m_SaveButton;                                             // 0x032C(0x0008)
	class UTgGFxObject*                                m_ClearButton;                                            // 0x0334(0x0008)
	int                                                m_nSelectedItem;                                          // 0x033C(0x0004)
	int                                                m_nHighlightIndex;                                        // 0x0340(0x0004)
	int                                                m_nItemScrollIndex;                                       // 0x0344(0x0004)
	TArray<struct FItemBuilderCategory>                m_Categories;                                             // 0x0348(0x0010) (NeedCtorLink)
	TArray<struct FItemBuilderCategory>                m_CustomCategories;                                       // 0x0358(0x0010) (NeedCtorLink)
	TArray<int>                                        m_ShownList;                                              // 0x0368(0x0010) (NeedCtorLink)
	TArray<int>                                        m_ShownGrid;                                              // 0x0378(0x0010) (NeedCtorLink)
	int                                                m_nRoleIndex;                                             // 0x0388(0x0004)
	TEnumAsByte<ETipType>                              m_TipType;                                                // 0x038C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	int                                                m_nPreviewTipIndex;                                       // 0x0390(0x0004)
	float                                              m_fTipWaitTimer;                                          // 0x0394(0x0004)
	float                                              m_fTipWaitDuration;                                       // 0x0398(0x0004)
	unsigned long                                      m_bIsCustomRole : 1;                                      // 0x039C(0x0004)
	unsigned long                                      m_bIsSubFilter : 1;                                       // 0x039C(0x0004)
	unsigned long                                      m_bProfileModified : 1;                                   // 0x039C(0x0004)
	unsigned long                                      m_bAbilitiesModified : 1;                                 // 0x039C(0x0004)
	int                                                m_nCustomRoleIndex;                                       // 0x03A0(0x0004)
	TArray<struct FPreviewItem>                        m_PreviewItemData;                                        // 0x03A4(0x0010) (NeedCtorLink)
	TArray<struct FPreviewItem>                        m_PreviewActiveData;                                      // 0x03B4(0x0010) (NeedCtorLink)
	TArray<struct FPreviewItem>                        m_PreviewConsumableData;                                  // 0x03C4(0x0010) (NeedCtorLink)
	int                                                m_nFilterIndex;                                           // 0x03D4(0x0004)
	int                                                m_nFocusedItemIndex;                                      // 0x03D8(0x0004)
	int                                                m_nFocusedItemCategory;                                   // 0x03DC(0x0004)
	int                                                m_bIsFocusingGridItem;                                    // 0x03E0(0x0004)
	class UTgGFxObject*                                m_ItemView;                                               // 0x03E4(0x0008)
	class UTgGFxObject*                                m_BuildPreview;                                           // 0x03EC(0x0008)
	class UTgGFxObject*                                m_RoleDropDown;                                           // 0x03F4(0x0008)
	struct FItemDisplay                                m_ListItem[0xC];                                          // 0x03FC(0x0080)
	struct FItemDisplay                                m_GridItem[0x10];                                         // 0x09FC(0x0080)
	class UTgGFxObject*                                m_Header[0x4];                                            // 0x11FC(0x0008)
	class UTgGFxObject*                                m_HeaderTF[0x4];                                          // 0x121C(0x0008)
	class UTgGFxObject*                                m_HeaderBlock[0x4];                                       // 0x123C(0x0008)
	struct FBuildItemDisplay                           m_PreviewItems[0x6];                                      // 0x125C(0x0010)
	struct FBuildItemDisplay                           m_PreviewActives[0x2];                                    // 0x12BC(0x0010)
	struct FBuildItemDisplay                           m_PreviewConsumables[0x2];                                // 0x12DC(0x0010)
	int                                                m_nSelectedLevel;                                         // 0x12FC(0x0004)
	int                                                m_nSelectedAbility;                                       // 0x1300(0x0004)
	struct FLevelInfo                                  m_nLevelAbilities[0x14];                                  // 0x1304(0x0008)
	int                                                m_nAbilityLevels[0x4];                                    // 0x13A4(0x0004)
	struct FString                                     m_AbilityIcons[0x4];                                      // 0x13B4(0x0010) (AlwaysInit, NeedCtorLink)
	class UTgGFxObject*                                m_AbilityPreview;                                         // 0x13F4(0x0008)
	struct FAbilitySelectionButton                     m_PreviewAbilities[0x5];                                  // 0x13FC(0x0040)
	class UTgGFxObject*                                m_AbilitiesView;                                          // 0x153C(0x0008)
	struct FAbilitySelectionButton                     m_AbilityBtns[0x4];                                       // 0x1544(0x0040)
	struct FAbilityRow                                 m_AbilityRows[0x14];                                      // 0x1644(0x0028)
	class UTgGFxObject*                                m_AbilitySkip;                                            // 0x1964(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxCharacterBuilder");
		return ptr;
	}


	bool STATIC_HasVendorData();
	class UTgVendorData* STATIC_GetVendorData();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxClanAdmin
// 0x0020 (0x02A4 - 0x0284)
class UTgGfxClanAdmin : public UTgGfxScene
{
public:
	TArray<int>                                        m_RegionList;                                             // 0x0284(0x0010) (NeedCtorLink)
	TArray<int>                                        m_JoinTypeList;                                           // 0x0294(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxClanAdmin");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void UpdateClanNameChange();
	void STATIC_ASC_UpdateClanNameChange();
	void UpdateApplicationData();
	void STATIC_ASC_UpdateApplicationData();
	void UpdatePlayerInvites();
	void STATIC_ASC_UpdatePlayerInvites();
	void UpdateClanData();
	void STATIC_ASC_UpdateClanData();
	void STATIC_USC_BanClanApp(const struct FString& sPlayerId);
	void STATIC_USC_DeclineClanApp(int nAppId);
	void STATIC_USC_AcceptClanApp(int nAppId);
	void STATIC_USC_UpdateJoinTypeRegion(int nJoinTypeId, int nRegionId);
	void STATIC_USC_UpdateClanNameAndTag(const struct FString& sName, const struct FString& sTag);
};


// Class TgClient.TgGfxClanCreation
// 0x0000 (0x0284 - 0x0284)
class UTgGfxClanCreation : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxClanCreation");
		return ptr;
	}


	void Reinit();
	void STATIC_ASC_Reinit();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void STATIC_USC_GotoClanList();
	void STATIC_USC_GetRegionListData();
	void STATIC_USC_CancelClanRequest(int nClanId);
	void STATIC_USC_AcceptClanRequest(int nClanId);
	void STATIC_USC_GetInvitesData();
	void STATIC_USC_CreateClan(const struct FString& sClanName, const struct FString& sClanTag, int nRegionId, int nRecruitmentType);
};


// Class TgClient.TgGfxClanIconPicker
// 0x0010 (0x0294 - 0x0284)
class UTgGfxClanIconPicker : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SelectIcon_Delegate__Delegate;                      // 0x0284(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxClanIconPicker");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* pMP);
	void STATIC_USC_SelectIcon(int nIconItemId);
	void USC_SelectIcon_Delegate();
};


// Class TgClient.TgGfxClanList
// 0x0018 (0x029C - 0x0284)
class UTgGfxClanList : public UTgGfxScene
{
public:
	int                                                m_nApplicationId;                                         // 0x0284(0x0004)
	unsigned long                                      m_bJustApplied : 1;                                       // 0x0288(0x0004)
	TArray<int>                                        m_RegionList;                                             // 0x028C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxClanList");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void UpdateApplicationData();
	void STATIC_ASC_UpdateApplicationData();
	void UpdateClanList();
	void STATIC_ASC_UpdateClanList();
	void STATIC_USC_ApplyToClan(int nClanId, bool bWithMessage);
	void STATIC_USC_SearchClans(const struct FString& sSearchString, int nJoinTypeId, int nRegionId, bool bRecommendedOnly);
};


// Class TgClient.TgGfxClanManagement
// 0x0098 (0x031C - 0x0284)
class UTgGfxClanManagement : public UTgGfxScene
{
public:
	unsigned long                                      m_bIsOfficer : 1;                                         // 0x0284(0x0004)
	struct Fdword                                      m_nSelectedPlayerId;                                      // 0x0288(0x0004)
	struct FString                                     m_lsClanQuit;                                             // 0x028C(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsClanQuitDesc;                                         // 0x029C(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsUpdateClanTag;                                        // 0x02AC(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsUpdateClanTagLabel;                                   // 0x02BC(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsTransferClan;                                         // 0x02CC(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsTransferClanLabel;                                    // 0x02DC(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsDisbandClan;                                          // 0x02EC(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsDisbandClanLabel;                                     // 0x02FC(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsDisbandClanRemove;                                    // 0x030C(0x0010) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxClanManagement");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void STATIC_OnInviteToClanSelect(class UTgEventDataItem* pEvent);
	void STATIC_OnInviteToClanQuery(const struct FPointer& pEvent);
	void STATIC_USC_ModifyLeader(const struct FString& sPlayerId);
	void STATIC_USC_ViewProfile(const struct FString& sPlayerId);
	void STATIC_USC_InviteToClanByName(const struct FString& sName);
	void STATIC_USC_UpdateClanTag();
	void STATIC_USC_QuitClan();
	void STATIC_USC_CancelPlayerInvite(const struct FString& sPlayerId);
};


// Class TgClient.TgGFxDungeonCurrencies
// 0x0000 (0x0284 - 0x0284)
class UTgGFxDungeonCurrencies : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGFxDungeonCurrencies");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxEOMLobby
// 0x0014 (0x0298 - 0x0284)
class UTgGfxEOMLobby : public UTgGfxScene
{
public:
	struct FString                                     m_sGiftedPlayerName;                                      // 0x0284(0x0010) (NeedCtorLink)
	int                                                m_nGiftedPlayerId;                                        // 0x0294(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxEOMLobby");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_OnStats(const struct FString& instanceId);
	void STATIC_OnFeedback();
	void STATIC_OnTwitter(const struct FString& instanceId);
	void STATIC_OnFacebook(const struct FString& instanceId);
	void STATIC_OnSendPlayerGift(class UTgEventDataItem* pEvent);
	void STATIC_OnSendGiftPoints(class UGFxObject* pData);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_USC_SendPlayerGift(const struct FString& PlayerName, const struct FString& nPlayerId);
	void ReceiveGiftedPoints(class UGFxObject* Data);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* pMoviePlayer);
};


// Class TgClient.TgGfxEventAchievements
// 0x0000 (0x0284 - 0x0284)
class UTgGfxEventAchievements : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxEventAchievements");
		return ptr;
	}


	void STATIC_CheckBundleOwned();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxEventLeaderboard
// 0x0020 (0x02A4 - 0x0284)
class UTgGfxEventLeaderboard : public UTgGfxScene
{
public:
	unsigned long                                      requestingData : 1;                                       // 0x0284(0x0004)
	unsigned long                                      gotFriendsData : 1;                                       // 0x0284(0x0004)
	unsigned long                                      gotPersonalData : 1;                                      // 0x0284(0x0004)
	unsigned long                                      gotWorldData : 1;                                         // 0x0284(0x0004)
	struct FString                                     dataIndex;                                                // 0x0288(0x0010) (NeedCtorLink)
	int                                                nCurrentEventId;                                          // 0x0298(0x0004)
	class UGFxObject*                                  cachedBoards;                                             // 0x029C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxEventLeaderboard");
		return ptr;
	}


	void STATIC_USC_RequestEventLeaderboard(int EventIdx);
	class UGFxObject* STATIC_Chunk(const struct FString& dataIdx);
	class UGFxObject* STATIC_CreateChunk(const struct FString& dataIdx);
	bool STATIC_UpdateFromChunk(const struct FString& dataIdx);
	void STATIC_OnReceivePlayerNames();
	void STATIC_ReceivedAllData();
	void STATIC_PopulateDropdown(TArray<int> arrEventIds);
	void STATIC_ShowLeaderboard(int nStartIndex, int nEndIndex);
	void STATIC_RequestFriendAndWorldPlayerNames();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxFeedback
// 0x00AC (0x0330 - 0x0284)
class UTgGfxFeedback : public UTgGfxScene
{
public:
	struct FString                                     m_lsHeaderServerStability;                                // 0x0284(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsHeaderMatchmaking;                                    // 0x0294(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsDescriptionServerStability;                           // 0x02A4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsDescriptionMatchmaking;                               // 0x02B4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsSubmit;                                               // 0x02C4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsComments;                                             // 0x02D4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsUnrated;                                              // 0x02E4(0x0010) (Const, Localized, NeedCtorLink)
	class UTgGFxObject*                                m_Comments;                                               // 0x02F4(0x0008)
	class UTgGFxObject*                                m_RatingBtns[0x5];                                        // 0x02FC(0x0008)
	class UTgGFxObject*                                m_RatingTF;                                               // 0x0324(0x0008)
	int                                                m_nStarRating;                                            // 0x032C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxFeedback");
		return ptr;
	}


	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxGlossary
// 0x0000 (0x0284 - 0x0284)
class UTgGfxGlossary : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxGlossary");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* pMP);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
};


// Class TgClient.TgGfxGods
// 0x17CC (0x1A50 - 0x0284)
class UTgGfxGods : public UTgGfxScene
{
public:
	struct FString                                     m_lsStandard;                                             // 0x0284(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsOwned;                                                // 0x0294(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     rented_label;                                             // 0x02A4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsCurrentRentalExpiresIn;                               // 0x02B4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsDiamond;                                              // 0x02C4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsDiamond_description;                                  // 0x02D4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsExclusive;                                            // 0x02E4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsExclusive_description;                                // 0x02F4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsExclusiveChest;                                       // 0x0304(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsExclusiveChest_description;                           // 0x0314(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsExclusiveClan;                                        // 0x0324(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsExclusiveClan_description;                            // 0x0334(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsExclusivePromo;                                       // 0x0344(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsExclusivePromo_description;                           // 0x0354(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsExclusiveEsports;                                     // 0x0364(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsExclusiveEsports_description;                         // 0x0374(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsExclusiveSeasonal;                                    // 0x0384(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsExclusiveSeasonal_description;                        // 0x0394(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsGold;                                                 // 0x03A4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsGold_description;                                     // 0x03B4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLegendary;                                            // 0x03C4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLegendary_description;                                // 0x03D4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLimited;                                              // 0x03E4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLimited_description;                                  // 0x03F4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLimitedChest;                                         // 0x0404(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLimitedChest_description;                             // 0x0414(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLimitedClan;                                          // 0x0424(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLimitedClan_description;                              // 0x0434(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLimitedPromo;                                         // 0x0444(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLimitedPromo_description;                             // 0x0454(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLimitedEsports;                                       // 0x0464(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLimitedEsports_description;                           // 0x0474(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLimitedSeasonal;                                      // 0x0484(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsLimitedSeasonal_description;                          // 0x0494(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsUnlimited;                                            // 0x04A4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsUnlimited_description;                                // 0x04B4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     m_lsClan;                                                 // 0x04C4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     days_label;                                               // 0x04D4(0x0010) (NeedCtorLink)
	struct FString                                     day_label;                                                // 0x04E4(0x0010) (NeedCtorLink)
	struct FString                                     hours_label;                                              // 0x04F4(0x0010) (NeedCtorLink)
	struct FString                                     hour_label;                                               // 0x0504(0x0010) (NeedCtorLink)
	struct FString                                     minutes_label;                                            // 0x0514(0x0010) (NeedCtorLink)
	struct FString                                     minute_label;                                             // 0x0524(0x0010) (NeedCtorLink)
	struct FString                                     seconds_label;                                            // 0x0534(0x0010) (NeedCtorLink)
	struct FString                                     second_label;                                             // 0x0544(0x0010) (NeedCtorLink)
	TArray<int>                                        god_ids;                                                  // 0x0554(0x0010) (NeedCtorLink)
	struct FGFxItem                                    m_ItemBtn[0x38];                                          // 0x0564(0x0028)
	struct FGFxSkinBtn                                 m_SkinBtn[0x6];                                           // 0x0E24(0x0070)
	struct FGFxGodBtn                                  m_GodCardBtn[0x10];                                       // 0x10C4(0x0068)
	class UTgGFxObject*                                m_SearchField;                                            // 0x1744(0x0008)
	class UTgGFxObject*                                m_FilterDropdown;                                         // 0x174C(0x0008)
	class UTgGFxObject*                                m_GodGrid;                                                // 0x1754(0x0008)
	class UTgGFxObject*                                m_GodCardCheckbox;                                        // 0x175C(0x0008)
	class UTgGFxObject*                                m_GodGridScrollbar;                                       // 0x1764(0x0008)
	class UTgGFxObject*                                m_GodCardScrollbar;                                       // 0x176C(0x0008)
	class UTgGFxObject*                                m_UGPIconsBtn;                                            // 0x1774(0x0008)
	class UTgGFxObject*                                m_UGPCardsBtn;                                            // 0x177C(0x0008)
	class UTgGFxObject*                                m_SkinCall;                                               // 0x1784(0x0008)
	class UTgGFxObject*                                m_SkinCallTF;                                             // 0x178C(0x0008)
	class UTgGFxObject*                                m_ExtraCall;                                              // 0x1794(0x0008)
	class UTgGFxObject*                                m_ExtraCallTF;                                            // 0x179C(0x0008)
	class UTgGFxObject*                                m_VoiceCall;                                              // 0x17A4(0x0008)
	class UTgGFxObject*                                m_VoiceCallTF;                                            // 0x17AC(0x0008)
	class UTgGFxObject*                                m_VPContainer;                                            // 0x17B4(0x0008)
	class UTgGFxObject*                                m_SkinGoto;                                               // 0x17BC(0x0008)
	class UTgGFxObject*                                m_RentalInfo;                                             // 0x17C4(0x0008)
	class UTgGFxObject*                                m_SkinInfo;                                               // 0x17CC(0x0008)
	class UTgGFxObject*                                m_SideSkinInfo;                                           // 0x17D4(0x0008)
	class UTgGFxObject*                                m_UnlockBtn;                                              // 0x17DC(0x0008)
	class UTgGFxObject*                                m_EmoteLabel;                                             // 0x17E4(0x0008)
	class UTgGFxObject*                                m_RightGodsText;                                          // 0x17EC(0x0008)
	class UTgGFxObject*                                m_RightGodsText2;                                         // 0x17F4(0x0008)
	class UTgGFxObject*                                m_AbilityScreen;                                          // 0x17FC(0x0008)
	class UTgGFxObject*                                m_AboutScreen;                                            // 0x1804(0x0008)
	class UTgGFxObject*                                m_LoreScreen;                                             // 0x180C(0x0008)
	class UTgGFxObject*                                m_StatScreen;                                             // 0x1814(0x0008)
	class UTgGFxObject*                                m_ExtraScreen;                                            // 0x181C(0x0008)
	class UTgGFxObject*                                m_HistoryScreen;                                          // 0x1824(0x0008)
	class UTgGFxObject*                                m_VoiceScreen;                                            // 0x182C(0x0008)
	class UTgGFxObject*                                m_AchieveScreen;                                          // 0x1834(0x0008)
	int                                                m_nSelectedIndex;                                         // 0x183C(0x0004)
	int                                                m_nScrollIndex;                                           // 0x1840(0x0004)
	TArray<int>                                        m_nShownItems;                                            // 0x1844(0x0010) (NeedCtorLink)
	TArray<int>                                        m_nUnsortedItems;                                         // 0x1854(0x0010) (NeedCtorLink)
	TArray<int>                                        m_RentalGodsIndex;                                        // 0x1864(0x0010) (NeedCtorLink)
	struct FString                                     m_sSearchField;                                           // 0x1874(0x0010) (NeedCtorLink)
	struct FString                                     m_sSearch;                                                // 0x1884(0x0010) (NeedCtorLink)
	float                                              m_fTipWaitTimer;                                          // 0x1894(0x0004)
	float                                              m_fTipWaitDuration;                                       // 0x1898(0x0004)
	float                                              m_fRentalTimer;                                           // 0x189C(0x0004)
	int                                                m_nHighlightIndex;                                        // 0x18A0(0x0004)
	unsigned long                                      m_bScrollToSelection : 1;                                 // 0x18A4(0x0004)
	unsigned long                                      m_bHasGodPack : 1;                                        // 0x18A4(0x0004)
	unsigned long                                      m_bShouldUpdateCall : 1;                                  // 0x18A4(0x0004)
	int                                                m_nSelectedTab;                                           // 0x18A8(0x0004)
	int                                                m_nSelectedGodId;                                         // 0x18AC(0x0004)
	int                                                m_nSelectedSkinId;                                        // 0x18B0(0x0004)
	int                                                m_nSelectedWardSkinId;                                    // 0x18B4(0x0004)
	int                                                m_nFilterType;                                            // 0x18B8(0x0004)
	int                                                m_nPrevGodScrollIndex;                                    // 0x18BC(0x0004)
	int                                                m_nPrevWardScrollIndex;                                   // 0x18C0(0x0004)
	int                                                m_nStatsHPLow;                                            // 0x18C4(0x0004)
	int                                                m_nStatsHPHigh;                                           // 0x18C8(0x0004)
	int                                                m_nStatsManaLow;                                          // 0x18CC(0x0004)
	int                                                m_nStatsManaHigh;                                         // 0x18D0(0x0004)
	int                                                m_nCachedGodsTabSelection;                                // 0x18D4(0x0004)
	int                                                m_playerId;                                               // 0x18D8(0x0004)
	int                                                m_nColCount;                                              // 0x18DC(0x0004)
	struct FItemData_GodPage                           m_SelectedGod;                                            // 0x18E0(0x00E8) (NeedCtorLink)
	TArray<struct FItemData_GodPage>                   m_GodData;                                                // 0x19C8(0x0010) (NeedCtorLink)
	TArray<struct FItemData_GodPage>                   m_WardData;                                               // 0x19D8(0x0010) (NeedCtorLink)
	TArray<struct FItemData_GodPage>                   m_SkinData;                                               // 0x19E8(0x0010) (NeedCtorLink)
	TArray<struct FStreamData_Gods>                    m_StreamData;                                             // 0x19F8(0x0010) (NeedCtorLink)
	TArray<struct FAchievementData_GodsAchievements>   m_achievementDatas;                                       // 0x1A08(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_achievementDatasArray;                                  // 0x1A18(0x0008)
	TArray<struct FVendorItemUIHint>                   m_vendorUiHints;                                          // 0x1A20(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __USC_UpdateEmoteSelection_Delegate__Delegate;            // 0x1A30(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1A30(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __USC_PlayGodVideo_Delegate__Delegate;                    // 0x1A40(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1A40(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxGods");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_UpdateUGPValue(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void STATIC_USC_PlayGodVideo(int abilityNumber);
	void USC_PlayGodVideo_Delegate();
	void STATIC_USC_UpdateEmoteSelection(const struct FString& emoteName);
	void USC_UpdateEmoteSelection_Delegate(const struct FString& emoteName);
};


// Class TgClient.TgGfxGodsHistory
// 0x0038 (0x02BC - 0x0284)
class UTgGfxGodsHistory : public UTgGfxScene
{
public:
	int                                                m_godId;                                                  // 0x0284(0x0004)
	unsigned long                                      m_updatedQueues : 1;                                      // 0x0288(0x0004)
	struct FScriptDelegate                             __USC_GetQueuesDropdown_Delegate__Delegate;               // 0x028C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x028C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __USC_GetHistoryData_Delegate__Delegate;                  // 0x029C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x029C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __USC_ShowMatchDetails_Delegate__Delegate;                // 0x02AC(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02AC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxGodsHistory");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void UpdateGodHistory();
	void STATIC_ASC_UpdateGodHistory();
	void UpdateQueueData();
	void STATIC_ASC_UpdateQueueData();
	void STATIC_USC_ShowMatchDetails(int pMatchID);
	void STATIC_USC_GetHistoryData(int queueId);
	void STATIC_USC_GetQueuesDropdown(int godId);
	void USC_ShowMatchDetails_Delegate(int pMatchID);
	void USC_GetHistoryData_Delegate(int queueId);
	void USC_GetQueuesDropdown_Delegate(int godId);
};


// Class TgClient.TgGfxGuides
// 0x0000 (0x0284 - 0x0284)
class UTgGfxGuides : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxGuides");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxHudItems
// 0x004C (0x02D0 - 0x0284)
class UTgGfxHudItems : public UTgGfxScene
{
public:
	class UTgVendorData*                               m_VendorData;                                             // 0x0284(0x0008)
	int                                                m_nPlayerClass;                                           // 0x028C(0x0004)
	class UTgGFxObject*                                m_Item[0x6];                                              // 0x0290(0x0008)
	struct FScriptDelegate                             __USC_SetupItemDisplay_Delegate__Delegate;                // 0x02C0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxHudItems");
		return ptr;
	}


	void UpdateGlow(int Index, bool Visibility);
	void STATIC_ASC_UpdateGlow(int Index, bool Visibility);
	void STATIC_USC_SetupItemDisplay();
	void USC_SetupItemDisplay_Delegate();
	void CheckCurrency(class UTgEventDataItem* pEvent);
	void STATIC_CheckWishList(bool bPurge);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxHudNotify
// 0x0204 (0x0488 - 0x0284)
class UTgGfxHudNotify : public UTgGfxScene
{
public:
	float                                              m_fKillDuration;                                          // 0x0284(0x0004)
	float                                              m_fKillTimer;                                             // 0x0288(0x0004)
	float                                              m_fAccoladeAccumulateDuration;                            // 0x028C(0x0004)
	float                                              m_fAccoladeDuration;                                      // 0x0290(0x0004)
	float                                              m_fAccoladeTimer;                                         // 0x0294(0x0004)
	int                                                m_nEnemyIconIndex;                                        // 0x0298(0x0004)
	int                                                m_nFriendIconIndex;                                       // 0x029C(0x0004)
	unsigned long                                      m_bKillInterrupt : 1;                                     // 0x02A0(0x0004)
	float                                              m_fIconDuration;                                          // 0x02A4(0x0004)
	float                                              m_fEnemyIconTimer;                                        // 0x02A8(0x0004)
	float                                              m_fFriendIconTimer;                                       // 0x02AC(0x0004)
	float                                              m_fObjectiveDuration;                                     // 0x02B0(0x0004)
	class UTgGFxObject*                                m_KillMC;                                                 // 0x02B4(0x0008)
	class UTgGFxObject*                                m_KillerName;                                             // 0x02BC(0x0008)
	class UTgGFxObject*                                m_KillerIcon;                                             // 0x02C4(0x0008)
	class UTgGFxObject*                                m_KillerGlow;                                             // 0x02CC(0x0008)
	class UTgGFxObject*                                m_KillerFrame;                                            // 0x02D4(0x0008)
	class UTgGFxObject*                                m_VictimName;                                             // 0x02DC(0x0008)
	class UTgGFxObject*                                m_VictimIcon;                                             // 0x02E4(0x0008)
	class UTgGFxObject*                                m_VictimGlow;                                             // 0x02EC(0x0008)
	class UTgGFxObject*                                m_VictimFrame;                                            // 0x02F4(0x0008)
	class UTgGFxObject*                                m_RedSlash;                                               // 0x02FC(0x0008)
	class UTgGFxObject*                                m_BlueSlash;                                              // 0x0304(0x0008)
	class UTgGFxObject*                                m_EnemyMC[0x5];                                           // 0x030C(0x0008)
	class UTgGFxObject*                                m_EnemyIcon[0x5];                                         // 0x0334(0x0008)
	class UTgGFxObject*                                m_FriendMC[0x5];                                          // 0x035C(0x0008)
	class UTgGFxObject*                                m_FriendIcon[0x5];                                        // 0x0384(0x0008)
	class UTgGFxObject*                                m_AccoladeMC;                                             // 0x03AC(0x0008)
	class UTgGFxObject*                                m_AccoladeName;                                           // 0x03B4(0x0008)
	struct FNotifyData                                 m_NewData;                                                // 0x03BC(0x00AC) (NeedCtorLink)
	TArray<struct FNotifyData>                         m_Notifications;                                          // 0x0468(0x0010) (NeedCtorLink)
	TArray<struct FEventLogData>                       m_EventLog;                                               // 0x0478(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxHudNotify");
		return ptr;
	}


	void STATIC_OnGameUIEvent(class UTgEventDataItem* pEvent);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* pMP);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
};


// Class TgClient.TgGfxHudUpgrade
// 0x0070 (0x02F4 - 0x0284)
class UTgGfxHudUpgrade : public UTgGfxScene
{
public:
	float                                              m_fItemTimer;                                             // 0x0284(0x0004)
	float                                              m_fSkillTimer;                                            // 0x0288(0x0004)
	float                                              m_fItemDuration;                                          // 0x028C(0x0004)
	float                                              m_fSkillDuration;                                         // 0x0290(0x0004)
	TArray<int>                                        m_Items;                                                  // 0x0294(0x0010) (NeedCtorLink)
	TArray<int>                                        m_Skills;                                                 // 0x02A4(0x0010) (NeedCtorLink)
	class UTgGFxObject*                                m_ItemMC;                                                 // 0x02B4(0x0008)
	class UTgGFxObject*                                m_ItemType;                                               // 0x02BC(0x0008)
	class UTgGFxObject*                                m_ItemName;                                               // 0x02C4(0x0008)
	class UTgGFxObject*                                m_ItemIcon;                                               // 0x02CC(0x0008)
	class UTgGFxObject*                                m_SkillMC;                                                // 0x02D4(0x0008)
	class UTgGFxObject*                                m_SkillType;                                              // 0x02DC(0x0008)
	class UTgGFxObject*                                m_SkillName;                                              // 0x02E4(0x0008)
	class UTgGFxObject*                                m_SkillIcon;                                              // 0x02EC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxHudUpgrade");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* pMP);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
};


// Class TgClient.TgGfxIntro
// 0x0000 (0x0284 - 0x0284)
class UTgGfxIntro : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxIntro");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxItemToast
// 0x0000 (0x0284 - 0x0284)
class UTgGfxItemToast : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxItemToast");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void ToastItem(int ItemId);
	void STATIC_ASC_ToastItem(int ItemId);
};


// Class TgClient.TgGfxLeaderboard
// 0x0000 (0x0284 - 0x0284)
class UTgGfxLeaderboard : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxLeaderboard");
		return ptr;
	}


	void STATIC_RequestCharacterLeaderboard(int classId, int rankType);
	void STATIC_ShowLeaderboard(const struct FString& boardName, int aValue, int Option);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxLoadouts
// 0x07C8 (0x0A80 - 0x02B8)
class UTgGfxLoadouts : public UTgGfxLoadoutsBase
{
public:
	struct FGFxLoadoutItem                             m_ItemBtn[0x2D];                                          // 0x02B8(0x0020)
	class UTgGFxObject*                                m_UseClanBtn;                                             // 0x0858(0x0008)
	class UTgGFxObject*                                m_LoadoutEquipBtn;                                        // 0x0860(0x0008)
	class UTgGFxObject*                                m_LoadoutEquipBtnBanner;                                  // 0x0868(0x0008)
	class UTgGFxObject*                                m_LoadoutUnlockBtn;                                       // 0x0870(0x0008)
	class UTgGFxObject*                                m_LoadoutFavoritesBtn;                                    // 0x0878(0x0008)
	class UTgGFxObject*                                m_LoadoutFavoritesCloseBtn;                               // 0x0880(0x0008)
	class UTgGFxObject*                                m_EquipItemScrollBar;                                     // 0x0888(0x0008)
	class UTgGFxObject*                                m_LoadoutInsetBg;                                         // 0x0890(0x0008)
	class UTgGFxObject*                                m_HideStatsBtn;                                           // 0x0898(0x0008)
	class UTgGFxObject*                                m_ItemSelection;                                          // 0x08A0(0x0008)
	class UTgGFxObject*                                m_BoostSelection;                                         // 0x08A8(0x0008)
	class UTgGFxObject*                                m_BoosterBtn;                                             // 0x08B0(0x0008)
	class UTgGFxObject*                                m_BoosterTitleTF;                                         // 0x08B8(0x0008)
	class UTgGFxObject*                                m_BoosterTimeTF;                                          // 0x08C0(0x0008)
	class UTgGFxObject*                                m_TextAudioBtn;                                           // 0x08C8(0x0008)
	class UTgGFxObject*                                m_SelectedTitleTF;                                        // 0x08D0(0x0008)
	class UTgGFxObject*                                m_SearchField;                                            // 0x08D8(0x0008)
	class UTgGFxObject*                                m_FilterDropdown;                                         // 0x08E0(0x0008)
	class UTgGFxObject*                                m_GemObject;                                              // 0x08E8(0x0008)
	class UTgGFxObject*                                m_GemTF;                                                  // 0x08F0(0x0008)
	class UTgGFxObject*                                m_FavorObject;                                            // 0x08F8(0x0008)
	class UTgGFxObject*                                m_FavorTF;                                                // 0x0900(0x0008)
	class UTgGFxObject*                                m_FavoritesInfoPanel;                                     // 0x0908(0x0008)
	int                                                m_nSelectedItemId;                                        // 0x0910(0x0004)
	int                                                m_nSelectedItemType;                                      // 0x0914(0x0004)
	int                                                m_nSelectedIndex;                                         // 0x0918(0x0004)
	unsigned long                                      m_bScrollToSelection : 1;                                 // 0x091C(0x0004)
	unsigned long                                      m_bFavoritesMode : 1;                                     // 0x091C(0x0004)
	int                                                m_nScrollIndex;                                           // 0x0920(0x0004)
	int                                                m_nFilterId;                                              // 0x0924(0x0004)
	TArray<int>                                        m_nShownItems;                                            // 0x0928(0x0010) (NeedCtorLink)
	TArray<int>                                        m_nUnsortedItems;                                         // 0x0938(0x0010) (NeedCtorLink)
	int                                                m_nHighlightIndex;                                        // 0x0948(0x0004)
	float                                              m_fTipWaitTimer;                                          // 0x094C(0x0004)
	float                                              m_fTipWaitDuration;                                       // 0x0950(0x0004)
	float                                              m_fDoubleClickTimer;                                      // 0x0954(0x0004)
	float                                              m_fDoubleClickDuration;                                   // 0x0958(0x0004)
	struct FString                                     m_sSearchField;                                           // 0x095C(0x0010) (NeedCtorLink)
	struct FString                                     m_sSearch;                                                // 0x096C(0x0010) (NeedCtorLink)
	struct FString                                     m_sBoosterTitle;                                          // 0x097C(0x0010) (NeedCtorLink)
	int                                                m_nCachedMusicThemePreview;                               // 0x098C(0x0004)
	TArray<struct FItemData_LoadoutsPage>              m_AvatarData;                                             // 0x0990(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_WardData;                                               // 0x09A0(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_PedestalData;                                           // 0x09B0(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_AnnouncerData;                                          // 0x09C0(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_FrameData;                                              // 0x09D0(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_JumpStampData;                                          // 0x09E0(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_GlobalEmoteData;                                        // 0x09F0(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_MusicThemeData;                                         // 0x0A00(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_RecallSkinData;                                         // 0x0A10(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_HudThemeData;                                           // 0x0A20(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_LoadingBackgroundData;                                  // 0x0A30(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_FountainFXData;                                         // 0x0A40(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_LevelUpFXData;                                          // 0x0A50(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_DeathStampData;                                         // 0x0A60(0x0010) (NeedCtorLink)
	TArray<struct FItemData_LoadoutsPage>              m_PlayerTitleData;                                        // 0x0A70(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxLoadouts");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_RefreshBoosterTimer(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxLobbyMain
// 0x0000 (0x0284 - 0x0284)
class UTgGfxLobbyMain : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxLobbyMain");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxMatchDetails
// 0x0010 (0x0294 - 0x0284)
class UTgGfxMatchDetails : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SearchByMatchId_Delegate__Delegate;                 // 0x0284(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxMatchDetails");
		return ptr;
	}


	void MatchDataUpdated();
	void STATIC_ASC_MatchDataUpdated();
	void STATIC_USC_SearchByMatchId(const struct FString& matchId);
	void USC_SearchByMatchId_Delegate(const struct FString& matchId);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxPartyManagement
// 0x0110 (0x0394 - 0x0284)
class UTgGfxPartyManagement : public UTgGfxScene
{
public:
	struct FPlayerBtn                                  m_PlayerBtns[0x4];                                        // 0x0284(0x0028)
	struct FPlayerBtn                                  m_LocalPlayer;                                            // 0x0324(0x0028)
	TArray<struct FListPlayerData>                     m_FriendList;                                             // 0x034C(0x0010) (NeedCtorLink)
	TArray<struct FListPlayerData>                     m_RecentlyPlayedList;                                     // 0x035C(0x0010) (NeedCtorLink)
	TArray<struct FListPlayerData>                     m_ClanList;                                               // 0x036C(0x0010) (NeedCtorLink)
	struct FPointer                                    m_CurrentList;                                            // 0x037C(0x0008) (Native)
	int                                                m_nCurrentView;                                           // 0x0384(0x0004)
	class UGFxObject*                                  m_InviteList;                                             // 0x0388(0x0008)
	unsigned long                                      m_bIsViewingInvite : 1;                                   // 0x0390(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxPartyManagement");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* pMP);
};


// Class TgClient.TgGfxPlayerProfile
// 0x0030 (0x0198 - 0x0168)
class UTgGfxPlayerProfile : public UTgGFxEventObject
{
public:
	unsigned long                                      m_receivedPlayerActivities : 1;                           // 0x0168(0x0004)
	unsigned long                                      m_receivedHistory : 1;                                    // 0x0168(0x0004)
	unsigned long                                      m_receivedProfileInfo : 1;                                // 0x0168(0x0004)
	unsigned long                                      m_receivedMatchHistory : 1;                               // 0x0168(0x0004)
	unsigned long                                      m_updatedProfileData : 1;                                 // 0x0168(0x0004)
	unsigned long                                      m_initializedFirstFilter : 1;                             // 0x0168(0x0004)
	int                                                m_playerId;                                               // 0x016C(0x0004)
	TArray<class UTgGFxPlayerData*>                    m_arrPendingSelector;                                     // 0x0170(0x0010) (AlwaysInit, NeedCtorLink)
	class UGFxObject*                                  m_recentMatchesFilter;                                    // 0x0180(0x0008)
	TArray<struct FMatchMembersFilter>                 m_matchMembersFilter;                                     // 0x0188(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxPlayerProfile");
		return ptr;
	}


	void STATIC_OnFriendSelector(class UTgEventDataItem* pBaseEvent);
	void PlayerNameUpdated();
	void STATIC_ASC_PlayerNameUpdated();
	void DropDownUpdated(int Index);
	void STATIC_ASC_DropDownUpdated(int Index);
	void STATIC_USC_TabSelected(int Index);
	void STATIC_USC_SearchByName(const struct FString& PlayerName);
	void STATIC_USC_SetFilter(int filterIndex, int val);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxProfileAccolade
// 0x0004 (0x0288 - 0x0284)
class UTgGfxProfileAccolade : public UTgGfxScene
{
public:
	int                                                m_nPlayerId;                                              // 0x0284(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxProfileAccolade");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void AccoladeDataUpdated();
	void STATIC_ASC_AccoladeDataUpdated();
};


// Class TgClient.TgGfxProfileAchievements
// 0x0024 (0x02A8 - 0x0284)
class UTgGfxProfileAchievements : public UTgGfxScene
{
public:
	int                                                m_playerId;                                               // 0x0284(0x0004)
	int                                                m_searchedPlayerId;                                       // 0x0288(0x0004)
	unsigned long                                      m_gotAllActivities : 1;                                   // 0x028C(0x0004)
	TArray<struct FAchievementData_ProfileAchievements> m_achievementDatas;                                       // 0x0290(0x0010) (NeedCtorLink)
	class UGFxObject*                                  m_achievementDatasArray;                                  // 0x02A0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxProfileAchievements");
		return ptr;
	}


	void CheckIfHasMasterList();
	void STATIC_ASC_CheckIfHasMasterList();
	void UpdateAchievements();
	void STATIC_ASC_UpdateAchievements();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxProfileHistory
// 0x0048 (0x02CC - 0x0284)
class UTgGfxProfileHistory : public UTgGfxScene
{
public:
	int                                                m_playerId;                                               // 0x0284(0x0004)
	int                                                s_lastFilterQueueId;                                      // 0x0288(0x0004)
	struct FString                                     s_GodFilter;                                              // 0x028C(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __USC_SetGodsFilter_Delegate__Delegate;                   // 0x029C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x029C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __USC_SetQueueFilter_Delegate__Delegate;                  // 0x02AC(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02AC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __USC_ShowDetails_Delegate__Delegate;                     // 0x02BC(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02BC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxProfileHistory");
		return ptr;
	}


	void QueueDataUpdated();
	void STATIC_ASC_QueueDataUpdated();
	void MatchesDataUpdated();
	void STATIC_ASC_MatchesDataUpdated();
	void STATIC_USC_ShowDetails(const struct FString& matchId);
	void STATIC_USC_SetQueueFilter(int queueId);
	void STATIC_USC_SetGodsFilter(const struct FString& sFilterGod);
	void USC_ShowDetails_Delegate(const struct FString& matchId);
	void USC_SetQueueFilter_Delegate(int queueId);
	void USC_SetGodsFilter_Delegate(const struct FString& sFilterGod);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxProfileLeagueStats
// 0x0000 (0x0284 - 0x0284)
class UTgGfxProfileLeagueStats : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxProfileLeagueStats");
		return ptr;
	}


	void UpdateLeagueStats();
	void STATIC_ASC_UpdateLeagueStats();
	void STATIC_UpdateQueueLeagues();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxProfileMastery
// 0x000C (0x0290 - 0x0284)
class UTgGfxProfileMastery : public UTgGfxScene
{
public:
	int                                                m_playerId;                                               // 0x0284(0x0004)
	int                                                m_searchedPlayerId;                                       // 0x0288(0x0004)
	unsigned long                                      m_gotAllActivities : 1;                                   // 0x028C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxProfileMastery");
		return ptr;
	}


	void UpdateAll();
	void asc_updateAll();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxProfileOverview
// 0x002C (0x02B0 - 0x0284)
class UTgGfxProfileOverview : public UTgGfxScene
{
public:
	int                                                m_requestedPlayerId;                                      // 0x0284(0x0004)
	int                                                m_cachedUpdatedPlayerId;                                  // 0x0288(0x0004)
	int                                                m_playerId;                                               // 0x028C(0x0004)
	int                                                m_nOverrideGoal1;                                         // 0x0290(0x0004)
	int                                                m_nOverrideGoal2;                                         // 0x0294(0x0004)
	int                                                m_nOverrideGoal3;                                         // 0x0298(0x0004)
	int                                                m_nOverrideGoal4;                                         // 0x029C(0x0004)
	struct FScriptDelegate                             __USC_NavigateToClan_Delegate__Delegate;                  // 0x02A0(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A0(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxProfileOverview");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void UpdateSelectedAchievements();
	void STATIC_ASC_UpdateSelectedAchievements();
	void LeagueDataUpdated();
	void STATIC_ASC_LeagueDataUpdated();
	void ProfileDataUpdated();
	void STATIC_ASC_ProfileDataUpdated();
	void STATIC_USC_NavigateToClan();
	void USC_NavigateToClan_Delegate();
};


// Class TgClient.TgGfxProfilePage
// 0x0040 (0x02C4 - 0x0284)
class UTgGfxProfilePage : public UTgGfxScene
{
public:
	int                                                cachedPlayerId;                                           // 0x0284(0x0004)
	int                                                m_CurrentSelectedTab;                                     // 0x0288(0x0004)
	class UTgGFxObject*                                m_HideProfile;                                            // 0x028C(0x0008)
	class UTgGFxObject*                                m_supportIdLabel;                                         // 0x0294(0x0008)
	class UTgGFxObject*                                m_supportIdTF;                                            // 0x029C(0x0008)
	class UTgGFxObject*                                m_gameVersionLabel;                                       // 0x02A4(0x0008)
	class UTgGFxObject*                                m_gameVersionTF;                                          // 0x02AC(0x0008)
	TArray<class UTgGFxPlayerData*>                    m_arrPendingSelector;                                     // 0x02B4(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxProfilePage");
		return ptr;
	}


	void STATIC_OnFriendSelector(class UTgEventDataItem* pBaseEvent);
	void UpdateAvailable(bool vis);
	void STATIC_ASC_UpdateAvailable(bool vis);
	void UpdateCallout();
	void STATIC_ASC_UpdateCallout();
	void UpdatePlayer();
	void STATIC_ASC_UpdatePlayer();
	void UpdateTab();
	void STATIC_ASC_UpdateTab();
	void STATIC_USC_GiftPlayer(bool isYourself);
	void STATIC_USC_TwitchLink();
	void STATIC_USC_UpdatePrivacy();
	void STATIC_USC_AddFriend();
	void STATIC_USC_TabSelected(int tabId);
	void STATIC_USC_SearchPlayerByName(const struct FString& PlayerName);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxProfileWorshiper
// 0x0038 (0x02BC - 0x0284)
class UTgGfxProfileWorshiper : public UTgGfxScene
{
public:
	TEnumAsByte<EGodMasteryFilter>                     m_filterId;                                               // 0x0284(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0285(0x0003) MISSED OFFSET
	int                                                m_playerId;                                               // 0x0288(0x0004)
	struct FString                                     m_sSearch;                                                // 0x028C(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __USC_SetGodMasteryFilter_Delegate__Delegate;             // 0x029C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x029C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __USC_Search_Delegate__Delegate;                          // 0x02AC(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02AC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxProfileWorshiper");
		return ptr;
	}


	void FilterDataUpdated();
	void STATIC_ASC_FilterDataUpdated();
	void GodMasteryUpdated();
	void STATIC_ASC_GodMasteryUpdated();
	void STATIC_USC_Search(const struct FString& searchText);
	void USC_Search_Delegate(const struct FString& searchText);
	void STATIC_USC_SetGodMasteryFilter(int filterId);
	void USC_SetGodMasteryFilter_Delegate(int filterId);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxQuestWindow
// 0x0000 (0x0284 - 0x0284)
class UTgGfxQuestWindow : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxQuestWindow");
		return ptr;
	}


	void UpdateQuest(int Id, int Count, int Goal, const struct FString& msg);
	void STATIC_ASC_UpdateQuest(int Id, int Count, int Goal, const struct FString& msg);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxRacerDispatcher
// 0x001C (0x02A0 - 0x0284)
class UTgGfxRacerDispatcher : public UTgGfxScene
{
public:
	struct FRacerDispatcherState                       lastState;                                                // 0x0284(0x000C)
	struct FScriptDelegate                             __USC_CheckForUpdates_Delegate__Delegate;                 // 0x0290(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0290(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxRacerDispatcher");
		return ptr;
	}


	void STATIC_USC_CheckForUpdates();
	void USC_CheckForUpdates_Delegate();
	void DataChange(class UGFxObject* Data);
	void STATIC_ASC_DataChange(class UGFxObject* Obj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxReferralPopup
// 0x0010 (0x0294 - 0x0284)
class UTgGfxReferralPopup : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SendFriendReferral_Delegate__Delegate;              // 0x0284(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxReferralPopup");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void UpdateFriendList();
	void STATIC_ASC_UpdateFriendList();
	void STATIC_USC_SendFriendReferral(const struct FString& sQQId, const struct FString& sMessage, const struct FString& sPlayerName);
	void USC_SendFriendReferral_Delegate();
};


// Class TgClient.TgGfxReferralReward
// 0x0010 (0x0294 - 0x0284)
class UTgGfxReferralReward : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_OpenReferFriendReward_Delegate__Delegate;           // 0x0284(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxReferralReward");
		return ptr;
	}


	void STATIC_USC_OpenReferFriendReward();
	void USC_OpenReferFriendReward_Delegate();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxReferrals
// 0x0030 (0x02B4 - 0x0284)
class UTgGfxReferrals : public UTgGfxScene
{
public:
	TArray<struct FLevelRewardData>                    m_levelRewardDatas;                                       // 0x0284(0x0010) (NeedCtorLink)
	TArray<struct FPlayedRewardData>                   m_playedRewardDatas;                                      // 0x0294(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __USC_OpenReferFriend_Delegate__Delegate;                 // 0x02A4(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A4(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxReferrals");
		return ptr;
	}


	void UpdateAchievements();
	void STATIC_ASC_UpdateAchievements();
	void UpdatePlayerList();
	void STATIC_ASC_UpdatePlayerList();
	void STATIC_USC_OpenReferFriend();
	void USC_OpenReferFriend_Delegate();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxReferralSelector
// 0x0028 (0x02AC - 0x0284)
class UTgGfxReferralSelector : public UTgGfxScene
{
public:
	float                                              m_nTimeout;                                               // 0x0284(0x0004)
	unsigned long                                      m_bTimeoutActive : 1;                                     // 0x0288(0x0004)
	struct FPointer                                    pFriendMarshal;                                           // 0x028C(0x0008) (Native)
	struct FPointer                                    pReferralMarshal;                                         // 0x0294(0x0008) (Native)
	struct FScriptDelegate                             __USC_SelectReferral_Delegate__Delegate;                  // 0x029C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x029C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxReferralSelector");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void UpdateFriendList();
	void STATIC_ASC_UpdateFriendList();
	void STATIC_USC_SelectReferral(const struct FString& sQQId);
	void USC_SelectReferral_Delegate();
};


// Class TgClient.TgGfxSettingsMenu
// 0x0010 (0x0294 - 0x0284)
class UTgGfxSettingsMenu : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_OpenQueueWarning_Delegate__Delegate;                // 0x0284(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxSettingsMenu");
		return ptr;
	}


	void STATIC_USC_OpenQueueWarning();
	void USC_OpenQueueWarning_Delegate();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* pMoviePlayer);
};


// Class TgClient.TgGfxSocial
// 0x0004 (0x0288 - 0x0284)
class UTgGfxSocial : public UTgGfxScene
{
public:
	int                                                m_nCurrentTab;                                            // 0x0284(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxSocial");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void SetSelectedAdminTab(int nIndex);
	void STATIC_ASC_SetSelectedAdminTab(int nIndex);
	void UpdateSelectedTab(const struct FString& tabLabel);
	void STATIC_ASC_UpdateSelectedTab(const struct FString& tabLabel);
	void UpdateClanQuestData();
	void STATIC_ASC_UpdateClanQuestData();
	void UpdateSocialTabLabels();
	void STATIC_ASC_UpdateSocialTabLabels();
	void STATIC_USC_TabSelected(const struct FString& tabSelected);
};


// Class TgClient.TgGfxSpectatorHud
// 0x0108 (0x038C - 0x0284)
class UTgGfxSpectatorHud : public UTgGfxScene
{
public:
	int                                                m_BannedIds[0x6];                                         // 0x0284(0x0004)
	unsigned long                                      m_bFindMatchDetails : 1;                                  // 0x029C(0x0004)
	unsigned long                                      m_bTeamStatsOpen : 1;                                     // 0x029C(0x0004)
	unsigned long                                      m_bHasDroppedPlayer : 1;                                  // 0x029C(0x0004)
	float                                              m_fUpdateWaitRT;                                          // 0x02A0(0x0004)
	float                                              m_fUpdateWaitGT;                                          // 0x02A4(0x0004)
	class UGFxObject*                                  _global;                                                  // 0x02A8(0x0008)
	struct FBotLifeData                                m_BotLifeData[0x4];                                       // 0x02B0(0x001C) (NeedCtorLink)
	class UGFxObject*                                  m_goldArray;                                              // 0x0320(0x0008)
	class UGFxObject*                                  m_xpArray;                                                // 0x0328(0x0008)
	int                                                m_nCachedMaxPlayers;                                      // 0x0330(0x0004)
	int                                                m_arrCachedPlayerMapping[0xA];                            // 0x0334(0x0004)
	struct FScriptDelegate                             __USC_UpdateStat_Delegate__Delegate;                      // 0x035C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __USC_SetMenuIsOpen_Delegate__Delegate;                   // 0x036C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x036C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FScriptDelegate                             __USC_UpdatePlayerList_Delegate__Delegate;                // 0x037C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                                       // 0x037C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxSpectatorHud");
		return ptr;
	}


	void SendGraphData(class UGFxObject* Obj);
	void STATIC_USC_UpdatePlayerList(class UGFxObject* pPlayerList, int nLength);
	void USC_UpdatePlayerList_Delegate(class UGFxObject* pPlayerList, int nLength);
	void STATIC_USC_SetMenuIsOpen(bool bOpen);
	void USC_SetMenuIsOpen_Delegate(bool bOpen);
	void STATIC_USC_UpdateStat(int pawnId);
	void USC_UpdateStat_Delegate(int pawnId);
	void STATIC_OnGameHUDEvent(class UTgEventDataItem* pEvent);
	void STATIC_OnSpectatorEvent(class UTgEventDataItem* pEvent);
	void STATIC_UpdateGraph();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* pParentMovie);
};


// Class TgClient.TgGfxStoreChestPC
// 0x0004 (0x0288 - 0x0284)
class UTgGfxStoreChestPC : public UTgGfxScene
{
public:
	unsigned long                                      m_bIsClanChest : 1;                                       // 0x0284(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxStoreChestPC");
		return ptr;
	}


	void STATIC_OnAcquisition(class UTgEventDataItem* pEvent);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxTreasurePicker
// 0x0010 (0x0294 - 0x0284)
class UTgGfxTreasurePicker : public UTgGfxScene
{
public:
	TArray<struct FGFxTreasureItem>                    m_nShownItems;                                            // 0x0284(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxTreasurePicker");
		return ptr;
	}


	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* pMoviePlayer);
};


// Class TgClient.TgGfxWisdomMain
// 0x0000 (0x0284 - 0x0284)
class UTgGfxWisdomMain : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxWisdomMain");
		return ptr;
	}


	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGfxWisdomWeb
// 0x0010 (0x0294 - 0x0284)
class UTgGfxWisdomWeb : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_StartStreamData_Delegate__Delegate;                 // 0x0284(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxWisdomWeb");
		return ptr;
	}


	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
	void STATIC_ASC_UpdateStreamList();
	void UpdateStreamList();
	void STATIC_USC_StartStreamData(int streamId, bool external, float X, float Y, float Width, float Height, float widthReal, float heightReal);
	void USC_StartStreamData_Delegate();
};


// Class TgClient.TgStreamManager
// 0x0000 (0x0100 - 0x0100)
class UTgStreamManager : public UTgStreamManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgStreamManager");
		return ptr;
	}


	bool STATIC_OpenStream(int surfaceId, const struct FString& URL, bool external, float X, float Y, float Width, float Height, float widthReal, float heightReal, bool joinChat);
};


// Class TgClient.TgGameDataHandler
// 0x0008 (0x0168 - 0x0160)
class UTgGameDataHandler : public UTgDataHandler
{
public:
	class UTgDataGroup_Clan*                           m_Clan;                                                   // 0x0160(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameDataHandler");
		return ptr;
	}


	void ChatInput_SetReplyName(const struct FString& sSenderName);
	void DispatchEvent_VendorStore_UpdateInventory();
	void DispatchEvent_VendorStore_UpdateStats();
	void InitializeDataHandler();
};


// Class TgClient.TgGameMoviePlayer
// 0x00D8 (0x0A2C - 0x0954)
class UTgGameMoviePlayer : public UTgMoviePlayer
{
public:
	struct FString                                     m_sRealMoneyCurCode;                                      // 0x0954(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FWebRegion>                          m_WebRegions;                                             // 0x0964(0x0010) (NeedCtorLink)
	TArray<class UGFxObject*>                          m_renderTargetCallback;                                   // 0x0974(0x0010) (NeedCtorLink)
	int                                                m_bFeatureAutoVoicePack;                                  // 0x0984(0x0004)
	int                                                m_nFeatureItemType;                                       // 0x0988(0x0004)
	int                                                m_nFeatureItemId;                                         // 0x098C(0x0004)
	struct FString                                     m_smiteTvPageAutoTab;                                     // 0x0990(0x0010) (NeedCtorLink)
	int                                                m_LastPlayNowScreen;                                      // 0x09A0(0x0004)
	int                                                m_nReturnToEventId;                                       // 0x09A4(0x0004)
	class UTexture*                                    m_BrowserTexture[0xC];                                    // 0x09A8(0x0008)
	unsigned long                                      m_bAllowSpaceBar : 1;                                     // 0x0A08(0x0004)
	unsigned long                                      m_bWasCustom : 1;                                         // 0x0A08(0x0004)
	int                                                m_nPlayerNoteId;                                          // 0x0A0C(0x0004)
	int                                                m_browserOpen;                                            // 0x0A10(0x0004)
	class UTgGfxSovereigntyVendorStore*                m_mcSovereigntyVendorStore;                               // 0x0A14(0x0008)
	struct FScriptDelegate                             __DelegateGFxList__Delegate;                              // 0x0A1C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A1C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameMoviePlayer");
		return ptr;
	}


	void DelegateGFxList(class UGFxObject* List);
	void STATIC_usc_rotate_lobby_model(float fValue);
	void STATIC_usc_activate_key();
	void CacheLoggedInGamepad();
	void STATIC_SetUISetting(const struct FString& Setting, const struct FString& Value);
	void STATIC_CheckSpecialInput(class ATgPlayerController* TgPC, const struct FName& ButtonName, TEnumAsByte<EInputEvent> Event);
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> Event);
	bool WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool STATIC_GetBrowserType(int nURLType);
	void STATIC_usc_forceFlushActionLog();
	void STATIC_ToggleCombatLog();
	int STATIC_usc_get_ui_display_mode();
	void NativeTick(float DeltaTime);
	void STATIC_UpdateTutorialImage(bool show, int HeaderMsgId, int ImageId, int msgId);
	void HandleEscapeKey();
	void PostInit();
	void STATIC_UpdateQuestUI(int Id, int Count, int Goal, int msgId);
	void STATIC_usc_allowSpaceBar(bool bAllow);
	struct FString STATIC_usc_getPassiveMeterPath(int BotID);
	void STATIC_RunIntroMovie(bool bRun);
	void STATIC_InvokeRenderTargetReady();
	void STATIC_SetRenderTargetCallback(class UGFxObject* targetObj, bool addObj);
	void STATIC_usc_autoConfigureSettings();
	void STATIC_usc_goto_item(int nItemId, bool bUseAltRedirect);
	bool STATIC_usc_send_chat(int nChannel, const struct FString& msg, const struct FString& Recipient);
	void STATIC_usc_toggle_player_mute(const struct FString& sPlayerName, const struct FString& sUnused, const struct FString& nPlayerId);
	bool STATIC_usc_lobbyFeaturesShouldShow();
	void STATIC_usc_isPlayingTutorial(bool Toggle);
	void STATIC_usc_stopSoundCue(const struct FString& soundTheme, const struct FString& SoundEventName);
	void STATIC_usc_join_channel(int Id);
	struct FString STATIC_usc_GetWinningTeamName();
	struct FString STATIC_usc_get_device_tooltip(int nItemId, int nRank);
	void STATIC_usc_force_purchase_current_item();
	void STATIC_usc_forward_feature2(int pItemType, const struct FString& pItemData, const struct FString& pItemData2);
	void STATIC_usc_forward_feature(int pItemType, const struct FString& pItemData);
	void STATIC_usc_class_loading_resume();
	void STATIC_usc_class_loading_suspend();
	void STATIC_usc_clearReferral(const struct FString& sExtId);
	void STATIC_usc_ListenNextVivoxBtn();
	int STATIC_usc_GetLocalPlayerId();
	void STATIC_usc_request_account_info(int nType);
	void STATIC_OnHUDStateChange(class UTgEventDataItem* pEvent);
	void STATIC_OnGameUIEvent(class UTgEventDataItem* pEvent);
	void STATIC_ProcessUIEvents();
	bool STATIC_SetRenderTargetEnabled(bool bEnabled, int surfaceId, int X, int Y, float widthReal, float heightReal, float Width, float Height);
	class UTgDataGroup_Clan* GetClanData();
	void STATIC_SetLoginReady(bool fromIntro);
	void STATIC_ShowLoginUI();
	void STATIC_ShowNormalUI();
	void STATIC_SetHUDVisiblity();
	void STATIC_USC_ShowLeaderboard(const struct FString& sName, int nValue, int nOption);
	void STATIC_usc_Scene_Manager_Scene_Unloaded(const struct FString& sSceneName);
	void STATIC_usc_Scene_Manager_Scene_Loaded(const struct FString& sSceneName);
	class UGFxObject* STATIC_usc_getItemData(int ItemId, int quantityCount, int vendorId);
	bool STATIC_usc_resize_browser(int surfaceId, float X, float Y, float Width, float Height, float widthReal, float heightReal);
	void STATIC_usc_enable_browser_input(bool bEnable);
	void UnloadHudSection(const struct FString& Section);
	void STATIC_usc_rejectNotification(int nNotificationType, int nId);
	void STATIC_usc_acceptNotification(int nNotificationType, int nId);
	void STATIC_usc_test_voice_pack(int nVoicePackId, int nSkinId);
	void STATIC_usc_show_skin(int nSkinId);
	void STATIC_usc_request_treasure_roll(int nItemId, int CurrencyType);
	bool is_item_owned(int ItemId);
	bool STATIC_usc_is_item_owned(const struct FString& ItemId);
	void STATIC_usc_unregister_mouse_region(const struct FString& Key);
	void STATIC_usc_register_mouse_region(const struct FString& Key, int X, int Y, int Width, int Height);
	bool STATIC_usc_is_in_game();
	void EndLobbyPlayback();
	void CancelPlayback();
	void STATIC_OnDemoReady();
	bool STATIC_usc_match_can_purchase_random_class(int nQueueId);
	void STATIC_usc_viewStatsOnline(const struct FString& sInstanceId);
	void STATIC_usc_close_eom_lobby(int nNavigationTarget);
	bool STATIC_usc_can_play_again();
	void STATIC_usc_match_choose_skin(int nSkinId);
	void STATIC_usc_match_choose_class(int nClassId);
	void STATIC_USC_SelectedPopup(int nActionId, const struct FString& sInputValue, const struct FString& sSecondaryInputValue);
	void FakeItemToast(int nItemId);
	void CloseChatTab(int nChannel, const struct FString& sSender);
	void STATIC_OpenChatTab(int nChannel, bool bForce);
	bool STATIC_ShowGodPackPurchase();
	struct FString STATIC_usc_CheckForLoginErrorMsg();
	void STATIC_LeavePartyNotification();
	void STATIC_DisbandPartyNotification();
	void GotoSendGift(const struct FPointer& pPID);
	void GotoItem(int nItemId, int nReturnToTarget, int nReturnToEvent, bool bUseAltRedirect);
	int STATIC_usc_getBoostedTime();
	void STATIC_UnregisterWebPageRegion(const struct FString& sName);
	int STATIC_RegisterWebPageRegion(const struct FString& sName, bool bWidescreen, int nStreamId, const struct FString& sUrl, float X, float Y, float Width, float Height, float realWidth, float realHeight);
	void STATIC_USC_OpenInternalBrowser(const struct FString& URL);
	void STATIC_USC_OpenExternalBrowser(const struct FString& externalURL);
	void STATIC_LoadBrowserScene();
};


// Class TgClient.TgGameSceneManager
// 0x0000 (0x00FC - 0x00FC)
class UTgGameSceneManager : public UTgSceneManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGameSceneManager");
		return ptr;
	}

};


// Class TgClient.TgGfxChatInput
// 0x0084 (0x0308 - 0x0284)
class UTgGfxChatInput : public UTgGfxScene
{
public:
	int                                                m_nYPos;                                                  // 0x0284(0x0004)
	int                                                m_nBuffer;                                                // 0x0288(0x0004)
	int                                                m_nOffset;                                                // 0x028C(0x0004)
	int                                                m_nChannel;                                               // 0x0290(0x0004)
	int                                                m_nMaxWidth;                                              // 0x0294(0x0004)
	int                                                m_nPrevIndex;                                             // 0x0298(0x0004)
	unsigned long                                      m_bInput : 1;                                             // 0x029C(0x0004)
	unsigned long                                      m_bIntercept : 1;                                         // 0x029C(0x0004)
	unsigned long                                      m_bAutoFilled : 1;                                        // 0x029C(0x0004)
	struct FString                                     m_sReplyName;                                             // 0x02A0(0x0010) (NeedCtorLink)
	struct FString                                     m_sRecipient;                                             // 0x02B0(0x0010) (NeedCtorLink)
	struct FString                                     m_sLastBlocked;                                           // 0x02C0(0x0010) (NeedCtorLink)
	class UTgGFxObject*                                m_Help;                                                   // 0x02D0(0x0008)
	class UTgGFxObject*                                m_Input;                                                  // 0x02D8(0x0008)
	class UTgGFxObject*                                m_Channel;                                                // 0x02E0(0x0008)
	TArray<struct FChannelData>                        m_Shortcuts;                                              // 0x02E8(0x0010) (NeedCtorLink)
	TArray<struct FString>                             m_PrevChats;                                              // 0x02F8(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxChatInput");
		return ptr;
	}


	void STATIC_OnGameUIEvent(class UTgEventDataItem* pEvt);
	void STATIC_ReceiveGFxData(class UGFxObject* pObj);
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* pMP);
};


// Class TgClient.TgSpectatorHUD
// 0x0020 (0x06CC - 0x06AC)
class ATgSpectatorHUD : public ATgGameHUD
{
public:
	TEnumAsByte<ETgClientVisibilityMode>               m_eClientVisibilityMode;                                  // 0x06AC(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06AD(0x0003) MISSED OFFSET
	class AActor*                                      m_LastUIViewTarget;                                       // 0x06B0(0x0008)
	unsigned long                                      m_StatsSeeded : 1;                                        // 0x06B8(0x0004)
	unsigned long                                      m_bStatsPanelHidden : 1;                                  // 0x06B8(0x0004)
	int                                                m_nCurrentStatsPanel;                                     // 0x06BC(0x0004)
	int                                                m_nMaxStatsPanel;                                         // 0x06C0(0x0004)
	int                                                m_nCurrentInfoPanel;                                      // 0x06C4(0x0004)
	int                                                m_nMaxInfoPanel;                                          // 0x06C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgSpectatorHUD");
		return ptr;
	}


	void ToggleHUD();
	void Tick(float DeltaTime);
	int GetGameState();
	void STATIC_SetVisibilityMode(TEnumAsByte<ETgClientVisibilityMode> Mode);
	void STATIC_ToggleVisibilityMode();
	void STATIC_ShowPreviousInfoPanel();
	void STATIC_ShowNextInfoPanel();
	void ToggleStatPanel();
	void STATIC_ShowPreviousStatPanel();
	void STATIC_ShowNextStatPanel();
	bool UpdatePlayerStatUI(class ATgPawn* changedPawn);
	void STATIC_SetStatIndex(int StatIndex);
	void STATIC_SpectatorShowAll();
	void STATIC_SpectatorHideBottomHalf();
	void STATIC_SpectatorHideAll();
	void STATIC_ToggleSpectatorGameStats();
	void STATIC_ToggleSpectatorMinimap();
	void STATIC_ToggleSpectatorPlayerPanels();
	void STATIC_ToggleSpectatorObjectives();
	void STATIC_ToggleSpectatorTimeline();
	void STATIC_ToggleSecretMessage();
	void STATIC_ToggleSpectatorControls();
	void STATIC_ToggleSpectatorPlayerInformation();
	void STATIC_ToggleSpectatorTicker();
	void STATIC_SetSpectatorMode(int nNum);
	void STATIC_ToggleBans();
	void STATIC_EndMission(bool bPlayerAttacker, TEnumAsByte<EGAME_WIN_STATE> finalWinState);
	void STATIC_UpdateSpectatorViewMode(TEnumAsByte<ETgClientVisibilityMode> Mode);
	void STATIC_UpdateSpectatorViewTarget(class AActor* Target);
	TEnumAsByte<ETgClientVisibilityMode> GetVisibilityMode();
};


// Class TgClient.TgClanDC_ClanList
// 0x0003 (0x01A0 - 0x019D)
class UTgClanDC_ClanList : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgClanDC_ClanList");
		return ptr;
	}

};


// Class TgClient.TgClanDC_ClanStats
// 0x0013 (0x01B0 - 0x019D)
class UTgClanDC_ClanStats : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	struct FString                                     m_sPendingMOTD;                                           // 0x01A0(0x0010) (AlwaysInit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgClanDC_ClanStats");
		return ptr;
	}


	void STATIC_usc_UpdateClanNameFormat(int nIndex);
	void STATIC_usc_UpdateTag(const struct FString& sMessage);
	void STATIC_usc_ApplicationAction(int nAction, const struct FString& sPlayerId);
	void STATIC_usc_UpdateRecruiting(const struct FString& sMessage, bool bIsRecruiting);
	void STATIC_usc_UpdateMessage(const struct FString& sMessage, bool bIsDaily);
	void STATIC_OnFilterResult(const struct FString& sOriginal, const struct FString& sFiltered, bool bTotalCensor);
	void STATIC_UpdateRecruiting(const struct FString& sDesc, bool bIsRecruiting);
	void STATIC_UpdateClanMOTD(const struct FString& sMessage);
	void STATIC_UpdateClanDesc(const struct FString& sMessage);
	void STATIC_UpdateClanName(const struct FString& sName);
	void UpdateClanData();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgClanDC_Roster
// 0x1F47 (0x20E4 - 0x019D)
class UTgClanDC_Roster : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	struct Fdword                                      m_nPlayerId;                                              // 0x01A0(0x0004)
	class UTgClanDC_Player*                            m_MemberArray[0x3E8];                                     // 0x01A4(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgClanDC_Roster");
		return ptr;
	}


	void STATIC_usc_UpdateComment(const struct FString& nPlayerId, const struct FString& sComment, bool isOfficerNote);
	void STATIC_usc_ClanAction(int nAction, const struct FString& nPlayerId);
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgClanDC_Settings
// 0x000B (0x01A8 - 0x019D)
class UTgClanDC_Settings : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UGFxObject*                                  m_RankArray;                                              // 0x01A0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgClanDC_Settings");
		return ptr;
	}


	void STATIC_usc_UpdateLeader(const struct FString& sName);
	void STATIC_usc_UpdateRank(float RankId, const struct FString& sName, float rankPermission);
	void STATIC_UpdateRankArray();
	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgDataGroup_Clan
// 0x001B (0x01B8 - 0x019D)
class UTgDataGroup_Clan : public UTgDataChunk
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x019D(0x0003) MISSED OFFSET
	class UTgClanDC_ClanStats*                         m_ClanStats;                                              // 0x01A0(0x0008)
	class UTgClanDC_Settings*                          m_ClanSettings;                                           // 0x01A8(0x0008)
	class UTgClanDC_Roster*                            m_ClanRoster;                                             // 0x01B0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgDataGroup_Clan");
		return ptr;
	}


	void InitializeData(class UTgDataHandler* Handler, class UTgDataChunk* parentChunk);
};


// Class TgClient.TgGfxEventPurchase
// 0x0000 (0x0284 - 0x0284)
class UTgGfxEventPurchase : public UTgGfxScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGfxEventPurchase");
		return ptr;
	}


	void STATIC_ShowOutOfCurrency(int CurrencyType);
	void STATIC_SubmitPurchase(class UGFxObject* Data);
	void STATIC_GetItemInfo(int ItemId);
	void STATIC_ReceiveGFxData(class UGFxObject* theObject);
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgGFxEventQuestNotification
// 0x0058 (0x02DC - 0x0284)
class UTgGFxEventQuestNotification : public UTgGfxScene
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0284(0x0048) UNKNOWN PROPERTY: MapProperty TgClient.TgGFxEventQuestNotification.ActivityRedirects
	struct FScriptDelegate                             __USC_GetOptOut_Delegate__Delegate;                       // 0x02CC(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02CC(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgGFxEventQuestNotification");
		return ptr;
	}


	bool STATIC_USC_GetOptOut();
	bool USC_GetOptOut_Delegate();
	void STATIC_ReceiveGFxData(class UGFxObject* Data);
	void STATIC_RedirectToFirstQuest();
	void STATIC_UpdateNotifySetting(bool bDisable);
	bool STATIC_GetHasAvailableSpecialEventQuest();
	void STATIC_Uninitialize();
	void STATIC_Initialize(class UTgMoviePlayer* theMovie);
};


// Class TgClient.TgLobbyHUD
// 0x0000 (0x0654 - 0x0654)
class ATgLobbyHUD : public ATgLobbyHUDBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgLobbyHUD");
		return ptr;
	}


	void SetInitialState();
	bool IsCurrentCameraMatchLobby();
	struct FName GetMatchLobbyCameraName();
	void STATIC_OnClassSelected(int nClassId, int nSkinId, bool bChangedClass, bool bChangedSkin);
	void AsynchNotifies();
};


// Class TgClient.TgTestMoviePlayer
// 0x0000 (0x0954 - 0x0954)
class UTgTestMoviePlayer : public UTgMoviePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TgClient.TgTestMoviePlayer");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
