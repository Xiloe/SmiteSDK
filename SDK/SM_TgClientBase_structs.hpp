#pragma once

// SMITE (8.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SM_Basic.hpp"
#include "SM_TgGame_classes.hpp"
#include "SM_Core_classes.hpp"
#include "SM_Engine_classes.hpp"
#include "SM_GFxUI_classes.hpp"
#include "SM_PlatformCommon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_INVALIDATION_TYPE_PROPERTY                         0x00000080
#define CONST_FILTER_ACTIVE                                      0x00100000
#define CONST_ACQUISUTION_MANAGER_CHECK_FOR_ACQUISITON_POP       5.f
#define CONST_FA_POPUP_ML_CLAN_TRANSFER                          -11
#define CONST_ROLE_BUILD_STANDARD                                10770
#define CONST_ACQUISUTION_MANAGER_CLUMP_TIMER                    0.5f
#define CONST_CHAT_FLAG_IS_NEW                                   0x00000008
#define CONST_QUEUE_NGM3_DEV                                     10147
#define CONST_FA_POPUP_RETURN_TO_LOGIN                           -24
#define CONST_CHAT_FLAG_ONLY_OPEN                                0x00000004
#define CONST_TgGfxVendorStoreV2_Console_STORE_TIER3_COUNT       4
#define CONST_PT_DOUBLE_TEXT_INPUT                               9
#define CONST_TgGfxStoreChest_STORE_GOD_PACK_ITEM_ID             -1
#define CONST_PROFILE_REQUEST_INTERVAL                           3
#define CONST_PROFILE_REQUEST_BUFFER_COUNT                       2
#define CONST_CHAT_FLAG_FEEDBACK                                 0x00000001
#define CONST_PLAYER_STATUS_LoggedIn                             0x00000004
#define CONST_FA_POPUP_CHALLENGE_PASS                            -22
#define CONST_GOD_TARGETER_FLAG_MAKE_CLOSEABLE                   0x00000004
#define CONST_CHAT_FLAG_VGS                                      0x00000002
#define CONST_UPDATE_DELAY_COUNT                                 4
#define CONST_STORE_BUTTON_STACK_DISPLAY_COUNT                   4
#define CONST_TG_INTERVAL_NOREPEAT                               0
#define CONST_PT_BLOCKING                                        6
#define CONST_UPDATE_DELAY_RATE0                                 0
#define CONST_FILTER_RECOMMENDED_6                               0x00700006
#define CONST_PLAYER_STATUS_FriendReqSent                        0x00000040
#define CONST_FA_POPUP_SUBMIT                                    -1
#define CONST_UPDATE_DELAY_RATE1                                 50
#define CONST_FILTER_STARTER                                     0x00200000
#define CONST_QUEUE_JUNGLE_PRACTICE_PRESELECTED                  496
#define CONST_UPDATE_DELAY_RATE2                                 200
#define CONST_PLAYER_STATUS_Blocked                              0x00000010
#define CONST_GIFT_T2_ITEM_ID                                    19585
#define CONST_SEARCH_FLAG_PENDING_LOCAL                          0x0010
#define CONST_GOD_TARGETER_FLAG_DISABLE_MOVEMENT                 0x00000040
#define CONST_UPDATE_DELAY_RATE3                                 400
#define CONST_QUEUE_CLASH                                        466
#define CONST_UPDATE_DELAY_UNSUBSCRIBE_FORCE                     10000
#define CONST_UPDATE_DELAY_RATE0_BIT                             0x00
#define CONST_STORE_STD_GRID_GUIDE_COUNT                         32
#define CONST_ESPORTS_VIEWER_PASS_LTID                           57699
#define CONST_PT_EMAIL                                           7
#define CONST_STORE_TAB_COUNT                                    3
#define CONST_FILTER_DEF_HEALTH                                  0x00004000
#define CONST_UPDATE_DELAY_RATE1_BIT                             0x01
#define CONST_PT_DROP_DOWN_INPUT                                 10
#define CONST_UPDATE_DELAY_RATE2_BIT                             0x02
#define CONST_UPDATE_DELAY_RATE3_BIT                             0x04
#define CONST_TPGID_None                                         0x00
#define CONST_QUEUE_JOUST_PRACTICE                               464
#define CONST_GOD_TARGETER_FLAG_HIDE_OWN_GOD                     0x00000010
#define CONST_UPDATE_UNSUBSCRIBED_FORCE_BIT                      0x08
#define CONST_PLAYER_STATUS_InOurClan                            0x00000200
#define CONST_TG_UPDATE_QUEUE_STATS_SECS                         10.0f
#define CONST_DCTEAM_MAX_TOWERS                                  9
#define CONST_TG_INTERVAL_LOOP                                   -1
#define CONST_PARTY_INVITE_LOCKOUT_SECS                          5
#define CONST_PROCESS_ITEM_ALERT_SECS                            4.5f
#define CONST_CHAT_PRIORITY_DELAY                                0.25
#define CONST_PROCESS_SKILL_ALERT_SECS                           4.5f
#define CONST_TG_LOGIN_INFO_ACCOUNT_NAME                         0
#define CONST_TG_LOGIN_INFO_ACCOUNT_PASS                         1
#define CONST_FA_POPUP_CONFIRM_CLAN_KICK                         -42
#define CONST_CURRENT_SEASON                                     4
#define CONST_QUEUE_PVE_HARD                                     485
#define CONST_FA_POPUP_NAME_CHANGE                               -7
#define CONST_LOBBY_MAX_TEAM_COUNT                               4
#define CONST_HIDE_SORT_ORDER_SENTINEL                           0
#define CONST_ESPORTS_WEEKLY_VIEWS_ACTIVITY                      2450
#define CONST_GOD_TARGETER_FLAG_SHOW_OWN_TEAM                    0x00000001
#define CONST_GOD_TARGETER_FLAG_SHOW_BOTH_TEAMS                  0x00000002
#define CONST_SEARCH_FLAG_IGNORE_ALL                             0x0300
#define CONST_FA_POPUP_NAME_CHANGE_CONT                          -8
#define CONST_FILTER_MAG_ALL                                     0x00000C88
#define CONST_FA_POPUP_CONTINUE_ITEM_PURCHASE                    -62
#define CONST_PT_DESC                                            1
#define CONST_GOD_TARGETER_FLAG_HIDE_SELF                        0x00000008
#define CONST_FA_POPUP_AUTOCONFIGURE_SETTINGS                    -49
#define CONST_PT_SINGLE_INPUT                                    4
#define CONST_GOD_TARGETER_FLAG_PREVENT_TARGETTING_DEAD_GODS     0x00000020
#define CONST_SEARCH_FLAG_ONLINE                                 0x0002
#define CONST_GIFT_EMOTE_ITEM_ID                                 19583
#define CONST_GIFT_VP_ITEM_ID                                    19584
#define CONST_ROLE_BUILD_TUTORIAL_ARENA                          11086
#define CONST_FA_POPUP_TRADE_DECLINE                             -14
#define CONST_GIFT_AWESOME_ITEM_ID                               19586
#define CONST_FA_POPUP_TRADE_ACCEPT                              -13
#define CONST_PT_INPUT                                           2
#define CONST_FA_POPUP_FRIEND_MESSAGE_SUBMIT                     -9
#define CONST_SORT_ORDERS_PER_SECTION                            100
#define CONST_FA_POPUP_BUY_GEMS                                  -3
#define CONST_FILTER_CONSUMABLE                                  0x00080000
#define CONST_PT_TREASURE_PURCHASE                               8
#define CONST_PT_DUAL_INPUT                                      3
#define CONST_PT_DROP_DOWN                                       5
#define CONST_PT_DROP_DOWN_DOUBLE                                11
#define CONST_FA_POPUP_CANCEL                                    -2
#define CONST_FA_POPUP_PS4_STORE_CONFIRM                         -4
#define CONST_QUEUE_JOUST_3V3_TRAINING                           483
#define CONST_FA_POPUP_CLAN_INVITE                               -5
#define CONST_FA_POPUP_ML_CLAN_QUIT                              -10
#define CONST_TgVendorData_STORE_TIER4_COUNT                     4
#define CONST_ESPORTS_CURRENT_SEASON                             7
#define CONST_FA_POPUP_ML_CLAN_TAG                               -12
#define CONST_FA_POPUP_ERROR_OK                                  -6
#define CONST_FA_POPUP_PREFERRED_SITE                            -15
#define CONST_MCTS_STYLE_WAIT                                    0x01
#define CONST_FA_POPUP_FRIENDS_DECLINE_ALL                       -16
#define CONST_FA_POPUP_ENTER_PASSWORD                            -35
#define CONST_FA_POPUP_FRIENDS_ACCEPT_ALL                        -17
#define CONST_FA_POPUP_STORE_SELL_CONFIRM                        -18
#define CONST_FA_POPUP_WATCH_NEW_USER_VIDEO                      -19
#define CONST_FA_POPUP_RETURN_TO_LOBBY                           -20
#define CONST_STORE_FILTER_OnSale                                0x00000001
#define CONST_ESPORTS_TEAMS_PER_MATCH                            2
#define CONST_FA_POPUP_QUEUE_FOR_TUTORIAL                        -21
#define CONST_FA_POPUP_ADD_FRIEND                                -23
#define CONST_FA_POPUP_TURN_OFF_ITEM_AUTO_BUY                    -25
#define CONST_DCTEAM_MAX_BANS                                    5
#define CONST_INVALIDATION_TYPE_DATA                             0x00000020
#define CONST_FA_POPUP_CONTINUE_PLAY_WITH_LOGGEDIN_PLAYER        -26
#define CONST_FA_POPUP_CHANGE_PARTY_VISIBILITY                   -27
#define CONST_FA_POPUP_SUBMIT_EMAIL                              -28
#define CONST_LOBBY_PLAYERS_PER_TEAM                             5
#define CONST_QUEUE_ARENA_COOP_MEDIUM                            468
#define CONST_FA_POPUP_DISBAND_PARTY                             -50
#define CONST_FA_POPUP_CONFIRM_CHARACTER_BUILDER_SAVE            -29
#define CONST_FA_POPUP_CANCEL_CHARACTER_BUILDER_SAVE             -30
#define CONST_FA_POPUP_EXIT_GAME                                 -31
#define CONST_FA_POPUP_TREASURE_PURCHASE                         -32
#define CONST_FA_POPUP_APPLY_TO_CLAN                             -33
#define CONST_FA_POPUP_SPECTATE_MATCH_ID                         -34
#define CONST_FA_POPUP_ENTER_PASSWORD_REPLAY                     -36
#define CONST_PLAYER_STATUS_VoiceMuted                           0x00000020
#define CONST_FA_POPUP_SUBMIT_REDEEM_CODE                        -37
#define CONST_FA_POPUP_ABANDON_QUEST                             -38
#define CONST_STORE_INV_COL_NUM                                  6
#define CONST_STORE_FILTER_SortOnly                              0x00000000
#define CONST_FA_POPUP_SKIP_QUEST                                -39
#define CONST_FA_POPUP_DECLINE_STEAM_LINK                        -65
#define CONST_FA_POPUP_CHANGE_MATCH                              -51
#define CONST_FA_POPUP_CONFIRM_CLAN_PROMOTE                      -40
#define CONST_FA_POPUP_CONFIRM_CLAN_DEMOTE                       -41
#define CONST_FA_POPUP_MULTI_QUEUE_PROCEED                       -43
#define CONST_TG_MAX_TOTAL_PING                                  10
#define CONST_STORE_STAT_COUNT                                   20
#define CONST_FA_POPUP_BLOCK_PLAYER                              -44
#define CONST_FA_POPUP_EDIT_PLAYER_NOTE                          -45
#define CONST_QUEUE_NGM3_CUSTOM_DEV                              10148
#define CONST_ESPORTS_UPDATE_DELAY_SECS                          300
#define CONST_FA_POPUP_DLC_ACCEPT                                -46
#define CONST_FA_POPUP_DLC_DECLINE                               -47
#define CONST_FA_POPUP_REPORT_PLAYER                             -53
#define CONST_FA_POPUP_OPEN_SETTINGS_MENU                        -48
#define CONST_FA_POPUP_CANCEL_MATCH_CHANGE                       -52
#define CONST_STORE_FILTER_None                                  0x00000000
#define CONST_QUEUE_ASSAULT_COOP                                 454
#define CONST_FA_POPUP_QUIT_TRAINING                             -54
#define CONST_FA_POPUP_QUEUE_ARENA_COOP                          -55
#define CONST_SEARCH_FLAG_LOCAL                                  0x0001
#define CONST_QUEUE_ADVENTURES_CTF                               486
#define CONST_FA_POPUP_GOTO_COOP_QUEUES                          -56
#define CONST_FA_POPUP_OPEN_PARTY                                -57
#define CONST_FA_POPUP_CONTINUE_QUEUE_JOIN                       -58
#define CONST_FILTER_RECOMMENDED                                 0x00700001
#define CONST_REWARD_SECTION_SENTINEL                            0
#define CONST_FA_POPUP_PREFERRED_SITE_QUEUE                      -59
#define CONST_TgVendorData_SECONDARY_BASE_RELIC_ITEMID           18307
#define CONST_FA_POPUP_SKIP_QUEUE_TUTORIAL                       -60
#define CONST_FA_POPUP_SWITCH_TO_PRACTICE_QUEUE                  -61
#define CONST_FA_POPUP_SUBMIT_TWO_FACTOR_AUTH                    -63
#define CONST_FA_POPUP_STEAM_LINK_WARNING                        -64
#define CONST_FA_POPUP_SUBMIT_STEAM_LINK                         -66
#define CONST_FA_POPUP_SUBMIT_CROSSPLAY                          -67
#define CONST_FA_POPUP_ACCEPT_PARTY_INVITE                       -68
#define CONST_SEARCH_MASK_ALL                                    0x0333
#define CONST_FA_POPUP_REJECT_PARTY_INVITE                       -69
#define CONST_STORE_FILTER_COUNT                                 4
#define CONST_FILTER_MAG_PENETRATION                             0x00000800
#define CONST_FA_POPUP_CREATE_AND_LINK_ACCOUNT                   -70
#define CONST_FA_POPUP_LINK_EXISTING_HIREZ_ACCOUNT               -71
#define CONST_INVALIDATION_TYPE_CUSTOM_4                         0x20000000
#define CONST_FA_POPUP_CONTINUE_WITHOUT_LINKING                  -72
#define CONST_TOTAL_FEATURED_QUEUES                              4
#define CONST_FA_POPUP_NEVER_PLAYED_SMITE_BEFORE                 -74
#define CONST_FA_POPUP_HAVE_PLAYED_SMITE_BEFORE                  -73
#define CONST_FA_POPUP_CONFIRM_NO_LINKING                        -75
#define CONST_FA_POPUP_CANCEL_TWO_FACTOR_AUTH                    -76
#define CONST_DCLOBBY_MAX_CLASSES                                150
#define CONST_FA_POPUP_CANCEL_CHALLENGE_PASS                     -77
#define CONST_QUEUE_ARENA_SOLO                                   443
#define CONST_MAX_ESPORTS_ROUNDS                                 3
#define CONST_ESPORTS_PHASE_NONE                                 0
#define CONST_ESPORTS_LIVE_WINDOW_MINS                           30
#define CONST_ESPORTS_VIEWER_PASS_PLUS_LTID                      57700
#define CONST_PERMISS_MASK_ANY_LOGGEDIN                          0x0000001E
#define CONST_ESPORTS_VIEWER_PASS_POINTS_PACK_LTID               57870
#define CONST_QUEUE_CONQUEST_RANKED_CONTROLLER2                  505
#define CONST_ESPORTS_ACTIVITY_ID_FINAL_REWARD                   2451
#define CONST_FILTER_RECOMMENDED_3                               0x00700003
#define CONST_FILTER_PHY_POWER                                   0x00000004
#define CONST_PROCESS_MESSAGE_SECS                               2.0f
#define CONST_NUM_UI_DEVICES                                     25
#define CONST_STORE_SUBFILTER_COUNT                              19
#define CONST_TAG_HIDE_DURATION                                  5
#define CONST_MAX_UI_EFFECTS                                     32
#define CONST_QUEUE_JOUST_3V3_SOLO                               464
#define CONST_VENDOR_MENU_LOOT_TABLE_ID                          474
#define CONST_MAX_DAMAGE_CLIPS                                   5
#define CONST_QUEUED_DAMAGE_INFO_DELAY                           0.1
#define CONST_QUEUE_CONQUEST_PREMADE                             423
#define CONST_ROLE_BUILD_MID                                     18013
#define CONST_QUEUE_NOVICE                                       424
#define CONST_STORE_FILTER_Default                               0x00000007
#define CONST_QUEUE_CONQUEST                                     426
#define CONST_QUEUE_JOUST_SOLO                                   427
#define CONST_QUEUE_CONQUEST_CHALLENGE                           429
#define CONST_QUEUE_CONQUEST_RANKED                              430
#define CONST_TgGfxVendorStoreV2_Console_STORE_TIER4_COUNT       4
#define CONST_INVALIDATION_TYPE_CUSTOM_2                         0x80000000
#define CONST_QUEUE_MOTD                                         434
#define CONST_QUEUE_ARENA                                        435
#define CONST_INVALIDATION_TYPE_STATE                            0x00000010
#define CONST_QUEUE_ARENA_DEV                                    437
#define CONST_QUEUE_ARENA_CHALLENGE                              438
#define CONST_QUEUE_DOMINATION_CHALLENGE                         439
#define CONST_QUEUE_ASSAULT_CHALLENGE                            446
#define CONST_QUEUE_JOUST_SOLO_RANKED                            440
#define CONST_QUEUE_JUNGLE_PRACTICE                              444
#define CONST_QUEUE_JOUST_CHALLENGE                              441
#define CONST_QUEUE_TEAM_RANKED                                  442
#define CONST_FILTER_RECOMMENDED_4                               0x00700004
#define CONST_QUEUE_ARENA_PRACTICE                               443
#define CONST_MAX_MEMBER                                         512
#define CONST_QUEUE_ASSAULT                                      445
#define CONST_QUEUE_JOUST_3V3                                    448
#define CONST_QUEUE_JOUST                                        449
#define CONST_QUEUE_JOUST_3V3_RANKED                             450
#define CONST_QUEUE_CONQUEST_SOLO_MASTER                         451
#define CONST_QUEUE_ARENA_LEAGUE                                 452
#define CONST_INVALIDATION_TYPE_CUSTOM_3                         0x40000000
#define CONST_QUEUE_JOUST_COOP                                   456
#define CONST_ROLE_BUILD_SOLO                                    10769
#define CONST_FILTER_PHY_CRIT                                    0x00000010
#define CONST_QUEUE_ARENA_COOP                                   457
#define CONST_QUEUE_CONQUEST_PRACTICE                            458
#define CONST_TAB_LEAGUE                                         10574
#define CONST_MAX_INVITES_AT_ONCE                                10
#define CONST_QUEUE_SIEGE                                        459
#define CONST_PLAYER_STATUS_InHirezFriends                       0x00008000
#define CONST_QUEUE_SIEGE_CHALLENGE                              460
#define CONST_QUEUE_CONQUEST_COOP                                461
#define CONST_QUEUE_SOVEREIGN_CUSTOM                             10126
#define CONST_QUEUE_ARENA_TUTORIAL                               462
#define CONST_QUEUE_CONQUEST_TUTORIAL                            463
#define CONST_SEARCH_FLAG_NONE                                   0x0000
#define CONST_QUEUE_EVENT                                        465
#define CONST_QUEUE_CLASH_CHALLENGE                              467
#define CONST_QUEUE_CLASH_COOP                                   469
#define CONST_STORE_STD_LIST_GUIDE_COUNT                         6
#define CONST_QUEUE_CLASH_PRACTICE                               470
#define CONST_STORE_ITEM_DISPLAY_COUNT                           30
#define CONST_FILTER_OWNED                                       0x00400000
#define CONST_QUEUE_CLASH_TUTORIAL                               471
#define CONST_QUEUE_ARENA_TRAINING                               482
#define CONST_MCTS_STYLE_NONE                                    0x00
#define CONST_QUEUE_PVE_EASY                                     484
#define CONST_QUEUE_ADVENTURES_CTF_CUSTOM                        487
#define CONST_QUEUE_ADVENTURES_RACER                             488
#define CONST_GENERATOR_UPDATE_SECS                              300
#define CONST_QUEUE_ADVENTURES_DUNGEON                           489
#define CONST_FILTER_PHY_ALL                                     0x0000007C
#define CONST_QUEUE_ADVENTURES_DUNGEON_HARD                      490
#define CONST_TAB_CUSTOM                                         10497
#define CONST_QUEUE_ADVENTURES_CORRUPT                           491
#define CONST_QUEUE_ADVENTURES_LOKI_EASY                         492
#define CONST_QUEUE_ADVENTURES_LOKI_MED                          493
#define CONST_QUEUE_ADVENTURES_LOKI_HARD                         494
#define CONST_QUEUE_MULTI_QUEUE                                  999
#define CONST_QUEUE_ADVENTURES_FOX                               495
#define CONST_PLAYER_STATUS_InAClan                              0x00001000
#define CONST_QUEUE_ADVENTURES_HEL                               497
#define CONST_QUEUE_ADVENTURES_MULTI_TEAM                        498
#define CONST_QUEUE_ADVENTURES_ARENA_CUSTOM                      10151
#define CONST_QUEUE_ADVENTURES_JOUST                             499
#define CONST_QUEUE_ADVENTURES_DOMINATION                        500
#define CONST_FILTER_CROWD_CONTROL_R                             0x01000000
#define CONST_QUEUE_EVENT_2                                      508
#define CONST_QUEUE_S6_ADVENTURES_ARENA                          508
#define CONST_TgVendorData_BASE_RELIC_ITEMID                     12333
#define CONST_QUEUE_ADVENTURES_DOMINATION_CUSTOM                 10174
#define CONST_INVALIDATION_TYPE_ALIGNMENT                        0x00000008
#define CONST_QUEUE_CONQUEST_RANKED_CONTROLLER                   504
#define CONST_QUEUE_JOUST_3V3_RANKED_CONTROLLER                  506
#define CONST_QUEUE_JOUST_3V3_RANKED_CONTROLLER2                 503
#define CONST_QUEUE_JOUST_1V1_RANKED_CONTROLLER                  502
#define CONST_ROLE_BUILD_JUNGLE                                  10767
#define CONST_QUEUE_JOUST_1V1_RANKED_CONTROLLER2                 507
#define CONST_QUEUE_SOVEREIGN                                    10127
#define CONST_FRIEND_REQUEST_FREQ_SECS                           60
#define CONST_MAX_PARTY_SIZE                                     5
#define CONST_SEARCH_FLAG_PENDING_ONLINE                         0x0020
#define CONST_SEARCH_FLAG_IGNORE_LOCAL                           0x0100
#define CONST_PLAYER_STATUS_Online                               0x00000001
#define CONST_SEARCH_FLAG_IGNORE_ONLINE                          0x0200
#define CONST_STORE_RECOMMENDED_ITEM_MAX                         64
#define CONST_SEARCH_MASK_START_LOCAL                            0x0011
#define CONST_SEARCH_MASK_START_ONLINE                           0x0022
#define CONST_SEARCH_MASK_START_ALL                              0x0033
#define CONST_FILTER_DEF_ALL                                     0x0100F000
#define CONST_SEARCH_MASK_PENDING_ANY                            0x0030
#define CONST_SEARCH_DELAY_ONLINE_MIN_SECS                       1.f
#define CONST_TAB_NORMAL                                         10496
#define CONST_SEARCH_DELAY_NO_SEARCH                             -1.f
#define CONST_CHAT_COUNT                                         8
#define CONST_CHAT_TAB_COUNT                                     2
#define CONST_STORE_ACTIVE_DISPLAY_COUNT                         2
#define CONST_NUM_LOGIN_GAMEPAD_COMBO                            3
#define CONST_NUM_PLAYER_INVITE_ROWS                             5
#define CONST_NUM_BUDDY_ROWS                                     6
#define CONST_UNIT_INVENTORY_LENGTH                              10
#define CONST_FILTER_OWNED_CONSUMABLE                            0x00400002
#define CONST_CLASS_LOCKIN_FAIL                                  0
#define CONST_TRADE_ONLY_DURATION                                10.f
#define CONST_MAX_REROLLS                                        1
#define CONST_MAX_PARTY_REFRESH_SECS                             0
#define CONST_PLAYER_STATUS_None                                 0x00000000
#define CONST_MATCH_COUNT_REQUIREMENT                            5
#define CONST_TAB_PRACTICE                                       10495
#define CONST_TAB_COOP                                           10748
#define CONST_GAME_MODE_GROUPS                                   1092
#define CONST_GAME_TYPE                                          1093
#define CONST_UI_GROUPS                                          1033
#define CONST_DIFFICULTY_GROUPS                                  116
#define CONST_PLAYER_STATUS_InTitle                              0x00000002
#define CONST_PLAYER_STATUS_DoNotDisturb                         0x00000008
#define CONST_PLAYER_STATUS_FriendReqReceived                    0x00000080
#define CONST_PLAYER_STATUS_InFriends                            0x00000100
#define CONST_TgVendorData_STORE_TIER2_COUNT                     4
#define CONST_PLAYER_STATUS_ChatMuted                            0x00000800
#define CONST_PLAYER_STATUS_InOurParty                           0x00000400
#define CONST_PLAYER_STATUS_InAParty                             0x00002000
#define CONST_PLAYER_STATUS_InPortalFriends                      0x00004000
#define CONST_PLAYER_STATUS_MASK_ALL                             0x0000FFFF
#define CONST_GENERATOR_EXPIRE_SECS                              1200
#define CONST_TPGID_Friends                                      0x01
#define CONST_TPGID_Party                                        0x02
#define CONST_TPGID_Clan                                         0x04
#define CONST_TgGfxVendorStoreV2_Console_STORE_TIER1_COUNT       4
#define CONST_TPGID_LocalPlayer                                  0x08
#define CONST_TPGID_DynamicStart                                 0x10
#define CONST_MAX_NUM_SHOP_ITEMS                                 6
#define CONST_MAX_NUM_INV_ITEMS                                  6
#define CONST_CONFIG_SET_BUILDER                                 51
#define CONST_MAX_ADV_ITEMS                                      6
#define CONST_FILTER_ALL                                         -1
#define CONST_FILTER_DEF_PHYSICAL                                0x00001000
#define CONST_FILTER_POPULAR                                     0x00000002
#define CONST_STORE_REC_LIST_COUNT                               12
#define CONST_FILTER_PHY_ATTACK_SPEED                            0x00000008
#define CONST_FILTER_PHY_LIFESTEAL                               0x00000020
#define CONST_FILTER_PHY_PENETRATION                             0x00000040
#define CONST_STORE_STD_LIST_COUNT                               12
#define CONST_FILTER_MAG_POWER                                   0x00000080
#define CONST_BTN_HIGH_ALPHA                                     100
#define CONST_FILTER_MAG_MANA                                    0x00000100
#define CONST_FILTER_MAG_MP5                                     0x00000200
#define CONST_FILTER_MAG_LIFESTEAL                               0x00000400
#define CONST_FILTER_DEF_MAGICAL                                 0x00002000
#define CONST_FILTER_DEF_HP5                                     0x00008000
#define CONST_FILTER_DEF_AURA                                    0x00010000
#define CONST_FILTER_MOVEMENT                                    0x00020000
#define CONST_FILTER_COOLDOWN                                    0x00040000
#define CONST_STORE_TIER_GUIDE_COUNT                             3
#define CONST_FILTER_UTIL_ALL                                    0x00070300
#define CONST_FILTER_OWNED_ACTIVE                                0x00400001
#define CONST_PERMISS_MASK_OUTOFGAME                             0x0000000F
#define CONST_FILTER_OWNED_ITEM                                  0x00400003
#define CONST_FILTER_RECOMMENDED_2                               0x00700002
#define CONST_FILTER_RECOMMENDED_5                               0x00700005
#define CONST_FILTER_RECOMMENDED_7                               0x00700007
#define CONST_BTN_LOW_ALPHA                                      25
#define CONST_STORE_BTN_COUNT                                    2
#define CONST_STORE_REC_ITEM_MAX                                 4
#define CONST_STORE_REC_HEAD_COUNT                               4
#define CONST_INVALIDATION_TYPE_POSITION                         0x00000001
#define CONST_STORE_REC_GRID_COUNT                               16
#define CONST_STORE_STD_GRID_COUNT                               24
#define CONST_TgVendorData_STORE_TIER_ROW_COUNT                  4
#define CONST_TgVendorData_STORE_TIER1_COUNT                     4
#define CONST_STORE_STATS_COUNT                                  20
#define CONST_TgVendorData_STORE_TIER3_COUNT                     4
#define CONST_STORE_STD_GRID_COLUMNS                             4
#define CONST_STORE_STAT_GUIDE_COUNT                             16
#define CONST_ROLE_BUILD_CUSTOM                                  18015
#define CONST_INVALIDATION_TYPE_ALL                              0xFFFFFFFF
#define CONST_ROLE_BUILD_ARENA                                   10782
#define CONST_ROLE_BUILD_CARRY                                   18012
#define CONST_ROLE_BUILD_SUPPORT                                 10768
#define CONST_ROLE_BUILD_TUTORIAL                                10784
#define CONST_ROLE_BUILD_TUTORIAL_CONQUEST                       11085
#define CONST_NAME_CHANGE_ITEM                                   8186
#define CONST_STORE_FILTER_Available                             0x00000002
#define CONST_STORE_FILTER_NotOwned                              0x00000004
#define CONST_STORE_FILTER_GodOwned                              0x00000008
#define CONST_STORE_FILTER_Avatars                               0x00000010
#define CONST_TgGfxStoreViewer_STORE_GOD_PACK_ITEM_ID            -1
#define CONST_INVALIDATION_TYPE_NONE                             0x00000000
#define CONST_STORE_ROW_NUM                                      5
#define CONST_INVALIDATION_TYPE_SIZE                             0x00000002
#define CONST_INVALIDATION_TYPE_BOUNDS                           0x00000003
#define CONST_INVALIDATION_TYPE_LAYOUT                           0x00000004
#define CONST_INVALIDATION_TYPE_LOAD                             0x00000040
#define CONST_INVALIDATION_TYPE_SCROLL                           0x00000100
#define CONST_INVALIDATION_TYPE_CUSTOM_5                         0x10000000
#define CONST_UNIT_SHOP_LENGTH                                   6
#define CONST_STORE_COL_NUM                                      6
#define CONST_STORE_RECOMMENDED_DIVIDER_COUNT                    5
#define CONST_STORE_CIRCULAR_SELECTION_COUNT                     11
#define CONST_STORE_RECOMMENDED_TEXT_COUNT                       5
#define CONST_STORE_INVENTORY_DISPLAY_COUNT                      6
#define CONST_STORE_INVENTORY_FLASH_COUNT                        8
#define CONST_PERMISS_FLAG_LOGIN                                 0x00000001
#define CONST_STORE_CONSUMABLE_DISPLAY_COUNT                     2
#define CONST_TgGfxVendorStoreV2_Console_STORE_TIER_ROW_COUNT    4
#define CONST_TgGfxVendorStoreV2_Console_STORE_TIER2_COUNT       4
#define CONST_VGS_LIST_COUNT                                     15
#define CONST_RECENT_COMMANDS_NUM                                30
#define CONST_MCTS_STYLE_MCTS_ONLY                               0x02
#define CONST_DCLOBBY_MAX_TRADE_DATA                             5
#define CONST_DCLOBBY_MAX_TEAMS                                  4
#define CONST_DCTEAM_MAX_MEMBERS                                 10
#define CONST_POPUP_MANAGER_UPDATE_DELAY                         250
#define CONST_PERMISS_FLAG_MAINLOBBY                             0x00000002
#define CONST_PERMISS_FLAG_MATCHLOBBY                            0x00000004
#define CONST_PERMISS_FLAG_ENDOFMATCH                            0x00000008
#define CONST_PERMISS_FLAG_INGAME                                0x00000010
#define CONST_PERMISS_MASK_FRONTEND                              0x0000000E
#define CONST_PERMISS_MASK_ALL                                   0x0000001F

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TgClientBase.TgAcquisitionManager.AcquisitionType
enum class EAcquisitionType : uint8_t
{
	MA_AT_NONE                     = 0,
	MA_AT_DIRECT_UNLOCK            = 1,
	MA_AT_CHEST_UNLOCK             = 2,
	MA_AT_RETURNING_PLAYER_REWARD  = 3,
	MA_AT_GIFT_RECEIVED            = 4,
	MA_AT_EXTERNAL                 = 5,
	MA_AT_FWOTD                    = 6,
	MA_AT_LEVEL_REWARD             = 7,
	MA_AT_EVENT_REWARD             = 8,
	MA_AT_BATTLEPASS_REWARD        = 9,
	MA_AT_QUEST_REWARD             = 10,
	MA_AT_ACHIEVEMENT              = 11,
	MA_AT_ACHIEVEMENT_REWARD       = 12,
	MA_AT_DAILY_REWARD             = 13,
	MA_AT_ACCOUNT_BOOSTER_BONUS    = 14,
	MA_AT_MAX                      = 15
};


