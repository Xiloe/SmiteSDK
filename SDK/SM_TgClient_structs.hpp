#pragma once

// SMITE (8.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SM_Basic.hpp"
#include "SM_Engine_classes.hpp"
#include "SM_TgClientBase_classes.hpp"
#include "SM_Core_classes.hpp"
#include "SM_TgGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_NUM_ITEMS_IN_BUILD                                 6
#define CONST_NUM_ITEM_TIERS                                     3
#define CONST_STORE_HEAD_COUNT                                   4
#define CONST_DCCLAN_MAX_MEMBERS                                 1000
#define CONST_RATATOSKR_BOT_ID                                   2063
#define CONST_SKIN_COUNT                                         6
#define CONST_CLAN_RANK_GROUP                                    96
#define CONST_INVALID_GOD_ID                                     -1
#define CONST_STORE_LIST_COUNT                                   12
#define CONST_MAX_BROWSER_TEXTURES                               12
#define CONST_NUM_CONSUMABLES_IN_BUILD                           2
#define CONST_RATATOSKR_ACORN_DEVICE_ID                          18703
#define CONST_LOADOUT_COL_COUNT                                  9
#define CONST_RECOMMEND_ITEM_CATEGORY_STARTER                    10772
#define CONST_STORE_GRID_COUNT                                   16
#define CONST_NUM_STAR_RATINGS                                   5
#define CONST_MAX_ABILITY_LEVEL                                  5
#define CONST_MAX_ABILITIES_PER_LEVEL                            2
#define CONST_STORE_ITEMS_PER_LINE_MAX                           4
#define CONST_NUM_ACTIVES_IN_BUILD                               2
#define CONST_MAX_PARTY_COUNT                                    5
#define CONST_NUM_ABILITIES                                      5
#define CONST_NUM_UPGRADEABLE_ABILITIES                          4
#define CONST_NUM_BUILDER_TABS                                   2
#define CONST_NUM_ABILITY_ROWS                                   20
#define CONST_BITS_PER_ABILITY_LEVEL                             5
#define CONST_ITEM_COUNT                                         56
#define CONST_GOD_CARD_COUNT                                     16
#define CONST_WARD_COL_COUNT                                     8
#define CONST_QUEUE_TYPE_ALL                                     0
#define CONST_HUD_ITEM_COUNT                                     6
#define CONST_ICON_COUNT                                         5
#define CONST_LOADOUT_CHOICE_COUNT                               45
#define CONST_PLAYERS_COUNT                                      4
#define CONST_TgGfxStoreChestPC_STORE_GOD_PACK_ITEM_ID           -1

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TgClient.TgClanDC_Roster.TG_CLAN_ACTION
enum class ETG_CLAN_ACTION : uint8_t
{
	CLAN_KICK                      = 0,
	CLAN_PROMOTE                   = 1,
	CLAN_DEMOTE                    = 2,
	CLAN_MAX                       = 3
};


// Enum TgClient.TgGameMoviePlayer.ESpecialFunction
enum class ESpecialFunction : uint8_t
{
	ESF_EmailPrompt                = 0,
	ESF_ClaimGodPack               = 1,
	ESF_PurchaseProductId          = 2,
	ESF_MAX                        = 3
};


// Enum TgClient.TgGfxAdventureProgressFox.EAdventureProgressFoxActions
enum class EAdventureProgressFoxActions : uint8_t
{
	EAPFA_PurchaseAdventure        = 0,
	EAPFA_PurchasePoints           = 1,
	EAPFA_ClaimChest               = 2,
	EAPFA_MAX                      = 3
};


// Enum TgClient.TgGfxAdventuresHub.EAdventureHub
enum class EAdventureHub : uint8_t
{
	EAHEA_JoinQueue                = 0,
	EAHEA_UnlockBundle             = 1,
	EAHEA_VaultOver                = 2,
	EAHEA_VaultOut                 = 3,
	EAHEA_VaultIn                  = 4,
	EAHEA_GoalData                 = 5,
	EAHEA_LeaveQueue               = 6,
	EAHEA_MAX                      = 7
};


// Enum TgClient.TgGfxCharacterBuilder.TipType
enum class ETipType : uint8_t
{
	ETT_GridTip                    = 0,
	ETT_ListTip                    = 1,
	ETT_PreviewTip                 = 2,
	ETT_ConsumableTip              = 3,
	ETT_ActiveTip                  = 4,
	ETT_AbilityTip                 = 5,
	ETT_MAX                        = 6
};