// Enum TgClientBase.TgAcquisitionManager.AcquisitionSubType
enum class EAcquisitionSubType : uint8_t
{
	MA_AST_NONE                    = 0,
	MA_AST_BATTLEPASS_FREE_REWARD  = 1,
	MA_AST_BATTLEPASS_PREMIUM_REWARD = 2,
	MA_AST_MAX                     = 3
};


// Enum TgClientBase.TgBrowserManager.WebPageType
enum class EWebPageType : uint8_t
{
	WPT_Gold                       = 0,
	WPT_CreateAccount              = 1,
	WPT_RecoverPassword            = 2,
	WPT_RecoverUsername            = 3,
	WPT_GodPack                    = 4,
	WPT_FacebookPromo              = 5,
	WPT_TwitterPromo               = 6,
	WPT_RecruitPromo               = 7,
	WPT_ReferLinkup                = 8,
	WPT_MAX                        = 9
};


// Enum TgClientBase.TgGFxObject.EGFxFocusMode
enum class EGFxFocusMode : uint8_t
{
	GFX_FOCUSMODE_Default          = 0,
	GFX_FOCUSMODE_Loop             = 1,
	GFX_FOCUSMODE_Stick            = 2,
	GFX_FOCUSMODE_MAX              = 3
};


// Enum TgClientBase.TgClientHUD.TgClientVisibilityMode
enum class ETgClientVisibilityMode : uint8_t
{
	CVM_NORMAL                     = 0,
	CVM_ENEMY                      = 1,
	CVM_PLAYERS                    = 2,
	CVM_ALL                        = 3,
	CVM_MAX                        = 4
};


// Enum TgClientBase.TgClientHUD.TgClientGameStates
enum class ETgClientGameStates : uint8_t
{
	CGS_NONE                       = 0,
	CGS_DISCONNECTED               = 1,
	CGS_LOGGED_IN                  = 2,
	CGS_IN_PRACTICE                = 3,
	CGS_IN_MATCH                   = 4,
	CGS_END_OF_MATCH               = 5,
	CGS_SPECTATOR                  = 6,
	CGS_MAX                        = 7
};


// Enum TgClientBase.TgClientHUD.TgGameSceneInfoType
enum class ETgGameSceneInfoType : uint8_t
{
	TGGSIT_ALL                     = 0,
	TGGSIT_Global                  = 1,
	TGGSIT_KBM                     = 2,
	TGGSIT_CONTROLLER              = 3,
	TGGSIT_SPECTATOR_KBM           = 4,
	TGGSIT_SPECTATOR_CONTROLLER    = 5,
	TGGSIT_MAX                     = 6
};


// Enum TgClientBase.TgClientHUD.TgLobbySceneInfoType
enum class ETgLobbySceneInfoType : uint8_t
{
	TGLSIT_ALL                     = 0,
	TGLSIT_PC                      = 1,
	TGLSIT_Console                 = 2,
	TGLSIT_MAX                     = 3
};


// Enum TgClientBase.TgMoviePlayer.EUIChangeEvent
enum class EUIChangeEvent : uint8_t
{
	UICE_PlayerItems               = 0,
	UICE_PlayerInfo                = 1,
	UICE_PlayerVitals              = 2,
	UICE_PlayerStats               = 3,
	UICE_GameClock                 = 4,
	UICE_GameScore                 = 5,
	UICE_GameTransition            = 6,
	UICE_DeviceStateChange         = 7,
	UICE_PlayerSurrender           = 8,
	UICE_ClientSettingsChange      = 9,
	UICE_PlayerReady               = 10,
	UICE_InventoryChange           = 11,
	UICE_PlayerRespawn             = 12,
	UICE_GameCapturePointControlA  = 13,
	UICE_GameCapturePointControlB  = 14,
	UICE_GameCapturePointControlC  = 15,
	UICE_TutorialHighlighter       = 16,
	UICE_MAX                       = 17
};


// Enum TgClientBase.TgMoviePlayer.EFeatureType
enum class EFeatureType : uint8_t
{
	EFT_Item                       = 0,
	EFT_TopBarNavigation           = 1,
	EFT_ExternalURL                = 2,
	EFT_InternalURL                = 3,
	EFT_OpenVideo                  = 4,
	EFT_RunFunction                = 5,
	EFT_EsportsMatch               = 6,
	EFT_WebPanel                   = 7,
	EFT_ExternalPurchase           = 8,
	EFT_SKU_Purchase               = 9,
	EFT_MAX                        = 10
};


// Enum TgClientBase.TgMoviePlayer.ENavigationActions
enum class ENavigationActions : uint8_t
{
	ENA_None                       = 0,
	ENA_Home                       = 1,
	ENA_Profile                    = 2,
	ENA_Wisdom                     = 3,
	ENA_Store                      = 4,
	ENA_Social                     = 5,
	ENA_Competitive                = 6,
	ENA_Play                       = 7,
	ENA_Gods                       = 8,
	ENA_Event                      = 9,
	ENA_BattlePass                 = 10,
	ENA_TreasureChest              = 11,
	ENA_Quests                     = 12,
	ENA_Settings                   = 13,
	ENA_ClaimGodPack               = 14,
	ENA_Reward                     = 15,
	ENA_ReferAFriend               = 16,
	ENA_Adventures                 = 17,
	ENA_AdventuresVault            = 18,
	ENA_MatchLobby                 = 19,
	ENA_TutorialPrompt             = 20,
	ENA_ESportsStore               = 21,
	ENA_WhatsNew                   = 22,
	ENA_Simulmedia                 = 23,
	ENA_MAX                        = 24
};


// Enum TgClientBase.TgMoviePlayer.EActiveEvents
enum class EActiveEvents : uint8_t
{
	EAE_None                       = 0,
	EAE_Seasonal                   = 1,
	EAE_Seasonal2                  = 2,
	EAE_Seasonal3                  = 3,
	EAE_SeasonalRedBull            = 4,
	EAE_SeasonalCalendar           = 5,
	EAE_MAX                        = 6
};


// Enum TgClientBase.TgMoviePlayer.ELocationLog
enum class ELocationLog : uint8_t
{
	ELL_NONE                       = 0,
	ELL_STORE                      = 1,
	ELL_GODPAGE                    = 2,
	ELL_MATCHLOBBY                 = 3,
	ELL_EVENT                      = 4,
	ELL_CHEAT                      = 5,
	ELL_SEASONTICKET_DEPRECATED    = 6,
	ELL_LOADOUT                    = 7,
	ELL_HOMEPAGE                   = 8,
	ELL_REWARDCENTER               = 9,
	ELL_VAULT                      = 10,
	ELL_EOML                       = 11,
	ELL_BUYALL                     = 12,
	ELL_PROFILE                    = 13,
	ELL_FRIENDSLIST                = 14,
	ELL_BATTLEPASS                 = 15,
	ELL_ESPORTSSTORE               = 16,
	ELL_MAX                        = 17
};


// Enum TgClientBase.TgMoviePlayer.EButtonPromptSetting
enum class EButtonPromptSetting : uint8_t
{
	EBPS_Xbox                      = 0,
	EBPS_PS4                       = 1,
	EBPS_Switch                    = 2,
	EBPS_MAX                       = 3
};


// Enum TgClientBase.TgMoviePlayer.EActionLog
enum class EActionLog : uint8_t
{
	EAL_NONE                       = 0,
	EAL_STORE                      = 1,
	EAL_BUYITEM                    = 2,
	EAL_CENTERPLAY                 = 3,
	EAL_QUICK1                     = 4,
	EAL_QUICK2                     = 5,
	EAL_QUICK3                     = 6,
	EAL_QUICK4                     = 7,
	EAL_JOINSOLO                   = 8,
	EAL_JOINPARTY                  = 9,
	EAL_INVITEPARTY                = 10,
	EAL_CANCELPARTY                = 11,
	EAL_LEAVEQUEUE                 = 12,
	EAL_PLAYAGAIN                  = 13,
	EAL_RENTITEM                   = 14,
	EAL_JSONPANEL                  = 15,
	EAL_GIFTING                    = 16,
	EAL_MAX                        = 17
};


// Enum TgClientBase.TgMoviePlayer.EBuddyStatus
enum class EBuddyStatus : uint8_t
{
	BUS_OFFLINE                    = 0,
	BUS_INCOMING_FRIEND_REQUEST    = 1,
	BUS_SENT_FRIEND_REQUEST        = 2,
	BUS_DND                        = 3,
	BUS_IN_MATCH                   = 4,
	BUS_INVITE_PENDING             = 5,
	BUS_IN_PARTY                   = 6,
	BUS_IN_QUEUE                   = 7,
	BUS_IN_LOBBY                   = 8,
	BUS_IN_GAME                    = 9,
	BUS_IS_SPECTATING              = 10,
	BUS_MAX                        = 11
};


// Enum TgClientBase.TgMoviePlayer.EUIDisplayMode
enum class EUIDisplayMode : uint8_t
{
	UIDM_LOGIN                     = 0,
	UIDM_NEW_USER                  = 1,
	UIDM_NORMAL                    = 2,
	UIDM_EOM                       = 3,
	UIDM_MAX                       = 4
};


// Enum TgClientBase.TgMoviePlayer.EPlayerFeedbackType
enum class EPlayerFeedbackType : uint8_t
{
	EPFT_Matchmaking               = 0,
	EPFT_ServerStability           = 1,
	EPFT_MAX                       = 2
};


// Enum TgClientBase.TgEOMLobbyDC_Team.PlayerStatAwardPriority
enum class EPlayerStatAwardPriority : uint8_t
{
	PSAP_PLAYER_DAMAGE             = 0,
	PSAP_WARDS_PLACED              = 1,
	PSAP_PLAYER_HEALING            = 2,
	PSAP_PLAYER_KILLS              = 3,
	PSAP_PLAYER_ASSISTS            = 4,
	PSAP_DAMAGE_MITIGATED          = 5,
	PSAP_DAMAGE_TAKEN              = 6,
	PSAP_PLAYER_DEATHS             = 7,
	PSAP_DAMAGE_TOWER              = 8,
	PSAP_GOLD                      = 9,
	PSAP_DAMAGE_BOT                = 10,
	PSAP_MAX                       = 11
};


// Enum TgClientBase.TgEsportsManager.ETgEsportsEvent
enum class ETgEsportsEvent : uint8_t
{
	EVENT_ESports_ImageLoaded      = 0,
	EVENT_ESports_UpdateMatches    = 1,
	EVENT_ESports_UpdatePicks      = 2,
	EVENT_ESports_UpdateJSON       = 3,
	EVENT_ESports_MAX              = 4
};


// Enum TgClientBase.TgGameDC_Chat.TG_CHAT_PRIORITY
enum class ETG_CHAT_PRIORITY : uint8_t
{
	CHAT_PRIORITY_THROWAWAY        = 0,
	CHAT_PRIORITY_NORMAL           = 1,
	CHAT_PRIORITY_HIGH             = 2,
	CHAT_PRIORITY_INTERRUPT        = 3,
	CHAT_PRIORITY_MAX              = 4
};


// Enum TgClientBase.TgGameDC_Game.GAME_MODE_TYPE
enum class EGAME_MODE_TYPE : uint8_t
{
	GAME_TYPE_BATTLE               = 0,
	GAME_TYPE_ARENA                = 1,
	GAME_TYPE_DOM                  = 2,
	GAME_TYPE_SIEGE                = 3,
	GAME_TYPE_ENCOUNTERS           = 4,
	GAME_TYPE_CTF                  = 5,
	GAME_TYPE_RACER                = 6,
	GAME_TYPE_ADVENTURE            = 7,
	GAME_TYPE_ARENA_ADVENTURE      = 8,
	GAME_TYPE_MULTI_TEAM           = 9,
	GAME_TYPE_ADV_JOUST            = 10,
	GAME_TYPE_MULTI_ROUND          = 11,
	GAME_TYPE_MAX                  = 12
};


// Enum TgClientBase.TgGameDC_Player.ETeamUpdateState
enum class ETeamUpdateState : uint8_t
{
	TEAMUPDATE_NotUpdated          = 0,
	TEAMUPDATE_Disconnected        = 1,
	TEAMUPDATE_Connected           = 2,
	TEAMUPDATE_MAX                 = 3
};


// Enum TgClientBase.TgGameUIDispatcher.ETgGameUIEvent
enum class ETgGameUIEvent : uint8_t
{
	EVENT_GameUI_PopupOpen         = 0,
	EVENT_GameUI_PopupCloseAll     = 1,
	EVENT_GameUI_ManaUseSetVital   = 2,
	EVENT_GameUI_IdleKickShowWarning = 3,
	EVENT_GameUI_ControllerDisconnectShow = 4,
	EVENT_GameUI_ASCInputsClear    = 5,
	EVENT_GameUI_UIChange          = 6,
	EVENT_GameUI_ObjectiveSetNearest = 7,
	EVENT_GameUI_SubtitleShow      = 8,
	EVENT_GameUI_DeathRecapToggle  = 9,
	EVENT_GameUI_AutoPurchaseSet   = 10,
	EVENT_GameUI_AutoSkillSet      = 11,
	EVENT_GameUI_GoToLobby         = 12,
	EVENT_GameUI_ConnectionStatusChange = 13,
	EVENT_GameUI_CurrentUserChange = 14,
	EVENT_GameUI_RemoteTalkerStatusChange = 15,
	EVENT_GameUI_QuestUpdate       = 16,
	EVENT_GameUI_RoundUIUpdate     = 17,
	EVENT_GameUI_SurrenderTimerUpdate = 18,
	EVENT_GameUI_PauseTimerUpdate  = 19,
	EVENT_GameUI_TransitionShow    = 20,
	EVENT_GameUI_TransitionHide    = 21,
	EVENT_GameUI_TimelineEvent     = 22,
	EVENT_GameUI_EnterDemoMode     = 23,
	EVENT_GameUI_SkillPointAlloc   = 24,
	EVENT_GameUI_VendorItemPurchase = 25,
	EVENT_GameUI_GameStartComplete = 26,
	EVENT_GameUI_AddToCombatLog    = 27,
	EVENT_GameUI_DisplayEACMessage = 28,
	EVENT_GameUI_TimingModeSet     = 29,
	EVENT_GameUI_AcquisitionsClear = 30,
	EVENT_GameUI_SoundPlay         = 31,
	EVENT_GameUI_ClearEOMData      = 32,
	EVENT_GameUI_TaskForceUpdate   = 33,
	EVENT_GameUI_KeyDisplayUpdate  = 34,
	EVENT_GameUI_SpecKeyDisplayUpdate = 35,
	EVENT_GameUI_KeyBindMenuUpdate = 36,
	EVENT_GameUI_SpectatorMenuUpdate = 37,
	EVENT_GameUI_GetRewardProgress = 38,
	EVENT_GameUI_GetIsInTraining   = 39,
	EVENT_GameUI_PartyShow         = 40,
	EVENT_GameUI_PartyUpdate       = 41,
	EVENT_GameUI_PartyBlockInput   = 42,
	EVENT_GameUI_HUDResetKillIcons = 43,
	EVENT_GameUI_HUDCurrencyChanged = 44,
	EVENT_GameUI_LoginEvent        = 45,
	EVENT_GameUI_SpectatorEvent    = 46,
	EVENT_GameUI_PlayerSkillsEvent = 47,
	EVENT_GameUI_WarningEvent      = 48,
	EVENT_GameUI_ChatEvent         = 49,
	EVENT_GameUI_DamageEvent       = 50,
	EVENT_GameUI_TutorialUpdateImage = 51,
	EVENT_GameUI_TutorialUpdateOptions = 52,
	EVENT_GameUI_TutorialMessage   = 53,
	EVENT_GameUI_EndOfMatchShow    = 54,
	EVENT_GameUI_EndOfMatchSetType = 55,
	EVENT_GameUI_GodTargeterQuickClose = 56,
	EVENT_GameUI_GodTargeterSetState = 57,
	EVENT_GameUI_VendorStoreToggle = 58,
	EVENT_GameUI_VendorStoreOpen   = 59,
	EVENT_GameUI_VendorStoreClose  = 60,
	EVENT_GameUI_VendorStoreUpdateCanBuy = 61,
	EVENT_GameUI_SceneLoad         = 62,
	EVENT_GameUI_SceneUnload       = 63,
	EVENT_GameUI_CharacterDialogToggle = 64,
	EVENT_GameUI_CharacterDialogPlay = 65,
	EVENT_GameUI_DisplayRoundOverview = 66,
	EVENT_GameUI_FXStart           = 67,
	EVENT_GameUI_FXPlayEvent       = 68,
	EVENT_GameUI_FXCheckHealth     = 69,
	EVENT_GameUI_EscapeKey         = 70,
	EVENT_GameUI_ViewportResize    = 71,
	EVENT_GameUI_NotifyEndTransition = 72,
	EVENT_GameUI_LobbyMatchStateUpdate = 73,
	EVENT_GameUI_UIStateChange     = 74,
	EVENT_GameUI_StateChangeLobby  = 75,
	EVENT_GameUI_StateChangeQueue  = 76,
	EVENT_GameUI_StateChangeGame   = 77,
	EVENT_GameUI_StateChangeHUD    = 78,
	EVENT_GameUI_StateChangeAny    = 79,
	EVENT_GameUI_QuestsUpdated     = 80,
	EVENT_GameUI_QuestsInitialized = 81,
	EVENT_GameUI_QuestComplete     = 82,
	EVENT_GameUI_UpdateNotifications = 83,
	EVENT_GameUI_NewDay            = 84,
	EVENT_GameUI_RewardsUpdated    = 85,
	EVENT_GameUI_LandingPanelImagesLoaded = 86,
	EVENT_GameUI_OnPopupOpened     = 87,
	EVENT_GameUI_OnPopupClosed     = 88,
	EVENT_GameUI_UpdateStreams     = 89,
	EVENT_GameUI_UpdateEOMData     = 90,
	EVENT_GameUI_RefreshUIDisplay  = 91,
	EVENT_GameUI_SpectateFailed    = 92,
	EVENT_GameUI_GameTypeReady     = 93,
	EVENT_GameUI_GameHUDEvent      = 94,
	EVENT_GameUI_OffhandSlotPressed = 95,
	EVENT_GameUI_OffhandSlotReleased = 96,
	EVENT_GameUI_DeviceLevelUp     = 97,
	EVENT_GameUI_ToggleSkillScreen = 98,
	EVENT_GameUI_SpectateQueued    = 99,
	EVENT_GameUI_UpdateCallouts    = 100,
	EVENT_GameUI_UpdateFeatures    = 101,
	EVENT_GameUI_UpdateImages      = 102,
	EVENT_GameUI_UpdateButtonPrompts = 103,
	EVENT_GameUI_ShowTriumphChestAbout = 104,
	EVENT_GameUI_SetPlayerInfoVisibility = 105,
	EVENT_GameUI_ViewGameProfile   = 106,
	EVENT_GameUI_SetFooterButtonVisibility = 107,
	EVENT_GameUI_SetFooterDisplayMode = 108,
	EVENT_GameUI_EffectForm        = 109,
	EVENT_GameUI_FogGrowTime       = 110,
	EVENT_GameUI_FogNextPhase      = 111,
	EVENT_GameUI_RefreshDailyDeal  = 112,
	EVENT_GameUI_RankedTeamsUpdate = 113,
	EVENT_GameUI_PlayerMuteChanged = 114,
	EVENT_GameUI_PlayerSpeakingChanged = 115,
	EVENT_GameUI_Validate          = 116,
	EVENT_GameUI_UpdateLogoState   = 117,
	EVENT_GameUI_RefreshDailyLoginReward = 118,
	EVENT_GameUI_InputModeChanged  = 119,
	EVENT_GameUI_PurchaseModalClose = 120,
	EVENT_GameUI_PurchaseModalOpen = 121,
	EVENT_GameUI_PurchaseFail      = 122,
	EVENT_GameUI_DemoCancelable    = 123,
	EVENT_GameUI_DemoReady         = 124,
	EVENT_GameUI_HideVGS           = 125,
	EVENT_GameUI_LoginErrorMessage = 126,
	EVENT_GameUI_UpdateTopBar      = 127,
	EVENT_GameUI_RefreshBooster    = 128,
	EVENT_GameUI_ForceFocusFooter  = 129,
	EVENT_GameUI_UpdateClanInvitations = 130,
	EVENT_GameUI_AddSystemMessageNotification = 131,
	EVENT_GameUI_UpdateUGPValue    = 132,
	EVENT_GameUI_SelectedPopupEvent = 133,
	EVENT_GameUI_OpenGiftingPopup  = 134,
	EVENT_GameUI_GiftingNotification = 135,
	EVENT_GameUI_SceneOpened       = 136,
	EVENT_GameUI_SceneClosed       = 137,
	EVENT_GameUI_FriendSelectorResult = 138,
	EVENT_GameUI_GiftingMessageSelected = 139,
	EVENT_GameUI_MessageSelectorListener = 140,
	EVENT_GameUI_OnNavigationAction = 141,
	EVENT_GameUI_OnAcquisition     = 142,
	EVENT_GameUI_OnAcquisitionShown = 143,
	EVENT_GameUI_ClearBackgroundImage = 144,
	EVENT_GameUI_SetBackgroundImage = 145,
	EVENT_GameUI_StoreRedirectGifting = 146,
	EVENT_GameUI_StoreRedirectChests = 147,
	EVENT_GameUI_ShowStore         = 148,
	EVENT_GameUI_ReportPlayer      = 149,
	EVENT_GameUI_PurchaseBattlePass = 150,
	EVENT_GameUI_PurchaseBattlePassLevels = 151,
	EVENT_GameUI_DisplayAcquisition = 152,
	EVENT_GameUI_DisplayBattlePassToast = 153,
	EVENT_GameUI_InputPreHandle    = 154,
	EVENT_GameUI_PurchaseLongDesc  = 155,
	EVENT_GameUI_VendorItemsChanged = 156,
	EVENT_GameUI_UnitShopUpdate    = 157,
	EVENT_GameUI_VendorUnitStoreToggle = 158,
	EVENT_GameUI_RefreshMainMenu   = 159,
	EVENT_GameUI_TeamBoostUpdate   = 160,
	EVENT_GameUI_ChatToggle        = 161,
	EVENT_GameUI_LastSeenUpdate    = 162,
	EVENT_GameUI_InputSettingChange = 163,
	EVENT_GameUI_NoMatchFound      = 164,
	EVENT_GameUI_OdysseyPurchaseTerritory = 165,
	EVENT_GameUI_OdysseyPurchaseVoyage = 166,
	EVENT_GameUI_GuideSettingsUpdate = 167,
	EVENT_GameUI_MAX               = 168
};


// Enum TgClientBase.TgGameUIDispatcher.ETgSpectatorSubEvent
enum class ETgSpectatorSubEvent : uint8_t
{
	EVENT_Spectator_SetExpertMode  = 0,
	EVENT_Spectator_UpdateBans     = 1,
	EVENT_Spectator_HighlightPlayer = 2,
	EVENT_Spectator_TeamStatBack   = 3,
	EVENT_Spectator_TeamStatSelect = 4,
	EVENT_Spectator_StatSelect     = 5,
	EVENT_Spectator_TargetSet      = 6,
	EVENT_Spectator_TargetPawnById = 7,
	EVENT_Spectator_TargetPrevious = 8,
	EVENT_Spectator_TargetNext     = 9,
	EVENT_Spectator_DirectorModeReturning = 10,
	EVENT_Spectator_SetOverheadView = 11,
	EVENT_Spectator_UpdateGraph    = 12,
	EVENT_Spectator_UpdateDemoSpeed = 13,
	EVENT_Spectator_UpdateStatUI   = 14,
	EVENT_Spectator_UpdateStasis   = 15,
	EVENT_Spectator_UpdateSyncingUI = 16,
	EVENT_Spectator_SetCameraMode  = 17,
	EVENT_Spectator_TickGameTime   = 18,
	EVENT_Spectator_SetPersonMode  = 19,
	EVENT_Spectator_RewindGraphs   = 20,
	EVENT_Spectator_MAX            = 21
};


// Enum TgClientBase.TgGameUIDispatcher.ETgGameHUDEvent
enum class ETgGameHUDEvent : uint8_t
{
	EVENT_GameHUD_None             = 0,
	EVENT_GameHUD_ChangeHUDSection = 1,
	EVENT_GameHUD_PlayTakeHit      = 2,
	EVENT_GameHUD_SetPlayerSpeaking = 3,
	EVENT_GameHUD_SetVisible       = 4,
	EVENT_GameHUD_ShowConsoleStorePrompt = 5,
	EVENT_GameHUD_ShowEventAccolade = 6,
	EVENT_GameHUD_ShowPingGlow     = 7,
	EVENT_GameHUD_ShowTutorialHighlight = 8,
	EVENT_GameHUD_ToggleHUDSection = 9,
	EVENT_GameHUD_ToggleMatineeSkip = 10,
	EVENT_GameHUD_TogglePassiveMeter = 11,
	EVENT_GameHUD_ToggleScoreboard = 12,
	EVENT_GameHUD_UnloadHUDSection = 13,
	EVENT_GameHUD_PlayerMuteUpdated = 14,
	EVENT_GameHUD_MAX              = 15
};


// Enum TgClientBase.TgGameUIDispatcher.ETgPlayerSkillsSubEvent
enum class ETgPlayerSkillsSubEvent : uint8_t
{
	EVENT_PlayerSkills_Toggle      = 0,
	EVENT_PlayerSkills_Refresh     = 1,
	EVENT_PlayerSkills_AutoSkill   = 2,
	EVENT_PlayerSkills_Upgrade     = 3,
	EVENT_PlayerSkills_MAX         = 4
};


// Enum TgClientBase.TgGameUIDispatcher.ETgLoginSubEvent
enum class ETgLoginSubEvent : uint8_t
{
	EVENT_Login_Misc               = 0,
	EVENT_Login_Queue              = 1,
	EVENT_Login_SetReady           = 2,
	EVENT_Login_PlayerError        = 3,
	EVENT_Login_Disconnect         = 4,
	EVENT_Login_TryAuto            = 5,
	EVENT_Login_Success            = 6,
	EVENT_Login_MAX                = 7
};


// Enum TgClientBase.TgGameUIDispatcher.ETgWarningSubEvent
enum class ETgWarningSubEvent : uint8_t
{
	EVENT_Warning_ControllerDisconnect = 0,
	EVENT_Warning_NoFriendsForPartyInvite = 1,
	EVENT_Warning_UnableToReadFriendsList = 2,
	EVENT_Warning_PartyFull        = 3,
	EVENT_Warning_PartyNoLongerAvailable = 4,
	EVENT_Warning_PackageNotInstalledForPartyInvite = 5,
	EVENT_Warning_CustomGameDisallowed = 6,
	EVENT_Warning_MAX              = 7
};


// Enum TgClientBase.TgGameUIDispatcher.ETgChatSubEvent
enum class ETgChatSubEvent : uint8_t
{
	EVENT_Chat_Default             = 0,
	EVENT_Chat_FriendOnline        = 1,
	EVENT_Chat_MAX                 = 2
};


// Enum TgClientBase.TgGameUIDispatcher.ETgChatManagerEvent
enum class ETgChatManagerEvent : uint8_t
{
	EVENT_ChatManager_OnChannelChanged = 0,
	EVENT_ChatManager_OnChannelClosed = 1,
	EVENT_ChatManager_OnChatMessage = 2,
	EVENT_ChatManager_MAX          = 3
};


// Enum TgClientBase.TgGameUIDispatcher.ETgDamageEvent
enum class ETgDamageEvent : uint8_t
{
	EVENT_Damage_UpdateRecap       = 0,
	EVENT_Damage_UpdateTaken       = 1,
	EVENT_Damage_UpdateDealt       = 2,
	EVENT_Damage_DeleteTaken       = 3,
	EVENT_Damage_DeleteDealt       = 4,
	EVENT_Damage_QueueInfo         = 5,
	EVENT_Damage_MAX               = 6
};


// Enum TgClientBase.TgGameUIDispatcher.ETgVendorStore
enum class ETgVendorStore : uint8_t
{
	EVENT_VendorStore_None         = 0,
	EVENT_VendorStore_UpdateStats  = 1,
	EVENT_VendorStore_UpdatePlayerData = 2,
	EVENT_VendorStore_UpdateInventory = 3,
	EVENT_VendorStore_CheckCurrency = 4,
	EVENT_VendorStore_TutorialHighlight = 5,
	EVENT_VendorStore_MAX          = 6
};


// Enum TgClientBase.TgGfxAcquisitionPopup.EAcquisitionPopupActions
enum class EAcquisitionPopupActions : uint8_t
{
	EAPA_EquipAll                  = 0,
	EAPA_MAX                       = 1
};


// Enum TgClientBase.TgGfxAdventuresVault.EAdventureVaultCam
enum class EAdventureVaultCam : uint8_t
{
	EAVEA_LobbyEvent               = 0,
	EAVEA_LobbyCamEvent            = 1,
	EAVEA_Setup_Purchase           = 2,
	EAVEA_Switch_Camera            = 3,
	EAVEA_LeaveVault               = 4,
	EAVEA_MAX                      = 5
};


// Enum TgClientBase.TgGfxAdventuresVault.EAdventureVaultIndex
enum class EAdventureVaultIndex : uint8_t
{
	EVaultOuter                    = 0,
	EVaultMain                     = 1,
	EVaultGold                     = 2,
	EVaultCTF                      = 3,
	EAdventureVaultIndex_MAX       = 4
};


// Enum TgClientBase.TgGfxBattlePass.EBattlePass
enum class EBattlePass : uint8_t
{
	EBAP_BuyPremium                = 0,
	EBAP_BuyToItem                 = 1,
	EBAP_SelectSkin                = 2,
	EBAP_ReceiveTransition         = 3,
	EBAP_PracticeSkin              = 4,
	EBAP_SetPrestigeMode           = 5,
	EBAP_SeenQuests                = 6,
	EBAP_MAX                       = 7
};


// Enum TgClientBase.TgGFxBrowser.BrowserNavigationTypes
enum class EBrowserNavigationTypes : uint8_t
{
	BNT_CloseBrowser               = 0,
	BNT_Back                       = 1,
	BNT_Forward                    = 2,
	BNT_MAX                        = 3
};


// Enum TgClientBase.TgGfxBundlesPurchase.EBundlesPurchaseAction
enum class EBundlesPurchaseAction : uint8_t
{
	EBPA_GotoVault                 = 0,
	EBPA_PurchaseBundle            = 1,
	EBPA_MAX                       = 2
};


// Enum TgClientBase.TgGfxBuyAllModalBase.EBuyAllModalActions
enum class EBuyAllModalActions : uint8_t
{
	EBAMA_Purchase                 = 0,
	EBAMA_MAX                      = 1
};


// Enum TgClientBase.TgGFxDataProviderBase.EDataRequestType
enum class EDataRequestType : uint8_t
{
	EDRT_ItemAt                    = 0,
	EDRT_ItemRange                 = 1,
	EDRT_IndexOf                   = 2,
	EDRT_MAX                       = 3
};


// Enum TgClientBase.TgGFxDataProviderBase.ETgDataProviderEvent
enum class ETgDataProviderEvent : uint8_t
{
	EVENT_DP_None                  = 0,
	EVENT_DP_StartChange           = 1,
	EVENT_DP_Change                = 2,
	EVENT_DP_AddItem               = 3,
	EVENT_DP_RemoveItem            = 4,
	EVENT_DP_Clear                 = 5,
	EVENT_DP_Error                 = 6,
	EVENT_DP_MAX                   = 7
};


// Enum TgClientBase.TgGfxEventSceneBase.EEventSceneActions
enum class EEventSceneActions : uint8_t
{
	EESA_SelectItem                = 0,
	EESA_SelectReward              = 1,
	EESA_SelectChest               = 2,
	EESA_BuyItem                   = 3,
	EESA_ProgressTooltip           = 4,
	EESA_HideModel                 = 5,
	EESA_TestAudio                 = 6,
	EESA_SelectQuest               = 7,
	EESA_ViewQuest                 = 8,
	EESA_ActivateQuest             = 9,
	EESA_UpdatePurchasedStatus     = 10,
	EESA_SetScene                  = 11,
	EESA_CenterContents            = 12,
	EESA_Scroll                    = 13,
	EESA_SelectTab                 = 14,
	EESA_SelectQuestTab            = 15,
	EESA_UpdateLoreScroll          = 16,
	EESA_UpdateLeaderboardProgress = 17,
	EESA_UpdateLeaderboardQueue    = 18,
	EESA_JoinLeaderboardQueue      = 19,
	EESA_OpenLeaderboard           = 20,
	EESA_UpdateQuestAvailableCount = 21,
	EESA_UseConsumable             = 22,
	EESA_LobbyEvent                = 23,
	EESA_SeenEvent                 = 24,
	EESA_UpdateCam                 = 25,
	EESA_IncrementActivity         = 26,
	EESA_SelectLore                = 27,
	EESA_PlayVideo                 = 28,
	EESA_BuyAll                    = 29,
	EESA_UpdateCounter             = 30,
	EESA_UpdateLoadingFrame        = 31,
	EESA_RollBonusChest            = 32,
	EESA_UpdateItemUnlockCount     = 33,
	EESA_EquipLoadoutItems         = 34,
	EESA_UpdateQuests              = 35,
	EESA_PurchaseTerritory         = 36,
	EESA_PurchaseVoyage            = 37,
	EESA_MAX                       = 38
};


// Enum TgClientBase.TgGfxEventSceneBase.EEventItemTypes
enum class EEventItemTypes : uint8_t
{
	EEIT_Purchased                 = 0,
	EEIT_Quest                     = 1,
	EEIT_Reward                    = 2,
	EEIT_Lore                      = 3,
	EEIT_MAX                       = 4
};


// Enum TgClientBase.TgGfxEventSceneBase.EQuestFailureTypes
enum class EQuestFailureTypes : uint8_t
{
	EQFT_None                      = 0,
	EQFT_Wait                      = 1,
	EQFT_Multi                     = 2,
	EQFT_InProgress                = 3,
	EQFT_MAX                       = 4
};


// Enum TgClientBase.TgGfxEventSceneBase.EQueueInactiveTypes
enum class EQueueInactiveTypes : uint8_t
{
	EQIT_None                      = 0,
	EQIT_Level                     = 1,
	EQIT_NotActive                 = 2,
	EQIT_MAX                       = 3
};


// Enum TgClientBase.TgGFxDailyDealPopup.DailyDealActions
enum class EDailyDealActions : uint8_t
{
	EDDA_PurchaseDailyDeal         = 0,
	EDDA_GotoItem                  = 1,
	EDDA_MAX                       = 2
};


// Enum TgClientBase.TgGFxEvent.EGFxEvent
enum class EGFxEvent : uint8_t
{
	EGFX_None                      = 0,
	EGFX_RollOver                  = 1,
	EGFX_RollOut                   = 2,
	EGFX_MousePress                = 3,
	EGFX_MouseHold                 = 4,
	EGFX_MouseRelease              = 5,
	EGFX_MouseClick                = 6,
	EGFX_MouseDblClick             = 7,
	EGFX_MouseAuxPress             = 8,
	EGFX_MouseAuxHold              = 9,
	EGFX_MouseAuxRelease           = 10,
	EGFX_MouseAuxClick             = 11,
	EGFX_MouseAuxDblClick          = 12,
	EGFX_MouseWheel                = 13,
	EGFX_MouseMove                 = 14,
	EGFX_FocusIn                   = 15,
	EGFX_FocusOut                  = 16,
	EGFX_Input                     = 17,
	EGFX_Load                      = 18,
	EGFX_Unload                    = 19,
	EGFX_Validate                  = 20,
	EGFX_Select                    = 21,
	EGFX_ItemClick                 = 22,
	EGFX_ItemRollOver              = 23,
	EGFX_ItemRollOut               = 24,
	EGFX_MAX                       = 25
};


// Enum TgClientBase.TgGfxFooterBase.ETopBarLogoStates
enum class ETopBarLogoStates : uint8_t
{
	ETBLS_None                     = 0,
	ETBLS_Full                     = 1,
	ETBLS_Small                    = 2,
	ETBLS_MAX                      = 3
};


// Enum TgClientBase.TgGfxFooterBase.ETopBarPlayerInfoStates
enum class ETopBarPlayerInfoStates : uint8_t
{
	ETBPIS_None                    = 0,
	ETBPIS_Full                    = 1,
	ETBPIS_Currencies              = 2,
	ETBPIS_MAX                     = 3
};


// Enum TgClientBase.TgGfxFooterBase.EFooterDisplayStates
enum class EFooterDisplayStates : uint8_t
{
	FOOTER_DISPLAY_Full            = 0,
	FOOTER_DISPLAY_FullOnlyOptions = 1,
	FOOTER_DISPLAY_CompactNoButtons = 2,
	FOOTER_DISPLAY_CompactOnlyOptions = 3,
	FOOTER_DISPLAY_None            = 4,
	FOOTER_DISPLAY_MAX             = 5
};


// Enum TgClientBase.TgGfxFooterBase.EFooterMainActions
enum class EFooterMainActions : uint8_t
{
	FMA_Quests                     = 0,
	FMA_Rewards                    = 1,
	FMA_Friends                    = 2,
	FMA_Clans                      = 3,
	FMA_Learn                      = 4,
	FMA_Profile                    = 5,
	FMA_Notifications              = 6,
	FMA_Settings                   = 7,
	FMA_FocusFooterMain            = 8,
	FMA_Party                      = 9,
	FMA_GotoQueue                  = 10,
	FMA_Gifts                      = 11,
	FMA_MAX                        = 12
};


// Enum TgClientBase.TgGFxFriendSearchProvider.EVT_FriendSearch
enum class EVT_FriendSearch : uint8_t
{
	EVENT_FriendSearch_None        = 0,
	EVENT_FriendSearch_Empty       = 1,
	EVENT_FriendSearch_UpdateLocal = 2,
	EVENT_FriendSearch_UpdateOnline = 3,
	EVENT_FriendSearch_StartLocal  = 4,
	EVENT_FriendSearch_StartOnline = 5,
	EVENT_FriendSearch_MAX         = 6
};


// Enum TgClientBase.TgGFxFriendSearchProvider.EVT_SearchQuery
enum class EVT_SearchQuery : uint8_t
{
	EVENT_SearchQuery_None         = 0,
	EVENT_SearchQuery_ProfilePage  = 1,
	EVENT_SearchQuery_MassInvite   = 2,
	EVENT_SearchQuery_ChatMessage  = 3,
	EVENT_SearchQuery_MAX          = 4
};


// Enum TgClientBase.TgGfxGiftingBase.EGiftingActions
enum class EGiftingActions : uint8_t
{
	EGA_None                       = 0,
	EGA_RefreshGifts               = 1,
	EGA_SetReceiverData            = 2,
	EGA_SetMessageData             = 3,
	EGA_OpenFriendSelector         = 4,
	EGA_OpenMessageSelector        = 5,
	EGA_MAX                        = 6
};


// Enum TgClientBase.TgGfxGodTargeter.EGodTargeterActions
enum class EGodTargeterActions : uint8_t
{
	EGTA_NONE                      = 0,
	EGTA_UPDATESELECTED            = 1,
	EGTA_UPDATEPREVINDEX           = 2,
	EGTA_CLOSE                     = 3,
	EGTA_MAX                       = 4
};


// Enum TgClientBase.TgGFxHomeMenuScreen.EHomeMenuScreenSpecialCallouts
enum class EHomeMenuScreenSpecialCallouts : uint8_t
{
	EHMSSC_None                    = 0,
	EHMSSC_BattlePass              = 1,
	EHMSSC_DailyRewardFavor        = 2,
	EHMSSC_DailyRewardGems         = 3,
	EHMSSC_MAX                     = 4
};


// Enum TgClientBase.TgGFxHomeMenuScreen.EHomeMenuScreenAction
enum class EHomeMenuScreenAction : uint8_t
{
	HMSA_NavigateMenu              = 0,
	HMSA_NavigatePanel             = 1,
	HMSA_NavigateFeature           = 2,
	HMSA_UpdateFeature             = 3,
	HMSA_UpdateFeatureImage        = 4,
	HMSA_LogJsonLocation           = 5,
	HMSA_OnSettings                = 6,
	HMSA_OnQuit                    = 7,
	HMSA_OnEvent                   = 8,
	HMSA_OnPtsDeeplink             = 9,
	HMSA_SetStreamURL              = 10,
	HMSA_UpdateButtons             = 11,
	HMSA_UpdateModel               = 12,
	HMSA_GotoProfile               = 13,
	HMSA_GotoQuests                = 14,
	HMSA_OpenSimulmediaPopup       = 15,
	HMSA_MAX                       = 16
};


// Enum TgClientBase.TgLandingPanelManagerBase.EModelCameraDistance
enum class EModelCameraDistance : uint8_t
{
	EMCD_Close                     = 0,
	EMCD_Medium                    = 1,
	EMCD_Far                       = 2,
	EMCD_MAX                       = 3
};


// Enum TgClientBase.TgLandingPanelManagerBase.EPlayerIdCheck
enum class EPlayerIdCheck : uint8_t
{
	EPIC_None                      = 0,
	EPIC_Odd                       = 1,
	EPIC_Even                      = 2,
	EPIC_MAX                       = 3
};