// Enum TgClient.TgGfxCharacterBuilder.CharacterBuilderActions
enum class ECharacterBuilderActions : uint8_t
{
	ECBA_None                      = 0,
	ECBA_ClearItems                = 1,
	ECBA_SaveProfile               = 2,
	ECBA_SetLevel                  = 3,
	ECBA_ListScroll                = 4,
	ECBA_ListItem                  = 5,
	ECBA_GridItem                  = 6,
	ECBA_RoleChanged               = 7,
	ECBA_SelectItem                = 8,
	ECBA_ListTip                   = 9,
	ECBA_GridTip                   = 10,
	ECBA_HideTip                   = 11,
	ECBA_RemoveItem                = 12,
	ECBA_BuildCheckbox             = 13,
	ECBA_PreviewTip                = 14,
	ECBA_PreviewItem               = 15,
	ECBA_ConsumableTip             = 16,
	ECBA_ConsumableItem            = 17,
	ECBA_ActiveTip                 = 18,
	ECBA_ActiveItem                = 19,
	ECBA_QtyChange                 = 20,
	ECBA_AbilityTip                = 21,
	ECBA_AbilityItem               = 22,
	ECBA_Tab                       = 23,
	ECBA_SetAbility                = 24,
	ECBA_SetAbilitySlot            = 25,
	ECBA_SetClass                  = 26,
	ECBA_SetAbilityActive          = 27,
	ECBA_MAX                       = 28
};


// Enum TgClient.TgGfxCharacterBuilder.CharacterBuilderTabs
enum class ECharacterBuilderTabs : uint8_t
{
	ECBT_Items                     = 0,
	ECBT_Abilities                 = 1,
	ECBT_MAX                       = 2
};


// Enum TgClient.TgGfxChatInput.EChatInputActions
enum class EChatInputActions : uint8_t
{
	ECIA_None                      = 0,
	ECIA_Focus                     = 1,
	ECIA_Input                     = 2,
	ECIA_SetPlayerSelection        = 3,
	ECIA_MAX                       = 4
};


// Enum TgClient.TgGfxEOMLobby.EOMLEventAction
enum class EOMLEventAction : uint8_t
{
	EOMLEA_SendGiftPoints          = 0,
	EOMLEA_UnlockTriumpChest       = 1,
	EOMLEA_UnlockAdventure         = 2,
	EOMLEA_Facebook                = 3,
	EOMLEA_Twitter                 = 4,
	EOMLEA_Stats                   = 5,
	EOMLEA_Feedback                = 6,
	EOMLEA_MAX                     = 7
};


// Enum TgClient.TgGfxEventLeaderboard.EEventLeaderboardTypes
enum class EEventLeaderboardTypes : uint8_t
{
	EELT_NONE                      = 0,
	EELT_XingMountain              = 1,
	EELT_FafMountNorm              = 2,
	EELT_FafMountHard              = 3,
	EELT_MAX                       = 4
};


// Enum TgClient.TgGfxEventPurchase.EEventPurchaseActions
enum class EEventPurchaseActions : uint8_t
{
	EVTPA_GetItemInfo              = 0,
	EVTPA_SubmitPurchase           = 1,
	EVTPA_MAX                      = 2
};


// Enum TgClient.TgGFxEventQuestNotification.EventQuestNotificationAction
enum class EventQuestNotificationAction : uint8_t
{
	EVQNA_CancelSubmit             = 0,
	EVQNA_RedirectPlayNow          = 1,
	EVQNA_RedirectQuestList        = 2,
	EVQNA_MAX                      = 3
};


// Enum TgClient.TgGfxFeedback.EFeedbackPopupActions
enum class EFeedbackPopupActions : uint8_t
{
	EFPA_None                      = 0,
	EFPA_Close                     = 1,
	EFPA_SetStar                   = 2,
	EFPA_Submit                    = 3,
	EFPA_MAX                       = 4
};


// Enum TgClient.TgGfxGods.EGodsTagMode
enum class EGodsTagMode : uint8_t
{
	EGTM_None                      = 0,
	EGTM_New                       = 1,
	EGTM_Sale                      = 2,
	EGTM_MAX                       = 3
};


// Enum TgClient.TgGfxGods.EGodsViewPageActions
enum class EGodsViewPageActions : uint8_t
{
	EGVPA_None                     = 0,
	EGVPA_ItemScroll               = 1,
	EGVPA_ItemSelect               = 2,
	EGVPA_ItemToolTip              = 3,
	EGVPA_OnTabSelected            = 4,
	EGVPA_SetPrice                 = 5,
	EGVPA_Unlock                   = 6,
	EGVPA_SkinScroll               = 7,
	EGVPA_SkinSelect               = 8,
	EGVPA_SkinToolTip              = 9,
	EGVPA_OnFilterchange           = 10,
	EGVPA_UnlockItem               = 11,
	EGVPA_OnGodBuilder             = 12,
	EGVPA_GodSelect                = 13,
	EGVPA_GodScroll                = 14,
	EGVPA_SetGodOwned              = 15,
	EGVPA_SetSkinOwned             = 16,
	EGVPA_OnVoiceSkin              = 17,
	EGVPA_GotoItem                 = 18,
	EGVPA_GodGridSelect            = 19,
	EGVPA_SwapGodView              = 20,
	EGVPA_RefreshUnlock            = 21,
	EGVPA_RefreshUGPRefund         = 22,
	EGVPA_OpenLegendaryBundle      = 23,
	EGVPA_MAX                      = 24
};