// Enum TgClientBase.TgGfxHudChatBase.EChatActions
enum class EChatActions : uint8_t
{
	ECA_None                       = 0,
	ECA_Show                       = 1,
	ECA_Scroll                     = 2,
	ECA_Input                      = 3,
	ECA_Fade                       = 4,
	ECA_Tab                        = 5,
	ECA_MAX                        = 6
};


// Enum TgClientBase.TgGfxHudChatBase.EChatTabs
enum class EChatTabs : uint8_t
{
	ECT_None                       = 0,
	ECT_Chat                       = 1,
	ECT_Combat                     = 2,
	ECT_MAX                        = 3
};


// Enum TgClientBase.TgGfxLoadoutsBase.ELoadoutEquipItems
enum class ELoadoutEquipItems : uint8_t
{
	ELEI_Avatars                   = 0,
	ELEI_LoadingFrame              = 1,
	ELEI_LoadingBackground         = 2,
	ELEI_Pedestal                  = 3,
	ELEI_WardSkins                 = 4,
	ELEI_JumpStamp                 = 5,
	ELEI_GlobalEmote               = 6,
	ELEI_RecallSkin                = 7,
	ELEI_AnnouncerPack             = 8,
	ELEI_MusicTheme                = 9,
	ELEI_HudTheme                  = 10,
	ELEI_FountainFX                = 11,
	ELEI_LevelUp                   = 12,
	ELEI_DeathStamp                = 13,
	ELEI_PlayerTitle               = 14,
	ELEI_MAX                       = 15
};


// Enum TgClientBase.TgGfxLoadoutsBase.ELoadoutsActions
enum class ELoadoutsActions : uint8_t
{
	ELA_None                       = 0,
	ELA_ItemScroll                 = 1,
	ELA_ItemSelect                 = 2,
	ELA_ItemEquip                  = 3,
	ELA_ItemTooltip                = 4,
	ELA_SelectItemType             = 5,
	ELA_HideStats                  = 6,
	ELA_SetBoostTime               = 7,
	ELA_OnBoost                    = 8,
	ELA_UpdateAvatarOwned          = 9,
	ELA_OnDropdownChanged          = 10,
	ELA_ItemGoto                   = 11,
	ELA_UseClanIcon                = 12,
	ELA_OnPreview                  = 13,
	ELA_CategoryScroll             = 14,
	ELA_CategorySelect             = 15,
	ELA_FavoriteItem               = 16,
	ELA_UnfavoriteItem             = 17,
	ELA_ToggleFavoritesMode        = 18,
	ELA_MAX                        = 19
};


// Enum TgClientBase.TgGfxLoginBlocker.ELoginBlockerActions
enum class ELoginBlockerActions : uint8_t
{
	ELBA_Goto                      = 0,
	ELBA_Close                     = 1,
	ELBA_MAX                       = 2
};


// Enum TgClientBase.TgGfxMainMenu.EMainMenuButton
enum class EMainMenuButton : uint8_t
{
	MAINMENU_BTN_RESUME            = 0,
	MAINMENU_BTN_SETTINGS          = 1,
	MAINMENU_BTN_LOGOUT            = 2,
	MAINMENU_BTN_RETURN_TO_LOBBY   = 3,
	MAINMENU_BTN_ITEMS             = 4,
	MAINMENU_BTN_SCOREBOARD        = 5,
	MAINMENU_BTN_ABILITIES         = 6,
	MAINMENU_BTN_LEAVE_SPECTATE    = 7,
	MAINMENU_BTN_QUIT_GAME         = 8,
	MAINMENU_BTN_HUD_EDITOR        = 9,
	MAINMENU_BTN_PAUSE             = 10,
	MAINMENU_BTN_SURRENDER         = 11,
	MAINMENU_BTN_REDEEM_CODE       = 12,
	MAINMENU_BTN_PATCH_OVERVIEW    = 13,
	MAINMENU_BTN_GAME_GUIDES       = 14,
	MAINMENU_BTN_MAX               = 15
};


// Enum TgClientBase.TgGfxMassInviteBase.EMassInviteActions
enum class EMassInviteActions : uint8_t
{
	EMIA_None                      = 0,
	EMIA_RemovePlayer              = 1,
	EMIA_AddPlayer                 = 2,
	EMIA_InvitePlayers             = 3,
	EMIA_Close                     = 4,
	EMIA_Search                    = 5,
	EMIA_InvitedPlayersScroll      = 6,
	EMIA_BuddyListScroll           = 7,
	EMIA_Filter                    = 8,
	EMIA_MAX                       = 9
};


// Enum TgClientBase.TgGFxMatchInventory.EMatchINV
enum class EMatchINV : uint8_t
{
	EMINV_SET_BOOSTERS_SEEN        = 0,
	EMINV_ACTIVATE_TEAM_BOOSTER    = 1,
	EMINV_MAX                      = 2
};


// Enum TgClientBase.TgGFxMatchInvitation.EMatchInvitationActions
enum class EMatchInvitationActions : uint8_t
{
	EMINVA_UpdateUI                = 0,
	EMINVA_GamePadUpdate           = 1,
	EMINVA_ButtonPress             = 2,
	EMINVA_MAX                     = 3
};


// Enum TgClientBase.TgGFxMatchLobbyShared.MatchLobbyDemoState
enum class EMatchLobbyDemoState : uint8_t
{
	MLDS_None                      = 0,
	MLDS_Spectate                  = 1,
	MLDS_Cancelable                = 2,
	MLDS_Ready                     = 3,
	MLDS_MAX                       = 4
};


// Enum TgClientBase.TgGfxMessageSelector.EMessageSelectorActions
enum class EMessageSelectorActions : uint8_t
{
	EMSA_None                      = 0,
	EMSA_RefreshMessages           = 1,
	EMSA_MAX                       = 2
};


// Enum TgClientBase.TgGFxMouseEvent.EGFxMouseState
enum class EGFxMouseState : uint8_t
{
	EGFxMS_None                    = 0,
	EGFxMS_Up                      = 1,
	EGFxMS_Released                = 2,
	EGFxMS_Down                    = 3,
	EGFxMS_Pressed                 = 4,
	EGFxMS_Held                    = 5,
	EGFxMS_MAX                     = 6
};


// Enum TgClientBase.TgGFxMouseEvent.EGFxMouseButton
enum class EGFxMouseButton : uint8_t
{
	EGFxMB_None                    = 0,
	EGFxMB_Left                    = 1,
	EGFxMB_Right                   = 2,
	EGFxMB_Middle                  = 3,
	EGFxMB_Extra0                  = 4,
	EGFxMB_Extra1                  = 5,
	EGFxMB_Extra2                  = 6,
	EGFxMB_Extra3                  = 7,
	EGFxMB_MAX                     = 8
};


// Enum TgClientBase.TgGfxPatchOverview.EPatchOverviewActions
enum class EPatchOverviewActions : uint8_t
{
	EPOA_OpenPatchNotes            = 0,
	EPOA_Close                     = 1,
	EPOA_MAX                       = 2
};


// Enum TgClientBase.TgGFxPlay.EPlaySharedAction
enum class EPlaySharedAction : uint8_t
{
	EPSA_UpdateTab                 = 0,
	EPSA_QueueDataUpdated          = 1,
	EPSA_JoinQueue                 = 2,
	EPSA_SetPreferredSite          = 3,
	EPSA_FeaturedQueueUpdated      = 4,
	EPSA_InQueueUpdated            = 5,
	EPSA_RoleUpdated               = 6,
	EPSA_NavigateToLeague          = 7,
	EPSA_MAX                       = 8
};


// Enum TgClientBase.TgGFxPlay.EPlaySharedTabs
enum class EPlaySharedTabs : uint8_t
{
	EPlayTab_Featured              = 0,
	EPlayTab_Normal                = 1,
	EPlayTab_Ranked                = 2,
	EPlayTab_Coop                  = 3,
	EPlayTab_Training              = 4,
	EPlayTab_Custom                = 5,
	EPlayTab_MAX                   = 6
};


// Enum TgClientBase.TgGFxPlayCustom.EPlayCustomSharedAction
enum class EPlayCustomSharedAction : uint8_t
{
	EPCSA_InCustomUpdated          = 0,
	EPCSA_CustomListDataUpdated    = 1,
	EPCSA_CustomListDataRefresh    = 2,
	EPCSA_CustomRefreshWaitTimeUpdated = 3,
	EPCSA_CreateCustomMatch        = 4,
	EPCSA_JoinCustomMatch          = 5,
	EPCSA_PlayerSpeakingUpdated    = 6,
	EPCSA_PlayerMuteUpdated        = 7,
	EPCSA_PlayersUpdated           = 8,
	EPCSA_OnCustomInvite           = 9,
	EPCSA_AddBot                   = 10,
	EPCSA_ChangeTeam               = 11,
	EPCSA_KickPlayer               = 12,
	EPCSA_StartMatch               = 13,
	EPCSA_ChangeBot                = 14,
	EPCSA_PromoteInviter           = 15,
	EPCSA_ViewPlayer               = 16,
	EPCSA_MatchReadyUpdate         = 17,
	EPCSA_TeamUpdate               = 18,
	EPCSA_MAX                      = 19
};


// Enum TgClientBase.TgGFxPriceData.EPriceSaleType
enum class EPriceSaleType : uint8_t
{
	SALE_TYPE_PreSale              = 0,
	SALE_TYPE_PostSale             = 1,
	SALE_TYPE_MAX                  = 2
};


// Enum TgClientBase.TgGfxQuestList.EQuestListActions
enum class EQuestListActions : uint8_t
{
	EQLA_None                      = 0,
	EQLA_UpdateQuests              = 1,
	EQLA_OnResize                  = 2,
	EQLA_AbandonQuest              = 3,
	EQLA_GotoQuest                 = 4,
	EQLA_GotoEventQuest            = 5,
	EQLA_MAX                       = 6
};


// Enum TgClientBase.TgGfxQuestList.EQuestItemRenderers
enum class EQuestItemRenderers : uint8_t
{
	QIR_None                       = 0,
	QIR_Header                     = 1,
	QIR_Message                    = 2,
	QIR_Quest                      = 3,
	QIR_Special                    = 4,
	QIR_Constant                   = 5,
	QIR_MAX                        = 6
};


// Enum TgClientBase.TgGfxRewardCenter.ERewardCenterActions
enum class ERewardCenterActions : uint8_t
{
	ERCA_None                      = 0,
	ERCA_UpdateTabs                = 1,
	ERCA_RefreshRewards            = 2,
	ERCA_ClaimBonusChest           = 3,
	ERCA_SelectTab                 = 4,
	ERCA_UnlockItem                = 5,
	ERCA_ClaimGift                 = 6,
	ERCA_OnGiftOpened              = 7,
	ERCA_OnGiftOpenFailed          = 8,
	ERCA_GiftBack                  = 9,
	ERCA_MAX                       = 10
};


// Enum TgClientBase.TgGfxRewardCenter.RewardCenterTabs
enum class ERewardCenterTabs : uint8_t
{
	TAB_REWARD_DAILY_REWARD        = 0,
	TAB_REWARD_BONUS_CHEST         = 1,
	TAB_REWARD_GIFTING             = 2,
	TAB_REWARD_COUPONS             = 3,
	TAB_REWARD_LEVEL_UP_BONUS      = 4,
	TAB_REWARD_PARTY_BONUSES       = 5,
	TAB_REWARD_EVENT_INFO          = 6,
	TAB_REWARD_ITEM_RECEIPTS       = 7,
	TAB_REWARD_MAX                 = 8
};


// Enum TgClientBase.TgGfxSeasonalEventCalendar.ESeasonalEventCalendarActions
enum class ESeasonalEventCalendarActions : uint8_t
{
	ESEBA_Init                     = 0,
	ESEBA_SetRefDate               = 1,
	ESEBA_MAX                      = 2
};


// Enum TgClientBase.TgGFxSocialList.EFriendsListActions
enum class EFriendsListActions : uint8_t
{
	EFMA_NONE                      = 0,
	EFMA_JOIN                      = 1,
	EFMA_INVITEPARTY               = 2,
	EFMA_SPECTATE                  = 3,
	EFMA_INVITECLAN                = 4,
	EFMA_MAX                       = 5
};


// Enum TgClientBase.TgGFxSocialList.EFriendsTabs
enum class EFriendsTabs : uint8_t
{
	EFL_FRIENDS                    = 0,
	EFL_RECENT                     = 1,
	EFL_REFER                      = 2,
	EFL_REFERRED                   = 3,
	EFL_MAX                        = 4
};


// Enum TgClientBase.TgGfxSovereigntyVendorStore.EShopActionMode
enum class EShopActionMode : uint8_t
{
	BUY_ACTION_MODE                = 0,
	SELL_ACTION_MODE               = 1,
	NONE_ACTION_MODE               = 2,
	EShopActionMode_MAX            = 3
};


// Enum TgClientBase.TgVendorData.VendorDataVendorMode
enum class EVendorDataVendorMode : uint8_t
{
	VDVM_Normal                    = 0,
	VDVM_CH03_Adventure            = 1,
	VDVM_MAX                       = 2
};


// Enum TgClientBase.TgVendorData.VendorRecommendedBuildMode
enum class EVendorRecommendedBuildMode : uint8_t
{
	VRBM_None                      = 0,
	VRBM_Single                    = 1,
	VRBM_All                       = 2,
	VRBM_MAX                       = 3
};


// Enum TgClientBase.TgVendorData.ItemStoreActions
enum class EItemStoreActions : uint8_t
{
	EISA_None                      = 0,
	EISA_Init                      = 1,
	EISA_Sell                      = 2,
	EISA_Tier                      = 3,
	EISA_Event                     = 4,
	EISA_Filter                    = 5,
	EISA_Update                    = 6,
	EISA_Display                   = 7,
	EISA_SubFilter                 = 8,
	EISA_Select                    = 9,
	EISA_SelectTier1               = 10,
	EISA_SelectTier2               = 11,
	EISA_SelectTier3               = 12,
	EISA_SelectTier4               = 13,
	EISA_Tier1Tip                  = 14,
	EISA_Tier2Tip                  = 15,
	EISA_Tier3Tip                  = 16,
	EISA_Tier4Tip                  = 17,
	EISA_ListTip                   = 18,
	EISA_GridTip                   = 19,
	EISA_ListItem                  = 20,
	EISA_ListScroll                = 21,
	EISA_AutoPurchase              = 22,
	EISA_SellItem                  = 23,
	EISA_PurchaseItem              = 24,
	EISA_GridItem                  = 25,
	EISA_GridScroll                = 26,
	EISA_Tab                       = 27,
	EISA_Role                      = 28,
	EISA_ForceHideTip              = 29,
	EISA_Undo                      = 30,
	EISA_UpdateTierSummary         = 31,
	EISA_LeaveFilterList           = 32,
	EISA_ExpandFilter              = 33,
	EISA_FocusFilterList           = 34,
	EISA_ResetIdleTimer            = 35,
	EISA_SwapActive                = 36,
	EISA_SwapConsumable            = 37,
	EISA_Back                      = 38,
	EISA_SellX                     = 39,
	EISA_MAX                       = 40
};


// Enum TgClientBase.TgVendorData.StoreDisplayType
enum class EStoreDisplayType : uint8_t
{
	ESDT_RECOMMENDED               = 0,
	ESDT_STANDARD                  = 1,
	ESDT_STATS                     = 2,
	ESDT_ALL                       = 3,
	ESDT_OWNED                     = 4,
	ESDT_MAX                       = 5
};


// Enum TgClientBase.TgVendorData.ItemDisplayType
enum class EItemDisplayType : uint8_t
{
	EIDT_LIST                      = 0,
	EIDT_GRID                      = 1,
	EIDT_MAX                       = 2
};


// Enum TgClientBase.TgGfxStoreChest.EStoreChestActions
enum class EStoreChestActions : uint8_t
{
	ESCA_None                      = 0,
	ESCA_ItemUnlock                = 1,
	ESCA_RefreshItems              = 2,
	ESCA_ChestIndex                = 3,
	ESCA_CheckForInfoPopup         = 4,
	ESCA_PageOpened                = 5,
	ESCA_MAX                       = 6
};


// Enum TgClientBase.TgGfxStoreFeatures.EStoreFeatureActions
enum class EStoreFeatureActions : uint8_t
{
	ESFA_None                      = 0,
	ESFA_GotoItem                  = 1,
	ESFA_GotoDailyDeal             = 2,
	ESFA_SetDealInactive           = 3,
	ESFA_PrevDailyDeal             = 4,
	ESFA_NextDailyDeal             = 5,
	ESFA_AnimateDealSwap           = 6,
	ESFA_ClaimDailyReward          = 7,
	ESFA_MAX                       = 8
};


// Enum TgClientBase.TgGFxStoreShared.STORE_MAIN_TAB
enum class ESTORE_MAIN_TAB : uint8_t
{
	STORE_MAIN_TAB_FEATURED        = 0,
	STORE_MAIN_TAB_DEALS           = 1,
	STORE_MAIN_TAB_GODS            = 2,
	STORE_MAIN_TAB_SKINS           = 3,
	STORE_MAIN_TAB_CHESTS          = 4,
	STORE_MAIN_TAB_GIFTING         = 5,
	STORE_MAIN_TAB_BUNDLES         = 6,
	STORE_MAIN_TAB_ACCOUNT_NAME    = 7,
	STORE_MAIN_TAB_ACCOUNT_BOOSTER = 8,
	STORE_MAIN_TAB_CODE            = 9,
	STORE_MAIN_TAB_VOICE_PACKS     = 10,
	STORE_MAIN_TAB_EMOTES          = 11,
	STORE_MAIN_TAB_AVATARS         = 12,
	STORE_MAIN_TAB_WARDS           = 13,
	STORE_MAIN_TAB_ANNOUNCER_PACKS = 14,
	STORE_MAIN_TAB_LOADING_FRAMES  = 15,
	STORE_MAIN_TAB_PEDESTALS       = 16,
	STORE_MAIN_TAB_GLOBAL_EMOTES   = 17,
	STORE_MAIN_TAB_MUSIC_THEMES    = 18,
	STORE_MAIN_TAB_BOOSTERS        = 19,
	STORE_MAIN_TAB_ACCOUNT         = 20,
	STORE_MAIN_TAB_MIXER           = 21,
	STORE_MAIN_TAB_JUMP_STAMP      = 22,
	STORE_MAIN_TAB_HUD_THEME       = 23,
	STORE_MAIN_TAB_MAX             = 24
};


// Enum TgClientBase.TgGFxStoreShared.EStoreActions
enum class EStoreActions : uint8_t
{
	ESA_None                       = 0,
	ESA_CheckForGiftInfoPopup      = 1,
	ESA_MAX                        = 2
};


// Enum TgClientBase.TgGfxStoreViewer.EStoreViewerActions
enum class EStoreViewerActions : uint8_t
{
	ESVA_None                      = 0,
	ESVA_ItemUnlock                = 1,
	ESVA_ItemGoto                  = 2,
	ESVA_SelectTab                 = 3,
	ESVA_UNUSED0                   = 4,
	ESVA_RefreshUGPRefund          = 5,
	ESVA_ItemGotoObtain            = 6,
	ESVA_OnItemSelect              = 7,
	ESVA_TextChange                = 8,
	ESVA_MAX                       = 9
};


// Enum TgClientBase.TgGfxVendorStoreUnit.EVendorStoreUnitAction
enum class EVendorStoreUnitAction : uint8_t
{
	EVSUA_PurchaseUnit             = 0,
	EVSUA_SellUnit                 = 1,
	EVSUA_BuffUnit                 = 2,
	EVSUA_SwapUnit                 = 3,
	EVSUA_InventoryUpdate          = 4,
	EVSUA_UpdateShop               = 5,
	EVSUA_MAX                      = 6
};


// Enum TgClientBase.TgGfxVendorStoreV2_Console.VendorStorePanelMode
enum class EVendorStorePanelMode : uint8_t
{
	VSPM_ItemSelection             = 0,
	VSPM_ItemPurchase              = 1,
	VSPM_MAX                       = 2
};


// Enum TgClientBase.TgGfxVendorStoreV2_Console.VendorStoreNavigationMode
enum class EVendorStoreNavigationMode : uint8_t
{
	VSNM_Store                     = 0,
	VSNM_Inventory                 = 1,
	VSNM_Act_Con                   = 2,
	VSNM_MAX                       = 3
};


// Enum TgClientBase.TgGfxVendorStoreV2_Console.VendorStoreFilterMode
enum class EVendorStoreFilterMode : uint8_t
{
	VSFM_Recommended               = 0,
	VSFM_Custom                    = 1,
	VSFM_Popular                   = 2,
	VSFM_Offensive                 = 3,
	VSFM_Defensive                 = 4,
	VSFM_Utility                   = 5,
	VSFM_Starter                   = 6,
	VSFM_Recommended2              = 7,
	VSFM_Recommended3              = 8,
	VSFM_Recommended4              = 9,
	VSFM_Recommended5              = 10,
	VSFM_MAX                       = 11
};


// Enum TgClientBase.TgGfxVendorStoreV2_Console.VendorStoreGridTierMode
enum class EVendorStoreGridTierMode : uint8_t
{
	VSGTM_None                     = 0,
	VSGTM_Active                   = 1,
	VSGTM_Grid                     = 2,
	VSGTM_Active_Upgrade           = 3,
	VSGTM_MAX                      = 4
};


// Enum TgClientBase.TgMiniMap.TgMapOrientation
enum class ETgMapOrientation : uint8_t
{
	TMO_NORMAL                     = 0,
	TMO_ROTATE                     = 1,
	TMO_ROTATE01                   = 2,
	TMO_ROTATE02                   = 3,
	TMO_MAX                        = 4
};


// Enum TgClientBase.TgMiniMap.MiniMapIconLayer
enum class EMiniMapIconLayer : uint8_t
{
	MMap_Layer_Enemy_Deployable    = 0,
	MMap_Layer_Friendly_Deployable = 1,
	MMap_Layer_Enemy_Minion        = 2,
	MMap_Layer_Enemy_Bot           = 3,
	MMap_Layer_Friendly_Minion     = 4,
	MMap_Layer_Friendly_Bot        = 5,
	MMap_Layer_Enemy_Player        = 6,
	MMap_Layer_Friendly_Player     = 7,
	MMap_Layer_Neutral_Factory     = 8,
	MMap_Layer_Friendly_Factory    = 9,
	MMap_Layer_Enemy_Factory       = 10,
	MMap_Layer_Device_Volume       = 11,
	MMap_Layer_Neutral_CapturePoint = 12,
	MMap_Layer_Enemy_CapturePoint  = 13,
	MMap_Layer_Friendly_CapturePoint = 14,
	MMap_Layer_Targeting           = 15,
	MMap_Layer_Local_Player_Pet    = 16,
	MMap_Layer_Local_Player        = 17,
	MMap_Layer_CTF_Flag            = 18,
	MMap_Layer_MAX                 = 19
};


// Enum TgClientBase.TgMiniMap.MiniMapPortalLayer
enum class EMiniMapPortalLayer : uint8_t
{
	MMap_Portal_Layer_Enemy        = 0,
	MMap_Portal_Layer_Friendly     = 1,
	MMap_Portal_Layer_MAX          = 2
};


// Enum TgClientBase.TgMiniMap.MinimapDisplayType
enum class EMinimapDisplayType : uint8_t
{
	MDT_Friendly                   = 0,
	MDT_Enemy                      = 1,
	MDT_FriendlyCB                 = 2,
	MDT_EnemyCB                    = 3,
	MDT_SpectatorTarget            = 4,
	MDT_FriendlyLocal              = 5,
	MDT_MAX                        = 6
};


// Enum TgClientBase.TgPlayerNameProcessor.ETgNameRequestStage
enum class ETgNameRequestStage : uint8_t
{
	TNRS_None                      = 0,
	TNRS_Platform                  = 1,
	TNRS_Mcts                      = 2,
	TNRS_MctsFail                  = 3,
	TNRS_Filter                    = 4,
	TNRS_Complete                  = 5,
	TNRS_Timeout                   = 6,
	TNRS_MAX                       = 7
};


// Enum TgClientBase.TgRewardCenterManagerBase.QuestType
enum class EQuestType : uint8_t
{
	EQT_Daily                      = 0,
	EQT_Collection                 = 1,
	EQT_Special                    = 2,
	EQT_Training                   = 3,
	EQT_MAX                        = 4
};


// Enum TgClientBase.TgRewardCenterManagerBase.EventQuestSubtype
enum class EventQuestSubtype : uint8_t
{
	EQSBT_BIRTHDAY                 = 0,
	EQSBT_SUMMER_ST                = 1,
	EQSBT_DIVINE_UPRISING          = 2,
	EQSBT_FALL_ST                  = 3,
	EQSBT_ODYSSEY_HERA             = 4,
	EQSBT_BATTLEPASS               = 5,
	EQSBT_MAX                      = 6
};