// Enum TgClient.TgGfxGods.EGodsSkinTypeId
enum class EGodsSkinTypeId : uint8_t
{
	EGSTI_Default                  = 0,
	EGSTI_Other                    = 1,
	EGSTI_Golden                   = 2,
	EGSTI_Legendary                = 3,
	EGSTI_Diamond                  = 4,
	EGSTI_MAX                      = 5
};


// Enum TgClient.TgGfxGods.EGodsViewTabs
enum class EGodsViewTabs : uint8_t
{
	EGVT_GODS                      = 0,
	EGVT_ABOUT                     = 1,
	EGVT_ABILITIES                 = 2,
	EGVT_SKINS                     = 3,
	EGVT_STATS                     = 4,
	EGVT_ACHIEVE                   = 5,
	EGVT_LORE                      = 6,
	EGVT_EXTRAS                    = 7,
	EGVT_HISTORY                   = 8,
	EGVT_WARDS                     = 9,
	EGVT_VOICE                     = 10,
	EGVT_MAX                       = 11
};


// Enum TgClient.TgGfxGods.EGodFilters
enum class EGodFilters : uint8_t
{
	EGF_None                       = 0,
	EGF_Owned                      = 1,
	EGF_Assassin                   = 2,
	EGF_Guardian                   = 3,
	EGF_Hunter                     = 4,
	EGF_Mage                       = 5,
	EGF_Warrior                    = 6,
	EGF_Mastered                   = 7,
	EGF_Not_Mastered               = 8,
	EGF_Purchasable                = 9,
	EGF_MAX                        = 10
};


// Enum TgClient.TgGfxHudNotify.NotifyType
enum class ENotifyType : uint8_t
{
	NT_Alert                       = 0,
	NT_Accolade                    = 1,
	NT_Kill                        = 2,
	NT_MAX                         = 3
};


// Enum TgClient.TgGfxHudNotify.NotifySubTypeAccolade
enum class ENotifySubTypeAccolade : uint8_t
{
	NSTA_Aced                      = 0,
	NSTA_GoldFury                  = 1,
	NSTA_Wild_Juggernaut           = 2,
	NSTA_Siege_Juggernaut          = 3,
	NSTA_FireGiant                 = 4,
	NSTA_TowerKill                 = 5,
	NSTA_PhoenixKill               = 6,
	NSTA_CapturedPoint             = 7,
	NSTA_ObjectiveSteal            = 8,
	NSTA_NoScope                   = 9,
	NSTA_HoldTheLine               = 10,
	NSTA_TowerDive                 = 11,
	NSTA_Revenge                   = 12,
	NSTA_Assist                    = 13,
	NSTA_KillStreak_Basic          = 14,
	NSTA_KillStreak_Breaker        = 15,
	NSTA_Ganesha_Kill              = 16,
	NSTA_Ganesha_Assist            = 17,
	NSTA_KillCombo                 = 18,
	NSTA_KillStreak                = 19,
	NSTA_KillStreak01              = 20,
	NSTA_KillStreak02              = 21,
	NSTA_KillStreak03              = 22,
	NSTA_KillStreak04              = 23,
	NSTA_KillStreak05              = 24,
	NSTA_KillStreak06              = 25,
	NSTA_KillStreak07              = 26,
	NSTA_KillCombo01               = 27,
	NSTA_KillCombo02               = 28,
	NSTA_KillCombo03               = 29,
	NSTA_KillCombo04               = 30,
	NSTA_FirstBlood                = 31,
	NSTA_BullDemonKing             = 32,
	NSTA_Apophis                   = 33,
	NSTA_Pyromancer                = 34,
	NSTA_MAX                       = 35
};


// Enum TgClient.TgGfxLeaderboard.ELeaderboardTypes
enum class ELeaderboardTypes : uint8_t
{
	LBT_RANKED_GOD                 = 0,
	LBT_RANKED_MAX                 = 1
};


// Enum TgClient.TgGfxPartyManagement.EPartyManagementView
enum class EPartyManagementView : uint8_t
{
	EPMV_Friends                   = 0,
	EPMV_Clans                     = 1,
	EPMV_RecentlyPlayed            = 2,
	EPMV_MAX                       = 3
};


// Enum TgClient.TgGfxPartyManagement.PartyManagementActions
enum class EPartyManagementActions : uint8_t
{
	PMA_None                       = 0,
	PMA_SelectTab                  = 1,
	PMA_Search                     = 2,
	PMA_Invite                     = 3,
	PMA_ViewProfile                = 4,
	PMA_PromoteLeader              = 5,
	PMA_PromoteInvite              = 6,
	PMA_Kick                       = 7,
	PMA_Leave                      = 8,
	PMA_UpdateInviteList           = 9,
	PMA_InviteListToggle           = 10,
	PMA_UpdateTab                  = 11,
	PMA_UpdateInviteListDisabled   = 12,
	PMA_MAX                        = 13
};


// Enum TgClient.TgGfxPlayerProfile.EPlayerProfileFilter
enum class EPlayerProfileFilter : uint8_t
{
	PPF_YOURSELF                   = 0,
	PPF_FRIENDS                    = 1,
	PPF_CLAN                       = 2,
	PPF_RECENTLY_PLAYED            = 3,
	PPF_MAX                        = 4
};


// Enum TgClient.TgGfxPlayerProfile.EPlayerProfileTab
enum class EPlayerProfileTab : uint8_t
{
	PPT_OVERVIEW                   = 0,
	PPT_MATCHES                    = 1,
	PPT_GODS                       = 2,
	PPT_RECORDS                    = 3,
	PPT_MAX                        = 4
};


// Enum TgClient.TgGfxProfileWorshiper.EGodMasteryFilter
enum class EGodMasteryFilter : uint8_t
{
	GMS_ALL                        = 0,
	GMS_MASTERED                   = 1,
	GMS_IN_PROGRESS                = 2,
	GMS_NOT_MASTERED               = 3,
	GMS_NOT_PLAYED                 = 4,
	GMS_MAX                        = 5
};


// Enum TgClient.TgGfxRacerDispatcher.TgRacerDispatcherEvent
enum class ETgRacerDispatcherEvent : uint8_t
{
	TGRDE_PlacementChange          = 0,
	TGRDE_WeaponChange             = 1,
	TGRDE_LapChange                = 2,
	TGRDE_MAX                      = 3
};