// Enum TgClientBase.TgSettingsDC_Account.EmailUpdateResponse
enum class EmailUpdateResponse : uint8_t
{
	EUR_NONE                       = 0,
	EUR_SUCCESS                    = 1,
	EUR_INVALID_EMAIL              = 2,
	EUR_MAX                        = 3
};


// Enum TgClientBase.TgSettingsDC_Audio.EVoiceChatInputType
enum class EVoiceChatInputType : uint8_t
{
	EVCIT_OpenMic                  = 0,
	EVCIT_PushToTalk               = 1,
	EVCIT_PushToToggle             = 2,
	EVCIT_MAX                      = 3
};


// Enum TgClientBase.TgSettingsDC_UI.CrossplayOptionsValue
enum class ECrossplayOptionsValue : uint8_t
{
	ECOV_CP_MATCHINPUT             = 0,
	ECOV_CP_FULL                   = 1,
	ECOV_CP_MATCHPLATFORM          = 2,
	ECOV_CP_MAX                    = 3
};


// Enum TgClientBase.TgStreamManagerBase.STREAMTYPE
enum class ESTREAMTYPE : uint8_t
{
	VST_NONE                       = 0,
	VST_HIREZ                      = 1,
	VST_TWITCH                     = 2,
	VST_TRAINING                   = 3,
	VST_COMMUNITY                  = 4,
	VST_NEWS                       = 5,
	VST_MAX                        = 6
};


// Enum TgClientBase.TgSystemNotifManagerBase.ESystemMessageType
enum class ESystemMessageType : uint8_t
{
	ESMT_Notification              = 0,
	ESMT_Unlock                    = 1,
	ESMT_Clan                      = 2,
	ESMT_Achievement               = 3,
	ESMT_Party                     = 4,
	ESMT_Friend                    = 5,
	ESMT_MAX                       = 6
};


// Enum TgClientBase.TgSystemNotifManagerBase.ESystemMessageSubType
enum class ESystemMessageSubType : uint8_t
{
	ESMST_None                     = 0,
	ESMST_Quest                    = 1,
	ESMST_Commendation             = 2,
	ESMST_GMSay                    = 3,
	ESMST_FriendInvite             = 4,
	ESMST_PartyInvite              = 5,
	ESMST_ClanInvite               = 6,
	ESMST_MAX                      = 7
};


// Enum TgClientBase.TgSystemNotifManagerBase.ENotificationType
enum class ENotificationType : uint8_t
{
	ENT_Party                      = 0,
	ENT_MESSAGE                    = 1,
	ENT_QueueInvite                = 2,
	ENT_FriendInvite               = 3,
	ENT_ClanInvite                 = 4,
	ENT_MAX                        = 5
};


// Enum TgClientBase.TgSystemNotifManagerBase.ESystemMessageState
enum class ESystemMessageState : uint8_t
{
	ESMS_None                      = 0,
	ESMS_Active                    = 1,
	ESMS_Expired                   = 2,
	ESMS_Accepted                  = 3,
	ESMS_Rejected                  = 4,
	ESMS_MAX                       = 5
};


// Enum TgClientBase.TgUIServerStates.EStateQueuePrivilegeState
enum class EStateQueuePrivilegeState : uint8_t
{
	SQPS_None                      = 0,
	SQPS_Pending                   = 1,
	SQPS_Denied                    = 2,
	SQPS_MAX                       = 3
};


// Enum TgClientBase.TgUIServerStates.EServerStateForceUpdate
enum class EServerStateForceUpdate : uint8_t
{
	SSFU_QueueStateUpdate          = 0,
	SSFU_MatchStateUpdate          = 1,
	SSFU_LobbyStateUpdate          = 2,
	SSFU_MAX                       = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TgClientBase.TgAcquisitionManager.EventAssociation
// 0x000C
struct FEventAssociation
{
	int                                                nEventId;                                                 // 0x0000(0x0004)
	int                                                nEventChapter;                                            // 0x0004(0x0004)
	unsigned long                                      bIsReward : 1;                                            // 0x0008(0x0004)
};

// ScriptStruct TgClientBase.TgPlayerNameManager.TgPlayerId
// 0x0024
struct FTgPlayerId
{
	struct FUniqueNetId                                m_UserId;                                                 // 0x0000(0x0008)
	struct FString                                     m_sAltId;                                                 // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      m_nType;                                                  // 0x0018(0x0004)
	struct FQWord                                      m_nPlayerId;                                              // 0x001C(0x0008)
};

// ScriptStruct TgClientBase.TgAcquisitionManager.SmiteAcquisition
// 0x0060
struct FSmiteAcquisition
{
	int                                                nSourceId;                                                // 0x0000(0x0004)
	int                                                nFailureMsgId;                                            // 0x0004(0x0004)
	struct Fdword                                      nItemId;                                                  // 0x0008(0x0004)
	struct Fdword                                      nLootId;                                                  // 0x000C(0x0004)
	struct Fdword                                      nLootTableId;                                             // 0x0010(0x0004)
	int                                                nRecipeItemType;                                          // 0x0014(0x0004)
	int                                                nItemType;                                                // 0x0018(0x0004)
	int                                                nSubItemType;                                             // 0x001C(0x0004)
	int                                                nEventFlags;                                              // 0x0020(0x0004)
	int                                                nFillQuantity;                                            // 0x0024(0x0004)
	int                                                nLootQuantity;                                            // 0x0028(0x0004)
	int                                                nTotalQuantity;                                           // 0x002C(0x0004)
	unsigned long                                      bSuccess : 1;                                             // 0x0030(0x0004)
	unsigned long                                      bQuietFailures : 1;                                       // 0x0030(0x0004)
	struct FTgPlayerId                                 nGiftPlayerId;                                            // 0x0034(0x0024) (NeedCtorLink)
	struct FQWord                                      qwCustomData;                                             // 0x0058(0x0008)
};

// ScriptStruct TgClientBase.TgAcquisitionManager.UIQueuedAcquisition
// 0x0080
struct FUIQueuedAcquisition
{
	int                                                nType;                                                    // 0x0000(0x0004)
	int                                                nSubType;                                                 // 0x0004(0x0004)
	struct FEventAssociation                           EventAssociation;                                         // 0x0008(0x000C)
	int                                                nQuantity;                                                // 0x0014(0x0004)
	class UGFxObject*                                  pObject;                                                  // 0x0018(0x0008)
	struct FSmiteAcquisition                           Acquisition;                                              // 0x0020(0x0060) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgMoviePlayer.WidgetBinding
// 0x0010
struct FWidgetBinding
{
	struct FName                                       m_WidgetName;                                             // 0x0000(0x0008)
	class UGFxObject*                                  m_Widget;                                                 // 0x0008(0x0008)
};

// ScriptStruct TgClientBase.TgPagePopup.PopupResponse
// 0x0018
struct FPopupResponse
{
	unsigned long                                      m_bHandled : 1;                                           // 0x0000(0x0004)
	int                                                nResponse;                                                // 0x0004(0x0004)
	TArray<struct FString>                             arrInputs;                                                // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgMoviePlayer.NavParams
// 0x0024
struct FNavParams
{
	TEnumAsByte<ENavigationActions>                    eNavId;                                                   // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct Fdword                                      eEventId;                                                 // 0x0004(0x0004)
	TEnumAsByte<ENavigationActions>                    eReturnToNavId;                                           // 0x0008(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct Fdword                                      eReturnToEventId;                                         // 0x000C(0x0004)
	class UTgDataItem*                                 pNavData;                                                 // 0x0010(0x0008)
	class UTgDataItem*                                 pReturnToData;                                            // 0x0018(0x0008)
	unsigned long                                      bForce : 1;                                               // 0x0020(0x0004)
};

// ScriptStruct TgClientBase.TgMoviePlayer.IntStringPair
// 0x0014
struct FIntStringPair
{
	int                                                nNumber;                                                  // 0x0000(0x0004)
	struct FString                                     sString;                                                  // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgMoviePlayer.InputSensitiveComponent
// 0x0014
struct FInputSensitiveComponent
{
	class UObject*                                     pOwner;                                                   // 0x0000(0x0008)
	class UGFxObject*                                  pObj;                                                     // 0x0008(0x0008)
	unsigned long                                      bGamepad : 1;                                             // 0x0010(0x0004)
};

// ScriptStruct TgClientBase.TgMoviePlayer.PendingChatMessage
// 0x0020
struct FPendingChatMessage
{
	struct FString                                     m_sRecipient;                                             // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     m_sMsg;                                                   // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgMoviePlayer.LastMatchMember
// 0x0028
struct FLastMatchMember
{
	int                                                nBotId;                                                   // 0x0000(0x0004)
	struct FTgPlayerId                                 pid;                                                      // 0x0004(0x0024) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgMoviePlayer.LastPartiedMember
// 0x0014
struct FLastPartiedMember
{
	int                                                m_playerId;                                               // 0x0000(0x0004)
	struct FString                                     m_playerName;                                             // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgMoviePlayer.RecentlyInvitedPlayers
// 0x002C
struct FRecentlyInvitedPlayers
{
	struct FTgPlayerId                                 pid;                                                      // 0x0000(0x0024) (NeedCtorLink)
	struct FQWord                                      nTimeSecs;                                                // 0x0024(0x0008)
};

// ScriptStruct TgClientBase.TgMoviePlayer.CardTextureWidget
// 0x0058
struct FCardTextureWidget
{
	class UGFxObject*                                  Widget;                                                   // 0x0000(0x0008)
	int                                                nItemId;                                                  // 0x0008(0x0004)
	int                                                nUniqueId;                                                // 0x000C(0x0004)
	float                                              X;                                                        // 0x0010(0x0004)
	float                                              Y;                                                        // 0x0014(0x0004)
	float                                              fWidth;                                                   // 0x0018(0x0004)
	float                                              fHeight;                                                  // 0x001C(0x0004)
	float                                              fTimeSinceCreation;                                       // 0x0020(0x0004)
	unsigned long                                      bLoaded : 1;                                              // 0x0024(0x0004)
	struct FString                                     sCardMIC;                                                 // 0x0028(0x0010) (NeedCtorLink)
	struct FString                                     sTexture;                                                 // 0x0038(0x0010) (NeedCtorLink)
	class UMaterialInstanceConstant*                   cardMIC;                                                  // 0x0048(0x0008)
	class UTexture2D*                                  Texture;                                                  // 0x0050(0x0008)
};

// ScriptStruct TgClientBase.TgMoviePlayer.UIChangeStruct
// 0x0010
struct FUIChangeStruct
{
	class AActor*                                      refActor;                                                 // 0x0000(0x0008)
	TEnumAsByte<EUIChangeEvent>                        uiEvent;                                                  // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                subType;                                                  // 0x000C(0x0004)
};

// ScriptStruct TgClientBase.TgMoviePlayer.SysCounterData
// 0x0008
struct FSysCounterData
{
	int                                                CounterId;                                                // 0x0000(0x0004)
	int                                                CounterCount;                                             // 0x0004(0x0004)
};

// ScriptStruct TgClientBase.TgIntervalManager.TgIntervalHandle
// 0x0010
struct FTgIntervalHandle
{
	struct FQWord                                      nId;                                                      // 0x0000(0x0008)
	class UTgIntervalManager*                          pOwner;                                                   // 0x0008(0x0008)
};

// ScriptStruct TgClientBase.TgMoviePlayer.TgLobbyStates
// 0x0010
struct FTgLobbyStates
{
	int                                                GameState;                                                // 0x0000(0x0004)
	int                                                LobbyState;                                               // 0x0004(0x0004)
	int                                                QueueState;                                               // 0x0008(0x0004)
	int                                                HudState;                                                 // 0x000C(0x0004)
};

// ScriptStruct TgClientBase.TgMoviePlayer.LeaderboardOpenData
// 0x0018
struct FLeaderboardOpenData
{
	struct FString                                     sName;                                                    // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nValue;                                                   // 0x0010(0x0004)
	int                                                nOption;                                                  // 0x0014(0x0004)
};

// ScriptStruct TgClientBase.TgMoviePlayer.TgPurchaseRequest
// 0x0028
struct FTgPurchaseRequest
{
	int                                                nLootTableItemId;                                         // 0x0000(0x0004)
	int                                                nVendorId;                                                // 0x0004(0x0004)
	int                                                nPriceInUI;                                               // 0x0008(0x0004)
	int                                                nCurrencyType;                                            // 0x000C(0x0004)
	int                                                nQuantity;                                                // 0x0010(0x0004)
	int                                                nLocationId;                                              // 0x0014(0x0004)
	int                                                nCouponId;                                                // 0x0018(0x0004)
	int                                                nGiftPlayerId;                                            // 0x001C(0x0004)
	int                                                nGiftMsgIndex;                                            // 0x0020(0x0004)
	unsigned long                                      bIsAnonGift : 1;                                          // 0x0024(0x0004)
};

// ScriptStruct TgClientBase.TgIntervalManager.TgIntervalEntry
// 0x0028
struct FTgIntervalEntry
{
	int                                                nLoopValue;                                               // 0x0000(0x0004)
	int                                                nRepeatStep;                                              // 0x0004(0x0004)
	struct Fdword                                      nDuration;                                                // 0x0008(0x0004)
	struct FQWord                                      nTime;                                                    // 0x000C(0x0008)
	struct FScriptDelegate                             delCallback;                                              // 0x0014(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned long                                      bRemove : 1;                                              // 0x0024(0x0004)
};

// ScriptStruct TgClientBase.TgMoviePlayer.TgReferralEntry
// 0x0030
struct FTgReferralEntry
{
	struct FTgPlayerId                                 pid;                                                      // 0x0000(0x0024) (NeedCtorLink)
	class UTgGFxPlayerData*                            pPlayerData;                                              // 0x0024(0x0008)
	int                                                externalReferralId;                                       // 0x002C(0x0004)
};

// ScriptStruct TgClientBase.TgMoviePlayer.TgNavProperties
// 0x0009
struct FTgNavProperties
{
	TEnumAsByte<ENavigationActions>                    eNavId;                                                   // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      bIsPopup : 1;                                             // 0x0004(0x0004)
	unsigned long                                      bManuallySetsCamera : 1;                                  // 0x0004(0x0004)
	TEnumAsByte<EMenuContentDataType>                  eCameraTarget;                                            // 0x0008(0x0001)
};

// ScriptStruct TgClientBase.TgMoviePlayer.TgReportPlayer
// 0x0044
struct FTgReportPlayer
{
	struct Fdword                                      nReasonCode;                                              // 0x0000(0x0004)
	struct Fdword                                      nPlayerCount;                                             // 0x0004(0x0004)
	struct Fdword                                      nReporterTaskForce;                                       // 0x0008(0x0004)
	struct Fdword                                      nReportedPlayerTaskForce;                                 // 0x000C(0x0004)
	struct FTgPlayerId                                 pidToReport;                                              // 0x0010(0x0024) (NeedCtorLink)
	struct FString                                     sReason;                                                  // 0x0034(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgChangeHudSectionEvent.TgHudSectionInfo
// 0x0040
struct FTgHudSectionInfo
{
	struct FString                                     sSection;                                                 // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDockObj;                                                 // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              nPercentX;                                                // 0x0020(0x0004)
	float                                              nPercentY;                                                // 0x0024(0x0004)
	float                                              nScale;                                                   // 0x0028(0x0004)
	float                                              nDockX;                                                   // 0x002C(0x0004)
	float                                              nDockY;                                                   // 0x0030(0x0004)
	float                                              nDockObjX;                                                // 0x0034(0x0004)
	float                                              nDockObjY;                                                // 0x0038(0x0004)
	unsigned long                                      bOutX : 1;                                                // 0x003C(0x0004)
	unsigned long                                      bOutY : 1;                                                // 0x003C(0x0004)
};

// ScriptStruct TgClientBase.TgClientHUD.SceneInfo
// 0x0014
struct FSceneInfo
{
	int                                                nUIType;                                                  // 0x0000(0x0004)
	struct FString                                     sPath;                                                    // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGameUIDispatcher.GameEventListener
// 0x0014
struct FGameEventListener
{
	int                                                nEventId;                                                 // 0x0000(0x0004)
	class UObject*                                     pScope;                                                   // 0x0004(0x0008)
	struct FName                                       nmCallback;                                               // 0x000C(0x0008)
};

// ScriptStruct TgClientBase.TgDeferredTask.TgDeferProgress
// 0x0014
struct FTgDeferProgress
{
	float                                              nProgress;                                                // 0x0000(0x0004)
	struct FString                                     sStepLabel;                                               // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgDeferManager.TgDeferTaskData
// 0x001C
struct FTgDeferTaskData
{
	class UTgDeferredTask*                             pTask;                                                    // 0x0000(0x0008)
	struct FTgDeferProgress                            LastProgress;                                             // 0x0008(0x0014) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgDeferManager.TgDeferEntry
// 0x0034
struct FTgDeferEntry
{
	struct FTgDeferTaskData                            Task;                                                     // 0x0000(0x001C) (NeedCtorLink)
	struct FScriptDelegate                             delCallback;                                              // 0x001C(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      pOwnerClass;                                              // 0x002C(0x0008)
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.DailyRewardInfo
// 0x0014
struct FDailyRewardInfo
{
	struct Fdword                                      nCurrentDay;                                              // 0x0000(0x0004)
	int                                                nConsecutiveDays;                                         // 0x0004(0x0004)
	struct Fdword                                      nLengthOfDay;                                             // 0x0008(0x0004)
	float                                              nTimeTilNextDay;                                          // 0x000C(0x0004)
	unsigned long                                      bShouldAutoCollect : 1;                                   // 0x0010(0x0004)
	unsigned long                                      bHasClaimedToday : 1;                                     // 0x0010(0x0004)
	unsigned long                                      bHasDoneRedirect : 1;                                     // 0x0010(0x0004)
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.GoalRewardItem
// 0x000C
struct FGoalRewardItem
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	int                                                nQuantity;                                                // 0x0004(0x0004)
	unsigned long                                      bRental : 1;                                              // 0x0008(0x0004)
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.ActivityGoal
// 0x0040
struct FActivityGoal
{
	int                                                nTargetValue;                                             // 0x0000(0x0004)
	int                                                nProgressValue;                                           // 0x0004(0x0004)
	struct FString                                     sDescription;                                             // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sName;                                                    // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bClaimed : 1;                                             // 0x0028(0x0004)
	int                                                nGoalId;                                                  // 0x002C(0x0004)
	TArray<struct FGoalRewardItem>                     pLootItems;                                               // 0x0030(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.PlayerPartyBonus
// 0x0010
struct FPlayerPartyBonus
{
	int                                                nPlayerCount;                                             // 0x0000(0x0004)
	float                                              fWorshipperBonus;                                         // 0x0004(0x0004)
	float                                              fXpBonus;                                                 // 0x0008(0x0004)
	float                                              fFavorBonus;                                              // 0x000C(0x0004)
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.QuestData
// 0x005C
struct FQuestData
{
	int                                                nQuestId;                                                 // 0x0000(0x0004)
	int                                                nActivityId;                                              // 0x0004(0x0004)
	int                                                nGoalId;                                                  // 0x0008(0x0004)
	int                                                nLootTableId;                                             // 0x000C(0x0004)
	int                                                nReceivedTime;                                            // 0x0010(0x0004)
	int                                                nNameId;                                                  // 0x0014(0x0004)
	int                                                nDescId;                                                  // 0x0018(0x0004)
	int                                                nTitleId;                                                 // 0x001C(0x0004)
	int                                                nGoalType;                                                // 0x0020(0x0004)
	int                                                nCompletionGoal;                                          // 0x0024(0x0004)
	int                                                nCompleteType;                                            // 0x0028(0x0004)
	int                                                nCurrentProgress;                                         // 0x002C(0x0004)
	int                                                nIconIndex;                                               // 0x0030(0x0004)
	int                                                nQuestType;                                               // 0x0034(0x0004)
	int                                                nEventQuestType;                                          // 0x0038(0x0004)
	int                                                nEndTime;                                                 // 0x003C(0x0004)
	int                                                nProgressEarned;                                          // 0x0040(0x0004)
	int                                                nDisplayOrder;                                            // 0x0044(0x0004)
	unsigned long                                      bCanAbandon : 1;                                          // 0x0048(0x0004)
	unsigned long                                      bSkipped : 1;                                             // 0x0048(0x0004)
	unsigned long                                      bSeen : 1;                                                // 0x0048(0x0004)
	unsigned long                                      bNew : 1;                                                 // 0x0048(0x0004)
	TArray<struct FGoalRewardItem>                     pLootItems;                                               // 0x004C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.CouponData
// 0x000C
struct FCouponData
{
	int                                                nCouponId;                                                // 0x0000(0x0004)
	int                                                nItemId;                                                  // 0x0004(0x0004)
	unsigned long                                      bSeen : 1;                                                // 0x0008(0x0004)
};

// ScriptStruct TgClientBase.TgRewardCenterManagerBase.DailyBundleTrackingData
// 0x0014
struct FDailyBundleTrackingData
{
	struct Fdword                                      nLootTableItemId;                                         // 0x0000(0x0004)
	TArray<struct Fdword>                              DealItemIds;                                              // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgStreamManagerBase.GameStream
// 0x0058
struct FGameStream
{
	unsigned long                                      bLive : 1;                                                // 0x0000(0x0004)
	unsigned long                                      bFeatured : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bSpecial : 1;                                             // 0x0000(0x0004)
	TEnumAsByte<ESTREAMTYPE>                           Type;                                                     // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     Title;                                                    // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     StreamURL;                                                // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     ChannelName;                                              // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Description;                                              // 0x0038(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     Viewers;                                                  // 0x0048(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgDataHandler.TgChunkUpdateQueue
// 0x0011
struct FTgChunkUpdateQueue
{
	TArray<class UTgDataChunk*>                        arrChunks;                                                // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned char                                      fUpdateDelay;                                             // 0x0010(0x0001)
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsEventTeam
// 0x0010
struct FTgEsportsEventTeam
{
	struct Fdword                                      nEventTeamId;                                             // 0x0000(0x0004)
	struct Fdword                                      nTeamId;                                                  // 0x0004(0x0004)
	struct FPointer                                    pEvent;                                                   // 0x0008(0x0008) (Native)
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsEvent
// 0x0034
struct FTgEsportsEvent
{
	struct Fdword                                      nEventId;                                                 // 0x0000(0x0004)
	struct FString                                     sName;                                                    // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      nEventType;                                               // 0x0014(0x0004)
	struct FQWord                                      nStartDate;                                               // 0x0018(0x0008)
	TArray<struct FTgEsportsEventTeam>                 arrEventTeams;                                            // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      nTourneyPickEventTeamId;                                  // 0x0030(0x0004)
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsMatch
// 0x0038
struct FTgEsportsMatch
{
	struct Fdword                                      nMatchId;                                                 // 0x0000(0x0004)
	struct FPointer                                    pGroup;                                                   // 0x0004(0x0008) (Native)
	struct Fdword                                      nEventTypeValue;                                          // 0x000C(0x0004)
	struct Fdword                                      nRoundTypeValue;                                          // 0x0010(0x0004)
	struct Fdword                                      nWinnerId;                                                // 0x0014(0x0004)
	struct FQWord                                      nStartDate;                                               // 0x0018(0x0008)
	struct FQWord                                      nEndDate;                                                 // 0x0020(0x0008)
	struct FString                                     sUrl;                                                     // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsMatchGroup
// 0x004C
struct FTgEsportsMatchGroup
{
	struct Fdword                                      nSeasonId;                                                // 0x0000(0x0004)
	struct Fdword                                      nEventId;                                                 // 0x0004(0x0004)
	struct Fdword                                      nGroupId;                                                 // 0x0008(0x0004)
	struct FQWord                                      nStartDate;                                               // 0x000C(0x0008)
	struct FQWord                                      nEndDate;                                                 // 0x0014(0x0008)
	struct Fdword                                      nVotedFor;                                                // 0x001C(0x0004)
	struct Fdword                                      nNextMatchId;                                             // 0x0020(0x0004)
	struct Fdword                                      arrTeams[0x2];                                            // 0x0024(0x0004)
	struct Fdword                                      arrScores[0x2];                                           // 0x002C(0x0004)
	struct Fdword                                      arrGlobalPickCounts[0x2];                                 // 0x0034(0x0004)
	TArray<struct FTgEsportsMatch>                     arrMatches;                                               // 0x003C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsWinBreakdown
// 0x0008
struct FTgEsportsWinBreakdown
{
	struct Fdword                                      nTeamId;                                                  // 0x0000(0x0004)
	struct Fdword                                      nWins;                                                    // 0x0004(0x0004)
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsStats
// 0x002C
struct FTgEsportsStats
{
	struct Fdword                                      nSeasonId;                                                // 0x0000(0x0004)
	struct Fdword                                      nTeamId;                                                  // 0x0004(0x0004)
	struct Fdword                                      nMatchCount;                                              // 0x0008(0x0004)
	struct Fdword                                      nWins;                                                    // 0x000C(0x0004)
	struct Fdword                                      nLosses;                                                  // 0x0010(0x0004)
	struct Fdword                                      nWinLossPercentage;                                       // 0x0014(0x0004)
	TArray<struct FTgEsportsWinBreakdown>              arrWinsBreakdown;                                         // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      nRank;                                                    // 0x0028(0x0004)
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsIconHandle
// 0x0010
struct FTgEsportsIconHandle
{
	struct FString                                     sId;                                                      // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsTeam
// 0x0094
struct FTgEsportsTeam
{
	struct Fdword                                      nTeamId;                                                  // 0x0000(0x0004)
	struct Fdword                                      nSortOrder;                                               // 0x0004(0x0004)
	struct Fdword                                      nRank;                                                    // 0x0008(0x0004)
	struct Fdword                                      nWinLossPercentage;                                       // 0x000C(0x0004)
	struct FString                                     sColor;                                                   // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sName;                                                    // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sShortName;                                               // 0x0030(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sTagLine;                                                 // 0x0040(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sLeagueTag;                                               // 0x0050(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgEsportsIconHandle                        Icon;                                                     // 0x0060(0x0010) (NeedCtorLink)
	struct FTgEsportsIconHandle                        Banner;                                                   // 0x0070(0x0010) (NeedCtorLink)
	unsigned long                                      bIsActive : 1;                                            // 0x0080(0x0004)
	unsigned long                                      bSwcTeam : 1;                                             // 0x0080(0x0004)
	TArray<struct Fdword>                              arrPurchaseLTIs;                                          // 0x0084(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsFeaturedPanelData
// 0x0040
struct FTgEsportsFeaturedPanelData
{
	struct FString                                     sLargeText;                                               // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     sSmallText;                                               // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     sImagePath;                                               // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     sId;                                                      // 0x0030(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgEsportsManager.TgLocalizationRef
// 0x0030
struct FTgLocalizationRef
{
	struct FString                                     sKey;                                                     // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     sSection;                                                 // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     sPackage;                                                 // 0x0020(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsTeamConfig
// 0x0078
struct FTgEsportsTeamConfig
{
	int                                                nTeamId;                                                  // 0x0000(0x0004)
	struct FString                                     sColor;                                                   // 0x0004(0x0010) (NeedCtorLink)
	struct FString                                     sIcon;                                                    // 0x0014(0x0010) (NeedCtorLink)
	struct FTgLocalizationRef                          locTagLine;                                               // 0x0024(0x0030) (NeedCtorLink)
	TArray<int>                                        arrTeamItems;                                             // 0x0054(0x0010) (NeedCtorLink)
	struct FString                                     sLeagueTag;                                               // 0x0064(0x0010) (NeedCtorLink)
	unsigned long                                      bSwcTeam : 1;                                             // 0x0074(0x0004)
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsRosterMember
// 0x0024
struct FTgEsportsRosterMember
{
	struct FString                                     sName;                                                    // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sPosition;                                                // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bLeader : 1;                                              // 0x0020(0x0004)
};

// ScriptStruct TgClientBase.TgEsportsManager.TgEsportsRosterTeams
// 0x0014
struct FTgEsportsRosterTeams
{
	int                                                nTeamId;                                                  // 0x0000(0x0004)
	TArray<struct FTgEsportsRosterMember>              Members;                                                  // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGFxNameDisplayManager.TgPlayerNameWidgetBind
// 0x0010
struct FTgPlayerNameWidgetBind
{
	class UTgGFxPlayerNameWidget*                      pWidget;                                                  // 0x0000(0x0008)
	struct FName                                       nmWidgetPath;                                             // 0x0008(0x0008)
};

// ScriptStruct TgClientBase.TgGFxNameDisplayManager.TgWidgetNameRequest
// 0x002C
struct FTgWidgetNameRequest
{
	class UTgGFxPlayerNameWidget*                      pWidget;                                                  // 0x0000(0x0008)
	struct FTgPlayerId                                 pid;                                                      // 0x0008(0x0024) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGFxObject.GFxEventData
// 0x002C
struct FGFxEventData
{
	class UGFxObject*                                  _this;                                                    // 0x0000(0x0008)
	class UGFxObject*                                  Target;                                                   // 0x0008(0x0008)
	struct FName                                       Type;                                                     // 0x0010(0x0008)
	int                                                Data;                                                     // 0x0018(0x0004)
	int                                                mouseIndex;                                               // 0x001C(0x0004)
	int                                                Button;                                                   // 0x0020(0x0004)
	int                                                Index;                                                    // 0x0024(0x0004)
	int                                                lastIndex;                                                // 0x0028(0x0004)
};

// ScriptStruct TgClientBase.TgGFxObject.Rect
// 0x0010
struct FRect
{
	struct FVector2D                                   vecMin;                                                   // 0x0000(0x0008)
	struct FVector2D                                   vecMax;                                                   // 0x0008(0x0008)
};

// ScriptStruct TgClientBase.TgDataChunk.TgDataFieldHandle
// 0x0004
struct FTgDataFieldHandle
{
	int                                                Index;                                                    // 0x0000(0x0004)
};

// ScriptStruct TgClientBase.TgDataChunk.DataField
// 0x0050
struct FDataField
{
	struct FPointer                                    FieldName;                                                // 0x0000(0x0008) (Native)
	int                                                nNameLen;                                                 // 0x0008(0x0004)
	struct FASValue                                    Value;                                                    // 0x000C(0x0020) (NeedCtorLink)
	struct FASValue                                    Last;                                                     // 0x002C(0x0020) (NeedCtorLink)
	unsigned long                                      bDirty : 1;                                               // 0x004C(0x0004)
};

// ScriptStruct TgClientBase.TgGfxEventSceneBase.BuyAllLinkage
// 0x0050
struct FBuyAllLinkage
{
	struct FString                                     sOverviewLinkage;                                         // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     sListHeaderLinkage;                                       // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     sListDividerLinkage;                                      // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     sListItemLinkage;                                         // 0x0030(0x0010) (NeedCtorLink)
	struct FString                                     sScrollBarLinkage;                                        // 0x0040(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGfxLoadoutsBase.GFxLoadoutItem
// 0x0020
struct FGFxLoadoutItem
{
	class UTgGFxObject*                                pObj;                                                     // 0x0000(0x0008)
	class UTgGFxObject*                                IconLoader;                                               // 0x0008(0x0008)
	class UTgGFxObject*                                Tag;                                                      // 0x0010(0x0008)
	class UTgGFxObject*                                Favorite;                                                 // 0x0018(0x0008)
};

// ScriptStruct TgClientBase.TgGfxLoadoutsBase.GfxEquippedLoadoutItem
// 0x0050
struct FGfxEquippedLoadoutItem
{
	class UTgGFxObject*                                pObj;                                                     // 0x0000(0x0008)
	class UTgGFxObject*                                Background;                                               // 0x0008(0x0008)
	struct FGFxLoadoutItem                             LoadoutItem;                                              // 0x0010(0x0020)
	class UTgGFxObject*                                TitleTF;                                                  // 0x0030(0x0008)
	class UTgGFxObject*                                ItemTF;                                                   // 0x0038(0x0008)
	struct FString                                     sTitle;                                                   // 0x0040(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgLandingPanelManagerBase.LoginBlockerData
// 0x0068
struct FLoginBlockerData
{
	struct FString                                     sId;                                                      // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sTitle;                                                   // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDescription;                                             // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sButtonText;                                              // 0x0030(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sActionId;                                                // 0x0040(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sActionId2;                                               // 0x0050(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nType;                                                    // 0x0060(0x0004)
	int                                                nLocationId;                                              // 0x0064(0x0004)
};

// ScriptStruct TgClientBase.TgGfxMassInviteBase.InviteRow
// 0x0020
struct FInviteRow
{
	class UTgGFxObject*                                Object;                                                   // 0x0000(0x0008)
	class UTgGFxObject*                                PlayerName;                                               // 0x0008(0x0008)
	class UTgGFxObject*                                PlayerIcon;                                               // 0x0010(0x0008)
	class UTgGFxObject*                                RemoveBtn;                                                // 0x0018(0x0008)
};

// ScriptStruct TgClientBase.TgGfxMassInviteBase.FriendRow
// 0x0028
struct FFriendRow
{
	class UTgGFxObject*                                Object;                                                   // 0x0000(0x0008)
	class UTgGFxObject*                                AvatarLoader;                                             // 0x0008(0x0008)
	class UTgGFxObject*                                PlayerName;                                               // 0x0010(0x0008)
	class UTgGFxObject*                                PlayerStatus;                                             // 0x0018(0x0008)
	class UTgGFxObject*                                InviteBtn;                                                // 0x0020(0x0008)
};

// ScriptStruct TgClientBase.TgGfxMassInviteBase.OpenInvite
// 0x0018
struct FOpenInvite
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                IconId;                                                   // 0x0010(0x0004)
	struct Fdword                                      OIPlayerId;                                               // 0x0014(0x0004)
};

// ScriptStruct TgClientBase.TgGFxMatchInvitation.TgPendingCustomInvite
// 0x0044
struct FTgPendingCustomInvite
{
	struct Fdword                                      nId;                                                      // 0x0000(0x0004)
	struct FUniqueNetId                                platId;                                                   // 0x0004(0x0008)
	struct FString                                     sInviterName;                                             // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sGameName;                                                // 0x001C(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      nPlayerCount;                                             // 0x002C(0x0004)
	struct Fdword                                      nPlayersPerSide;                                          // 0x0030(0x0004)
	struct Fdword                                      nQueueId;                                                 // 0x0034(0x0004)
	struct Fdword                                      nMatchId;                                                 // 0x0038(0x0004)
	struct Fdword                                      nIconId;                                                  // 0x003C(0x0004)
	struct Fdword                                      nPickMethod;                                              // 0x0040(0x0004)
};

// ScriptStruct TgClientBase.TgLandingPanelManagerBase.PatchOverviewData
// 0x0080
struct FPatchOverviewData
{
	struct FString                                     sId;                                                      // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sTitle;                                                   // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sHeader0;                                                 // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sHeader1;                                                 // 0x0030(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sHeader2;                                                 // 0x0040(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDescription0;                                            // 0x0050(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDescription1;                                            // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDescription2;                                            // 0x0070(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGFxPlay.PlayQueueData
// 0x0008
struct FPlayQueueData
{
	int                                                queueId;                                                  // 0x0000(0x0004)
	int                                                matchCount;                                               // 0x0004(0x0004)
};

// ScriptStruct TgClientBase.TgGFxPlay.TutorialVideoQueue
// 0x000C
struct FTutorialVideoQueue
{
	int                                                nGameMode;                                                // 0x0000(0x0004)
	int                                                nGameType;                                                // 0x0004(0x0004)
	int                                                nStreamId;                                                // 0x0008(0x0004)
};

// ScriptStruct TgClientBase.TgGfxProfileReferral.ReferLevelRewardData
// 0x0010
struct FReferLevelRewardData
{
	int                                                LRD_Level;                                                // 0x0000(0x0004)
	int                                                LRD_Reward;                                               // 0x0004(0x0004)
	int                                                LRD_RewardType;                                           // 0x0008(0x0004)
	int                                                LRD_Boost;                                                // 0x000C(0x0004)
};

// ScriptStruct TgClientBase.TgGfxProfileReferral.ReferPlayedRewardData
// 0x0010
struct FReferPlayedRewardData
{
	int                                                PRD_Played;                                               // 0x0000(0x0004)
	int                                                PRD_Reward;                                               // 0x0004(0x0004)
	int                                                PRD_RewardType;                                           // 0x0008(0x0004)
	int                                                PRD_Boost;                                                // 0x000C(0x0004)
};

// ScriptStruct TgClientBase.TgGfxPurchaseGems.ProductInfo
// 0x0078
struct FProductInfo
{
	struct FString                                     PIProductID;                                              // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     PIProductName;                                            // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     PIProductDescription;                                     // 0x0020(0x0010) (NeedCtorLink)
	struct FString                                     PIProductImage;                                           // 0x0030(0x0010) (NeedCtorLink)
	struct FString                                     PIDisplayListPrice;                                       // 0x0040(0x0010) (NeedCtorLink)
	struct FString                                     PIDisplayPrice;                                           // 0x0050(0x0010) (NeedCtorLink)
	float                                              PIListPrice;                                              // 0x0060(0x0004)
	float                                              PIPrice;                                                  // 0x0064(0x0004)
	struct FString                                     PISignedOffer;                                            // 0x0068(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGfxPurchaseGems.ProductImageInfo
// 0x0030
struct FProductImageInfo
{
	struct FString                                     ProductName;                                              // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     XBProductId;                                              // 0x0010(0x0010) (NeedCtorLink)
	struct FString                                     ProductImagePath;                                         // 0x0020(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgVendorData.ItemData
// 0x00A8
struct FItemData
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	int                                                nTier;                                                    // 0x0004(0x0004)
	int                                                nType;                                                    // 0x0008(0x0004)
	int                                                nIcon;                                                    // 0x000C(0x0004)
	int                                                nCost;                                                    // 0x0010(0x0004)
	int                                                nCostA;                                                   // 0x0014(0x0004)
	int                                                nCostB;                                                   // 0x0018(0x0004)
	int                                                nCostC;                                                   // 0x001C(0x0004)
	int                                                nLevel;                                                   // 0x0020(0x0004)
	int                                                nSubType;                                                 // 0x0024(0x0004)
	int                                                nMaxStacks;                                               // 0x0028(0x0004)
	int                                                nDeviceType;                                              // 0x002C(0x0004)
	int                                                nSortOrder;                                               // 0x0030(0x0004)
	int                                                nItemSubType;                                             // 0x0034(0x0004)
	int                                                nClassRestriction;                                        // 0x0038(0x0004)
	int                                                nClassRestrictionClassId;                                 // 0x003C(0x0004)
	int                                                nItemStoreType;                                           // 0x0040(0x0004)
	unsigned long                                      bAura : 1;                                                // 0x0044(0x0004)
	unsigned long                                      bStack : 1;                                               // 0x0044(0x0004)
	unsigned long                                      bOwned : 1;                                               // 0x0044(0x0004)
	unsigned long                                      bLocked : 1;                                              // 0x0044(0x0004)
	unsigned long                                      bUnique : 1;                                              // 0x0044(0x0004)
	unsigned long                                      bIsHidden : 1;                                            // 0x0044(0x0004)
	struct FString                                     sName;                                                    // 0x0048(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sNameINT;                                                 // 0x0058(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDesc;                                                    // 0x0068(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        nEffects;                                                 // 0x0078(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        nParents;                                                 // 0x0088(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        nChildren;                                                // 0x0098(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGfxSovereigntyVendorStore.ItemMovieClip
// 0x0018
struct FItemMovieClip
{
	class UTgGFxObject*                                rootClip;                                                 // 0x0000(0x0008)
	class UTgGFxObject*                                iconClip;                                                 // 0x0008(0x0008)
	class UTgGFxObject*                                priceTF;                                                  // 0x0010(0x0008)
};

// ScriptStruct TgClientBase.TgGFxStoreShared.TgStoreTab
// 0x0020
struct FTgStoreTab
{
	struct Fdword                                      nId;                                                      // 0x0000(0x0004)
	struct Fdword                                      fFilterFlags;                                             // 0x0004(0x0004)
	struct Fdword                                      nItemType;                                                // 0x0008(0x0004)
	struct FString                                     sLabel;                                                   // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bActive : 1;                                              // 0x001C(0x0004)
};

// ScriptStruct TgClientBase.TgGfxStoreViewer.TgStoreItemData
// 0x0014
struct FTgStoreItemData
{
	struct Fdword                                      nItemId;                                                  // 0x0000(0x0004)
	struct Fdword                                      nLootId;                                                  // 0x0004(0x0004)
	struct Fdword                                      nVendorId;                                                // 0x0008(0x0004)
	class UGFxObject*                                  pGFxObject;                                               // 0x000C(0x0008)
};

// ScriptStruct TgClientBase.TgVendorData.ItemFilter
// 0x0030
struct FItemFilter
{
	int                                                nMask;                                                    // 0x0000(0x0004) (Edit)
	int                                                nAltMask;                                                 // 0x0004(0x0004) (Edit)
	unsigned long                                      bPrimaryCategory : 1;                                     // 0x0008(0x0004) (Edit)
	unsigned long                                      bExpandable : 1;                                          // 0x0008(0x0004) (Edit)
	unsigned long                                      bConsoleLocalized : 1;                                    // 0x0008(0x0004) (Edit)
	struct FString                                     sLabel;                                                   // 0x000C(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	unsigned long                                      bChecked : 1;                                             // 0x001C(0x0004)
	unsigned long                                      bDisabled : 1;                                            // 0x001C(0x0004)
	unsigned long                                      bExpanded : 1;                                            // 0x001C(0x0004)
	class UTgGFxObject*                                pObj;                                                     // 0x0020(0x0008)
	class UTgGFxObject*                                pBox;                                                     // 0x0028(0x0008)
};

// ScriptStruct TgClientBase.TgVendorData.DisplayItem
// 0x0078
struct FDisplayItem
{
	class UTgGFxObject*                                pObj;                                                     // 0x0000(0x0008)
	class UTgGFxObject*                                Icon;                                                     // 0x0008(0x0008)
	class UTgGFxObject*                                NameTF;                                                   // 0x0010(0x0008)
	class UTgGFxObject*                                DescTF;                                                   // 0x0018(0x0008)
	class UTgGFxObject*                                CostTF;                                                   // 0x0020(0x0008)
	class UTgGFxObject*                                Cost1TF;                                                  // 0x0028(0x0008)
	class UTgGFxObject*                                Cost2TF;                                                  // 0x0030(0x0008)
	class UTgGFxObject*                                Cost3TF;                                                  // 0x0038(0x0008)
	class UTgGFxObject*                                Quantity;                                                 // 0x0040(0x0008)
	class UTgGFxObject*                                OwnedIcon;                                                // 0x0048(0x0008)
	class UTgGFxObject*                                LockedIcon;                                               // 0x0050(0x0008)
	class UTgGFxObject*                                LockedFrame;                                              // 0x0058(0x0008)
	class UTgGFxObject*                                TierBtnBG;                                                // 0x0060(0x0008)
	class UTgGFxObject*                                RelicBorder;                                              // 0x0068(0x0008)
	class UTgGFxObject*                                RarityBorder;                                             // 0x0070(0x0008)
};

// ScriptStruct TgClientBase.TgVendorData.ItemCategory
// 0x0028
struct FItemCategory
{
	int                                                CategoryId;                                               // 0x0000(0x0004)
	int                                                ItemCount;                                                // 0x0004(0x0004)
	int                                                Items[0x4];                                               // 0x0008(0x0004)
	int                                                Quantities[0x4];                                          // 0x0018(0x0004)
};

// ScriptStruct TgClientBase.TgGfxVendorStoreV2_Console.StoreItemCategory
// 0x0218
struct FStoreItemCategory
{
	int                                                nCategoryId;                                              // 0x0000(0x0004)
	int                                                Items[0x40];                                              // 0x0004(0x0004)
	int                                                Quantities[0x40];                                         // 0x0104(0x0004)
	int                                                nLength;                                                  // 0x0204(0x0004)
	struct FString                                     sCategoryName;                                            // 0x0208(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGfxVendorStoreV2_Console.StoreStatDisplay
// 0x0034
struct FStoreStatDisplay
{
	class UTgGFxObject*                                LabelTF;                                                  // 0x0000(0x0008)
	class UTgGFxObject*                                GreenBar;                                                 // 0x0008(0x0008)
	class UTgGFxObject*                                ValueTF;                                                  // 0x0010(0x0008)
	class UTgGFxObject*                                MaxTF;                                                    // 0x0018(0x0008)
	struct FString                                     sTitleLabel;                                              // 0x0020(0x0010) (NeedCtorLink)
	float                                              fStatValue;                                               // 0x0030(0x0004)
};

// ScriptStruct TgClientBase.TgGfxVendorStoreV2_Console.StoreItemDisplay
// 0x0078
struct FStoreItemDisplay
{
	class UTgGFxObject*                                pDisplay;                                                 // 0x0000(0x0008)
	class UTgGFxObject*                                pIconStack;                                               // 0x0008(0x0008)
	class UTgGFxObject*                                pCountTF;                                                 // 0x0010(0x0008)
	class UTgGFxObject*                                pTierIcon1;                                               // 0x0018(0x0008)
	class UTgGFxObject*                                pTierIcon2;                                               // 0x0020(0x0008)
	class UTgGFxObject*                                pTierIcon3;                                               // 0x0028(0x0008)
	class UTgGFxObject*                                pOwnedHighlight;                                          // 0x0030(0x0008)
	class UTgGFxObject*                                pCompletedHighlight;                                      // 0x0038(0x0008)
	class UTgGFxObject*                                pRelicBorder;                                             // 0x0040(0x0008)
	class UTgGFxObject*                                pRelicDisabledOverlay;                                    // 0x0048(0x0008)
	class UTgGFxObject*                                pLockedIcon;                                              // 0x0050(0x0008)
	class UTgGFxObject*                                pLockedFrame;                                             // 0x0058(0x0008)
	class UTgGFxObject*                                pRarityBorder;                                            // 0x0060(0x0008)
	int                                                nItemId;                                                  // 0x0068(0x0004)
	int                                                nItemTier;                                                // 0x006C(0x0004)
	int                                                nNextCurrencyCheck;                                       // 0x0070(0x0004)
	unsigned long                                      bVisible : 1;                                             // 0x0074(0x0004)
};

// ScriptStruct TgClientBase.TgGfxVendorStoreV2_Console.StoreTierDisplay
// 0x0058
struct FStoreTierDisplay
{
	class UTgGFxObject*                                pObj;                                                     // 0x0000(0x0008)
	class UTgGFxObject*                                Icon;                                                     // 0x0008(0x0008)
	class UTgGFxObject*                                CostTF;                                                   // 0x0010(0x0008)
	class UTgGFxObject*                                OwnedIcon;                                                // 0x0018(0x0008)
	class UTgGFxObject*                                DisabledCover;                                            // 0x0020(0x0008)
	class UTgGFxObject*                                RelicBorder;                                              // 0x0028(0x0008)
	class UTgGFxObject*                                RelicDisabledOverlay;                                     // 0x0030(0x0008)
	class UTgGFxObject*                                LockedIcon;                                               // 0x0038(0x0008)
	class UTgGFxObject*                                LockedFrame;                                              // 0x0040(0x0008)
	unsigned long                                      bIsVisible : 1;                                           // 0x0048(0x0004)
	int                                                nItemId;                                                  // 0x004C(0x0004)
	int                                                nParentItemId;                                            // 0x0050(0x0004)
	int                                                nChildItemId;                                             // 0x0054(0x0004)
};

// ScriptStruct TgClientBase.TgSystemNotifManagerBase.SystemMessage
// 0x0058
struct FSystemMessage
{
	unsigned long                                      bSeen : 1;                                                // 0x0000(0x0004)
	TEnumAsByte<ESystemMessageState>                   eState;                                                   // 0x0004(0x0001)
	TEnumAsByte<ESystemMessageSubType>                 eSubType;                                                 // 0x0005(0x0001)
	TEnumAsByte<ESystemMessageType>                    eType;                                                    // 0x0006(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	struct FString                                     sDescription;                                             // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sTexturePath;                                             // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	class UGFxObject*                                  pObj;                                                     // 0x0028(0x0008)
	struct Fdword                                      nId;                                                      // 0x0030(0x0004)
	struct FTgPlayerId                                 pid;                                                      // 0x0034(0x0024) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgSystemNotifManagerBase.TgSystemMessageTag
// 0x0060
struct FTgSystemMessageTag
{
	struct FQWord                                      nTimestamp;                                               // 0x0000(0x0008)
	struct FSystemMessage                              Message;                                                  // 0x0008(0x0058) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGFxNativeWidget.TgCustomAStoUCBind
// 0x0018
struct FTgCustomAStoUCBind
{
	struct FString                                     as;                                                       // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FName                                       UC;                                                       // 0x0010(0x0008) (AlwaysInit)
};

// ScriptStruct TgClientBase.TgGFxNativeWidget.InputDetails
// 0x0020
struct FInputDetails
{
	struct FName                                       Type;                                                     // 0x0000(0x0008)
	int                                                Code;                                                     // 0x0008(0x0004)
	struct FName                                       Value;                                                    // 0x000C(0x0008)
	struct FName                                       NavEquivalent;                                            // 0x0014(0x0008)
	int                                                ControllerIdx;                                            // 0x001C(0x0004)
};

// ScriptStruct TgClientBase.TgGfxMainMenu.TgMenuDisplayBtn
// 0x0010
struct FTgMenuDisplayBtn
{
	class UTgGFxObject*                                _this;                                                    // 0x0000(0x0008)
	class UTgGFxObject*                                Count;                                                    // 0x0008(0x0008)
};

// ScriptStruct TgClientBase.TgGfxMainMenu.TgMainMenuPanel
// 0x0020
struct FTgMainMenuPanel
{
	class UTgGFxObject*                                _this;                                                    // 0x0000(0x0008)
	class UTgGFxObject*                                bg;                                                       // 0x0008(0x0008)
	TArray<struct FTgMenuDisplayBtn>                   Btn;                                                      // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGfxMainMenu.TgMainMenuBtn
// 0x002C
struct FTgMainMenuBtn
{
	struct Fdword                                      nAction;                                                  // 0x0000(0x0004)
	struct FString                                     sLabel;                                                   // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
	struct FScriptDelegate                             delCallback;                                              // 0x0014(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UTgDataItem*                                 pData;                                                    // 0x0024(0x0008)
};

// ScriptStruct TgClientBase.TgSceneManager.TgSceneDef
// 0x001C
struct FTgSceneDef
{
	class UGFxObject*                                  pSource;                                                  // 0x0000(0x0008)
	struct FString                                     sSceneName;                                               // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      fLoadPermission;                                          // 0x0018(0x0004)
};

// ScriptStruct TgClientBase.TgSceneManager.TgLoadSceneData
// 0x0018
struct FTgLoadSceneData
{
	struct FString                                     sSceneName;                                               // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	class UTgDataItem*                                 pData;                                                    // 0x0010(0x0008)
};

// ScriptStruct TgClientBase.TgInputDataEvent.TgInputWrapper
// 0x0008
struct FTgInputWrapper
{
	struct FPointer                                    m_pInputEvent;                                            // 0x0000(0x0008) (Native)
};

// ScriptStruct TgClientBase.TgLoginEvent.TgLoginEventData
// 0x0014
struct FTgLoginEventData
{
	int                                                nSystemMessage;                                           // 0x0000(0x0004)
	struct FString                                     sMessage;                                                 // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgPlayerNameManager.TgPidIndexPair
// 0x0008
struct FTgPidIndexPair
{
	struct Fdword                                      nPid;                                                     // 0x0000(0x0004)
	int                                                nIndex;                                                   // 0x0004(0x0004)
};

// ScriptStruct TgClientBase.TgPlayerNameManager.TgUserId
// 0x000C
struct FTgUserId
{
	unsigned char                                      Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FQWord                                      Uid;                                                      // 0x0004(0x0008)
};

// ScriptStruct TgClientBase.TgPlayerNameManager.TgUidIndexPair
// 0x0010
struct FTgUidIndexPair
{
	struct FTgUserId                                   Uid;                                                      // 0x0000(0x000C)
	int                                                nIndex;                                                   // 0x000C(0x0004)
};

// ScriptStruct TgClientBase.TgPlayerNameManager.TgPlayerNameMap
// 0x003C
struct FTgPlayerNameMap
{
	TArray<struct FTgPidIndexPair>                     arrPidLookup;                                             // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgUidIndexPair>                     arrUidLookup;                                             // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             arrNames;                                                 // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nSortedPid;                                               // 0x0030(0x0004)
	int                                                nSortedUid;                                               // 0x0034(0x0004)
	int                                                nSortedNames;                                             // 0x0038(0x0004)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgPlatRequestInfo
// 0x0020
struct FTgPlatRequestInfo
{
	TEnumAsByte<ETgNameRequestStage>                   eStage;                                                   // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct Fdword                                      nGroupId;                                                 // 0x0004(0x0004)
	struct FString                                     sUserId;                                                  // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FQWord                                      nStepTime;                                                // 0x0018(0x0008)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgIdRequestInfo
// 0x0014
struct FTgIdRequestInfo
{
	TEnumAsByte<ETgNameRequestStage>                   eStage;                                                   // 0x0000(0x0001)
	unsigned char                                      fMode;                                                    // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct Fdword                                      nGroupId;                                                 // 0x0004(0x0004)
	struct Fdword                                      nId;                                                      // 0x0008(0x0004)
	struct FQWord                                      nStepTime;                                                // 0x000C(0x0008)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgNameFilterInfo
// 0x0030
struct FTgNameFilterInfo
{
	TEnumAsByte<ETgNameRequestStage>                   eStage;                                                   // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct Fdword                                      nGroupId;                                                 // 0x0004(0x0004)
	struct FQWord                                      nStepTime;                                                // 0x0008(0x0008)
	TArray<struct Fdword>                              arrPids;                                                  // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sName;                                                    // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.WORD
// 0x0002
struct FWORD
{
	unsigned char                                      A;                                                        // 0x0000(0x0001) (Edit, Native)
	unsigned char                                      B;                                                        // 0x0001(0x0001) (Edit, Native)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgGroupInfo
// 0x0028
struct FTgGroupInfo
{
	struct Fdword                                      nGroupId;                                                 // 0x0000(0x0004)
	struct FWORD                                       nTotal;                                                   // 0x0004(0x0004)
	struct FWORD                                       nStagePlatform;                                           // 0x0008(0x0004)
	struct FWORD                                       nStageMcts;                                               // 0x000C(0x0004)
	struct FWORD                                       nStageMctsFail;                                           // 0x0010(0x0004)
	struct FWORD                                       nStageFilter;                                             // 0x0014(0x0004)
	struct FWORD                                       nStageComplete;                                           // 0x0018(0x0004)
	unsigned char                                      nRetries;                                                 // 0x001C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FQWord                                      nLastRetry;                                               // 0x0020(0x0008)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgDelegateInfo
// 0x0030
struct FTgDelegateInfo
{
	TArray<struct Fdword>                              arrGroupIds;                                              // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct Fdword>                              arrFailedIds;                                             // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	struct FScriptDelegate                             delCallback;                                              // 0x0020(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0020(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgDeadGroup
// 0x0008
struct FTgDeadGroup
{
	struct Fdword                                      nGroupId;                                                 // 0x0000(0x0004)
	int                                                nCount;                                                   // 0x0004(0x0004)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgPidQueue
// 0x0014
struct FTgPidQueue
{
	struct FPointer                                    pHead;                                                    // 0x0000(0x0008) (Native)
	struct FPointer                                    pTail;                                                    // 0x0008(0x0008) (Native)
	int                                                nPageCount;                                               // 0x0010(0x0004)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgQueuedDelegate
// 0x0014
struct FTgQueuedDelegate
{
	struct FScriptDelegate                             delCallback;                                              // 0x0000(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                nCount;                                                   // 0x0010(0x0004)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgUidQueue
// 0x0014
struct FTgUidQueue
{
	struct FPointer                                    pHead;                                                    // 0x0000(0x0008) (Native)
	struct FPointer                                    pTail;                                                    // 0x0008(0x0008) (Native)
	int                                                nPageCount;                                               // 0x0010(0x0004)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgMctsIncomingInfo
// 0x0020
struct FTgMctsIncomingInfo
{
	struct Fdword                                      nId;                                                      // 0x0000(0x0004)
	struct FTgUserId                                   Uid;                                                      // 0x0004(0x000C)
	struct FString                                     sName;                                                    // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgNameReqSystemInfo
// 0x0040
struct FTgNameReqSystemInfo
{
	int                                                nLastDelegate;                                            // 0x0000(0x0004)
	struct Fdword                                      nActiveGroupId;                                           // 0x0004(0x0004)
	int                                                nGroupCount;                                              // 0x0008(0x0004)
	struct FQWord                                      nLastCleanup;                                             // 0x000C(0x0008)
	struct FQWord                                      nLastProcess;                                             // 0x0014(0x0008)
	struct FQWord                                      nNextMcts;                                                // 0x001C(0x0008)
	struct FQWord                                      nNextPlatform;                                            // 0x0024(0x0008)
	int                                                nCleanupPid;                                              // 0x002C(0x0004)
	int                                                nCleanupUid;                                              // 0x0030(0x0004)
	int                                                nCleanupFilter;                                           // 0x0034(0x0004)
	struct FPointer                                    pOwner;                                                   // 0x0038(0x0008) (Native)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgNameRequestBuffer
// 0x0108
struct FTgNameRequestBuffer
{
	TArray<struct FTgPlatRequestInfo>                  arrPlatReqs;                                              // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgIdRequestInfo>                    arrMctsReqs;                                              // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgNameFilterInfo>                   arrFilterReqs;                                            // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgGroupInfo>                        arrGroups;                                                // 0x0030(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgDelegateInfo>                     arrDelegates;                                             // 0x0040(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgDeadGroup>                        arrDeadGroups;                                            // 0x0050(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        arrActiveGroups;                                          // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgPidQueue                                 arrQueuedPids;                                            // 0x0070(0x0014)
	TArray<struct FTgQueuedDelegate>                   arrQueuedPidDel;                                          // 0x0084(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgUidQueue                                 arrQueuedUids;                                            // 0x0094(0x0014)
	TArray<struct FTgQueuedDelegate>                   arrQueuedUidDel;                                          // 0x00A8(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgMctsIncomingInfo>                 arrMctsIncoming;                                          // 0x00B8(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgNameReqSystemInfo                        sysInfo;                                                  // 0x00C8(0x0040)
};

// ScriptStruct TgClientBase.TgGameHUD.TgMuteReportTracking
// 0x0030
struct FTgMuteReportTracking
{
	struct FTgIntervalHandle                           delayHandle;                                              // 0x0000(0x0010)
	TArray<struct FTgPlayerId>                         pendingPlayers;                                           // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgPlayerId>                         mutedPlayers;                                             // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGameHUDOverlay.DamageInfoData
// 0x0028
struct FDamageInfoData
{
	int                                                nSourceId;                                                // 0x0000(0x0004)
	int                                                nTargetId;                                                // 0x0004(0x0004)
	int                                                dwSourceItemId;                                           // 0x0008(0x0004)
	TEnumAsByte<EDAMAGE_INFO_TYPE>                     Type;                                                     // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	unsigned long                                      bLocalSource : 1;                                         // 0x0010(0x0004)
	float                                              fValue;                                                   // 0x0014(0x0004)
	struct FString                                     displayStr;                                               // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGameDC_Chat.QueueMessage
// 0x0030
struct FQueueMessage
{
	int                                                Id;                                                       // 0x0000(0x0004)
	TEnumAsByte<ETG_CHAT_PRIORITY>                     Priority;                                                 // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	unsigned long                                      bHasPlayedSound : 1;                                      // 0x0008(0x0004)
	int                                                VoicePackId;                                              // 0x000C(0x0004)
	int                                                VoiceBotId;                                               // 0x0010(0x0004)
	int                                                VoiceSkinId;                                              // 0x0014(0x0004)
	struct FString                                     VoicePackCustomSuffix;                                    // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	class USoundCue*                                   SoundCue;                                                 // 0x0028(0x0008)
};

// ScriptStruct TgClientBase.TgGameDC_Chat.MessageToken
// 0x001C
struct FMessageToken
{
	int                                                msgId;                                                    // 0x0000(0x0004)
	int                                                MsgIdRed;                                                 // 0x0004(0x0004)
	int                                                MsgIdBlue;                                                // 0x0008(0x0004)
	struct FString                                     Token;                                                    // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGameDC_Game.TgGameDCGameHandles
// 0x0054
struct FTgGameDCGameHandles
{
	struct FTgDataFieldHandle                          ActivePointA;                                             // 0x0000(0x0004)
	struct FTgDataFieldHandle                          ActivePointB;                                             // 0x0004(0x0004)
	struct FTgDataFieldHandle                          ActivePointC;                                             // 0x0008(0x0004)
	struct FTgDataFieldHandle                          CapturePercentA;                                          // 0x000C(0x0004)
	struct FTgDataFieldHandle                          CapturePercentB;                                          // 0x0010(0x0004)
	struct FTgDataFieldHandle                          CapturePercentC;                                          // 0x0014(0x0004)
	struct FTgDataFieldHandle                          DescriptionString;                                        // 0x0018(0x0004)
	struct FTgDataFieldHandle                          EnemyTaskForceCount;                                      // 0x001C(0x0004)
	struct FTgDataFieldHandle                          EomMessageId;                                             // 0x0020(0x0004)
	struct FTgDataFieldHandle                          FogGrowTime;                                              // 0x0024(0x0004)
	struct FTgDataFieldHandle                          FogNextPhase;                                             // 0x0028(0x0004)
	struct FTgDataFieldHandle                          GameTimerState;                                           // 0x002C(0x0004)
	struct FTgDataFieldHandle                          GameType;                                                 // 0x0030(0x0004)
	struct FTgDataFieldHandle                          MapBackgroundTexture;                                     // 0x0034(0x0004)
	struct FTgDataFieldHandle                          OnPoint;                                                  // 0x0038(0x0004)
	struct FTgDataFieldHandle                          PauseTaskForce;                                           // 0x003C(0x0004)
	struct FTgDataFieldHandle                          PauseType;                                                // 0x0040(0x0004)
	struct FTgDataFieldHandle                          PauseDuration;                                            // 0x0044(0x0004)
	struct FTgDataFieldHandle                          RoundNumber;                                              // 0x0048(0x0004)
	struct FTgDataFieldHandle                          RoundTitle;                                               // 0x004C(0x0004)
	struct FTgDataFieldHandle                          ShowObjectives;                                           // 0x0050(0x0004)
};

// ScriptStruct TgClientBase.TgGameDC_Player.TgGameDC_PlayerEffectEntry
// 0x0011
struct FTgGameDC_PlayerEffectEntry
{
	class UGFxObject*                                  EffectObject;                                             // 0x0000(0x0008)
	float                                              TimeRemaining;                                            // 0x0008(0x0004)
	int                                                nEffectGroupId;                                           // 0x000C(0x0004)
	unsigned char                                      byNumStacks;                                              // 0x0010(0x0001)
};

// ScriptStruct TgClientBase.TgGameDC_Player.TgGameDC_DeviceEntry
// 0x0020
struct FTgGameDC_DeviceEntry
{
	class UGFxObject*                                  DeviceObject;                                             // 0x0000(0x0008)
	int                                                CurrentDeviceId;                                          // 0x0008(0x0004)
	float                                              Cooldown;                                                 // 0x000C(0x0004)
	float                                              CooldownMax;                                              // 0x0010(0x0004)
	int                                                DeviceCount;                                              // 0x0014(0x0004)
	unsigned char                                      DeviceTier;                                               // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	unsigned long                                      bIsDeviceReady : 1;                                       // 0x001C(0x0004)
};

// ScriptStruct TgClientBase.TgGameDC_LocalPlayer.TgGameDCPlayerHandles
// 0x0030
struct FTgGameDCPlayerHandles
{
	struct FTgDataFieldHandle                          AutoPurchase;                                             // 0x0000(0x0004)
	struct FTgDataFieldHandle                          AutoSkill;                                                // 0x0004(0x0004)
	struct FTgDataFieldHandle                          CourierCurrency;                                          // 0x0008(0x0004)
	struct FTgDataFieldHandle                          CourierItemId;                                            // 0x000C(0x0004)
	struct FTgDataFieldHandle                          CourierPhase;                                             // 0x0010(0x0004)
	struct FTgDataFieldHandle                          CourierTransactionType;                                   // 0x0014(0x0004)
	struct FTgDataFieldHandle                          MostPopularItemsSize;                                     // 0x0018(0x0004)
	struct FTgDataFieldHandle                          SpectatorVisibilityMode;                                  // 0x001C(0x0004)
	struct FTgDataFieldHandle                          nTaskForce;                                               // 0x0020(0x0004)
	struct FTgDataFieldHandle                          TutorialActivesDisabled;                                  // 0x0024(0x0004)
	struct FTgDataFieldHandle                          TutorialSkillsDisabled;                                   // 0x0028(0x0004)
	struct FTgDataFieldHandle                          TutorialStoreDisabled;                                    // 0x002C(0x0004)
};

// ScriptStruct TgClientBase.TgGameDC_LocalPlayer.TgGameDCPlayerData
// 0x0004
struct FTgGameDCPlayerData
{
	unsigned long                                      bDisableSkills : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bDisableActives : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bDisableStore : 1;                                        // 0x0000(0x0004)
};

// ScriptStruct TgClientBase.TgGameDC_PlayerVitals.TgDCPlayerVitalsHandles
// 0x0080
struct FTgDCPlayerVitalsHandles
{
	struct FTgDataFieldHandle                          Accuracy;                                                 // 0x0000(0x0004)
	struct FTgDataFieldHandle                          AltReticule;                                              // 0x0004(0x0004)
	struct FTgDataFieldHandle                          AuxiliaryPool;                                            // 0x0008(0x0004)
	struct FTgDataFieldHandle                          AuxiliaryPoolMax;                                         // 0x000C(0x0004)
	struct FTgDataFieldHandle                          AuxiliaryPoolType;                                        // 0x0010(0x0004)
	struct FTgDataFieldHandle                          BuybackAmount;                                            // 0x0014(0x0004)
	struct FTgDataFieldHandle                          CapPercent;                                               // 0x0018(0x0004)
	struct FTgDataFieldHandle                          CapPercentMax;                                            // 0x001C(0x0004)
	struct FTgDataFieldHandle                          Currency;                                                 // 0x0020(0x0004)
	struct FTgDataFieldHandle                          CurrentLevel;                                             // 0x0024(0x0004)
	struct FTgDataFieldHandle                          CurrentXP;                                                // 0x0028(0x0004)
	struct FTgDataFieldHandle                          DevicePointsAvail;                                        // 0x002C(0x0004)
	struct FTgDataFieldHandle                          Heading;                                                  // 0x0030(0x0004)
	struct FTgDataFieldHandle                          Health;                                                   // 0x0034(0x0004)
	struct FTgDataFieldHandle                          HealthMax;                                                // 0x0038(0x0004)
	struct FTgDataFieldHandle                          IsPlayerInVolume;                                         // 0x003C(0x0004)
	struct FTgDataFieldHandle                          NextLevel;                                                // 0x0040(0x0004)
	struct FTgDataFieldHandle                          nPassiveData1;                                            // 0x0044(0x0004)
	struct FTgDataFieldHandle                          bPassiveData1;                                            // 0x0048(0x0004)
	struct FTgDataFieldHandle                          sPassiveData1;                                            // 0x004C(0x0004)
	struct FTgDataFieldHandle                          nPassiveData2;                                            // 0x0050(0x0004)
	struct FTgDataFieldHandle                          fPassiveData1;                                            // 0x0054(0x0004)
	struct FTgDataFieldHandle                          PowerPool;                                                // 0x0058(0x0004)
	struct FTgDataFieldHandle                          PowerPoolMax;                                             // 0x005C(0x0004)
	struct FTgDataFieldHandle                          PowerPoolType;                                            // 0x0060(0x0004)
	struct FTgDataFieldHandle                          PowerPoolUsing;                                           // 0x0064(0x0004)
	struct FTgDataFieldHandle                          ReticleModifierPercent;                                   // 0x0068(0x0004)
	struct FTgDataFieldHandle                          Shield;                                                   // 0x006C(0x0004)
	struct FTgDataFieldHandle                          ShieldMax;                                                // 0x0070(0x0004)
	struct FTgDataFieldHandle                          StatPoints;                                               // 0x0074(0x0004)
	struct FTgDataFieldHandle                          TurretTarget;                                             // 0x0078(0x0004)
	struct FTgDataFieldHandle                          XpPercent;                                                // 0x007C(0x0004)
};

// ScriptStruct TgClientBase.TgLandingPanelManagerBase.StreamTimeData
// 0x0050
struct FStreamTimeData
{
	struct FString                                     sId;                                                      // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sStartTime;                                               // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sEndTime;                                                 // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sStreamURL;                                               // 0x0030(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sLinkURL;                                                 // 0x0040(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGFxHomeMenuScreen.HomeMenuItem
// 0x0049
struct FHomeMenuItem
{
	int                                                nActionId;                                                // 0x0000(0x0004)
	int                                                nActionDataId;                                            // 0x0004(0x0004)
	struct FString                                     sLabel;                                                   // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sMenuTooltip;                                             // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sImagePath;                                               // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sButtonType;                                              // 0x0038(0x0010) (AlwaysInit, NeedCtorLink)
	TEnumAsByte<EHomeMenuScreenSpecialCallouts>        SpecialCallout;                                           // 0x0048(0x0001)
};

// ScriptStruct TgClientBase.TgLandingPanelManagerBase.SceneModelData
// 0x0040
struct FSceneModelData
{
	struct FString                                     sDesc;                                                    // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sData;                                                    // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sData2;                                                   // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	TEnumAsByte<EModelCameraDistance>                  eCameraDistance;                                          // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                nSkinId;                                                  // 0x0034(0x0004)
	int                                                nType;                                                    // 0x0038(0x0004)
	int                                                nLocationId;                                              // 0x003C(0x0004)
};

// ScriptStruct TgClientBase.TgGfxHudChatBase.TgChatMessage
// 0x0014
struct FTgChatMessage
{
	struct FString                                     sMessage;                                                 // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bIsVGS : 1;                                               // 0x0010(0x0004)
};

// ScriptStruct TgClientBase.TgMiniMap.BuffMonsterMIC
// 0x0018
struct FBuffMonsterMIC
{
	class UMaterialInstanceConstant*                   SpawnedMIC;                                               // 0x0000(0x0008)
	class UMaterialInstanceConstant*                   DroppedMIC;                                               // 0x0008(0x0008)
	class UMaterialInstanceConstant*                   TimerMIC;                                                 // 0x0010(0x0008)
};

// ScriptStruct TgClientBase.TgMiniMap.LayerIndex
// 0x0010
struct FLayerIndex
{
	TArray<int>                                        Entries;                                                  // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgMiniMap.FogMaskData
// 0x0030
struct FFogMaskData
{
	int                                                nSize;                                                    // 0x0000(0x0004)
	int                                                nMapDrawLocationX;                                        // 0x0004(0x0004)
	int                                                nMapDrawLocationY;                                        // 0x0008(0x0004)
	unsigned long                                      bLocationChanged : 1;                                     // 0x000C(0x0004)
	unsigned long                                      bVisionRangeChanged : 1;                                  // 0x000C(0x0004)
	struct FBitArray_Mirror                            m_MaskPoints;                                             // 0x0010(0x0020) (Const, Native, Transient)
};

// ScriptStruct TgClientBase.TgMiniMap.MiniMapEntity
// 0x00A8
struct FMiniMapEntity
{
	struct FVector                                     vLocation;                                                // 0x0000(0x000C)
	TEnumAsByte<EMiniMapEntityType>                    eType;                                                    // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                nSubType;                                                 // 0x0010(0x0004)
	int                                                nProfileId;                                               // 0x0014(0x0004)
	TEnumAsByte<ETgMapTeam>                            Team;                                                     // 0x0018(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                nVisionRange;                                             // 0x001C(0x0004)
	unsigned long                                      bIsDead : 1;                                              // 0x0020(0x0004)
	class AReplicationInfo*                            RepInfo;                                                  // 0x0024(0x0008)
	int                                                GenericState;                                             // 0x002C(0x0004)
	unsigned long                                      bIsLocal : 1;                                             // 0x0030(0x0004)
	int                                                nIdx;                                                     // 0x0034(0x0004)
	unsigned long                                      bMarked : 1;                                              // 0x0038(0x0004)
	unsigned long                                      bVisibleOnMap : 1;                                        // 0x0038(0x0004)
	unsigned long                                      bValidTarget : 1;                                         // 0x0038(0x0004)
	unsigned long                                      bHovered : 1;                                             // 0x0038(0x0004)
	unsigned long                                      bFlashHighlight : 1;                                      // 0x0038(0x0004)
	unsigned long                                      bFlashRecall : 1;                                         // 0x0038(0x0004)
	unsigned long                                      bVisible : 1;                                             // 0x0038(0x0004)
	float                                              fAlpha;                                                   // 0x003C(0x0004)
	float                                              fHealthPCT;                                               // 0x0040(0x0004)
	float                                              fTimerPCT;                                                // 0x0044(0x0004)
	class UMaterialInstanceConstant*                   MIC;                                                      // 0x0048(0x0008)
	unsigned long                                      bHasNoIcon : 1;                                           // 0x0050(0x0004)
	int                                                nDrawSize;                                                // 0x0054(0x0004)
	int                                                nHitSize;                                                 // 0x0058(0x0004)
	struct FVector                                     vRect;                                                    // 0x005C(0x000C)
	float                                              fBlinkSpeed;                                              // 0x0068(0x0004)
	struct Fdword                                      nLayeredBuffEffects;                                      // 0x006C(0x0004)
	struct FFogMaskData                                FogMaskData;                                              // 0x0070(0x0030)
	class UClass*                                      BotPawnClass;                                             // 0x00A0(0x0008)
};

// ScriptStruct TgClientBase.TgMiniMap.MiniMapPingInfo
// 0x0048
struct FMiniMapPingInfo
{
	float                                              fServerStartTime;                                         // 0x0000(0x0004)
	float                                              fClientStartTime;                                         // 0x0004(0x0004)
	class ATgRepInfo_Player*                           pingedPri;                                                // 0x0008(0x0008)
	struct FVector                                     vPingedLoc;                                               // 0x0010(0x000C)
	unsigned long                                      bIsPinging : 1;                                           // 0x001C(0x0004)
	TEnumAsByte<EPING_TYPE>                            eType;                                                    // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                nIconSize;                                                // 0x0024(0x0004)
	class UMaterialInstanceConstant*                   pingMIC;                                                  // 0x0028(0x0008)
	class ATgRepInfo_Player*                           sourcePRI;                                                // 0x0030(0x0008)
	int                                                SourceIndex;                                              // 0x0038(0x0004)
	struct FVector                                     vSourceWorldLocation;                                     // 0x003C(0x000C)
};

// ScriptStruct TgClientBase.TgGFxFriendSearchProvider.TgSearchResults
// 0x003C
struct FTgSearchResults
{
	TArray<class UTgGFxPlayerData*>                    arrLocal;                                                 // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UTgGFxPlayerData*>                    arrOnline;                                                // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UTgGFxPlayerData*>                    arrLocalWip;                                              // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nLocalIndex;                                              // 0x0030(0x0004)
	int                                                nLocalMax;                                                // 0x0034(0x0004)
	unsigned long                                      bHasOnline : 1;                                           // 0x0038(0x0004)
};

// ScriptStruct TgClientBase.TgGFxPlayerGenerator.TgGenPlayerData
// 0x0014
struct FTgGenPlayerData
{
	unsigned char                                      fRefFlags;                                                // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FQWord                                      nLastUpdate;                                              // 0x0004(0x0008)
	class UTgGFxPlayerData*                            pData;                                                    // 0x000C(0x0008)
};

// ScriptStruct TgClientBase.TgGFxPlayerGenerator.TgIndexPidPair
// 0x0008
struct FTgIndexPidPair
{
	struct Fdword                                      nPid;                                                     // 0x0000(0x0004)
	int                                                nIndex;                                                   // 0x0004(0x0004)
};

// ScriptStruct TgClientBase.TgGFxPlayerGenerator.TgGenPidLookup
// 0x0014
struct FTgGenPidLookup
{
	TArray<struct FTgIndexPidPair>                     arrPairs;                                                 // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nSorted;                                                  // 0x0010(0x0004)
};

// ScriptStruct TgClientBase.TgGFxPlayerGenerator.TgIndexUidPair
// 0x0010
struct FTgIndexUidPair
{
	struct FTgUserId                                   Uid;                                                      // 0x0000(0x000C)
	int                                                nIndex;                                                   // 0x000C(0x0004)
};

// ScriptStruct TgClientBase.TgGFxPlayerGenerator.TgGenUidLookup
// 0x0014
struct FTgGenUidLookup
{
	TArray<struct FTgIndexUidPair>                     arrPairs;                                                 // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nSorted;                                                  // 0x0010(0x0004)
};

// ScriptStruct TgClientBase.TgGFxDataProviderBase.RequestASCallback
// 0x002C
struct FRequestASCallback
{
	class UGFxObject*                                  pScope;                                                   // 0x0000(0x0008)
	struct FString                                     sCallback;                                                // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	TEnumAsByte<EDataRequestType>                      eType;                                                    // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	class UGFxObject*                                  pObj;                                                     // 0x001C(0x0008)
	int                                                nIndex;                                                   // 0x0024(0x0004)
	int                                                nEndIndex;                                                // 0x0028(0x0004)
};

// ScriptStruct TgClientBase.TgLeagueDC_Leaderboard.UpdatedPlayerInfo
// 0x0014
struct FUpdatedPlayerInfo
{
	struct Fdword                                      PlayerID;                                                 // 0x0000(0x0004)
	struct FString                                     PlayerName;                                               // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgLeagueDC_Leaderboard.PlayerIdPointer
// 0x000C
struct FPlayerIdPointer
{
	struct Fdword                                      PlayerID;                                                 // 0x0000(0x0004)
	struct FPointer                                    playerObj;                                                // 0x0004(0x0008) (Native)
};

// ScriptStruct TgClientBase.TgLobbyDC_Class.TgRestrictedSkinUpdate
// 0x0008
struct FTgRestrictedSkinUpdate
{
	unsigned char                                      fUpdate;                                                  // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct Fdword                                      nSkinId;                                                  // 0x0004(0x0004)
};

// ScriptStruct TgClientBase.TgLobbyDC_Currencies.TgDCCurrency
// 0x0020
struct FTgDCCurrency
{
	struct FString                                     sCurrencyName;                                            // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      nCurrencyId;                                              // 0x0010(0x0004)
	struct Fdword                                      nValue;                                                   // 0x0014(0x0004)
	class UGFxObject*                                  pObject;                                                  // 0x0018(0x0008)
};

// ScriptStruct TgClientBase.TgLobbyDC_Inventory.TgBoosterEntry
// 0x0020
struct FTgBoosterEntry
{
	class UGFxObject*                                  pData;                                                    // 0x0000(0x0008)
	struct Fdword                                      nId;                                                      // 0x0008(0x0004)
	struct Fdword                                      nLootId;                                                  // 0x000C(0x0004)
	struct Fdword                                      nSubType;                                                 // 0x0010(0x0004)
	struct Fdword                                      nUsedBy;                                                  // 0x0014(0x0004)
	int                                                nInvCount;                                                // 0x0018(0x0004)
	float                                              nMultiplier;                                              // 0x001C(0x0004)
};

// ScriptStruct TgClientBase.TgLobbyDC_Match.TgClassUpdateInfo
// 0x000C
struct FTgClassUpdateInfo
{
	unsigned char                                      fUpdate;                                                  // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UTgLobbyDC_Class*                            pClass;                                                   // 0x0004(0x0008)
};

// ScriptStruct TgClientBase.TgLobbyDC_Match.TgLobbyClassLookup
// 0x0008
struct FTgLobbyClassLookup
{
	int                                                nIndex;                                                   // 0x0000(0x0004)
	struct Fdword                                      nClassId;                                                 // 0x0004(0x0004)
};

// ScriptStruct TgClientBase.TgLobbyDC_Player.RoleCallInfo
// 0x0010
struct FRoleCallInfo
{
	int                                                nValueId;                                                 // 0x0000(0x0004)
	int                                                nIndex;                                                   // 0x0004(0x0004)
	struct FQWord                                      nTimestamp;                                               // 0x0008(0x0008)
};

// ScriptStruct TgClientBase.TgLobbyDC_Team.TgIncomingBan
// 0x0008
struct FTgIncomingBan
{
	struct Fdword                                      nClassId;                                                 // 0x0000(0x0004)
	struct Fdword                                      nIndex;                                                   // 0x0004(0x0004)
};

// ScriptStruct TgClientBase.TgGFxVGSGame.VGSGameData
// 0x0024
struct FVGSGameData
{
	int                                                nVgsId;                                                   // 0x0000(0x0004)
	struct FString                                     sLabel;                                                   // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             arrCombo;                                                 // 0x0014(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGFxViewerStore.TgEsportsGFxObject
// 0x000C
struct FTgEsportsGFxObject
{
	struct Fdword                                      nId;                                                      // 0x0000(0x0004)
	class UGFxObject*                                  pObject;                                                  // 0x0004(0x0008)
};

// ScriptStruct TgClientBase.TgGFxViewerStore.TgEsportsDataLists
// 0x0070
struct FTgEsportsDataLists
{
	class UGFxObject*                                  _this;                                                    // 0x0000(0x0008)
	class UGFxObject*                                  pGFxTeams;                                                // 0x0008(0x0008)
	class UGFxObject*                                  pGFxEvents;                                               // 0x0010(0x0008)
	class UGFxObject*                                  pGFxSchedule;                                             // 0x0018(0x0008)
	class UGFxObject*                                  pGFxAccumulativeStats;                                    // 0x0020(0x0008)
	TArray<struct FTgEsportsGFxObject>                 arrTeams;                                                 // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgEsportsGFxObject>                 arrEvents;                                                // 0x0038(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgEsportsGFxObject>                 arrSchedule;                                              // 0x0048(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UGFxObject*>                          arrAccumulativeStats;                                     // 0x0058(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nVoteWindowMinutesStart;                                  // 0x0068(0x0004)
	int                                                nVoteWindowMinutesEnd;                                    // 0x006C(0x0004)
};

// ScriptStruct TgClientBase.TgGFxViewerStore.TgEsportsData
// 0x0080
struct FTgEsportsData
{
	class UGFxObject*                                  _this;                                                    // 0x0000(0x0008)
	class UGFxObject*                                  pAboutInfo;                                               // 0x0008(0x0008)
	struct FTgEsportsDataLists                         Lists;                                                    // 0x0010(0x0070) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDealObtainLabel
// 0x0018
struct FTgStoreDealObtainLabel
{
	class UTgGFxObject*                                _this;                                                    // 0x0000(0x0008)
	class UTgGFxObject*                                gfxTextField;                                             // 0x0008(0x0008)
	class UTgGFxObject*                                gfxBackground;                                            // 0x0010(0x0008)
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreCard
// 0x0028
struct FTgStoreCard
{
	class UTgGFxObject*                                _this;                                                    // 0x0000(0x0008)
	class UTgGFxObject*                                gfxCard;                                                  // 0x0008(0x0008)
	struct FTgStoreDealObtainLabel                     gfxBanner;                                                // 0x0010(0x0018)
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDealPrice
// 0x0008
struct FTgStoreDealPrice
{
	class UTgGFxObject*                                _this;                                                    // 0x0000(0x0008)
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDealButton
// 0x005C
struct FTgStoreDealButton
{
	class UTgGFxObject*                                _this;                                                    // 0x0000(0x0008)
	struct FTgStoreCard                                gfxCard;                                                  // 0x0008(0x0028)
	class UTgGFxObject*                                gfxTextField;                                             // 0x0030(0x0008)
	class UTgGFxObject*                                gfxTextField2;                                            // 0x0038(0x0008)
	struct FTgStoreDealPrice                           gfxPriceBanner;                                           // 0x0040(0x0008)
	class UTgGFxObject*                                gfxOwnedPip;                                              // 0x0048(0x0008)
	class UTgGFxObject*                                gfxOwnedLabel;                                            // 0x0050(0x0008)
	struct Fdword                                      nLootId;                                                  // 0x0058(0x0004)
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDailyBundle
// 0x002C
struct FTgStoreDailyBundle
{
	class UTgGFxObject*                                _this;                                                    // 0x0000(0x0008)
	TArray<struct FTgStoreCard>                        arrCard;                                                  // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	class UTgGFxObject*                                gfxSaleBanner;                                            // 0x0018(0x0008)
	struct FTgStoreDealPrice                           gfxPriceBanner;                                           // 0x0020(0x0008)
	struct Fdword                                      nLootId;                                                  // 0x0028(0x0004)
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDealEmptyLabel
// 0x0010
struct FTgStoreDealEmptyLabel
{
	class UTgGFxObject*                                _this;                                                    // 0x0000(0x0008)
	class UTgGFxObject*                                gfxTextField;                                             // 0x0008(0x0008)
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDealBundles
// 0x0040
struct FTgStoreDealBundles
{
	class UTgGFxObject*                                _this;                                                    // 0x0000(0x0008)
	TArray<struct FTgStoreDailyBundle>                 arrBundle;                                                // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FTgStoreDealEmptyLabel>              arrEmptyLabel;                                            // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	struct FTgStoreDealEmptyLabel                      gfxEmptyLabelFull;                                        // 0x0028(0x0010)
	class UTgGFxObject*                                gfxLabel;                                                 // 0x0038(0x0008)
};

// ScriptStruct TgClientBase.TgGFxVGSShared.VGSPrompt
// 0x0018
struct FVGSPrompt
{
	class UTgGFxObject*                                _this;                                                    // 0x0000(0x0008)
	class UTgGFxObject*                                Prompt;                                                   // 0x0008(0x0008)
	class UTgGFxObject*                                Label;                                                    // 0x0010(0x0008)
};

// ScriptStruct TgClientBase.TgPlayerNameManager.TgProfileDelegatesBuffer
// 0x0020
struct FTgProfileDelegatesBuffer
{
	TArray<struct FString>                             arrIdList;                                                // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FScriptDelegate>                     arrDelegates;                                             // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGameHUDOverlay.ClipPoolItem
// 0x0010
struct FClipPoolItem
{
	class UGFxObject*                                  sctClip;                                                  // 0x0000(0x0008)
	float                                              fLastUsedTime;                                            // 0x0008(0x0004)
	int                                                nPoolIdx;                                                 // 0x000C(0x0004)
};

// ScriptStruct TgClientBase.TgGameHUDOverlay.ClipPool
// 0x0010
struct FClipPool
{
	TArray<struct FClipPoolItem>                       clips;                                                    // 0x0000(0x0010) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGameHUDOverlay.OverlayTag
// 0x0168
struct FOverlayTag
{
	float                                              fLastMarkTime;                                            // 0x0000(0x0004)
	float                                              fDistance;                                                // 0x0004(0x0004)
	float                                              fCurrentScale;                                            // 0x0008(0x0004)
	unsigned long                                      bEnemy : 1;                                               // 0x000C(0x0004)
	unsigned long                                      bMarked : 1;                                              // 0x000C(0x0004)
	unsigned long                                      bHidden : 1;                                              // 0x000C(0x0004)
	unsigned long                                      bSctUsable : 1;                                           // 0x000C(0x0004)
	TEnumAsByte<EOverlayType>                          eOverlayType;                                             // 0x0010(0x0001)
	TEnumAsByte<EOverlayOffscreenIndicator>            eOverlayOffscreenIndicator;                               // 0x0011(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                nActorId;                                                 // 0x0014(0x0004)
	int                                                nPrevDepth;                                               // 0x0018(0x0004)
	int                                                nPrevHealth;                                              // 0x001C(0x0004)
	int                                                nPrevMaxHealth;                                           // 0x0020(0x0004)
	int                                                nPrevPower;                                               // 0x0024(0x0004)
	int                                                nPrevMaxPower;                                            // 0x0028(0x0004)
	int                                                nPrevShield;                                              // 0x002C(0x0004)
	int                                                nPrevMaxShield;                                           // 0x0030(0x0004)
	int                                                nPrevLevel;                                               // 0x0034(0x0004)
	int                                                nPrevStunCat;                                             // 0x0038(0x0004)
	struct FString                                     sPrevName;                                                // 0x003C(0x0010) (NeedCtorLink)
	unsigned char                                      bPrevPassiveActive;                                       // 0x004C(0x0001)
	unsigned char                                      bPrevPassiveSlotActive[0x8];                              // 0x004D(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              fPrevNameplateAlpha;                                      // 0x0058(0x0004)
	unsigned long                                      bPrevNameplateVisible : 1;                                // 0x005C(0x0004)
	float                                              fPrevHardCCRemainingSecs;                                 // 0x0060(0x0004)
	float                                              fPrevHardCCLengthSecs;                                    // 0x0064(0x0004)
	int                                                nPrevImmunityTypeId;                                      // 0x0068(0x0004)
	int                                                nProfileId;                                               // 0x006C(0x0004)
	int                                                nMaxHealth;                                               // 0x0070(0x0004)
	int                                                nMaxPower;                                                // 0x0074(0x0004)
	class UGFxObject*                                  containerClip;                                            // 0x0078(0x0008)
	TArray<struct FClipPool>                           Pools;                                                    // 0x0080(0x0010) (NeedCtorLink)
	class UGFxObject*                                  nameplateClip;                                            // 0x0090(0x0008)
	class UGFxObject*                                  arrowClip;                                                // 0x0098(0x0008)
	class UGFxObject*                                  playerBarClip;                                            // 0x00A0(0x0008)
	class UGFxObject*                                  nameClip;                                                 // 0x00A8(0x0008)
	class UGFxObject*                                  nameClip2;                                                // 0x00B0(0x0008)
	class UGFxObject*                                  nameBGClip;                                               // 0x00B8(0x0008)
	class UGFxObject*                                  distanceClip;                                             // 0x00C0(0x0008)
	class UGFxObject*                                  levelClip;                                                // 0x00C8(0x0008)
	class UGFxObject*                                  levelClip2;                                               // 0x00D0(0x0008)
	class UGFxObject*                                  targetedClip;                                             // 0x00D8(0x0008)
	class UGFxObject*                                  objectiveLabelClip;                                       // 0x00E0(0x0008)
	class UGFxObject*                                  passiveHolderClip;                                        // 0x00E8(0x0008)
	class UGFxObject*                                  passiveHolderEffectsList;                                 // 0x00F0(0x0008)
	class UGFxObject*                                  teamIconClip;                                             // 0x00F8(0x0008)
	class UGFxObject*                                  winningClip;                                              // 0x0100(0x0008)
	class UGFxObject*                                  healthLabelClip;                                          // 0x0108(0x0008)
	class UGFxObject*                                  lifespanBarClip;                                          // 0x0110(0x0008)
	class UGFxObject*                                  lifespanBarScaleClip;                                     // 0x0118(0x0008)
	class UGFxObject*                                  effectClip;                                               // 0x0120(0x0008)
	class UGFxObject*                                  effectBarClip;                                            // 0x0128(0x0008)
	class UGFxObject*                                  effectBarScaleClip;                                       // 0x0130(0x0008)
	class UGFxObject*                                  immunityClip;                                             // 0x0138(0x0008)
	class UGFxObject*                                  portraitLoaderClip;                                       // 0x0140(0x0008)
	class UGFxObject*                                  portraitDeadClip;                                         // 0x0148(0x0008)
	class UGFxObject*                                  sctClip;                                                  // 0x0150(0x0008)
	class UGFxObject*                                  sctCritClip;                                              // 0x0158(0x0008)
	class UGFxObject*                                  offscreenIndicatorClip;                                   // 0x0160(0x0008)
};

// ScriptStruct TgClientBase.TgGameHUDOverlay.DamageInfoQueue
// 0x0014
struct FDamageInfoQueue
{
	TArray<struct FDamageInfoData>                     damageInfos;                                              // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              lastUpdate;                                               // 0x0010(0x0004)
};

// ScriptStruct TgClientBase.TgGfxBuyAllModalBase.BuyAllSectionData
// 0x0030
struct FBuyAllSectionData
{
	struct FString                                     SectionName;                                              // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     SectionSubtext;                                           // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FPointer>                            SectionItems;                                             // 0x0020(0x0010) (Native, AlwaysInit)
};

// ScriptStruct TgClientBase.TgGfxEventSceneBase.QuestGoal
// 0x0068
struct FQuestGoal
{
	struct FString                                     sName;                                                    // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDescription;                                             // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sTitle;                                                   // 0x0020(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bCompleted : 1;                                           // 0x0030(0x0004)
	int                                                nName;                                                    // 0x0034(0x0004)
	int                                                nDescription;                                             // 0x0038(0x0004)
	int                                                nCompletedType;                                           // 0x003C(0x0004)
	int                                                nGoalId;                                                  // 0x0040(0x0004)
	int                                                nRewardItemId;                                            // 0x0044(0x0004)
	int                                                nRewardQuantity;                                          // 0x0048(0x0004)
	TArray<int>                                        nPrecursorGoalId;                                         // 0x004C(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nDisplayIndex;                                            // 0x005C(0x0004)
	int                                                nQuestProgress;                                           // 0x0060(0x0004)
	int                                                nQuestGoal;                                               // 0x0064(0x0004)
};

// ScriptStruct TgClientBase.TgGfxGameInputInterceptor.TgInputInterceptReg
// 0x0014
struct FTgInputInterceptReg
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	struct FScriptDelegate                             delCallback;                                              // 0x0004(0x000C) (NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct TgClientBase.TgLandingPanelManagerBase.LandingPanelEventInfoEntry
// 0x0020
struct FLandingPanelEventInfoEntry
{
	struct FString                                     sHeader;                                                  // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDesc;                                                    // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgLandingPanelManagerBase.LandingPanelEventInfoData
// 0x0020
struct FLandingPanelEventInfoData
{
	struct FString                                     backgroundArtPath;                                        // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FLandingPanelEventInfoEntry>         eventInfoEntries;                                         // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgGFxNativeWidget.GFxTweenMax
// 0x0028
struct FGFxTweenMax
{
	class UGFxObject*                                  pFromOptions;                                             // 0x0000(0x0008)
	class UGFxObject*                                  pToOptions;                                               // 0x0008(0x0008)
	class UGFxObject*                                  pActiveOptions;                                           // 0x0010(0x0008)
	class UGFxObject*                                  pTarget;                                                  // 0x0018(0x0008)
	float                                              nDuration;                                                // 0x0020(0x0004)
	float                                              nDelay;                                                   // 0x0024(0x0004)
};

// ScriptStruct TgClientBase.TgGFxNativeWidget.GFxTween
// 0x0008
struct FGFxTween
{
	class UGFxObject*                                  m_pTween;                                                 // 0x0000(0x0008)
};

// ScriptStruct TgClientBase.TgGFxStoreDeals.TgStoreDealOriginalPrice
// 0x0018
struct FTgStoreDealOriginalPrice
{
	class UTgGFxObject*                                _this;                                                    // 0x0000(0x0008)
	class UTgGFxObject*                                textField;                                                // 0x0008(0x0008)
	class UTgGFxObject*                                currencyIcon;                                             // 0x0010(0x0008)
};

// ScriptStruct TgClientBase.TgLobbyHUDBase.LobbyTransitionPlayer
// 0x0104
struct FLobbyTransitionPlayer
{
	struct FString                                     sPlayerName;                                              // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct Fdword                                      nPlayerId;                                                // 0x0010(0x0004)
	int                                                nClassId;                                                 // 0x0014(0x0004)
	int                                                nSkinId;                                                  // 0x0018(0x0004)
	int                                                nTaskForce;                                               // 0x001C(0x0004)
	int                                                nWins;                                                    // 0x0020(0x0004)
	int                                                nPlayerKills;                                             // 0x0024(0x0004)
	int                                                nAssists;                                                 // 0x0028(0x0004)
	int                                                nFrameId;                                                 // 0x002C(0x0004)
	int                                                nMasteryLevel;                                            // 0x0030(0x0004)
	int                                                nAvatarId;                                                // 0x0034(0x0004)
	int                                                nHideGodStats;                                            // 0x0038(0x0004)
	int                                                nCharXpCount;                                             // 0x003C(0x0004)
	int                                                nCharXpLevel;                                             // 0x0040(0x0004)
	int                                                nXpCount;                                                 // 0x0044(0x0004)
	int                                                nXpLevel;                                                 // 0x0048(0x0004)
	int                                                nSkinObtainedDay;                                         // 0x004C(0x0004)
	struct FString                                     sFLevel;                                                  // 0x0050(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sTeam1;                                                   // 0x0060(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sTeam2;                                                   // 0x0070(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDateTime;                                                // 0x0080(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sFantasyPoints;                                           // 0x0090(0x0010) (AlwaysInit, NeedCtorLink)
	unsigned long                                      isAI : 1;                                                 // 0x00A0(0x0004)
	unsigned long                                      hasSeasonTicket : 1;                                      // 0x00A0(0x0004)
	struct FString                                     sOdyPoints;                                               // 0x00A4(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sClassName;                                               // 0x00B4(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sClassIconTexture;                                        // 0x00C4(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sClassIconMIC;                                            // 0x00D4(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sBorderMIC;                                               // 0x00E4(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sSkinName;                                                // 0x00F4(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgClientBase.TgLobbyHUDBase.LobbyTransitionData
// 0x1450
struct FLobbyTransitionData
{
	struct FLobbyTransitionPlayer                      FriendlyTeam[0x5];                                        // 0x0000(0x0104) (NeedCtorLink)
	struct FLobbyTransitionPlayer                      EnemyTeam[0x5];                                           // 0x0514(0x0104) (NeedCtorLink)
	struct FLobbyTransitionPlayer                      ThirdTeam[0x5];                                           // 0x0A28(0x0104) (NeedCtorLink)
	struct FLobbyTransitionPlayer                      FourthTeam[0x5];                                          // 0x0F3C(0x0104) (NeedCtorLink)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgPidQueuedReq
// 0x0005
struct FTgPidQueuedReq
{
	struct Fdword                                      nPid;                                                     // 0x0000(0x0004)
	unsigned char                                      fMode;                                                    // 0x0004(0x0001)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgPidPage
// 0x1010
struct FTgPidPage
{
	struct FTgPidQueuedReq                             arrData[0x200];                                           // 0x0000(0x0008)
	struct FPointer                                    pNext;                                                    // 0x1000(0x0008) (Native)
	struct FWORD                                       nCount;                                                   // 0x1008(0x0004)
	struct FWORD                                       nOffset;                                                  // 0x100C(0x0004)
};

// ScriptStruct TgClientBase.TgPlayerNameProcessor.TgUidPage
// 0x2010
struct FTgUidPage
{
	struct FString                                     arrData[0x200];                                           // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	struct FPointer                                    pNext;                                                    // 0x2000(0x0008) (Native)
	struct FWORD                                       nCount;                                                   // 0x2008(0x0004)
	struct FWORD                                       nOffset;                                                  // 0x200C(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