// Enum TgClient.TgGfxStoreChestPC.EStoreChestPCActions
enum class EStoreChestPCActions : uint8_t
{
	ESCPCA_None                    = 0,
	ESCPCA_ItemUnlock              = 1,
	ESCPCA_RefreshItems            = 2,
	ESCPCA_ChestIndex              = 3,
	ESCPCA_MAX                     = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TgClient.TgGfxCharacterBuilder.ItemBuilderCategory
// 0x0038
struct FItemBuilderCategory
{
	int                                                CategoryId;                                               // 0x0000(0x0004)
	int                                                ItemCount;                                                // 0x0004(0x0004)
	int                                                Items[0x4];                                               // 0x0008(0x0004)
	int                                                Quantities[0x4];                                          // 0x0018(0x0004)
	int                                                AutoBuyIndex[0x4];                                        // 0x0028(0x0004)
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.PreviewItem
// 0x000C
struct FPreviewItem
{
	int                                                CategoryIndex;                                            // 0x0000(0x0004)
	int                                                ColumnIndex;                                              // 0x0004(0x0004)
	int                                                ItemId;                                                   // 0x0008(0x0004)
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.ItemDisplay
// 0x0080
struct FItemDisplay
{
	class UTgGFxObject*                                pObj;                                                     // 0x0000(0x0008)
	class UTgGFxObject*                                ItemButton;                                               // 0x0008(0x0008)
	class UTgGFxObject*                                BuildButton;                                              // 0x0010(0x0008)
	class UTgGFxObject*                                RemoveButton;                                             // 0x0018(0x0008)
	class UTgGFxObject*                                Icon;                                                     // 0x0020(0x0008)
	class UTgGFxObject*                                NameTF;                                                   // 0x0028(0x0008)
	class UTgGFxObject*                                DescTF;                                                   // 0x0030(0x0008)
	class UTgGFxObject*                                BuildQty;                                                 // 0x0038(0x0008)
	class UTgGFxObject*                                BuildQtyTF;                                               // 0x0040(0x0008)
	class UTgGFxObject*                                BuildCostTF;                                              // 0x0048(0x0008)
	class UTgGFxObject*                                BuildIcon;                                                // 0x0050(0x0008)
	class UTgGFxObject*                                BuildNameTF;                                              // 0x0058(0x0008)
	class UTgGFxObject*                                BuildCheckbox;                                            // 0x0060(0x0008)
	class UTgGFxObject*                                CostTF[0x3];                                              // 0x0068(0x0008)
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.BuildItemDisplay
// 0x0010
struct FBuildItemDisplay
{
	class UTgGFxObject*                                Icon;                                                     // 0x0000(0x0008)
	class UTgGFxObject*                                Quantity;                                                 // 0x0008(0x0008)
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.LevelInfo
// 0x0008
struct FLevelInfo
{
	int                                                Ability[0x2];                                             // 0x0000(0x0004)
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.AbilitySelectionButton
// 0x0040
struct FAbilitySelectionButton
{
	class UTgGFxObject*                                Icon;                                                     // 0x0000(0x0008)
	class UTgGFxObject*                                Object;                                                   // 0x0008(0x0008)
	class UTgGFxObject*                                AbilityNameTF;                                            // 0x0010(0x0008)
	class UTgGFxObject*                                AblilityPips[0x5];                                        // 0x0018(0x0008)
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.AbilityLevelButton
// 0x0010
struct FAbilityLevelButton
{
	class UTgGFxObject*                                Icon;                                                     // 0x0000(0x0008)
	class UTgGFxObject*                                Object;                                                   // 0x0008(0x0008)
};

// ScriptStruct TgClient.TgGfxCharacterBuilder.AbilityRow
// 0x0028
struct FAbilityRow
{
	class UTgGFxObject*                                LevelTF;                                                  // 0x0000(0x0008)
	struct FAbilityLevelButton                         Button[0x2];                                              // 0x0008(0x0010)
};

// ScriptStruct TgClient.TgGfxGods.GFxItem
// 0x0028
struct FGFxItem
{
	class UTgGFxObject*                                pObj;                                                     // 0x0000(0x0008)
	class UTgGFxObject*                                Icon;                                                     // 0x0008(0x0008)
	class UTgGFxObject*                                MasterIcon;                                               // 0x0010(0x0008)
	class UTgGFxObject*                                TagText;                                                  // 0x0018(0x0008)
	class UTgGFxObject*                                GoldTag;                                                  // 0x0020(0x0008)
};

// ScriptStruct TgClient.TgGfxGods.GFxSkinBtn
// 0x0070
struct FGFxSkinBtn
{
	class UTgGFxObject*                                pObj;                                                     // 0x0000(0x0008)
	class UTgGFxObject*                                Icon;                                                     // 0x0008(0x0008)
	class UTgGFxObject*                                TagText;                                                  // 0x0010(0x0008)
	class UTgGFxObject*                                GoldTag;                                                  // 0x0018(0x0008)
	class UTgGFxObject*                                OwnedLabel;                                               // 0x0020(0x0008)
	class UTgGFxObject*                                GemPrice;                                                 // 0x0028(0x0008)
	class UTgGFxObject*                                FavorPrice;                                               // 0x0030(0x0008)
	class UTgGFxObject*                                GemPriceTF;                                               // 0x0038(0x0008)
	class UTgGFxObject*                                FavorPriceTF;                                             // 0x0040(0x0008)
	class UTgGFxObject*                                SpecialTF;                                                // 0x0048(0x0008)
	class UTgGFxObject*                                SpecialTag;                                               // 0x0050(0x0008)
	class UTgGFxObject*                                LegendaryImage;                                           // 0x0058(0x0008)
	class UTgGFxObject*                                DiamondImage;                                             // 0x0060(0x0008)
	class UTgGFxObject*                                ObtainabilityIcon;                                        // 0x0068(0x0008)
};

// ScriptStruct TgClient.TgGfxGods.GFxGodBtn
// 0x0068
struct FGFxGodBtn
{
	class UTgGFxObject*                                pObj;                                                     // 0x0000(0x0008)
	class UTgGFxObject*                                Icon;                                                     // 0x0008(0x0008)
	class UTgGFxObject*                                TagText;                                                  // 0x0010(0x0008)
	class UTgGFxObject*                                GoldTag;                                                  // 0x0018(0x0008)
	class UTgGFxObject*                                OwnedLabel;                                               // 0x0020(0x0008)
	class UTgGFxObject*                                GemPrice;                                                 // 0x0028(0x0008)
	class UTgGFxObject*                                FavorPrice;                                               // 0x0030(0x0008)
	class UTgGFxObject*                                GemPriceTF;                                               // 0x0038(0x0008)
	class UTgGFxObject*                                FavorPriceTF;                                             // 0x0040(0x0008)
	class UTgGFxObject*                                SpecialTF;                                                // 0x0048(0x0008)
	class UTgGFxObject*                                SpecialTag;                                               // 0x0050(0x0008)
	class UTgGFxObject*                                MasteryIcon;                                              // 0x0058(0x0008)
	class UTgGFxObject*                                GodLabel;                                                 // 0x0060(0x0008)
};

// ScriptStruct TgClient.TgGfxGods.ItemData_GodPage
// 0x00E8
struct FItemData_GodPage
{
	int                                                nGodId;                                                   // 0x0000(0x0004)
	int                                                nItemId;                                                  // 0x0004(0x0004)
	int                                                nLootId;                                                  // 0x0008(0x0004)
	int                                                nUIHint;                                                  // 0x000C(0x0004)
	int                                                nIconIndex;                                               // 0x0010(0x0004)
	int                                                nIconIndexBW;                                             // 0x0014(0x0004)
	int                                                nSkinId;                                                  // 0x0018(0x0004)
	int                                                nSkinType;                                                // 0x001C(0x0004)
	int                                                nFavorCost;                                               // 0x0020(0x0004)
	int                                                nGemCost;                                                 // 0x0024(0x0004)
	int                                                nPackId;                                                  // 0x0028(0x0004)
	int                                                nPackLootId;                                              // 0x002C(0x0004)
	int                                                nPackCost;                                                // 0x0030(0x0004)
	int                                                nPackCurrency;                                            // 0x0034(0x0004)
	int                                                nGodLevel;                                                // 0x0038(0x0004)
	int                                                nWorshipers;                                              // 0x003C(0x0004)
	int                                                nForLevel;                                                // 0x0040(0x0004)
	int                                                nForNext;                                                 // 0x0044(0x0004)
	int                                                nRentTime;                                                // 0x0048(0x0004)
	int                                                nRentTimeUpdate;                                          // 0x004C(0x0004)
	int                                                nSubType;                                                 // 0x0050(0x0004)
	int                                                nObtainability;                                           // 0x0054(0x0004)
	unsigned long                                      bNew : 1;                                                 // 0x0058(0x0004)
	unsigned long                                      bSelected : 1;                                            // 0x0058(0x0004)
	unsigned long                                      bOwned : 1;                                               // 0x0058(0x0004)
	unsigned long                                      bLocked : 1;                                              // 0x0058(0x0004)
	unsigned long                                      bPurchasable : 1;                                         // 0x0058(0x0004)
	unsigned long                                      bVoicePackOwned : 1;                                      // 0x0058(0x0004)
	unsigned long                                      bRented : 1;                                              // 0x0058(0x0004)
	unsigned long                                      bHasVP : 1;                                               // 0x0058(0x0004)
	unsigned long                                      bIsExclusive : 1;                                         // 0x0058(0x0004)
	unsigned long                                      bIsLimited : 1;                                           // 0x0058(0x0004)
	unsigned long                                      bIsUnlimited : 1;                                         // 0x0058(0x0004)
	struct FString                                     sGoldLabel;                                               // 0x005C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sName;                                                    // 0x006C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sNameINT;                                                 // 0x007C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sTags;                                                    // 0x008C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDescription;                                             // 0x009C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sPantheon;                                                // 0x00AC(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sImageTexture;                                            // 0x00BC(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sIconTexture;                                             // 0x00CC(0x0010) (AlwaysInit, NeedCtorLink)
	struct FPointer                                    pItem;                                                    // 0x00DC(0x0008) (Native)
	int                                                nObtainabilityLocation;                                   // 0x00E4(0x0004)
};

// ScriptStruct TgClient.TgGfxGods.StreamData_Gods
// 0x002C
struct FStreamData_Gods
{
	int                                                streamIdGods;                                             // 0x0000(0x0004)
	int                                                streamBotId;                                              // 0x0004(0x0004)
	int                                                streamAbilityNumber;                                      // 0x0008(0x0004)
	struct FString                                     streamURLGods;                                            // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     streamLabelGods;                                          // 0x001C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgGfxGods.AchievementData_GodsAchievements
// 0x006C
struct FAchievementData_GodsAchievements
{
	int                                                botIdGods;                                                // 0x0000(0x0004)
	int                                                pointValue;                                               // 0x0004(0x0004)
	int                                                goalGroupId;                                              // 0x0008(0x0004)
	int                                                goalId;                                                   // 0x000C(0x0004)
	int                                                ActivityId;                                               // 0x0010(0x0004)
	int                                                dateInt;                                                  // 0x0014(0x0004)
	struct FString                                     nameMsg;                                                  // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     titleMsg;                                                 // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     descMsg;                                                  // 0x0038(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     dateMsg;                                                  // 0x0048(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     imgSource;                                                // 0x0058(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      hasCompleted : 1;                                         // 0x0068(0x0004)
};

// ScriptStruct TgClient.TgGfxGods.VendorItemUIHint
// 0x0014
struct FVendorItemUIHint
{
	int                                                Id;                                                       // 0x0000(0x0004)
	struct FString                                     Label;                                                    // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgGfxHudNotify.NotifyData
// 0x00AC
struct FNotifyData
{
	int                                                nId;                                                      // 0x0000(0x0004)
	int                                                nSoundId;                                                 // 0x0004(0x0004)
	int                                                nAnnouncerId;                                             // 0x0008(0x0004)
	struct Fdword                                      nSourcePlayerId;                                          // 0x000C(0x0004)
	struct Fdword                                      nTargetPlayerId;                                          // 0x0010(0x0004)
	unsigned long                                      bLocal : 1;                                               // 0x0014(0x0004)
	unsigned long                                      bLocalOnly : 1;                                           // 0x0014(0x0004)
	TEnumAsByte<ENotifyType>                           NotifyType;                                               // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FString                                     sSourceName;                                              // 0x001C(0x0010) (NeedCtorLink)
	struct FString                                     sTargetName;                                              // 0x002C(0x0010) (NeedCtorLink)
	struct FString                                     sAGodIconPath;                                            // 0x003C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sBGodIconPath;                                            // 0x004C(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bFriendly : 1;                                            // 0x005C(0x0004)
	unsigned long                                      bFriendly2 : 1;                                           // 0x005C(0x0004)
	int                                                nSkin;                                                    // 0x0060(0x0004)
	int                                                nGodA;                                                    // 0x0064(0x0004)
	int                                                nGodB;                                                    // 0x0068(0x0004)
	int                                                nGodAColored;                                             // 0x006C(0x0004)
	int                                                nGodBColored;                                             // 0x0070(0x0004)
	TEnumAsByte<ENotifySubTypeAccolade>                AccoladeType;                                             // 0x0074(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	unsigned long                                      bKillStreakOrCombo : 1;                                   // 0x0078(0x0004)
	int                                                nAccoladeIcon;                                            // 0x007C(0x0004)
	float                                              fExpireTime;                                              // 0x0080(0x0004)
	float                                              fDurationOverride;                                        // 0x0084(0x0004)
	struct FString                                     sMessage;                                                 // 0x0088(0x0010) (NeedCtorLink)
	int                                                nAlertType;                                               // 0x0098(0x0004)
	int                                                nNotifyFill;                                              // 0x009C(0x0004)
	int                                                nNotifyDelay;                                             // 0x00A0(0x0004)
	int                                                nNotifyColor;                                             // 0x00A4(0x0004)
	int                                                nNotifySize;                                              // 0x00A8(0x0004)
};

// ScriptStruct TgClient.TgGfxHudNotify.EventLogData
// 0x0008
struct FEventLogData
{
	int                                                RewindFrame;                                              // 0x0000(0x0004)
	int                                                EventIndex;                                               // 0x0004(0x0004)
};

// ScriptStruct TgClient.TgGfxLoadouts.ItemData_LoadoutsPage
// 0x004C
struct FItemData_LoadoutsPage
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	int                                                nLootId;                                                  // 0x0004(0x0004)
	int                                                nIconIndex;                                               // 0x0008(0x0004)
	int                                                nGemPrice;                                                // 0x000C(0x0004)
	int                                                nFavorPrice;                                              // 0x0010(0x0004)
	int                                                nSubType;                                                 // 0x0014(0x0004)
	unsigned long                                      bNew : 1;                                                 // 0x0018(0x0004)
	unsigned long                                      bOwned : 1;                                               // 0x0018(0x0004)
	unsigned long                                      bPurchasable : 1;                                         // 0x0018(0x0004)
	struct FString                                     sName;                                                    // 0x001C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDescription;                                             // 0x002C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sImagePath;                                               // 0x003C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgGfxPartyManagement.PlayerBtn
// 0x0028
struct FPlayerBtn
{
	class UTgGFxObject*                                pObj;                                                     // 0x0000(0x0008)
	class UTgGFxObject*                                MicrophoneIcon;                                           // 0x0008(0x0008)
	class UTgGFxObject*                                Avatar;                                                   // 0x0010(0x0008)
	class UTgGFxObject*                                Pending;                                                  // 0x0018(0x0008)
	class UTgGFxObject*                                SignificanceIcon;                                         // 0x0020(0x0008)
};

// ScriptStruct TgClient.TgGfxPartyManagement.ListPlayerData
// 0x0020
struct FListPlayerData
{
	int                                                lpd_PlayerId;                                             // 0x0000(0x0004)
	int                                                lpd_AvatarId;                                             // 0x0004(0x0004)
	int                                                lpd_PlayedGodId;                                          // 0x0008(0x0004)
	int                                                lpd_PlayerLevel;                                          // 0x000C(0x0004)
	struct FString                                     lpd_PlayerName;                                           // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgGfxPlayerProfile.MatchMembersFilter
// 0x000C
struct FMatchMembersFilter
{
	int                                                matchId;                                                  // 0x0000(0x0004)
	class UGFxObject*                                  membersFilterArray;                                       // 0x0004(0x0008)
};

// ScriptStruct TgClient.TgGfxProfileAchievements.AchievementData_ProfileAchievements
// 0x0080
struct FAchievementData_ProfileAchievements
{
	int                                                achievementType;                                          // 0x0000(0x0004)
	int                                                achievementProgress;                                      // 0x0004(0x0004)
	int                                                achievementGoalProgress;                                  // 0x0008(0x0004)
	int                                                pointValue;                                               // 0x000C(0x0004)
	int                                                displayId;                                                // 0x0010(0x0004)
	int                                                goalGroupId;                                              // 0x0014(0x0004)
	int                                                goalId;                                                   // 0x0018(0x0004)
	int                                                ActivityId;                                               // 0x001C(0x0004)
	int                                                dateInt;                                                  // 0x0020(0x0004)
	struct FString                                     nameMsg;                                                  // 0x0024(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     titleMsg;                                                 // 0x0034(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     descMsg;                                                  // 0x0044(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     dateMsg;                                                  // 0x0054(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     imgSource;                                                // 0x0064(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      hasCompleted : 1;                                         // 0x0074(0x0004)
	class UGFxObject*                                  gfxObj;                                                   // 0x0078(0x0008)
};

// ScriptStruct TgClient.TgGfxRacerDispatcher.RacerDispatcherState
// 0x000C
struct FRacerDispatcherState
{
	int                                                lastPlacement;                                            // 0x0000(0x0004)
	int                                                lastDeviceId;                                             // 0x0004(0x0004)
	int                                                lastLap;                                                  // 0x0008(0x0004)
};

// ScriptStruct TgClient.TgGfxReferrals.LevelRewardData
// 0x0010
struct FLevelRewardData
{
	int                                                LRD_Level;                                                // 0x0000(0x0004)
	int                                                LRD_Reward;                                               // 0x0004(0x0004)
	int                                                LRD_RewardType;                                           // 0x0008(0x0004)
	int                                                LRD_Boost;                                                // 0x000C(0x0004)
};

// ScriptStruct TgClient.TgGfxReferrals.PlayedRewardData
// 0x0010
struct FPlayedRewardData
{
	int                                                PRD_Played;                                               // 0x0000(0x0004)
	int                                                PRD_Reward;                                               // 0x0004(0x0004)
	int                                                PRD_RewardType;                                           // 0x0008(0x0004)
	int                                                PRD_Boost;                                                // 0x000C(0x0004)
};

// ScriptStruct TgClient.TgGfxSpectatorHud.BotLifeData
// 0x001C
struct FBotLifeData
{
	unsigned long                                      bAlive : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bFirstUpdate : 1;                                         // 0x0000(0x0004)
	int                                                nSpawnTime;                                               // 0x0004(0x0004)
	int                                                nRespawnTime;                                             // 0x0008(0x0004)
	TArray<int>                                        m_DeathTimes;                                             // 0x000C(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.TgGfxTreasurePicker.GFxTreasureItem
// 0x0010
struct FGFxTreasureItem
{
	int                                                vendorId;                                                 // 0x0000(0x0004)
	int                                                lootId;                                                   // 0x0004(0x0004)
	class UGFxObject*                                  treasureItemData;                                         // 0x0008(0x0008)
};

// ScriptStruct TgClient.TgGameMoviePlayer.WebRegion
// 0x0028
struct FWebRegion
{
	int                                                nIndex;                                                   // 0x0000(0x0004)
	int                                                nLastStreamId;                                            // 0x0004(0x0004)
	struct FString                                     sLastURL;                                                 // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sName;                                                    // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClient.TgGfxChatInput.ChannelData
// 0x0014
struct FChannelData
{
	int                                                nChannel;                                                 // 0x0000(0x0004)
	struct FString                                     sName;                                                    // 0x0004(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClient.TgGFxEventQuestNotification.QuestRedirect
// 0x0010
struct FQuestRedirect
{
	int                                                RedirectTo;                                               // 0x0000(0x0004)
	int                                                RedirectData;                                             // 0x0004(0x0004)
	int                                                ReturnAfter;                                              // 0x0008(0x0004)
	int                                                ReturnData;                                               // 0x000C(0x0004)
};

// ScriptStruct TgClient.TgGfxLeaderboard.LdbdNameValue
// 0x0014
struct FLdbdNameValue
{
	struct FString                                     sName;                                                    // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nValue;                                                   // 0x0010(0x0004)
};

// ScriptStruct TgClient.TgGfxProfileOverview.MatchOutcome
// 0x0008
struct FMatchOutcome
{
	int                                                wins;                                                     // 0x0000(0x0004)
	int                                                losses;                                                   // 0x0004(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
