#pragma once

// SMITE (8.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SM_Basic.hpp"
#include "SM_Core_classes.hpp"
#include "SM_Engine_classes.hpp"
#include "SM_PlatformCommon_classes.hpp"
#include "SM_GameFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_TGDST_BLESSING                                     16927
#define CONST_TGEGC_SILENCE                                      10053
#define CONST_TGACH_BELL_HAMMER_DEV_ID                           11137
#define CONST_TGPID_PROTECTION_PULL                              1360
#define CONST_TGPID_CAPTURE_RATE_PERCENT                         426
#define CONST_BNT_CONDITION_COMBAT_IS_TARGET_OF_TWR_OR_MTR       287
#define CONST_TGACH_BELL_HAMMER_ID                               11138
#define CONST_TGPID_MIN_AGENTS                                   401
#define CONST_TGEGC_RAMA_A02_BUFF                                17887
#define CONST_TGEGC_TSUKUYOMI_INHAND_WHITE_MOONLIGHT             17909
#define CONST_NOX_TGEGC_DEV1_SHIELD_CATEGORY_CODE                10950
#define CONST_INDEX_SEE_STEALTHED_ENEMY                          4
#define CONST_ITEM_ID_BUMBAS_MASK_S3                             12285
#define CONST_TGPAWN_RAM_ULT_MARK_ID                             10117
#define CONST_TGEGC_KALI_MARKED_LOWHEALTH                        10910
#define CONST_TGPAWN_RAIJIN_THUNDER_CRASH_BURST_FX               8245
#define CONST_TgObject_SECONDARY_BASE_RELIC_ITEMID               18307
#define CONST_BNT_ACTION_CLEAR_LAST_ATTACKER                     1048603
#define CONST_INDEX_DISPLAY_TARGET_BRACKET                       2
#define CONST_TGACHIEVEMENT_JUMP_JUMP_ACTIVITY_ID                1933
#define CONST_ITEM_ID_RUNEFORGED_HAMMER_S3                       12207
#define CONST_TGPID_BASIC_ATTACK_GROUNDSPEED_MELEE_PERC          1911
#define CONST_TGPAWN_JING_WEI_DEATH_ID                           6517
#define CONST_TGMT_NONE                                          0
#define CONST_TGPID_DEFENDER_RECAP_RATE                          296
#define CONST_TGPID_TIME_TO_CAPTURE                              288
#define CONST_TGPAWN_HACHIMAN_HORSE_ID                           9295
#define CONST_TGPID_ACCURACY_SPRINT                              246
#define CONST_AIE_STASIS                                         4
#define CONST_VV_BOT_RANK_FAMILIAR                               10425
#define CONST_TGACH_BELL_SCRG_DEV_ID                             11140
#define CONST_TGPAWN_GENERIC_EFFECT_GROUP_SITUATIONAL_01         10693
#define CONST_TGEGC_DAJI_PAOLAO_CHAINS_DOT                       15542
#define CONST_TGPID_MAX_DEPLOYABLES_OUT                          154
#define CONST_TGACH_BELL_HAND_ID                                 11133
#define CONST_TGEGT_HIT_SPECIAL_INSTANT                          10681
#define CONST_VV_BOT_RANK_DEPLOYABLE                             10678
#define CONST_ITEM_ID_WATCHERS_GIFT_S3                           12288
#define CONST_TGPRI_PEP_LANE_SPECIAL_UNIT_MAX                    1
#define CONST_TGPID_DEVICE_EFFECTIVE_RANGE                       153
#define CONST_TGDEVICE_CHARGE_CHAINSUBDEVICE_SUBMAX              4
#define CONST_NUM_SCORE_TYPES                                    23
#define CONST_TGPID_OVERTIME_RATE_MODIFIER                       317
#define CONST_TGACH_BELL_SCRG_ID                                 11139
#define CONST_TGPID_HEALTH_PERCENT                               1044
#define CONST_ITEM_ID_BANCROFTS_TALON                            8551
#define CONST_TGACH_BELL_SHLD_ID                                 11134
#define CONST_TGPID_PROTECTION_FEAR_AND_PANIC                    1022
#define CONST_BNT_CONDITION_COMBAT_IS_LAST_ATTACKER              310
#define CONST_TGPID_RESPAWN                                      171
#define CONST_TGACH_HOUYI_DEV3_ID                                11637
#define CONST_TGPAWN_DAJI_PAC_MESH_ID                            8939
#define CONST_HARD_CC_DIM_RETURNS                                0.33f
#define CONST_TGATDT_ANIM_TREE_RANGE                             0.0
#define CONST_TGACH_BELL_SHLD_DEV_ID                             11127
#define CONST_G72_MAX_PASSIVE_TARGETS                            3
#define CONST_TGPAWN_THOTH_SPEED_GLYPH_LISTENER_CATEGORY_CODE    15221
#define CONST_TGPID_RANGED_ATTACKRATING_MODIFIER                 215
#define CONST_TGEGC_STUN_TAUNT                                   10649
#define CONST_TGPAWN_EFFECT_GROUP_SITUATIONA_DIALOGUE_03         17425
#define CONST_TG_ITEM_STORE_MAX                                  6
#define CONST_TGACH_BELL_RALLY_ID                                11141
#define CONST_TgRepInfo_Player_TG_EQP_POINT_MAX                  31
#define CONST_TGPAWN_PELE_INHAND_ID                              16205
#define CONST_TGPID_FIRE_PRE_HIT_DELAY                           1016
#define CONST_TGPAWN_THOTH_DEV4_SHOOTER_DEVICE_ID                13576
#define CONST_TGACH_HADES_DEV4_ID                                7357
#define CONST_TGPID_POINTS_TO_WIN                                327
#define CONST_TGPID_SWEEP_DIRECTION                              143
#define CONST_TGACH_HOUYI_DEV1_ID                                11416
#define CONST_CTF_CARRIER_MELEE_DEVICE_ID                        14200
#define CONST_TGPID_TYR_ABILITY_2_KNOCKBACK                      1564
#define CONST_TGEGC_SOL_HANDSTIM                                 11304
#define CONST_TGPID_MINIMUM_RADIUS                               1048
#define CONST_TGPID_END_OT_ON_DEFENDER_PROGRESS                  320
#define CONST_TG_MAX_MAP_OBJECTIVES                              75
#define CONST_VV_BOT_RANK_DECOY                                  10679
#define CONST_TGPT_COMBO                                         503
#define CONST_TGPID_GP_MAX_RESPAWN_TIME                          1569
#define CONST_ITEM_ID_TRANSCENDENCE_S3                           12161
#define CONST_TIMER_LIFEDONE                                     1
#define CONST_TGFXT_AUDIENCE_FRIENDLY                            10830
#define CONST_TMS_FADEDAMAGE_TIMER                               1
#define CONST_TGPAWN_GENERIC_EFFECT_GROUP_SITUATIONAL_06         15526
#define CONST_TGACH_HOUYI_DEV4_ID                                10869
#define CONST_TGPID_RANGE_MODIFIER                               114
#define CONST_BNT_SENSOR_DEVICE_TARGETING                        16
#define CONST_SMITE_MINION_INTRASQUAD_SPAWN_DELAY                0.5f
#define CONST_TGEGC_LOCAL                                        302
#define CONST_TGFXT_AUDIENCE_ALL                                 10825
#define CONST_BNT_SENSOR_INCOMING_DAMAGE                         17
#define CONST_TGPAWN_MEDUSA_TGEGC_OFFHAND1_BUFF                  11106
#define CONST_ITEM_ID_BANCROFTS_TALON_S3                         12209
#define CONST_TGPAWN_POSEIDON_TRIDENT_SPLITS_ID                  8699
#define CONST_DEVICE_TIER_2                                      10756
#define CONST_TGPAWN_GENERIC_EFFECT_GROUP_SITUATIONAL_02         10694
#define CONST_IgnoreBlockingPawn                                 0x0F
#define CONST_BNT_CONDITION_PAWN_STATE                           348
#define CONST_TGPID_IGNORE_BACKDOOR                              1881
#define CONST_FLAG_MELEE_FIRE_DURATION                           3.0f
#define CONST_DEVICE_TIER_3                                      10757
#define CONST_TGPAWN_GENERIC_EFFECT_GROUP_SITUATIONAL_03         15446
#define CONST_TGPID_PHYSICAL_IMMUNITY                            1606
#define CONST_DEVICE_TIER_4                                      10758
#define CONST_TGPID_OBJECTIVE_DAMAGE_BONUS                       1798
#define CONST_TGPID_SHOVE                                        1878
#define CONST_TGPID_MAGICAL_IMMUNITY                             1607
#define CONST_TGPAWN_GENERIC_EFFECT_GROUP_SITUATIONAL_04         15524
#define CONST_BNT_CONDITION_COMBAT_IS_IN_TOWER_RADIUS            286
#define CONST_TGPID_TGPAWN_CHRONOS_BASIC_ATTACK_LINK_FX_ID       2820
#define CONST_ITEM_ID_BOOK_OF_THOTH_B_S3                         12557
#define CONST_TGPID_REVEAL_INSTIGATOR                            1744
#define CONST_TGPAWN_GENERIC_EFFECT_GROUP_SITUATIONAL_05         15525
#define CONST_TGPAWN_GENERIC_EFFECT_GROUP_SITUATIONAL_07         15527
#define CONST_TGPID_MP5                                          1003
#define CONST_TGPID_STUNTAUNT                                    1555
#define CONST_TGDST_STARTER                                      16926
#define CONST_TGPAWN_EFFECT_GROUP_SITUATIONA_DIALOGUE_01         17423
#define CONST_TGPAWN_BARONSAMEDI_A03_ID                          16006
#define CONST_TG_PHYSICALITY_UNTARGET                            16597
#define CONST_TGPID_PATROL_LOOP                                  181
#define CONST_CONTEXT_NOTIFY_SELF_RETREAT                        118528
#define CONST_TGPAWN_EFFECT_GROUP_SITUATIONA_DIALOGUE_02         17424
#define CONST_TGPID_CRITICAL_STRIKE_DAMAGE                       1025
#define CONST_TGPID_CONE_ATTACK_ANGLE_OFFSET                     1627
#define CONST_TGPAWN_EFFECT_GROUP_SITUATIONA_DIALOGUE_04         17426
#define CONST_TGMAPTRACKER_DEPTHZY_MAX_SAMPLE_COUNT              2000
#define CONST_BNT_ACTION_SELECT_COMBAT_LANE                      1048585
#define CONST_TGPID_ENERGY_MAX                                   1005
#define CONST_TGPAWN_NUWA_SNAKEKNOCKBACK_SITUATIONAL_TYPE        0
#define CONST_TGPAWN_EFFECT_GROUP_SITUATIONAL_ACHIEVEMENTCOMPLETE 16910
#define CONST_TGPAWN_HERCULES_PASSIVE_EG_ID                      30853
#define CONST_TGPAWN_RAM_ULT_PROP_MESH_ID                        6337
#define CONST_TGPAWN_EFFECT_GROUP_SITUATIONA_DIALOGUE_05         17427
#define CONST_TGPID_MELEE_ATTACKRATING_MODIFIER                  213
#define CONST_TGPAWN_EFFECT_GROUP_SITUATIONA_DIALOGUE_06         17428
#define CONST_TG_KILLGODEMOTE_SPACING                            15.0f
#define CONST_TGEGC_MEDUSA_ULT_SLOW                              11079
#define CONST_TG_NAV_ROUTE_INDICATOR_PATHING_FX_ID               2276
#define CONST_TGPID_PROTECTION_KNOCKBACK                         233
#define CONST_TGPID_GOLD_PER_6                                   1561
#define CONST_TGPAWN_EFFECT_GROUP_SITUATIONA_DIALOGUE_07         17429
#define CONST_TGPAWN_WIZARD_C03_ID                               16587
#define CONST_TgEffectGroup_TGEGC_CAMAZOTZ_VAMPIRE_BATS_BUFF     15214
#define CONST_TGPAWN_G86_EGST_SEASONAL_WINTER                    15388
#define CONST_TGPAWN_EFFECT_GROUP_SITUATIONAL_ARTHURIAN_READY    17717
#define CONST_TGDT_SPECIALTY                                     981
#define CONST_TGPAWN_POSEIDON_TRIDENT_ID                         8765
#define CONST_TGPID_KNOCKUP_TIMED                                1622
#define CONST_TGDEPLOY_EVE_EFFECT_GROUP_SITUATIONAL_INITIAL_TOUCH 17315
#define CONST_PERSEPHONE_TETHER_MAX                              32
#define CONST_TGDEPLOY_EVE_EFFECT_GROUP_SITUATIONAL_TOUCH        17316
#define CONST_TGFXMAT_BODY                                       618
#define CONST_ITEM_ID_RUNEFORGED_HAMMER                          8959
#define CONST_TGPAWN_HERCULES_BOULDER_ERUPTION_MESH_ID           3362
#define CONST_MIN_SAVE_INTERVAL_S                                16
#define CONST_TGEGC_CAMAZOTZ_DEADLY_BITE_DEBUFF                  15181
#define CONST_TGDEPLOY_EVE_EFFECT_GROUP_SITUATIONAL_UNTOUCH      17317
#define CONST_MAX_STATS_DEVICES                                  9
#define CONST_TGPID_BEADS_SILENCE                                1828
#define CONST_TGMT_MOVEMENT                                      10583
#define CONST_BNT_CONDITION_COMBAT_IS_IN_DISTANCE                274
#define CONST_TGDEVICE_SOL_SOLARFLAIR_TARGETSMASK                0xffff
#define CONST_VV_BOT_RANK_BUFFMONSTER                            10178
#define CONST_TGMT_LEAP                                          10955
#define CONST_BNT_ACTION_FOLLOW_LANE_REVERSE                     1048619
#define CONST_TGPID_TGPAWN_NEZHA_WINDFIRE_AIR_DASH_SUB_ID        8804
#define CONST_INDEX_DISPLAY_TARGET_DISTANCE                      3
#define CONST_TGPT_INT                                           176
#define CONST_VV_BOT_RANK_NEUTRAL_BOSS                           10270
#define CONST_TFT_ENEMY                                          10133
#define CONST_PING_LENGTH                                        4
#define CONST_ITEM_ID_BUMBAS_MASK                                8987
#define CONST_BNT_ACTION_PLAY_EMOTE                              1048582
#define CONST_TGPID_ACCURACY_CROUCH                              249
#define CONST_TGMT_DASH                                          10956
#define CONST_TGPID_TGPAWN_APOLLO_PASSIVE_FX_START_ID            2631
#define CONST_VV_BOT_RANK_LARGE_MONSTER                          10140
#define CONST_DEVICE_TIER_ARTIFACT                               11343
#define CONST_ITEM_ID_WATCHERS_GIFT                              9089
#define CONST_TGPID_LOCK_TARGET_TIME                             446
#define CONST_TGPID_MINIMAP_LOS_IGNORED                          1032
#define CONST_TGPID_PANIC                                        1018
#define CONST_BNT_ACTION_SELECT_LANE_MOVE                        1048587
#define CONST_TGPAWN_RACER_INHAND_DEVICE_ID                      14336
#define CONST_ITEM_ID_TRANSCENDENCE                              8547
#define CONST_ITEM_ID_TRANSCENDENCE_EVS5                         15767
#define CONST_BNT_CONDITION_NEARBY_GOD_COUNT                     275
#define CONST_TGEGC_BASTET_SPHINX_BUFF                           17809
#define CONST_TGPAWN_BARONSAMEDI_PSV_HYSTERIA_MAX_CATEGORY_CODE  17136
#define CONST_TG_AIM_FUDGE_FACTOR                                256.0f
#define CONST_ITEM_ID_BOOK_OF_THOTH                              7334
#define CONST_ITEM_ID_BOOK_OF_THOTH_S3                           12263
#define CONST_MAX_DEVICE_EQPOINT                                 15
#define CONST_TGPID_ROUND_TIME                                   416
#define CONST_TGPID_EFFECT_REPAIR_MODIFIER_SELF                  261
#define CONST_ITEM_ID_BOOK_OF_THOTH_EVS5                         15725
#define CONST_ITEM_ID_TYPHONS_FANG                               15579
#define CONST_TGPAWN_DISCORDIA_A04_ID                            15367
#define CONST_ITEM_ID_ANCILE                                     10127
#define CONST_TGEGC_SENTINELS_EMBRACE_BUFF                       17969
#define CONST_CONTEXT_NOTIFY_ATTACK_SPECIALFX                    2928
#define CONST_TGPID_GP_INFINITE_ENERGY                           1741
#define CONST_TGPID_PET_MAX_HEALTH_MODIFIER                      366
#define CONST_TGPID_TGPAWN_ISIS_DISPELMAGIC_WARMUP_FX_ID         2771
#define CONST_ITEM_ID_LONOS_MASK                                 14541
#define CONST_FAFNIR_DRAGON_REVERT_DEVICE                        12986
#define CONST_VV_BOT_RANK_ELITE_MINION                           10787
#define CONST_TGPID_REMOVE_MEZ                                   209
#define CONST_TGPAWN_RAIJIN_INHAND_ID                            12349
#define CONST_VV_BOT_RANK_MONSTER                                10085
#define CONST_TGD_ANIMSET_DEST_CHAR_SELECT                       1275
#define CONST_TGEA_MAX_EFFECTS_COMBO                             32
#define CONST_VV_BOT_RANK_GOD                                    10126
#define CONST_TGFXT_AUDIENCE_CUSTOM_FILTER_02                    15452
#define CONST_TGPID_SHIELD_MAX                                   1599
#define CONST_TGDT_RANGED                                        388
#define CONST_TGPID_REVIVE_REDUCTION_PERC                        1040
#define CONST_VV_BOT_RANK_PHOENIX                                10125
#define CONST_TGPID_ARES_SHACKLE_DOT_EFFECT_GROUP_CATEGORY       10572
#define CONST_TGPID_MAX_TARGET_COUNT                             415
#define CONST_VV_BOT_RANK_GUARDIAN                               10124
#define CONST_VV_BOT_RANK_TOWER                                  10127
#define CONST_BNT_CONDITION_COMBAT_DAMAGED_FRIENDLY_GOD          304
#define CONST_TGEGC_PERSEPHONE_REGROWTH_SEL                      17728
#define CONST_TGPID_POINTS                                       398
#define CONST_TGPAWN_RATATOSKR_SAPPHIRE_SITUATIONAL              11188
#define CONST_VV_BOT_RANK_MINION                                 10123
#define CONST_TgDevice_Monkey_FuriousMonkey_TGDEVICE_MONKEY_FURIOUSMONKEY_TARGET_FX_ID 6186
#define CONST_ITEM_QUALITY_COMMON                                1165
#define CONST_TGPID_MISSING_MANA                                 1590
#define CONST_TGPID_LOKI_STIM_SUB_ID                             8465
#define CONST_TGPAWN_HACHIMAN_OFFHAND4_SHOOTER_ID                15003
#define CONST_TGPID_EFFECT_POTENCY_MODIFIER                      376
#define CONST_TGPAWN_RATATOSKR_YELLOW_SITUATIONAL                11139
#define CONST_TGPID_MINI_MAP_MIN_Y                               403
#define CONST_ITEM_QUALITY_UNCOMMON                              1164
#define CONST_ITEM_QUALITY_RARE                                  1163
#define CONST_TGEGC_NIKE_PASSIVE                                 15269
#define CONST_TGPID_DECREASE_RATE                                192
#define CONST_ITEM_QUALITY_EPIC                                  1162
#define CONST_TGEGC_YEMOJA_A03_LOCKOUT                           17760
#define CONST_TGPID_TGPAWN_NEZHA_SASH_AOE_BLAST_SUB_ID           8806
#define CONST_CONTEXT_NOTIFY_WARD_HERE                           122294
#define CONST_PROJECTILE_LINE_TRACE_DISTANCE                     32
#define CONST_TGPID_AMMO_CLIP_RELOAD_TIME                        425
#define CONST_TGPAWN_BARONSAMEDI_A04_CHARGE_ID                   16007
#define CONST_TGPAWN_BACCHUS_SMASHED_FX_ID                       2318
#define CONST_CONTEXT_NOTIFY_SELF_RETURNED                       118527
#define CONST_TGPID_ABSORB_BASIC_ATTACK                          1550
#define CONST_TGPAWN_G86_EGST_SEASONAL_SPRING                    15386
#define CONST_CONTEXT_NOTIFY_SELF_GANK                           118526
#define CONST_CONTEXT_NOTIFY_SELF_DEFEND                         118525
#define CONST_BNT_CONDITION_COMBAT_IS_TARGETING_FRIEND           340
#define CONST_TG_PAWN_CHRONOS_HIT_SITUATIONAL_QUAD_3             10663
#define CONST_TGPID_DAMAGE_TAKEN_FLAT_CRIT                       1848
#define CONST_BNT_CONDITION_TARGET_IS_IN_DISTANCE_OF_JUNGLE_CAMP 343
#define CONST_CONTEXT_NOTIFY_SELF_ATTACK                         118524
#define CONST_BNT_CONDITION_TARGET_IS_IN_DISTANCE                341
#define CONST_TGEGT_REFRESH                                      10257
#define CONST_TGPAWN_ARTIO_BEAR_DEV1_ID                          14682
#define CONST_CONTEXT_NOTIFY_RETURNED                            117675
#define CONST_TGEGT_FIRED_PER_SHOT                               10030
#define CONST_TGPID_MANA_MAX                                     1001
#define CONST_CONTEXT_NOTIFY_RETREAT                             117674
#define CONST_TGPAWN_NIKE_Psv_ID                                 13656
#define CONST_TGPID_PLAYER_RELEASE                               116
#define CONST_TGFXMAT_HAIR                                       616
#define CONST_TGPID_MANA_COST_MODIFIER                           1804
#define CONST_CONTEXT_NOTIFY_INCOMING                            117673
#define CONST_TGPID_POWER_UTILITY_BOT                            1484
#define CONST_CONTEXT_NOTIFY_HELP                                117672
#define CONST_TG_GROUND_PORTAL_TELEPORT_DIST_RATIO               0.3333f
#define CONST_CONTEXT_NOTIFY_GANK                                117671
#define CONST_TGPAWN_ERLANGSHEN_A02_ID                           13030
#define CONST_TGPAWN_HERA_ARGUS_MESH_ID                          10689
#define CONST_CONTEXT_NOTIFY_MIA                                 117676
#define CONST_TGPID_ACCURACY_LOSS_MAX                            253
#define CONST_TGEGC_GOD95_A04_REVEAL                             16998
#define CONST_TGPID_MORALE_POINTS_MODIFIER                       357
#define CONST_TGEGC_FAILNOT_SELF_BUFF                            17710
#define CONST_TGPID_BASIC_ATTACK_GROUNDSPEED_RANGED_PERC         1912
#define CONST_CONTEXT_NOTIFY_ENEMY                               117670
#define CONST_CONTEXT_NOTIFY_PING                                117584
#define CONST_TGPID_TICK_TIME                                    89
#define CONST_TGPID_ACCURACY_LOSS_ON_SHOOT                       252
#define CONST_CONTEXT_NOTIFY_BE_CAREFUL                          116961
#define CONST_CONTEXT_NOTIFY_DEFEND                              116960
#define CONST_BNT_ACTION_SELECT_COMBAT_THREAT                    1048594
#define CONST_TGEGC_JING_WEI_BANISH_ENEMY                        11410
#define CONST_CONTEXT_NOTIFY_ATTACK                              116959
#define CONST_TGPID_HIT_TIME                                     310
#define CONST_TgObject_TG_EQP_POINT_MAX                          31
#define CONST_BNT_SENSOR_GODS                                    8
#define CONST_BNT_ACTION_SELECT_COMBAT_JUNGLE                    1048614
#define CONST_EQ_MAX_LOAD_DEVICE                                 15
#define CONST_BNT_COMPOSITE_GATED                                4
#define CONST_TGEGC_KUMBHAKARNA_GROGGY                           10788
#define CONST_COOLDOWN_SERVER_GRACE                              0.5f
#define CONST_TGPID_SPAWN_DELAY                                  174
#define CONST_FADE_TIME                                          1.0f
#define CONST_TGPID_DISARM                                       303
#define CONST_TGTT_ATTACK_NON_ANCHORED_DEPLOYABLE                17072
#define CONST_TGPID_MINI_MAP_MIN_X                               402
#define CONST_MAX_HEARING_DISTANCE                               1300
#define CONST_BNT_CONDITION_IS_IN_MINOTAUR_RADIUS                271
#define CONST_BNT_ACTION_JUMP                                    1048625
#define CONST_TGPAWN_MERCURY_SONICBOOM_FX                        3226
#define CONST_TGPAWN_THOTH_BASIC_ATTACK_DEVICE_ID                13558
#define CONST_TGPAWN_SUSANO_DEV4_TRAVEL_TIME                     4
#define CONST_OVERLAY_IMMUNE_TARGET                              0x00000004
#define CONST_TGPID_REVEAL                                       1053
#define CONST_TGDT_PLAYER_SENSOR                                 393
#define CONST_OVERLAY_IMMUNE_DAMAGE                              0x00000002
#define CONST_TGPAWN_NIKE_PASSIVE_THREE_GOALS_SITUATIONAL_TYPE   15244
#define CONST_TGPAWN_DOM_CYCLOPS_ATTACK_TEAM_BUFF_ID             13025
#define CONST_TGPID_SWEEP_RANGE                                  145
#define CONST_OVERLAY_IMMUNE_CC                                  0x00000001
#define CONST_BNT_CONDITION_NEARBY_TARGET_COUNT                  336
#define CONST_TG_SHOP_VENDOR_VOICE_PACK                          508
#define CONST_BNT_CONDITION_HAS_CONSUMABLE                       313
#define CONST_TGPID_CAPTURE_TIME                                 87
#define CONST_TgObject_BASE_RELIC_ITEMID                         12333
#define CONST_DEGREE_TO_UNREAL_ROTATION                          182.0444
#define CONST_TGPID_PLAYER_RELEASE_LENGTH                        119
#define CONST_TGPID_REMOVE_EFFECT                                140
#define CONST_COOLDOWN_DEPLOY_ID                                 466
#define CONST_TGPID_GP_COOLDOWN_MAX                              1681
#define CONST_BNT_CONDITION_IS_LAST_ATTACKER_OF_TYPE             292
#define CONST_TGPAWN_BARONSAMEDI_PSV_ID                          16084
#define CONST_FEET_TO_UNREAL_UNITS                               16
#define CONST_BNT_NONE                                           0
#define CONST_TGPAWN_RATATOSKR_EMERALD_SITUATIONAL               11183
#define CONST_TGPAWN_JORM_DEV3_DEPLOY_MAX_COUNT                  4
#define CONST_BNT_COMPOSITE_SEQUENCE                             1
#define CONST_BNT_COMPOSITE_SEQUENCE_SCRIPTED                    2
#define CONST_AIBOARD_SQUAD                                      0x08
#define CONST_TGPAWN_KUZENBO_WATER_BOWL_PROTECTIONS              48267
#define CONST_BNT_COMPOSITE_RANDOM                               3
#define CONST_BNT_SENSOR_SIGHT_RADIUS                            9
#define CONST_BNT_SENSOR_TOWERS                                  10
#define CONST_BNT_SENSOR_IN_HOSTILE_ABILITY                      11
#define CONST_TGPAWN_JORM_DEV3_REVEAL_MAX_COUNT                  32
#define CONST_INDEX_SEE_MAKING_NOISE_ENEMY                       2
#define CONST_BNT_SENSOR_PURCHASE_SKILLS                         12
#define CONST_TGPID_MINI_MAP_MAX_X                               404
#define CONST_TGPID_XP_BONUS_TEAM                                1842
#define CONST_BNT_SENSOR_SAFE_TO_RECALL                          13
#define CONST_TG_SURRENDER_VOTE_YES                              0x01
#define CONST_TGDEPLOYABLE_WARD_ODYSSEY_2017_SKIN_LEVELS         4
#define CONST_BNT_SENSOR_LEASH                                   14
#define CONST_TGPAWN_WIZARD_TELEPORT_MOVEMENT_MODE_ID            16115
#define CONST_TGPAWN_CHIRON_SPREADSHOT_ID                        11959
#define CONST_BNT_SENSOR_LANE                                    15
#define CONST_TGEGC_ERLANG_SHEN_NINE_TURNS_BLESSING_WARN         15116
#define CONST_TGPAWN_RATATOSKR_OPAL_SITUATIONAL                  11189
#define CONST_TGPAWN_RATATOSKR_ULT_SELF_SITUATIONAL              11157
#define CONST_TGPID_PUSHBACK                                     295
#define CONST_BNT_CONDITION_COMBAT_IS_IN_LEASH                   297
#define CONST_BNT_SENSOR_RALLY_POINTS                            18
#define CONST_TGD_MESH_TYPE_FIRSTPERSON                          1593
#define CONST_BNT_SENSOR_TOWERS_ONLY_AVOIDANCE                   19
#define CONST_TGPID_EFFECT_LIFETIME_MODIFIER                     208
#define CONST_GTT_HUD_POPUP                                      10742
#define CONST_TGTT_TARGET_NOT_SELF                               10587
#define CONST_TGPAWN_DAJI_TELEPORT_MOVEMENT_MODE_ID              14167
#define CONST_TGEGC_KUZENBO_SHELL_SPIKES                         15356
#define CONST_TGPID_TGPAWN_CHRONOS_REWIND_FX_ID                  2819
#define CONST_TGPID_EFFECT_HEAL_MODIFIER_SELF                    210
#define CONST_TGPID_DAMAGE_REFLECT                               335
#define CONST_TGPID_ACCURACY_AIM_MODE_BONUS                      250
#define CONST_TGPAWN_BACCHUS_BELCH_CONE_FX_ID                    2312
#define CONST_BNT_SENSOR_JUNGLE_CAMP                             20
#define CONST_TGPID_ACCURACY_CORRECTION_RATE_CROUCH              248
#define CONST_TGPID_TIDI                                         1856
#define CONST_BNT_CONDITION_IS_AT_SPAWN                          256
#define CONST_DAMAGE_CAP_HEALTH_START_PERC                       90
#define CONST_BNT_ACTION_SELECT_LANE_JUNGLE                      1048588
#define CONST_TGPID_PROTECTION_STUN                              163
#define CONST_BNT_CONDITION_COMBAT_IS_STEALTHED                  289
#define CONST_GROUND_TRACE_DISTANCE                              100.f
#define CONST_BNT_CONDITION_IS_SAFE_TO_RECALL                    257
#define CONST_TGC_KILL_STREAK_MAX_TIME                           15
#define CONST_BNT_CONDITION_IS_IN_HOSTILE_ABILITY                258
#define CONST_TGEGC_TSUKUYOMI_INHAND_SHINGETSU_BUFF              17892
#define CONST_TGPID_KNOCKBACK                                    60
#define CONST_BNT_CONDITION_CAN_PURCHASE_ITEMS                   259
#define CONST_BNT_CONDITION_IS_ACTIVE_READY                      316
#define CONST_TGAC_RUBY                                          14623
#define CONST_TGPID_HEALTH_OWNER_PERC                            1570
#define CONST_BNT_CONDITION_NEAREST_TOWER_HEALTH_PCT             295
#define CONST_TGPAWN_ARTIO_DRUID_DEV1_SUB_ID                     14777
#define CONST_TGEGC_SUNWUKONG_STEALTH                            10698
#define CONST_TGPID_PENETRATION_PHYSICAL                         1027
#define CONST_BNT_CONDITION_CAN_PURCHASE_SKILLS                  260
#define CONST_TGPAWN_WIZARD_BInHand_ID                           16583
#define CONST_TGDEVICE_SCYLLA_NUM3_TARGETABLE_FX_ID              0
#define CONST_BNT_CONDITION_COMBAT_DAMAGEABLE                    261
#define CONST_BNT_CONDITION_DISTANCE_FROM_SPAWN                  282
#define CONST_TGPID_PLAYER_HEALTH_AUTO_RELEASE                   117
#define CONST_BNT_ACTION_SELECT_LANE_MINOTAUR                    1048589
#define CONST_TGEGC_BASTET_BLEED                                 10074
#define CONST_TGST_PER_LEVEL                                     11389
#define CONST_TGPAWN_KNIGHT_DEVICEB_A01_ID                       16596
#define CONST_TGPAWN_PELE_A02_OUTER_CATEGORY_CODE                17254
#define CONST_TGPID_MANA_MAX_PERCENT                             1858
#define CONST_TGPID_DivineLightDetonationDeviceID                7692
#define CONST_TGPID_DEPLOYABLE_SELECTION_LIST                    185
#define CONST_BNT_CONDITION_COMBAT_DAMAGEABLE_DEVICE             262
#define CONST_TGPAWN_BARONSAMEDI_DEV3_SNAKE_COOLDOWN_CATEGORY_CODE 17158
#define CONST_TgDevice_AgniRainFire_RainFireMaximumAmmunitionCount 3
#define CONST_BNT_CONDITION_COMBAT_HEALTH_PERCENT                263
#define CONST_BNT_CONDITION_CURRENT_LEVEL                        264
#define CONST_BNT_CONDITION_DEVICE_READY                         265
#define CONST_BNT_ACTION_RUN_TO_SPAWN                            1048578
#define CONST_TGPID_CC_IMMUNITY                                  1417
#define CONST_TGPAWN_CAMAZOTZ_A04_IDa                            13509
#define CONST_BNT_CONDITION_COMBAT_HAS_TARGET                    266
#define CONST_TGPAWN_ZEUS_DETONATE_SUB_FX_ID                     8637
#define CONST_TGPID_XP_PER_6                                     1919
#define CONST_PRE_GUARDIAN_PHASE_START                           7110.0f
#define CONST_LoveStruckCounterMax                               8
#define CONST_TGPAWN_GOD94_INHAND_ID                             15718
#define CONST_TGPID_REVEAL_GLOBAL                                1743
#define CONST_BNT_CONDITION_LANE_HAS_TARGET                      267
#define CONST_BNT_CONDITION_HEALTH_PERCENT                       268
#define CONST_BNT_CONDITION_DIFFICULTY_LEVEL                     311
#define CONST_TGPID_PROTECTION_ATTACK_SLOW                       1670
#define CONST_TGPAWN_HOUYI_T5_PET_ANIM_MAX                       8
#define CONST_BNT_CONDITION_COMBAT_IS_HOSTILE                    269
#define CONST_TGPAWN_SUNWUKONG_ULT_BUILDUP_FX_ID_4               3362
#define CONST_TGPAWN_CERBERUS_AUTO_ATTACK_SITUATIONAL_TYPE       16746
#define CONST_BNT_CONDITION_COMBAT_IS_OF_TYPE                    270
#define CONST_BNT_CONDITION_IS_IN_TOWER_RADIUS                   272
#define CONST_BNT_CONDITION_IS_TARGET_OF_TWR_OR_MTR              273
#define CONST_BNT_CONDITION_NEARBY_GOD_DELTA                     276
#define CONST_TGEGC_ZEUS_AEGIS_SHIELD                            10268
#define CONST_TGPAWN_GOD95_Psv_ID                                15869
#define CONST_TGPAWN_RACER_EGST_WALL_SLOW                        15444
#define CONST_BNT_CONDITION_NEARBY_MINION_COUNT                  277
#define CONST_TGPID_IMPULSE                                      1854
#define CONST_TGTT_ATTACK_PLACE_DEPLOYABLE                       209
#define CONST_BNT_CONDITION_NEARBY_MINION_DELTA                  278
#define CONST_TGEGC_KUZENBO_WATER_BOWL_PROTECTION                15410
#define CONST_TGPID_KNOCKSTRAIGHTUP                              1435
#define CONST_BNT_CONDITION_COMBAT_IS_TARGETING_TYPE             279
#define CONST_TGPID_KNOCKBACK_MINION                             1510
#define CONST_BNT_CONDITION_MANA_PERCENT                         280
#define CONST_TGPORTALFALL_SITUATIONAL_TYPE                      0
#define CONST_BNT_CONDITION_MINIONS_IN_TOWER_RADIUS              281
#define CONST_BNT_CONDITION_COMBAT_IS_VISIBLE                    283
#define CONST_INDEX_SEE_FLYING_ENEMY                             3
#define CONST_BNT_CONDITION_TIME_SINCE_TOOK_DAMAGE               284
#define CONST_BNT_CONDITION_COMBAT_IS_IN_MINOTAUR_RADIUS         285
#define CONST_TGPID_PET_DAMAGE_RADIUS_MODIFIER                   382
#define CONST_BNT_ACTION_RUN_TO_SPREAD_LOCATION                  1048597
#define CONST_BNT_CONDITION_DISTANCE_FROM_NEAREST_GOD            288
#define CONST_TGEGC_HERA_POLYMORPH                               17247
#define CONST_BNT_CONDITION_COMBAT_IS_LOOKING_AT                 290
#define CONST_TGRF_RESTRICT_SPECIALITY                           8
#define CONST_BNT_CONDITION_DISTANCE_FROM_COMBAT_TARGET          291
#define CONST_BNT_CONDITION_NEAREST_GOD_HEALTH_PCT               293
#define CONST_TGPROJ_NEITH_WORLDWEAVER_TARGET_FX_ID              2546
#define CONST_AI_TEAM_PASSTHRU_DISTANCE                          100000
#define CONST_TGEGC_KUZENBO_WATERY_GRAVE_HIT_RECENTLY            15436
#define CONST_TGPAWN_RAIJIN_V2_INHAND_ID                         12349
#define CONST_TGTT_ATTACK_MAP_TARGET_TELEPORT                    10658
#define CONST_BNT_CONDITION_GODS_IN_TOWER_RADIUS                 294
#define CONST_TGPID_DAMAGE_TAKEN_PERC_MAG                        1631
#define CONST_BNT_CONDITION_COMBAT_IS_IN_FOUNTAIN                296
#define CONST_BNT_CONDITION_COMBAT_IS_IN_SIGHT_RADIUS            298
#define CONST_BNT_CONDITION_IS_OUTSIDE_LEASH                     299
#define CONST_TGCM_ADD                                           67
#define CONST_BNT_CONDITION_IS_ROLE_TYPE                         344
#define CONST_TGEGT_EQUIP_MODE                                   283
#define CONST_TGPID_KNOCKBACK_PLUS_GRAVITY                       1507
#define CONST_TGPID_HP5_PERCENT                                  1565
#define CONST_TGPAWN_TERRA_WARDSTONE_MESH_ID                     6897
#define CONST_BNT_CONDITION_TIMER                                300
#define CONST_REFRESH_REUSE                                      1
#define CONST_TGPAWN_APHRODITE_KISS_SUB_ID                       8791
#define CONST_TGPID_PROTECTION_TIDI                              1861
#define CONST_TGPID_TGPAWN_APOLLO_PASSIVE_FX_WRIST_ID            2630
#define CONST_BNT_CONDITION_HAS_SPREAD_LOCATION                  301
#define CONST_TGPID_HEALING_DEALT_PERC                           1862
#define CONST_TGPID_GP_ENABLE_NEW_FOW                            1568
#define CONST_TGPID_MAP_PLAYER_KILL_VALUE                        95
#define CONST_TGEGC_SIEGE_TELEPORT_COOLDOWN                      10794
#define CONST_LANE_PUSHER_BOT_ID                                 2004
#define CONST_TGEGC_NUWA_FIRESHARDS_REVEAL                       10871
#define CONST_TGTT_ATTACK_GROUND_TARGET_PROJECTILE               10251
#define CONST_BNT_CONDITION_TARGET_TYPE_IS_IN_LEASH              302
#define CONST_TGPID_HEALTH_MAX_DEPLOYABLES                       339
#define CONST_BNT_CONDITION_ENERGY                               303
#define CONST_TGEGC_OLORUN_DEV_2_STIM                            17668
#define CONST_BNT_ACTION_CLEAR_LOOK_AT                           1048592
#define CONST_INDEX_DISPLAY_TARGET_MINIMAP                       0
#define CONST_BNT_CONDITION_IS_TOO_FAR_FROM_LANE                 305
#define CONST_TGPAWN_GANESHA_A02_POSE_CATEGORY_CODE              15493
#define CONST_IgnoreBlockingMinionFriendly                       0x04
#define CONST_TGPID_SLOW_TO_HALT                                 1558
#define CONST_TGD_ANIMSET_DEST_PAWN                              859
#define CONST_INDEX_SEE_DEPLOYABLES                              5
#define CONST_BNT_CONDITION_COMBAT_HAS_EFFECT_CATEGORY           306
#define CONST_BNT_CONDITION_HAS_EFFECT_CATEGORY                  307
#define CONST_AIE_STUN                                           5
#define CONST_TGPAWN_HACHIMAN_INHAND_ID                          14788
#define CONST_TGEGC_DISCORDIA_GOLDEN_APPLE                       16717
#define CONST_TGPAWN_MERCURY_ULT_DEPLOYABLE_ID_6                 498
#define CONST_BNT_CONDITION_TARGETS_DAMAGEABLE_BY_DEVICE         308
#define CONST_BNT_CONDITION_GAMETYPE                             309
#define CONST_BNT_CONDITION_INCOMING_DAMAGE                      312
#define CONST_BNT_CONDITION_HAS_ACTIVE                           314
#define CONST_TGPROJ_HERCULES_BOULDER_GROUNDHIT_FX_ID            2363
#define CONST_TGEGC_STEALTH                                      -100
#define CONST_TGPT_FLOAT                                         137
#define CONST_TGPID_PVE_EXPERT_FLAG                              378
#define CONST_TGPAWN_ERLANGSHEN_TURTLE_MESH_ID                   6669
#define CONST_AIE_ENERGY                                         8
#define CONST_BNT_CONDITION_DISTANCE_FROM_LANE_TARGET            315
#define CONST_TGPID_TREMBLE                                      1656
#define CONST_IDLE_STATE_OFF                                     0
#define CONST_BNT_CONDITION_TASKFORCE                            317
#define CONST_TGPAWN_SET_WING_MESH_ID                            11468
#define CONST_TGPAWN_WIZARD_B02_ID                               16580
#define CONST_TG_DEVICEFORM_RANGED                               1
#define CONST_BNT_CONDITION_COMBAT_HEALTH_AFTER_ATTACK           318
#define CONST_TG_PAWN_CHANGE_RABBIT_TELEPORT_FX                  2900
#define CONST_TGPAWN_ZHONGKUI_SCROLL_MESH_ID                     3720
#define CONST_TGPDD_ANIM                                         2
#define CONST_BNT_CONDITION_RETURN_ALWAYS                        319
#define CONST_AUTO_FORFEIT_TIME_SEC                              120.0f
#define CONST_MAX_NUM_DEPLOYED_BOTS                              3
#define CONST_PROTECTION_DEPLOY_ID                               467
#define CONST_BNT_CONDITION_LAST_ATTACKER_IS_TARGET_TYPE         320
#define CONST_TGTT_TARGET_FRIEND_ONLY                            884
#define CONST_TGEGC_AHPUCH_PASSIVE_HEAL                          11142
#define CONST_TGPID_CUSTOM_VALUE_3                               1050
#define CONST_BNT_CONDITION_DEVICE_IS_FIRING                     321
#define CONST_BNT_ACTION_FOLLOW_LANE                             1048602
#define CONST_TGPID_TUTORIAL_MAP                                 368
#define CONST_BNT_CONDITION_COMBAT_DROPPED                       322
#define CONST_TGPID_MINIMAP_DETECTOR                             1033
#define CONST_TGTT_TARGET_ENEMY_AND_SELF                         10805
#define CONST_TGPAWN_GANESHA_A04_ID                              14350
#define CONST_BNT_CONDITION_IS_AT_RALLY_POINT                    323
#define CONST_TGPID_TGPAWN_FENRIR_BITE_FX_ID                     2725
#define CONST_BNT_CONDITION_MINIONS_IN_MINOTAUR_RADIUS           324
#define CONST_TGPID_RACER_ICEWALLHUDFX                           1822
#define CONST_BNT_CONDITION_GODS_IN_MINOTAUR_RADIUS              325
#define CONST_TGPID_GP_ARENA_PORTAL_POINTS                       1774
#define CONST_BNT_CONDITION_MINOTAUR_HEALTH_PCT                  326
#define CONST_BNT_CONDITION_NEAREST_PAWN_TOWER_RADIUS            327
#define CONST_TGPAWN_WIZARD_TELEPORT_PROJ_ID                     1761
#define CONST_TGEGC_HACHIMAN_A04_SHOOTER_TARGET                  16674
#define CONST_TGDEVICEFIRE_MOB_MINIONSPAWN_MAX_DELAY             0.07f
#define CONST_BNT_CONDITION_NEAREST_PAWN_MINOTAUR_RADIUS         328
#define CONST_BNT_CONDITION_PET_PHASE                            329
#define CONST_BATTLE_ROUND_MAX_RANKS                             10
#define CONST_BNT_CONDITION_PHYSICS_STATE                        330
#define CONST_BNT_CONDITION_COMBAT_PHYSICS_STATE                 331
#define CONST_BNT_CONDITION_AIM_TOWER_RADIUS                     332
#define CONST_ATTACKSPD_DEPLOY_ID                                727
#define CONST_BNT_CONDITION_IS_NON_COMBAT                        333
#define CONST_TG_SHAMAN_RING_EG_CAT_CODE                         16631
#define CONST_YEMOJA_INNER_RADIUS                                1.0f
#define CONST_BNT_CONDITION_IS_IN_JUNGLE                         334
#define CONST_TGPID_DISABLE_CC_IMMUNITY_GLOW                     1679
#define CONST_BNT_CONDITION_COMBAT_IS_HITTABLE                   335
#define CONST_BNT_CONDITION_NEARBY_TARGET_DELTA                  337
#define CONST_TGPID_REMOVE_PROTECTION_CC                         1560
#define CONST_TGEGC_ARACHNE_WRAP                                 10901
#define CONST_TGPID_DAMAGE_TAKEN_PERC_INHAND                     1665
#define CONST_BNT_CONDITION_NEAREST_TARGET_HEALTH_PCT            338
#define CONST_TGTT_ATTACK_GROUND_TARGET                          10032
#define CONST_BNT_CONDITION_IS_FACTORY_AGGRO                     339
#define CONST_BNT_CONDITION_TARGET_IS_IN_DISTANCE_OF_OWNER       342
#define CONST_TGPID_ARC_RANGE                                    1057
#define CONST_TGPID_MIN_RANGE                                    48
#define CONST_TGPID_ENERGY_PERCENT                               1666
#define CONST_BNT_CONDITION_TARGET_IS_IN_DISTANCE_OF_JUNGLE_BUFF 345
#define CONST_BNT_CONDITION_DISTANCE_FROM_OWNER                  346
#define CONST_GT_USE_SKILLPOINT                                  104
#define CONST_BNT_CONDITION_OWNER_HEALTH_PERCENT                 347
#define CONST_TGEGC_AWILIX_MOONLIGHT_BUFF                        10957
#define CONST_BNT_CONDITION_OWNER_PAWN_STATE                     349
#define CONST_TGPID_REPAIR                                       260
#define CONST_TGEGC_BASTET_PASSIVE                               10699
#define CONST_TGFXT_DPG_MIDDLEGROUND                             10834
#define CONST_BNT_CONDITION_OWNER_VISIBLE_TO_AI                  350
#define CONST_TGPAWN_ZHONGKUI_FIERCEGLARE_POOF_FX_ID             3029
#define CONST_TGPAWN_WIZARD_AInHand_ID                           16573
#define CONST_BNT_ACTION_PLAY_VGS                                1048612
#define CONST_TGPID_EFFICIENCY_HEALTH_MODIFIER                   390
#define CONST_TGPID_REDUCE_ACTIVE_COOLDOWN_OH3                   1834
#define CONST_BNT_CONDITION_OWNER_IN_LINE_OF_SIGHT               351
#define CONST_TG_NAV_ROUTE_INDICATOR_SPINDOWN_FX_ID              0
#define CONST_TGPAWN_RAIJIN_V2_OFFHAND4_BEAT2_ID                 12638
#define CONST_TGPID_BASIC_ATTACK_DAMAGE                          1592
#define CONST_TGPID_GP_RACER_DRIFT_SPEED                         1816
#define CONST_TGEGC_CHRONOS_PHASE_SHIFT_BUFF                     10653
#define CONST_BNT_ACTION_CLEAR_COMBAT_TARGET                     1048591
#define CONST_TGPID_TGPAWN_FENRIR_HOWL_MESH_ID                   3582
#define CONST_TGPID_OBJECTIVE_ID                                 347
#define CONST_BNT_ACTION_CLEAR_NAVIGATION_QUEUE                  1048576
#define CONST_TGPAWN_RAIJIN_OFFHAND3_WARNING_DEPLOYABLE          835
#define CONST_BNT_ACTION_USE_DEVICE                              1048577
#define CONST_TGEGT_STACKING                                     155
#define CONST_TGPID_RACER_CURSEHUDFX                             1823
#define CONST_TGEGC_CHRONOS_PASSIVE_BUFF_MANA_REFUND             10668
#define CONST_TGEGC_SOL_TRAILING                                 11287
#define CONST_BNT_ACTION_FOLLOW_COMBAT_TARGET                    1048579
#define CONST_TGPID_DEVICE_MODE_EQUIP_TIME                       146
#define CONST_REFRESH_NONE                                       0
#define CONST_BNT_ACTION_LOOK_AT_COMBAT_TARGET                   1048580
#define CONST_TGEGC_JORMUNGANDR_ERUPT_FX                         17438
#define CONST_IgnoreBlockingWallFriendly                         0x40
#define CONST_BNT_ACTION_PURCHASE_ITEMS                          1048583
#define CONST_TGEGC_SOL_HEAT                                     11308
#define CONST_BNT_ACTION_SET_PET_PHASE                           1048629
#define CONST_TGPAWN_FREYA_CLOAK_MARK_ID                         8373
#define CONST_BNT_ACTION_MOVE_TO_LANE_TARGET                     1048581
#define CONST_BNT_ACTION_PURCHASE_SKILLS                         1048584
#define CONST_TGDT_MELEE                                         389
#define CONST_TGPID_AI_DEVICE_RADIUS                             1487
#define CONST_TGPAWN_NUWA_MAX_CRYSTAL_EVENTS                     16
#define CONST_TGPID_XP_BONUS                                     1840
#define CONST_BNT_ACTION_SELECT_COMBAT_LASTATTACKER              1048586
#define CONST_BNT_ACTION_CLEAR_LANE_MOVE_TARGET                  1048590
#define CONST_TGPAWN_CHAAC_NUM1_PROJECTILE_EFFECTS_DEVICE_ID     9542
#define CONST_TG_MAX_PLAYER_CUSTOM_VALS                          8
#define CONST_TGPAWN_HEIMDALLR_ULTCAM_RESID                      56832
#define CONST_BNT_ACTION_LEASH_TO_SPAWN                          1048593
#define CONST_BNT_ACTION_SELECT_COMBAT_TARGETS_TARGET            1048618
#define CONST_TGPID_GP_FOUNTAIN_HEALING                          1776
#define CONST_TGPID_TGPAWN_APOLLO_AGENT_SKIN_ID                  10233
#define CONST_BNT_ACTION_LOOK_AT_SPAWN_ROTATION                  1048595
#define CONST_TGPID_DEVICE_MODE_COOLDOWN_TIME                    4
#define CONST_TGPAWN_G72_SITUATIONAL_D42                         11320
#define CONST_CH08_MAX_GOO_FLASH                                 20
#define CONST_TG_PAWN_CHANGE_BUNNY_DEATH_MESH_ID                 3708
#define CONST_TGEGT_OFF_COOLDOWN                                 10308
#define CONST_TGEGC_FREYA_NORTHERN_LIGHTS_STIM                   17234
#define CONST_BNT_ACTION_SELECT_COMBAT_LEASH                     1048596
#define CONST_TGEGC_BITING_STRIKE                                15147
#define CONST_SMITE_MIDPOINT_ROUTE_THRESHOLD                     160.0f
#define CONST_TGPID_LOOT_TABLE_ID                                332
#define CONST_TGPID_DEVICE_MODE_FIRE_TIME                        53
#define CONST_TGPID_ARC_MAX_RANGE                                1058
#define CONST_BNT_ACTION_SELECT_COMBAT_SQUAD                     1048598
#define CONST_TGEGC_INVENTORY_OBJ_BONUS_DAMAGE_AT_MAX            15350
#define CONST_TGPAWN_GANESHA_BARRIER_PASS_THROUGH_SITUATIONAL_TYPE 15466
#define CONST_BNT_ACTION_SUGGEST_COMBAT_SQUAD                    1048599
#define CONST_TG_MAX_BANNED_GODS                                 10
#define CONST_YMIR_OBSIDIANSHARD_SHARDS_ID                       3737
#define CONST_TGPAWN_RAIJIN_OFFHAND2_WARNING_DEPLOYABLE          856
#define CONST_TGPID_MAP_ID                                       193
#define CONST_BNT_ACTION_CLEAR_SPREAD_LOCATION                   1048600
#define CONST_AIE_UNSTOPPABLEKILL                                9
#define CONST_TGPID_ALLOW_AIBOT_INTERACTION                      290
#define CONST_BNT_ACTION_SELECT_COMBAT_SPECIAL                   1048623
#define CONST_BNT_ACTION_RUN_TO_OWNER                            1048601
#define CONST_TGIST_ACHIEVEMENT                                  16661
#define CONST_BNT_ACTION_SELECT_LANE_MOVE_AS_COMBAT_TARGET       1048604
#define CONST_BNT_ACTION_MOVE_TO_LANE_VOLUME                     1048605
#define CONST_TGG72_SITUATIONAL_A2_PER                           11351
#define CONST_TGEGC_AOKUANG_DELAYED_KNOCKUP_STUN_PROTECT         10948
#define CONST_BNT_ACTION_JUKE                                    1048606
#define CONST_TGPAWN_RATATOSKR_ULT_TARGET_XSEC_SITUATIONAL       11160
#define CONST_TGPID_PERSIST_TIME                                 150
#define CONST_TGPAWN_ULLR_MELEE_WEAPON_ID                        9789
#define CONST_BNT_ACTION_USE_CONSUMABLE                          1048607
#define CONST_INDEX_SEE_WALKING_ENEMY                            1
#define CONST_TGST_TOTAL_POWER                                   10553
#define CONST_TGFXT_AUDIENCE_TASKFORCE1                          10832
#define CONST_TGPID_SILENCE                                      1023
#define CONST_TGPAWN_JORM_TWEEN_RESID                            51263
#define CONST_TGPID_PLAYER_RELEASE_LENGTH_DEFENDERS              314
#define CONST_TGPID_PROJECTILE_SPEED                             46
#define CONST_BNT_ACTION_USE_ACTIVE                              1048608
#define CONST_TGPID_HOLD_TIME                                    88
#define CONST_TGFXT_NO_PRIORITY                                  0
#define CONST_BNT_ACTION_FOLLOW_PATROL                           1048609
#define CONST_BNT_ACTION_REGEN_HEALTH                            1048610
#define CONST_GLOBAL_OFFHAND_CLIENT_COOLDOWN                     0.3
#define CONST_TGPAWN_TGEGC_ROGUE_ADV_LOCK_CAT_CODE               15568
#define CONST_TGPID_HEALTH_MAX_PERCENT                           1620
#define CONST_TGPAWN_CU_CHULAINN_DEATH_ID                        9091
#define CONST_BNT_ACTION_PAUSE_AI                                1048611
#define CONST_TGEGC_RAM_INHAND_SLOW_IMMUNITY                     10817
#define CONST_TGPAWN_ATHENA_STRIKE_FX_SKN2                       3753
#define CONST_TGPID_HEALING_TAKEN_PERC                           1056
#define CONST_DOMINATION_ACTIVITY_ID                             1913
#define CONST_BNT_ACTION_ASSIGN_LANE                             1048613
#define CONST_BNT_ACTION_MOVE_TO_RALLY_POINT                     1048615
#define CONST_TGPAWN_SCYLLA_TENTACLE_MESH_ID                     4296
#define CONST_BNT_ACTION_CLEAR_RALLY_POINT                       1048616
#define CONST_BNT_ACTION_CANCEL_FIRING                           1048617
#define CONST_BNT_ACTION_FIRE_KISMET                             1048620
#define CONST_BNT_ACTION_STRAFE                                  1048621
#define CONST_TGPID_NAME_SELECTION_LIST                          292
#define CONST_BNT_ACTION_FOLLOW_LOOP                             1048622
#define CONST_IgnoreBlockingGodFriendly                          0x01
#define CONST_BNT_ACTION_SELECT_LANE_NEAREST_JUNGLE              1048624
#define CONST_TGPAWN_RATATOSKR_BLUE_SITUATIONAL                  11138
#define CONST_BNT_ACTION_MOVE_TO_NEAREST_JUNGLE_BUFF             1048626
#define CONST_TGFXMAT_HELMET                                     1010
#define CONST_BNT_ACTION_SELECT_OWNER_AS_TARGET                  1048627
#define CONST_BNT_ACTION_RUN_TO_OWNER_FAN_OUT                    1048628
#define CONST_TGPID_CRIPPLE                                      1523
#define CONST_BLOOM_EFFECT_GROUP_CATEGORY_CODE                   10905
#define CONST_BNT_ACTION_SET_OWNER_GROUND_SPEED_PERCENT          1048630
#define CONST_AI_DEFAULT_DISTANCE_OFFSET                         50
#define CONST_TGPID_OSIRIS_TETHER_DOT_EFFECT_GROUP_CATEGORY      10793
#define CONST_TGPID_BOOST_CHARGE_RATE                            337
#define CONST_TGPID_AUTO_SPAWN                                   170
#define CONST_AIBOARD_BEHAVIOR_GOD                               0x01
#define CONST_AIBOARD_BEHAVIOR_MAPNPC                            0x02
#define CONST_TGEGC_PERSEPHONE_A02c_MARK                         17726
#define CONST_AIBOARD_BEHAVIOR_PET                               0x04
#define CONST_AIBOARD_BEHAVIOR_LANENPC                           0x10
#define CONST_TGPID_INTERRUPT_CHANCE                             96
#define CONST_TIMER_INTERVAL                                     0
#define CONST_TGPID_SHIELD_MAX_TARGET_LEVEL_SCALE                1827
#define CONST_TGPID_THREAT                                       420
#define CONST_TGDEPLOY_WIZARD_A01_LINK_MAXIMUM_DISTANCE          1200.0f
#define CONST_AIBOARD_BEHAVIOR_GOD_LEASH_ONLY                    0x20
#define CONST_TGPID_SPAWN_TABLE_ID                               340
#define CONST_TGPAWN_BARONSAMEDI_PSV_MIN_HYSTERIA_SITUATIONAL_TYPE 17109
#define CONST_AIBOARD_BEHAVIOR_GOD_LEASHED                       0x21
#define CONST_TGPID_THREAT_MODIFIER                              421
#define CONST_TGPID_CRITICAL_STRIKE                              280
#define CONST_TGPAWN_GENERIC_RETURN_STROKE_FIREMODE_ID           8266
#define CONST_VISION_VOL_COUNT                                   10
#define CONST_TGPID_TGPAWN_NEZHA_ULT_POSTPROCESS_RES_ID          24081
#define CONST_TGPID_EFFECT_SHIELD_MODIFIER                       386
#define CONST_TGEGC_PERSEPHONE_A02c_DiminishingReturns           17730
#define CONST_TGPDD_CHARACTER                                    8
#define CONST_TGPID_PET_LIFESPAN_MODIFIER                        355
#define CONST_TGPAWN_PELE_PSV_CATEGORY_CODE                      17185
#define CONST_TGPID_DAMAGE_RADIUS                                6
#define CONST_TGPID_REMOTE_ACTIVATION_TIME                       7
#define CONST_TGPID_MANA_PERCENT                                 1045
#define CONST_TGPAWN_THOTH_DEATH_ID                              7210
#define CONST_TGPAWN_ADVENTURE_SEAWEED_DOOM_CATEGORY_CODE        16876
#define CONST_TGPID_PET_ACCURACY_MODIFIER                        383
#define CONST_TGPID_PET_RANGE_MODIFIER                           381
#define CONST_TGPID_PROXIMITY_DISTANCE                           8
#define CONST_TGPAWN_DISCORDIA_Psv_ID                            15050
#define CONST_TGFXMAT_INHAND                                     1192
#define CONST_TGPID_ACCURACY_CORRECTION_RATE                     247
#define CONST_HONEY_BEES_EFFECT_GROUP_CATEGORY_CODE              10721
#define CONST_PERSEPHONE_TETHER_MESH                             11802
#define CONST_TGPID_REMOTE_ACQUIRE_DISTANCE                      47
#define CONST_TGEGC_CAMAZOTZ_DEADLY_BITE_BUFF                    15179
#define CONST_TGPID_CONE_ATTACK_ANGLE                            64
#define CONST_TGPID_EFFECTIVE_RADIUS                             343
#define CONST_TG_LISTEN_EFFECT_AGAINSTBOTRANK_BOT_RANKS_MAX      13
#define CONST_TGPAWN_ARTIO_DRUID_DEV1_ID                         14681
#define CONST_TGPID_PERSIST_PULSE                                151
#define CONST_TGPID_FIRE_LOCK_TIME                               437
#define CONST_TGPID_GP_STARTING_LEVEL                            1427
#define CONST_TGDEVICE_OLORUN_A02_ALTERNATE_ICON                 7741
#define CONST_TGPID_ACCURACY                                     10
#define CONST_TGPID_ACCURACY_WALK                                245
#define CONST_TGEGC_ULLR_TRANSFORM                               10777
#define CONST_TGPID_ACCURACY_LOSS_ON_JUMP                        251
#define CONST_TGPAWN_DAJI_A04_IDc                                14638
#define CONST_TGPID_SCOPE_POWER                                  259
#define CONST_TGPID_CAPTURE_ACCEL_RATE_CAP                       298
#define CONST_TGPID_PROTECTION_MAGICAL_PERC                      1552
#define CONST_TGEGC_BITING_STRIKE_SELF                           15148
#define CONST_TGPAWN_HOUYI_PASSIVE_EFFECT_GROUP_ID               39294
#define CONST_TGPID_GROUND_SPEED                                 49
#define CONST_TGEGC_AHPUCH_DEV3_STUN                             11107
#define CONST_TGPAWN_NIKE_PASSIVE_TWO_GOALS_SITUATIONAL_TYPE     15243
#define CONST_TGPID_NO_BACKPEDAL_PENALTY                         1524
#define CONST_TGPROJ_DISCORDIA_APPLE_MESH_HEIGHT                 -20.0f
#define CONST_TGPID_ENAMORED                                     1514
#define CONST_TGPID_HEALTH_MAX_MODIFIER                          412
#define CONST_TGPID_POWER_HEALING_PERC_ITEM                      1750
#define CONST_TGPID_RANGE                                        5
#define CONST_TGPAWN_DAJI_A02_ID                                 14438
#define CONST_TGPID_FLIGHT_ACCELERATION                          59
#define CONST_TGEGT_AIM                                          266
#define CONST_TGPID_KNOCKDOWN                                    164
#define CONST_TGPID_EP5                                          1006
#define CONST_TGFXT_PRIORITY_STEALTH_DETECTION                   627
#define CONST_TGPID_KNOCKUP                                      1019
#define CONST_TGPID_KNOCKSTRAIGHTBACK                            1761
#define CONST_TGEGC_NUWA_CANNOT_STEALTH                          10717
#define CONST_TGPID_KNOCKSTRAIGHTUP_TIMED                        1767
#define CONST_INDEX_DISPLAY_TARGET_LOW_HEALTH                    6
#define CONST_TGEGC_CAMAZOTZ_VAMPIRE_BATS_VAMP                   15223
#define CONST_TGPID_KNOCKBACK_SPECIAL_DELIVERY                   1695
#define CONST_TGPID_PUSHBACK_MINION                              1512
#define CONST_TGEGC_WRATH_OF_THE_GODS                            11271
#define CONST_TGPID_IGNORE_NON_MEMBERS                           198
#define CONST_TGPID_IMPULSE_NO_MOMENTUM                          1855
#define CONST_COVER_DEFAULT_RANGE                                150
#define CONST_TGPAWN_BARONSAMEDI_DEV3_SNAKE_AOE_FX_SITUATIONAL_TYPE 17180
#define CONST_TGPID_LOCK_YAW_ROTATION                            323
#define CONST_TGPID_TYR_ABILITY_1_KNOCKUP                        1563
#define CONST_TGPAWN_GANESHA_A02_ID                              14388
#define CONST_TGPID_VISION_RANGE                                 152
#define CONST_TGPID_POWER_MAGICAL_BOT                            1083
#define CONST_TGPID_CANNOT_USE_AUTO_PORTAL                       1634
#define CONST_TGPID_DEVICE_MODE_BUILDUP_TIME                     2
#define CONST_TGPID_DEVICE_MODE_TIME_TO_HOLD_BLOCK               258
#define CONST_TGPID_TIME_TO_DEPLOY_SECS                          279
#define CONST_TGDRCB_CUSTOM                                      832
#define CONST_TGPID_PLAYER_HEALTH_MAN_RELEASE                    118
#define CONST_ARES_SHACKLE_MAXIMUM_DISTANCE                      65.0f
#define CONST_TGPID_SWEEP_TYPE                                   142
#define CONST_TGPID_DEVICE_SHOTS_PER_FIRE                        287
#define CONST_TGDT_Physical                                      113
#define CONST_TGPID_REMOTE_TIME_MODIFIER                         349
#define CONST_TGPID_MAX_CONTROL_RANGE                            283
#define CONST_TGPID_XDEPLOY_ABILITY                              225
#define CONST_ELEMENTAL_DEPLOY_ID                                836
#define CONST_TGPID_FULL_BODY_ANIM_TIME                          419
#define CONST_TGPID_FIRE_POST_HIT_DELAY                          1017
#define CONST_BAKASURA_MAXIMUM_MINION_AMMUNITION                 6
#define CONST_TGDEPLOY_USE_MAX_APPLYINTERVAL_GUARDTIME           -1.0f
#define CONST_TGPID_FIRE_CHAIN_SWING_TIME                        1562
#define CONST_TGEGC_FAFNIR_GRAB                                  15089
#define CONST_TGPID_PROTECTION_SLOW                              158
#define CONST_TGPAWN_ULLR_STANCE_COOLDOWN_TIME                   1.00f
#define CONST_GT_ABILITY_USE_TIME                                120
#define CONST_TGPID_CAPTURE_SCORE                                97
#define CONST_TGPID_GP_GOLD_FURY                                 1784
#define CONST_TGPID_GLOBAL_ALARM_NUMBER                          182
#define CONST_TGDEPLOY_RACER_PICKUP_MAX_PLAYERS                  8
#define CONST_TGPAWN_BARONSAMEDI_A01_HEAL_ID                     16222
#define CONST_TGPAWN_THOTH_DEV1_DEVICE_ID                        13561
#define CONST_TGPAWN_JING_WEI_BOW_MESH_ID                        6493
#define CONST_TGPID_TICK_SCORE                                   98
#define CONST_TGPID_TICKET_TICK_DELAY                            411
#define CONST_TGPID_GP_PAUSE_MODE                                1817
#define CONST_TGEGC_HACHIMAN_A04_SHOOTER_HIT                     16675
#define CONST_PERSEPHONE_TETHER_MAXIMUM_DISTANCE                 55.0f
#define CONST_TGPID_STUN                                         166
#define CONST_TG_MINIMUM_GROUNDSPEED                             150.0f
#define CONST_TGPID_RANGED_ATTACKRATE_MODIFIER                   232
#define CONST_TGPID_FEAR                                         1418
#define CONST_TGPANW_NIKE_A04_BASIC_SHIELD_SITUTAIONAL_TYPE      15298
#define CONST_TGPID_MAX_CONTROL_RANGE_MODIFIER                   284
#define CONST_TGPID_INTOXICATED                                  1433
#define CONST_TGPID_STASIS                                       1051
#define CONST_TGPID_REVEAL_INSTIGATOR_NO_PING                    1883
#define CONST_TGEGC_RAIJIN_RAIJU_ESCAPE_SLOW                     16664
#define CONST_TGPID_BLIND                                        1055
#define CONST_TGPID_SHIELD_MAX_INSTIGATOR_MAXHEALTH_SCALE        1791
#define CONST_TGPID_OBJECTIVE_BOT_ID                             301
#define CONST_DAMAGE_CAP_HEALTH_END_PERC                         10
#define CONST_TGPID_TAUNT_NOREDUCTION                            1917
#define CONST_TGEGC_JING_WEI_BANISH_SELF                         11409
#define CONST_AIE_MANA                                           2
#define CONST_TGPID_PROTECTION_PHYSICAL_PERC                     1551
#define CONST_TGEGC_VULCAN_OVERDRIVE_BUFF                        10570
#define CONST_TGEGT_PRE_HIT_DELAY                                10455
#define CONST_TGEGC_EFFECT_GROUP_TRIGGER                         17545
#define CONST_TGPID_STUN_NOPOSTURE                               1673
#define CONST_TGPAWN_RAM_ULT_MARK_MAX                            3
#define CONST_TGPID_REDIRECT_DAMAGE                              1557
#define CONST_TGEGC_DANZABUROU_A02_PULSE_STACK                   17951
#define CONST_PORTAL_REUSE_DELAY                                 2.0f
#define CONST_TGEGC_CUPID_HEARTBOMB                              11069
#define CONST_TGPID_REDIRECT_DAMAGE_CUSTOM                       1821
#define CONST_TGPID_DISORIENT                                    1583
#define CONST_TGPID_PLACEMENT_METHOD                             180
#define CONST_TG_PHYSICALITY_MINIONS                             10035
#define CONST_TG_BASE_PHYSICAL_POWER_SCALING                     100
#define CONST_TGPID_CHARACTER_VISION_RANGE                       152
#define CONST_TGDEVICE_SUBDEVICE_MAX                             8
#define CONST_TGPID_PORTAL_FALL                                  1632
#define CONST_TGPAWN_DAJI_Psv_ID                                 14420
#define CONST_TGPID_DAMAGE_REFLECT_UNMITIGATED                   1754
#define CONST_TGPID_STUN_NOREDUCTION                             1653
#define CONST_TGDRCB_NONE                                        829
#define CONST_TGPID_ATTACK_SLOW                                  1671
#define CONST_TGPAWN_HEL_SKIN_A01_SITUATIONAL_TYPE               17919
#define CONST_TGPID_SLIDE                                        1799
#define CONST_INDEX_DISPLAY_TARGET_TAGGED                        4
#define CONST_TGPAWN_SUSANO_OFFHAND1_COMBO_SIZE                  3
#define CONST_TGPID_CHARM                                        1432
#define CONST_TGPID_WHITEOUT                                     1810
#define CONST_TGPAWN_JINGWEI_PASSIVE_SUB_ID                      12769
#define CONST_TGDEPLOYABLE_ARTEMIS_TRAP_HIDDEN_FX_ID             8902
#define CONST_TGPAWN_JINGWEI_OFFHAND2_ID                         12767
#define CONST_TGDPT_DEFAULT                                      666
#define CONST_TGPID_ANYONE_CAN_CRIT                              1887
#define CONST_TG_VV_PACING_TYPE_HEALTH                           10692
#define CONST_TGPID_NUM_RESPAWNS                                 387
#define CONST_TGPID_TGPAWN_FENRIR_HOWL_FX_HAND_ID                2722
#define CONST_TGDPT_HEALTHCRATE                                  667
#define CONST_Situational_Type_Serqet_DeStealth                  10850
#define CONST_TGPID_PLAYER_RELEASE_LENGTH_ATTACKERS              313
#define CONST_TGPID_MISSION_TIME_SECS                            299
#define CONST_TGPID_GP_RACER_DRIFT_BOOST                         1815
#define CONST_TGPAWN_FREYA_RANGED_WEAPON_TIME                    6.0f
#define CONST_TGPID_ACCURACY_MODIFIER                            113
#define CONST_TGPAWN_ERLANGSHEN_A01_ID                           13026
#define CONST_TGGAME_BATTLE_PEP_MAX_PLAYERS_PER_TEAM             2
#define CONST_TGPID_MINI_MAP_MAX_Y                               405
#define CONST_TGPID_QUIET_END_MISSION                            342
#define CONST_TGPID_GROUNDSPEED_MODIFIER                         66
#define CONST_TG_MIN_AIM_TRACE_LENGTH                            160
#define CONST_TGPAWN_FREYA_DAMAGE_BUFF_TIME                      5.0f
#define CONST_TGPID_GAME_SPEED_MODIFIER                          122
#define CONST_TGPAWN_HACHIMAN_A02_ID                             15037
#define CONST_TGPID_SWEEP_RATE                                   144
#define CONST_TGEGC_KUMBHAKARNA_ULT                              10789
#define CONST_TGPID_TAG_ENEMY                                    161
#define CONST_TGEGC_KHEPRI_OFFHAND_2                             11236
#define CONST_TGPID_DEPLOYABLE_ARTILLERY_RADIUS                  397
#define CONST_TGPID_OS_SHIELD_HEALTH_TO_REMOVE_PK                431
#define CONST_TGPID_LOCAL_TIDI                                   1885
#define CONST_TGD_MESH_TYPE_ATTACHED                             856
#define CONST_TGPID_REWARD_XP                                    400
#define CONST_TGPID_CAPTURE_ACCEL_RATE                           297
#define CONST_TGPID_DEVICE_SELECTION_LIST                        282
#define CONST_TGPAWN_DISCORDIA_A03_ID                            15077
#define CONST_INDEX_DISPLAY_TARGET_INGAME                        1
#define CONST_TG_PHYSICALITY_HUMANOIDS                           860
#define CONST_TGPID_STEALTH_WITHFADING                           1597
#define CONST_INDEX_DISPLAY_SEND_AUDIO_WARNING                   5
#define CONST_INDEX_SEE_NON_MOVING_ENEMY                         0
#define CONST_INDEX_SEE_BEACONS                                  6
#define CONST_TGPAWN_RAIJIN_RAIJUU_BELLYBUTTON_FX_ID             8135
#define CONST_INDEX_SEE_BOTS_ONLY                                7
#define CONST_TGEGC_INVULNERABLE                                 -200
#define CONST_DISABLE_TIDI_OVERRIDE                              0.0f
#define CONST_TGPAWN_MERCURY_ULT_DEPLOYABLE_ID_2                 494
#define CONST_TGPID_OS_DISABLE_LATTICE_NETWORK                   433
#define CONST_TGPID_PROTECTION_PHYSICAL                          155
#define CONST_TGPID_DAMAGE_TAKEN_PERC                            316
#define CONST_TGPAWN_DAJI_A03_ID                                 14451
#define CONST_TGPID_PROTECTION_MAGICAL                           157
#define CONST_TGEGC_TERRA_MOTHER_EARTH_DEBUFF                    17063
#define CONST_TGSKELETALMESH_APOLLO_CHARIOT_SKIN_9_MESH_ID       12270
#define CONST_TGPID_DAMAGE_REDUCTION_FLAT                        1847
#define CONST_TGPID_THERE_CAN_BE_ONLY_ONE                        1513
#define CONST_ROTATION_QUARTER                                   0x04000
#define CONST_TGPAWN_ZHONGKUI_SCROLL_DEV_ID                      9151
#define CONST_TGEGC_DEPTHZY_PSV                                  17868
#define CONST_TGPID_DODGE_BASIC                                  1559
#define CONST_TGPID_PROTECTION_MESMERIZE                         168
#define CONST_TGEGC_SERQET_DEATHBANE                             10837
#define CONST_TGG72_SITUATIONAL_A3_PER                           11352
#define CONST_TGPID_PROTECTION_ROOT                              1020
#define CONST_TGDT_TOGGLE                                        1595
#define CONST_TGPID_PROTECTION_CRIPPLE                           1623
#define CONST_TGPID_PROTECTION_SILENCE                           1021
#define CONST_TGPID_PROTECTION_CC                                1591
#define CONST_TGPID_STEALTH_WARDVIS                              1809
#define CONST_TGPID_REDUCTION_PHYSICAL_PERC                      1036
#define CONST_TGPID_PROTECTION_VORTEX                            1801
#define CONST_TGPID_BASIC_ATTACK_SLOW_IMMUNITY                   1483
#define CONST_TGEGC_G84_D2                                       15283
#define CONST_TGPID_ALLOW_PET_DOMINATION                         236
#define CONST_TGPID_HEALING_MODIFIER                             330
#define CONST_TGPID_EFFECTIVE_RANGE_MODIFIER                     207
#define CONST_TGPID_TARGET_AUTOLOCK                              200
#define CONST_TGEGT_REACTIVE_SKILL                               1104
#define CONST_TGFXT_AUDIENCE_CUSTOM_FILTER_03                    15453
#define CONST_TGPAWN_HERCULES_BOULDER_CC_PROTECTION_ID           8616
#define CONST_TGPID_INSTANT_POWER                                201
#define CONST_TGPID_RECHARGE_TIME_MODIFIER                       203
#define CONST_TGPID_MISSING_HEALTH                               211
#define CONST_TGPID_CAPTURE_TIME_EXTENTION                       300
#define CONST_TGPID_SILENT_MOVEMENT                              224
#define CONST_TGDT_LOBBY_ACTIVE_ABILITY                          10039
#define CONST_TGPID_MELEE_ATTACKRATE_MODIFIER                    231
#define CONST_TGPAWN_SOBEK_PASSIVE_BLESSING_MAX_LIFE             4
#define CONST_TGPID_ACCURACY_CORR_RATE_MODIFIER                  256
#define CONST_TGEF_MICMASK_COUNT                                 4
#define CONST_TgDeploy_Kukulkan_Tornadoes_TORNADO_PROJ_FIREMODE_ID 5526
#define CONST_TGPID_CRIT_CHANCE_MODIFIER_PERC                    1662
#define CONST_TGPID_ARCING_JUMPS                                 309
#define CONST_TGPAWN_HERCULES_PUNCH_KNOCKBACK_BUFF_DIST          320.0f
#define CONST_TGPID_CONTAGIOUS_RADIUS                            312
#define CONST_TGPID_PET_DAMAGE_MODIFIER                          350
#define CONST_TGINVENTORY_INCREMENTALDAMAGE_TRACKINGMAX          16
#define CONST_TGPID_SPELL_SHIELD                                 1054
#define CONST_TGPID_AOE_RADIUS_MODIFIER                          352
#define CONST_TGPAWN_GOD94_PSV_B_CATEGORY_CODE                   16938
#define CONST_TGPID_PET_LIFESPAN                                 354
#define CONST_TGPID_PROJECTILE_SPEED_MODIFIER                    356
#define CONST_HONEY_EFFECT_GROUP_CATEGORY_CODE                   10712
#define CONST_TIDI_VOLUME_MAX                                    32
#define CONST_TGPID_EFFICIENCY_MODIFIER                          385
#define CONST_TGPAWN_HACHIMAN_A03_ID                             14800
#define CONST_TGPID_PET_RECHARGE_RATE_MODIFIER                   384
#define CONST_TGPID_MELEE_DAMAGE_MODIFIER                        212
#define CONST_PUSHER_PING_INTERVAL                               3.0f
#define CONST_TGPID_RANGED_DAMAGE_MODIFIER                       214
#define CONST_TGPAWN_G86_PASSIVE_DEVICE_ID                       14329
#define CONST_TGPID_AOE_DAMAGE_MODIFIER                          321
#define CONST_TGPID_BIOLOGICAL_DAMAGE_MODIFIER                   389
#define CONST_TGPID_LIFESTEAL_REDUCTION                          1782
#define CONST_TGPID_TGPAWN_APOLLO_CHARGE_SUB_ID                  8784
#define CONST_TGPID_MECHANICAL_DAMAGE_MODIFIER                   388
#define CONST_TGPID_BOT_COUNT                                    172
#define CONST_TGPID_RESPAWN_DELAY                                173
#define CONST_TGPAWN_ARTIO_LIFE_TAP_CAT_CODE                     16605
#define CONST_CONTEXT_NOTIFY_BE_CAREFUL_SPECIALFX                2930
#define CONST_TgPawn_Agni_RainFireMaximumAmmunitionCount         3
#define CONST_TGPID_TEAM_NUMBER                                  175
#define CONST_TGDEPLOY_YMIR_ICEWALL_THRESHOLD                    40.0f
#define CONST_TGEGC_WIZARD_PSV_BUFF                              17288
#define CONST_TGPAWN_ARTIO_DRUID_DEV2_ID                         14676
#define CONST_TGPID_TASK_FORCE_NUMBER                            176
#define CONST_TGEGC_CORRUPTED_BLUESTONE                          17982
#define CONST_TGPID_SELECTION_METHOD                             178
#define CONST_TGRF_RESTRICT_SENSOR                               16
#define CONST_TGPID_BOT_SELECTION_LIST                           179
#define CONST_TGPAWN_TYR_D_2_SUB_ID                              9029
#define CONST_TGPID_SHIELD                                       1598
#define CONST_TGEGC_PET_IMMUNITY                                 11373
#define CONST_TGPAWN_RACER_EGST_FINISH_LINE_EFFECTS              15445
#define CONST_TGPID_SPAWN_LOCATION_LIST                          183
#define CONST_TGPID_REDUCE_ACTIVE_COOLDOWN_OH4                   1835
#define CONST_TGEGC_PRIDWEN_SHIELD                               17713
#define CONST_TGPID_PATROL_LOCATION_LIST                         184
#define CONST_TGPID_DESTRUCTIBLE_SELECTION_LIST                  188
#define CONST_TGDT_SUB_COMPONENT                                 956
#define CONST_TGPID_INSTANCE_SELECTION_LIST                      229
#define CONST_TGPAWN_JINGWEI_SUPER_INHAND_ID                     12894
#define CONST_TGPID_BULK_SPAWN                                   230
#define CONST_TGPID_START_RATING                                 189
#define CONST_TGPAWN_MERCURY_NUM4_SUBDEVICE_ID                   9307
#define CONST_TGPAWN_NIKE_PASSIVE_ONE_GOAL_SITUATIONAL_TYPE      15242
#define CONST_TG_PHYSICALITY_SOUL                                16923
#define CONST_TGPID_AI_DEVICE_RANGE                              1486
#define CONST_TGPID_SPELL_VAMP                                   1026
#define CONST_TGPID_CURRENT_RATING                               190
#define CONST_TGPID_RESET_RATING                                 191
#define CONST_TG_VOLUME_STEALTH_FADE_TIME                        1.0f
#define CONST_TGPID_RETURN_MAP_TYPE                              325
#define CONST_TGPID_GP_FOUNTAIN_DAMAGE                           1772
#define CONST_TGPID_TGPAWN_CHRONOS_PHASESHIFT_MESH_ID            3654
#define CONST_TGPID_HEALTH_INSTIGATOR_PERC                       1792
#define CONST_TGTT_ATTACK_MELEE                                  170
#define CONST_TGPID_DISABLED                                     345
#define CONST_TGPID_MADNESS                                      1836
#define CONST_TGPID_STRUCTURE_DAMAGE_MODIFIER                    1805
#define CONST_TGPAWN_GOD94_PUSH_ARMOR_MESH_ID                    10106
#define CONST_TGPID_GROUP_NUMBER                                 194
#define CONST_TGPID_PRELOAD                                      195
#define CONST_TGPID_SET_TASK_FORCE                               196
#define CONST_TGEGC_YEMOJA_PSV_PIPS                              17779
#define CONST_MAX_BROADCAST_CHANNELS                             4
#define CONST_TGPID_GP_ARENA_ESCORT                              1775
#define CONST_TGPID_OS_SHIELD_HEALTH_TO_REMOVE                   429
#define CONST_TGPAWN_ATHENA_PASSIVE_ID                           8958
#define CONST_TGEGC_REMOVE_EFFECT                                877
#define CONST_TGPAWN_RAM_ULT_WEAPON_ID                           10115
#define CONST_TGPID_BALANCE_TASK_FORCE                           197
#define CONST_TGPID_USE_PLAYER_START                             199
#define CONST_TGPAWN_GUARDIAN_EGYPTCLASH_DEATH_ID                7400
#define CONST_TGPID_CAPTURE_TIME_RESET                           358
#define CONST_TGEGC_GOD95_A04_STIM                               17026
#define CONST_TGPID_REQUEST_MISSION                              329
#define CONST_TGPID_PET_DEPLOY_TIME_MODIFIER                     391
#define CONST_TGEGC_WIZARD_A_MARK                                17357
#define CONST_TGPID_DEPLOY_RATE_MODIFIER                         278
#define CONST_TGPAWN_SUSANO_OFFHAND1_P1_ID                       12813
#define CONST_TGPID_GP_COOLDOWN_MIN                              1682
#define CONST_TGPID_TRAINING_DEVICE_LIST                         281
#define CONST_TGPID_CAPTURE_ONLY_ONCE                            289
#define CONST_TGEGT_POST_HIT_DELAY                               10456
#define CONST_TGPID_REDUCE_ACTIVE_COOLDOWN                       1554
#define CONST_TGPID_ALLOW_PLAYERBOT_INTERACTION                  291
#define CONST_TGPID_TIME_TO_HOLD                                 294
#define CONST_TGEGT_HIT                                          264
#define CONST_TgPawn_Phoenix_ClashS5_TGPAWN_Phoenix_ClashV3_DEATH_ID 7551
#define CONST_TGPAWN_PELE_A04_MARK_CATEGORY_CODE                 17229
#define CONST_TGPID_POINTS_PER_SECOND                            326
#define CONST_HIVE_EFFECT_GROUP_CATEGORY_CODE                    10722
#define CONST_TGPID_TAUNT                                        305
#define CONST_TGPID_OBJECTIVE_UNLOCK_DELAY                       331
#define CONST_TgDevice_Raijin_RaijuuBouncing_TGDEVICE_MONKEY_FURIOUSMONKEY_DIRECTION_FX_ID 6184
#define CONST_NOX_ULT_HIT_3_SITUATIONAL                          11257
#define CONST_TGPAWN_THOTH_SPEED_GLYPH_PROJ_ULT_FX_ID            10493
#define CONST_DEFAULT_FX_RADIUS                                  240.0f
#define CONST_TGPID_BLOCK_FRIENDLY_FIRE                          302
#define CONST_TGPID_REQUIRED_POINTS_TO_FIRE                      318
#define CONST_TGPID_ROOT                                         338
#define CONST_TGPID_PRIORITY                                     346
#define CONST_TGPID_CREDITS                                      399
#define CONST_TGEGC_INTOXICATE_TREMORS                           16699
#define CONST_TGPID_OBJECTIVE_COOLDOWN_SECONDS                   409
#define CONST_TGPID_MINIMUM_LEVEL                                410
#define CONST_TGPID_GOLD_BONUS                                   1839
#define CONST_TGPID_REDUCE_ACTIVE_COOLDOWN_OH1                   1832
#define CONST_TGPAWN_GENERIC_RETURN_STROKE_DEVICE_ID             9357
#define CONST_TGPAWN_TYR_D_1_STAGE2_SUB_ID                       9028
#define CONST_TGPID_REDUCTION_PHYSICAL                           1034
#define CONST_TGPID_REDUCE_ACTIVE_COOLDOWN_OH2                   1833
#define CONST_TGEGC_ODIN_RING                                    10887
#define CONST_TGPID_CAPTURE_RADIUS                               425
#define CONST_TG_DEVICEFORM_GRENADE                              5
#define CONST_IgnoreBlockingDeployFriendly                       0x10
#define CONST_TGPID_GP_COOLDOWN_START                            1683
#define CONST_TGPID_MINI_MAP_TEXTURE_ID                          406
#define CONST_TGPAWN_THOTH_SPEED_GLYPH_PROJ_FX_ID                10240
#define CONST_TGPID_MINI_MAP_TEXTURE_UL                          407
#define CONST_NATURAL_TIDI                                       1.0f
#define CONST_TGPID_MINI_MAP_TEXTURE_VL                          408
#define CONST_TGPID_NEXT_MAP_GAME                                344
#define CONST_TGPID_ROUTE_NUMBER                                 348
#define CONST_TGPID_TELEPORT_BOTS                                359
#define CONST_MESH_MAX_RADIUS                                    30
#define CONST_TGPID_PAUSE_ON_CAPTURE                             365
#define CONST_TGPID_SPAWN_ORDER                                  367
#define CONST_TGPID_PVE_NORMAL_FLAG                              377
#define CONST_FX_SCALE_BY_RADIUS_SQUARED                         1023
#define CONST_TGPID_PENETRATION_MAGICAL_PERC                     1030
#define CONST_TGPID_PVE_HEROIC_FLAG                              379
#define CONST_TGPID_PVE_EXTREME_FLAG                             380
#define CONST_TGPAWN_NIKE_A01_ID                                 13684
#define CONST_TGEGC_SERQET_LAST_BREATH                           10836
#define CONST_TGPID_FRICTION_MULTIPLIER                          395
#define CONST_TGPID_AMMO_COUNT                                   424
#define CONST_TGPID_AMMO_CLIP_SIZE                               426
#define CONST_TGPAWN_NUWA_SNAKE_MESH_ID                          4078
#define CONST_TGPID_STRAFE_GROUNDSPEED_PERC                      1910
#define CONST_TGPID_AMMO_REPLENISH                               427
#define CONST_TGPID_ONSLAUGHT_SHIELD_POINTS                      428
#define CONST_TGPID_OS_BOT_HEALTH_TO_REMOVE                      430
#define CONST_TGPID_OS_BOT_HEALTH_TO_REMOVE_PK                   432
#define CONST_TGEGC_FAFNIR_TIMEOUT                               15094
#define CONST_TGPID_GP_SURRENDER_TIME                            1386
#define CONST_TG_SURRENDER_VOTE_NO                               0x02
#define CONST_TGPID_HEALTH                                       51
#define CONST_TGPID_HEALTH_MAX                                   304
#define CONST_TGPID_HP5                                          1011
#define CONST_TGDEVICE_BASTETPOUNCE_CC                           10743
#define CONST_TGEGC_BASTET_CAT_CHARGE_REDUCTION                  17831
#define CONST_TGEGC_OLORUN_TRIGGER_DEV_2                         17635
#define CONST_GT_MIN_REFRESH                                     300
#define CONST_TGPID_PHYSICAL_LIFESTEAL                           1010
#define CONST_GT_BASICS_TO_MISS                                  6
#define CONST_TGPID_MANA                                         1002
#define CONST_TGEGC_NO_MITIGATION                                16593
#define CONST_TGPAWN_HACHIMAN_A01_STACKS_SITUATIONAL_TYPE        16692
#define CONST_TGPAWN_RAIJIN_V2_OFFHAND4_BEAT3_ID                 12639
#define CONST_TGPID_ENERGY                                       1004
#define CONST_TGPID_SHIELD_MAX_INSTIGATOR_LEVEL_SCALE            1612
#define CONST_TGPID_POWER_PHYSICAL_BOT                           1082
#define CONST_TGPID_POWER_PHYSICAL_ITEM                          1007
#define CONST_NOX_ULT_LINK_WARNING_DIST                          20
#define CONST_TGPAWN_JING_WEI_DEV_1_TWEEN_DURATION               0.25f
#define CONST_TGPID_POWER_PHYSICAL_PERC                          1047
#define CONST_MAX_LEVEL                                          20
#define CONST_TGPID_POWER_MAGICAL_ITEM                           1008
#define CONST_GT_DEATH                                           80
#define CONST_PLAYER_NOT_TAGGED                                  -1
#define CONST_TGPID_POWER_MAGICAL_PERC                           1046
#define CONST_TGPAWN_FREYA_RANGED_WEAPON_SUB_ID                  8368
#define CONST_TGPID_POWER_UTILITY_ITEM                           1485
#define CONST_TGPID_PHYS_ABILITY_LIFESTEAL                       1837
#define CONST_TGPID_LIFESTEAL_BLOCK                              1751
#define CONST_TGPAWN_CAMAZOTZ_A02_IDa                            13560
#define CONST_NOX_BIRD_DEATH_MESH_ID                             5058
#define CONST_TGPAWN_ERLANGSHEN_PET_SPEED_PCT_JOG                2.2f
#define CONST_HARD_CC_TIME_SECS                                  15.0f
#define CONST_TGPID_HEALTH_COST                                  1578
#define CONST_TGPID_MANA_COST                                    1012
#define CONST_TG_DEFAULT_WINE_MIC                                2430
#define CONST_TGPAWN_TERRA_DEV4_DETONATE_ID                      13332
#define CONST_TGPID_ENERGY_COST                                  1013
#define CONST_TGEGC_ERLANG_SHEN_TURTLE_SHIELD_HEALTH             15138
#define CONST_TGPID_ATTACK_SPEED                                 1015
#define CONST_TGPAWN_THANATOS_HARVESTER_POOF_FX_ID               3156
#define CONST_DAMAGE_DEPLOY_ID                                   465
#define CONST_TGPID_PENETRATION_PHYSICAL_PERC                    1028
#define CONST_TGFXP_TEXTURE                                      307
#define CONST_TGPID_PENETRATION_MAGICAL                          1029
#define CONST_TGDEVICE_SCYLLA_NUM3_TARGET_FX_ID                  3794
#define CONST_TGPID_REDUCTION_MAGICAL                            1035
#define CONST_TGPID_REDUCTION_MAGICAL_PERC                       1037
#define CONST_TGEGC_HYDRA_MARK                                   16613
#define CONST_TGPAWN_DAJI_A01_ID                                 14434
#define CONST_TGPAWN_SET_A01_ID                                  17066
#define CONST_TGPAWN_RACER_EGST_LAP_FINISHED_EFFECTS             15544
#define CONST_TGPID_COOLDOWN_REDUCTION_PERC                      1039
#define CONST_TGPID_COOLDOWN_EXTENSION                           1637
#define CONST_TGEGC_HACHIMAN_A04_SHOOTER_MISS                    16676
#define CONST_TGPID_GP_INVENTORY_LIMITER                         1779
#define CONST_TGPAWN_CABRAKAN_DEV2_MESH_B_ID                     4817
#define CONST_TGEGC_HERA_ARGUS_TARGET                            17246
#define CONST_TGPID_XP_GAIN_PERC                                 1041
#define CONST_TGPID_BACKPEDAL_GROUNDSPEED_PERC                   1909
#define CONST_TGPID_GOLD_GAIN_PERC                               1042
#define CONST_TGEGT_STACK_IN_PLACE                               10309
#define CONST_TGPAWN_GOD94_PSV_A_CATEGORY_CODE                   16937
#define CONST_TGPID_GOLD_PER_5_PERC                              1043
#define CONST_TGPAWN_G84_OFFHAND1_SHOOTER_ID                     13784
#define CONST_TGPAWN_HACHIMAN_PSV_EFFECTGROUP                    51018
#define CONST_TGPID_XP_PER_5_PERC                                1918
#define CONST_TGPID_MINION_DAMAGE_BONUS                          1498
#define CONST_TGPAWN_NIKE_A02_A03_COMBO_SITUATIONAL_TYPE         15287
#define CONST_TGPID_PLAYER_PASS_THROUGH                          1800
#define CONST_TGPID_FORWARD_GROUNDSPEED_PERC                     1908
#define CONST_TGFXT_AUDIENCE_CUSTOM_FILTER_01                    15451
#define CONST_TGPID_MINIMAP_WARD_VISION_PERC                     1031
#define CONST_TGPID_MANA_OWNER_PERC                              1571
#define CONST_TGGAME_ARENA_GOD_KILLS_PER_ESCORT                  10
#define CONST_TGPID_MANA_INSTIGATOR_PERC                         1793
#define CONST_TGD_MESH_TYPE_ALT_ATTACHED                         857
#define CONST_TGPID_CUSTOM_VALUE_2                               1049
#define CONST_TGPID_TGPAWN_NEZHA_WINDFIRE_KNOCK_DOWN_SUB_ID      8805
#define CONST_TGDRCB_DETONATE                                    831
#define CONST_TGPID_CUSTOM_VALUE_4                               1594
#define CONST_TGPID_TGPAWN_APOLLO_CHARIOT_SOUNDFX_ID             2627
#define CONST_TGPAWN_MERCURY_NUM1_DEPLOYABLE_ID                  499
#define CONST_TGEGC_HOUYI_STIM                                   11019
#define CONST_TGPID_CUSTOM_VALUE_5                               1595
#define CONST_TGPID_CUSTOM_VALUE_6                               1596
#define CONST_TGEGC_TIDI                                         17213
#define CONST_TGPID_TGPAWN_NEZHA_SASH_MESH_ID                    6157
#define CONST_TGPID_SLOW_DIMINISHING                             1231
#define CONST_TGPID_DAMAGE_TAKEN_PERC_PHYS                       1630
#define CONST_TGPID_DAMAGE_TAKEN_PERC_CRIT                       1846
#define CONST_NOX_ULT_HIT_2_SITUATIONAL                          11256
#define CONST_TGPAWN_RAIJIN_V2_KOTO_DRUMS_ID                     14745
#define CONST_TGPID_DAMAGE_DEALT_PERC                            65
#define CONST_TGPID_DAMAGE_DEALT_PERC_BASIC                      1605
#define CONST_TGEGT_STRONGEST_STACK                              17214
#define CONST_TGPID_STEALTH                                      1416
#define CONST_TGEGT_COOLDOWN                                     265
#define CONST_TGPID_BREAK_GRAB                                   1556
#define CONST_TGPID_GP_FIRE_GIANT                                1785
#define CONST_TGPID_ALWAYS_APPLY                                 1790
#define CONST_TGDEVICE_AHPUCH_EMPTYTHECRYPTS_OFFSET              240.0f
#define CONST_TGPID_GIVE_GOLD                                    1913
#define CONST_DEPLOYABLE_STARTING_HEALTH_PCT                     0.10f
#define CONST_VGS_SPAM_LENGTH                                    0.5
#define CONST_TGFXP_VECTOR                                       300
#define CONST_TGPID_GOLD_BONUS_TEAM                              1841
#define CONST_TGPID_GP_STARTING_GOLD                             1426
#define CONST_TGPID_GP_GOLD_SPOOL                                1500
#define CONST_TGPID_GP_XP_SPOOL                                  1501
#define CONST_TGEGC_YEMOJA_A03_LAUNCHING                         17762
#define CONST_HARD_CC_KNOCKBACK_DIM_RETURNS                      0.15f
#define CONST_TGPID_GP_GOD_XP_COEFFICIENT                        1581
#define CONST_TGPDD_AI                                           4
#define CONST_TGPAWN_WIZARD_B01_ID                               16579
#define CONST_TGPAWN_THANATOS_HARVESTER_BALLMESH_GOD_ID          3852
#define CONST_TGPID_GP_MINION_DEATHS_ARENA                       1768
#define CONST_TGPID_GP_TICKET_COUNT                              1769
#define CONST_TGEGC_BAKASURA_BUFF                                10422
#define CONST_TGPID_GP_LANE_MINIONS                              1780
#define CONST_TGPAWN_KALI_MARKED_MAX                             2
#define CONST_CONTEXT_NOTIFY_DEFEND_SPECIALFX                    2929
#define CONST_IgnoreBlockingDeploy                               0X30
#define CONST_TGATDT_ANIM_TREE_MELEE                             1.0
#define CONST_MOVESPD_DEPLOY_ID                                  729
#define CONST_TGEGC_CHRONOS_PASSIVE_BUFF_INHAND                  10655
#define CONST_TGEGC_TIE_CAMERA_TO_VISION                         16594
#define CONST_TGPID_GP_SIEGE_TICKETS                             1781
#define CONST_TGPID_GP_JUNGLE_CAMPS                              1783
#define CONST_TGPID_GP_LOCKED_DEVICES                            1786
#define CONST_TGPID_GP_PAUSE_COUNT                               1818
#define CONST_TGPID_GP_PAUSE_DURATION                            1819
#define CONST_TGPAWN_JINGWEI_PASSIVE_ID                          12766
#define CONST_TGPID_GP_RACER_FWD_ACCEL                           1811
#define CONST_TGPID_GP_RACER_REV_ACCEL                           1812
#define CONST_TGPID_GP_RACER_BRAK_ACCEL                          1813
#define CONST_TgDevice_Monkey_FuriousMonkey_TGDEVICE_MONKEY_FURIOUSMONKEY_DIRECTION_FX_ID 6184
#define CONST_TGG72_SITUATIONAL_A3                               11317
#define CONST_TGPID_GP_RACER_DRAG_ACCEL                          1814
#define CONST_TGPID_AI_DEVICE_DAMAGE                             1638
#define CONST_TGPID_AI_DEVICE_SCALING                            1639
#define CONST_TGEGC_KHEPRI_OFFHAND_5                             11239
#define CONST_TGPID_EF_STACKING_THRESHOLD                        1886
#define CONST_PROTECTION_IMMUNITY_VALUE                          100
#define CONST_PROTECTION_DAMAGE_IMMUNITY_VALUE                   10000
#define CONST_TGEGC_GLOBAL_OUT_OF_COMBAT                         18003
#define CONST_TGPAWN_HERA_MAX_POLYMORPH_MAPPINGS                 20
#define CONST_TGPAWN_BACCHUS_BELCH_SHAKE_FX_ID                   7472
#define CONST_TGPAWN_DAJI_ULT_TWEEN_TIME                         0.3f
#define CONST_TGFXP_SCALAR                                       299
#define CONST_TGFXP_COLOR                                        301
#define CONST_TGFXT_PRIORITY_SHIELD                              625
#define CONST_TGPAWN_DAJI_A04_IDb                                14506
#define CONST_TGPAWN_G86_EGST_SEASONAL_FALL                      15385
#define CONST_TGEGC_G72_PASSIVE_STACK                            11324
#define CONST_TGFXT_PRIORITY_STEALTH                             626
#define CONST_TGFXT_PRIORITY_FLAME                               838
#define CONST_REVIVE_MESH_ID                                     5755
#define CONST_TGFXT_PRIORITY_SPAWN_SORTORDER                     15
#define CONST_TGFXMAT_GENERIC                                    615
#define CONST_TGFXMAT_HEAD                                       617
#define CONST_TGFXMAT_BACKPACK                                   1011
#define CONST_TGEGC_BUMBAS_HAMMER                                17986
#define CONST_TGFXT_DPG_WORLD                                    10823
#define CONST_TGIST_SKINNED_OFFHAND                              17286
#define CONST_TGEGC_TSUKUYOMI_INHAND_MANGETSU_BUFF               17893
#define CONST_TGEGT_HIT_AURA                                     10060
#define CONST_TGFXT_DPG_FOREGROUND                               10835
#define CONST_TGPAWN_ERLANGSHEN_A04_ID                           13156
#define CONST_TG_ASSIST_TIMEOUT_NONGOD                           5
#define CONST_TGFXT_AUDIENCE_SELF                                10829
#define CONST_TGEGT_WHILE_FIRING                                 263
#define CONST_TGPAWN_Hydra_Adv_DEATH_ID                          9032
#define CONST_TGFXT_AUDIENCE_ENEMY                               10831
#define CONST_TGFXT_AUDIENCE_TASKFORCE2                          10833
#define CONST_TGEGT_HIT_INITIAL                                  10063
#define CONST_TGPDD_LIGHTING                                     1
#define CONST_TG_ASSIST_TIMEOUT_GOD                              10
#define CONST_TGTT_TARGET_SELF                                   214
#define CONST_GLOBAL_OFFHAND_COOLDOWN                            0.2
#define CONST_TgPawn_TG_EQP_POINT_MAX                            31
#define CONST_IgnoreBlockingDeployAll                            0XF0
#define CONST_IgnoreBlockingWall                                 0XC0
#define CONST_IgnoreBlockingMinion                               0x0C
#define CONST_TGDEPLOY_HERCULES_HERCSMASH_DEPLOYABLE_CLIENT_ID   393
#define CONST_TGPAWN_TOWER_SIDE_COUNT                            4
#define CONST_IgnoreBlockingGod                                  0x03
#define CONST_TGPAWN_AHPUCH_CORPSE_EX_CAP                        6
#define CONST_IgnoreBlockingWallEnemy                            0x80
#define CONST_TGPAWN_CAMAZOTZ_A02_IDb                            13568
#define CONST_IgnoreBlockingDeployEnemy                          0x20
#define CONST_IgnoreBlockingMinionEnemy                          0x08
#define CONST_IgnoreBlockingGodEnemy                             0x02
#define CONST_TGPAWN_FREYA_RANGED_WEAPON_ID                      8367
#define CONST_TG_BASE_MAGICAL_POWER_SCALING                      20
#define CONST_TG_DISTANCE_FADE_TIME                              1.0f
#define CONST_TGITEM_ATTRIBUTE_NONE                              0x00
#define CONST_TGPAWN_MONSTER_IDLE_SITUATIONALTYPE                11040
#define CONST_TG_SPAWNFX_VALID_DURATION                          5
#define CONST_TGEGC_GOD95_A03_IN_WALL                            16970
#define CONST_TG_PHYSICALITY_GODS                                10034
#define CONST_TG_PHYSICALITY_STRUCTURES                          861
#define CONST_TGTT_ATTACK_NA                                     83
#define CONST_TGEGC_DAMAGE_OVERRIDE                              11240
#define CONST_TG_PHYSICALITY_ALL                                 0
#define CONST_MAX_NBR_OF_DAMAGEINFO                              8
#define CONST_TgDeploy_AoKuang_Tornadoes_TORNADO_PROJ_FIREMODE_ID 5526
#define CONST_TG_MAX_FLASH_EVENTS                                32
#define CONST_TGEGC_HEIMDALLR_PSV_STACKS                         17776
#define CONST_TGDST_GOD_ENABLED                                  17084
#define CONST_TGC_REMEMBER_PLAYER_ATTACKED_TIME                  2
#define CONST_TGC_TELEPORT_DESTINATION_CACHE_TIME                0.1
#define CONST_TGPID_TGPAWN_NEZHA_WINDFIRE_LANDED_BLAST_FX_ID     2698
#define CONST_TGPAWN_BELLONA_PASSIVE_EFFECT_GROUP                39517
#define CONST_TGPAWN_FREYA_PIXEL_BUSTER_SKIN_ID                  10478
#define CONST_TGPAWN_FREYA_RANGED_WEAPON_SUB_FX_ID               2256
#define CONST_TGPAWN_FREYA_ULT_WEAPON_ID                         8424
#define CONST_TGPAWN_FREYA_CLOAK_MARK_MAX                        4
#define CONST_TGPAWN_FREYA_RANGED_GAUNTLET_FX_NUM                2
#define CONST_TGPAWN_FREYA_RANGED_GAUNTLET_FX_ID                 2278
#define CONST_TGPAWN_FREYA_DAMAGE_BUFF_MAX                       1
#define CONST_TGPAWN_FREYA_DAMAGE_BUFF_ID                        8362
#define CONST_TGPAWN_G84_SIDE_COPY_MESH_ID                       7411
#define CONST_TGEGC_G84_STEALTH                                  15346
#define CONST_TGEGC_G84_PSV                                      15282
#define CONST_TGDEVICE_WIZARD_B02_MAX_MARKED_TARGETS             32
#define CONST_TGPAWN_SET_A03_TELEPORT_OUTRO_ID                   20342
#define CONST_TGPAWN_RACER_DETONATE_PICKUP_DEV_ID                14384
#define CONST_TGPAWN_RACER_EGST_PLACEMENT_BUFF                   15505
#define CONST_TGPAWN_RACER_EGST_DRIFT_BOOST_ACTIVE               15455
#define CONST_TGPAWN_RACER_EGST_DRIFT_BOOST_READY                15454
#define CONST_TGPAWN_BARONSAMEDI_PSV_HYSTERIA_MIN_CATEGORY_CODE  17134
#define CONST_TGANIM_BLEND_BY_DIRECTION_COUNT                    8
#define CONST_TGEGC_CHARM                                        10826
#define CONST_TGPAWN_DAJI_TELEPORT_PROJ_ID                       1669
#define CONST_TGPAWN_DAJI_TETHER_MAXIMUM_DISTANCE                100.0f
#define CONST_TGPAWN_DAJI_ULT_PAOLAO_DESTROY_TIME                2.0f
#define CONST_TGPAWN_DAJI_A04_IDa                                14636
#define CONST_TGPAWN_DAJI_MESH_ID                                7703
#define CONST_SPEED_DEPLOY_ID                                    464
#define CONST_TGPAWN_KALIV2_ULTIMATE_MESH_ID                     4001
#define CONST_TGPAWN_DAJI_TETHER_MESH_ID                         7864
#define CONST_TGPID_TGPAWN_GOD95_ULT_FLYING_POSTPROCESS_REF      16488
#define CONST_TGPAWN_HOUYI_DEV3_SUBDEVICE_ID                     10993
#define CONST_TGPAWN_THOTH_DEV1_SHOOTER_DEVICE_ID                13559
#define CONST_TGRACER_MAX_PLAYERS                                8
#define CONST_TGPAWN_THOTH_DEV2_DEVICE_ID                        13740
#define CONST_TGPAWN_THOTH_DEV2_SHOOTER_DEVICE_ID                13741
#define CONST_TGPAWN_THOTH_DEV3_DEVICE_ID                        13566
#define CONST_TGEGC_BELLONA_SHIELD_BASH_BLOCK                    11064
#define CONST_TGPAWN_THOTH_MAX_TRACKED_PROJ                      18
#define CONST_BOT_ENCOUNTER_DESPAWN_TIME                         60
#define CONST_TGPID_TGPAWN_ODIN_GUNGNIRS_MIGHT_SUB_ID            9264
#define CONST_TGBOTFACTORY_LEASHEDCONFIGURABLE_PEP_TOKEN_DEPLOYABLE_ID 1240
#define CONST_TGPAWN_G86_BASIC_ATTACK_DEVICE_ID                  14243
#define CONST_REC_ITEM_COUNT                                     12
#define CONST_PING_INTERVAL                                      0.5
#define CONST_TGPAWN_SUSANO_DEV4_TRAVEL_RANGE                    40
#define CONST_MAX_FLASH_SIM_PROJECTILES                          48
#define CONST_BASE_RESPAWN_TIME_SEC                              5
#define CONST_TGT_MAX_TIMERS                                     32
#define CONST_DEPLOYMODE_GROUND_DELTA_CHECK_DIST                 60.0f
#define CONST_DEPLOYMODE_MINIMUM_RADIUS_CHECK_DIST               30.0f
#define CONST_TGPAWN_WIZARD_C01_ID                               16585
#define CONST_TGPAWN_MERCURY_SITUATIONAL_NUM3_SELF_EFFECTS       10691
#define CONST_OFFHAND_EQUIP_COOLDOWN                             30.0f
#define CONST_REFIRE_SERVER_GRACE                                0.1f
#define CONST_TGDT_OFF_HAND                                      390
#define CONST_TGDT_BASE_HUMAN_ATTRIB                             392
#define CONST_TGDT_MORALE                                        476
#define CONST_TG_DEVICEFORM_DEPLOYABLE                           3
#define CONST_TGDT_TRAVEL                                        806
#define CONST_TGPAWN_JING_WEI_DEV_4_PROXY_FX_ID                  8380
#define CONST_TGDT_ITEM_STORE                                    10024
#define CONST_TGDT_GAME_ACTIVE_ABILITY                           10099
#define CONST_TGDT_CONSUMABLE                                    10097
#define CONST_TGPAWN_SET_PSV_BASIC_EFFECT_ID                     56780
#define CONST_TGDT_PASSIVE                                       10102
#define CONST_TGDEPLOYABLE_THOTH_SPEED_GLYPH_IMPACT_ULT_FX_ID    10498
#define CONST_TGPAWN_HEL_RESTORATION_REBOUND_FX_ID               3236
#define CONST_TGEGC_ARACHNE_FANGS                                10888
#define CONST_TGDT_BOT_MELEE                                     671
#define CONST_NOX_ULT_MAX_LINK_TARGETS                           3
#define CONST_TGDT_BOT_RANGED                                    670
#define CONST_TGG72_SITUATIONAL_A1_INIT                          11340
#define CONST_TGPAWN_KUZENBO_A01_ID                              14148
#define CONST_TGIST_CONTAINER                                    15369
#define CONST_TGPAWN_ERLANGSHEN_MESH_ID                          6620
#define CONST_TGIST_STARTER                                      15370
#define CONST_TGEGC_COMPASSION                                   18033
#define CONST_TGIST_INSTANT_CONSUME                              15554
#define CONST_TGPAWN_CAMAZOTZ_DISABLED_SITUATIONAL_TYPE          15204
#define CONST_TGIST_ACHIEVEMENT_BASE                             16682
#define CONST_ROTATION_EIGHTH                                    0x02000
#define CONST_TGDEVICEFIRE_NUWA_MINIONSPAWN_MAX_DELAY            0.07f
#define CONST_NO_FIRE_SEQUENCE                                   255
#define CONST_TGDEVICE_GEB_BOULDER_DEFAULT_ACCELTIME             2.0f
#define CONST_TG_VV_PACING_TYPE_ENERGY                           10014
#define CONST_TGPAWN_SOBEK_SICKENINGSTRIKE_MESH_ID               3736
#define CONST_TG_VV_PACING_TYPE_MANA                             10013
#define CONST_TGD_ANIMSET_DEST_DEVICE                            858
#define CONST_TGEGC_KUKULKAN_DRAGON_TORNADO                      10256
#define CONST_TGD_MESH_TYPE_LEFT_HAND                            1418
#define CONST_TGD_MESH_TYPE_INHAND                               855
#define CONST_TGD_RIGHT_CLICK_FIRE_MODE                          1
#define CONST_TGMAPTRACKER_DEPTHZY_SAMPLES_PER_TICK              20
#define CONST_TGDRCB_SET_SECOND_FIRE_MODE                        1600
#define CONST_TGPAWN_JORM_DEV3_POSTPROCESS_REF                   20002
#define CONST_TGPAWN_CAMAZOTZ_A01_IDa                            13391
#define CONST_TGDRCB_AIM_MODE                                    833
#define CONST_TGPAWN_CAMAZOTZ_A01_IDb                            13395
#define CONST_TGDRCB_SECOND_FIRE_MODE                            830
#define CONST_TGEGT_HIT_SPECIAL_MANAGED                          10036
#define CONST_TGEGT_SUCCESSFUL_HIT                               759
#define CONST_TGEGT_BUILDUP                                      262
#define CONST_TGPAWN_GOD95_A01_ID                                15877
#define CONST_TGTT_REMOTE_TYPE_TRIGGER                           92
#define CONST_TGEGT_EQUIP                                        261
#define CONST_TGDEVICE_FIRE_MODE_MAX                             5
#define CONST_TGAC_GOLD                                          14622
#define CONST_TGPAWN_SET_A04_ID                                  17147
#define CONST_CONTEXT_NOTIFY_PING_SPECIALFX                      2954
#define CONST_DEPLOYABLE_DEFAULT_COLLISION_HEIGHT                160.0f
#define CONST_TGAUF_ALLOW_CRIPPLE                                8
#define CONST_TGEGC_MITIGATION_STACK                             16592
#define CONST_TGDEPLOYABLE_WARD_ODYSSEY_2017_SKIN_ID             13550
#define CONST_TGDEPLOYABLE_WARD_ODYSSEY_2017_ACTIVITY_ID         2219
#define CONST_INTERP_ANCHOR_MAX                                  3
#define CONST_TGRF_RESTRICT_NONE                                 0
#define CONST_TGEGC_G72_PASSIVE                                  11323
#define CONST_PERSEPHONE_BOUNDS_DEPLOY                           1223
#define CONST_TGEGC_SET_PSV_BASIC_CATEGORY_CODE                  17546
#define CONST_TGDEPLOY_WIZARD_A01_PROJ_ID                        1763
#define CONST_TGEGC_ARTEMIS_VENGEFUL_ASSAULT_BUFF                11421
#define CONST_MESH_HEIGHT                                        20
#define CONST_TGEGC_CHALLENGES_CTF_CAPTURED_FLAG                 15352
#define CONST_BUFFER_RADIUS                                      0.7
#define CONST_TGDEPLOY_WIZARD_A01_LINK_COUNT_MAX                 32
#define CONST_TIDI_SIMULATED_LINE_PATH_TRANSITION_MAX            8
#define CONST_TGDEVICE_WIZARD_B02_MAX_DEPLOYABLES                2
#define CONST_TGPAWN_WIZARD_CPassive_ID                          16590
#define CONST_TGPID_ARES_CHAIN_PYLON_PULL_SUB_ID                 8288
#define CONST_TGPAWN_FENRIR_SKIN_12_ID                           18059
#define CONST_UllrReloadSpecialFXID                              3988
#define CONST_CTF_CARRIER_CHARGE_DEVICE_ID                       14191
#define CONST_TGEGC_GUARDIAN_BLESSING_ALLY_MARKER                17826
#define CONST_CTF_CARRIER_THROW_DEVICE_ID                        14218
#define CONST_MAX_GENERAL_UTILITY_STAT                           318.0f
#define CONST_TGEGC_AWILIX_MOUNT_BUFF                            10959
#define CONST_TGPAWN_JORM_HEAD_ID                                11199
#define CONST_TGPAWN_JORM_SPLINE_ID                              11196
#define CONST_TgProj_Olorun_Dev2_InitialExplosionId              1782
#define CONST_PORTAL_TRIGGER_TIME                                1.0f
#define CONST_SURTR_ARM_DEPLOYABLE_ID                            1074
#define CONST_SURTR_ARM_DEPLOYABLE_ANGLE                         10920
#define CONST_TGPAWN_SUSANO_DEV4_START_RADIUS                    10
#define CONST_TGPAWN_KNIGHT_DEVICEA_A02_ID                       16607
#define CONST_TGEGC_WIZARD_B_MARK                                17321
#define CONST_NOX_PASSIVE_MAX_FX_ID                              5252
#define CONST_TGPAWN_SUSANO_DEV4_MAX_RADIUS                      20
#define CONST_MAX_GENERAL_MAGICAL_STAT                           540.0f
#define CONST_TGPAWN_SUSANO_DEV4_GROWTH_TIME                     4
#define CONST_TGTK_MESHES_MAX                                    10
#define CONST_TGDEPLOYABLE_THOTH_SPEED_GLYPH_IMPACT_FX_ID        10441
#define CONST_TGDEPLOY_MAX_TRAIL_POINTS                          30
#define CONST_TGEGC_GOD95_PSV_STACK                              16965
#define CONST_TGEGS_EMPTY                                        0
#define CONST_TGDEPLOYABLE_ZEUS_SHIELD_RETURNPROJECTILE_ID       563
#define CONST_TGDEPLOYABLE_ZEUS_SHILED_RETURNPROJ_MODE_ID        11298
#define CONST_DEPTHZY_ISTATE_COUNT                               1
#define CONST_TGTT_REMOTE_TYPE_TIME                              91
#define CONST_TGPAWN_HERCULES_BOULDER_THROWER_ID                 8501
#define CONST_TGPAWN_THANATOS_EXECUTE_LAUGH_FX                   3208
#define CONST_TGPAWN_WIZARD_MESH_ID                              10694
#define CONST_TGEGC_BASTET_ULT_STACK                             16718
#define CONST_TGEGC_CERBERUS_A01_DMG_INCREASE                    16761
#define CONST_TGPAWN_WIZARD_TYPE_MAX                             3
#define CONST_TGPAWN_SET_CLONE_INHAND_5_ID                       18942
#define CONST_TGEGC_SET_A04_ACTIVE_CATEGORY_CODE                 17536
#define CONST_TGPAWN_WIZARD_C04_ID                               16588
#define CONST_TGPAWN_WIZARD_C02_ID                               16586
#define CONST_TGPAWN_WIZARD_CInHand_ID                           16589
#define CONST_TG_PROPS_MAX                                       20
#define CONST_TGPAWN_WIZARD_B04_ID                               16582
#define CONST_TGPAWN_SET_CLONE_A01_ID                            17089
#define CONST_TGPAWN_WIZARD_B03_ID                               16581
#define CONST_TGPAWN_WIZARD_BPassive_ID                          16584
#define CONST_TGEGC_HERA_A03_SHIELD_HEALTH                       17284
#define CONST_OSIRIS_PASSIVE_MESH                                4389
#define CONST_GUARDIAN_SEASON5_DEATH_MESH_3                      9762
#define CONST_TGPAWN_WIZARD_A04_ID                               16578
#define CONST_TGPAWN_WIZARD_A03_ID                               16577
#define CONST_TGPAWN_WIZARD_A02_ID                               16576
#define CONST_TGPAWN_WIZARD_A01_ID                               16575
#define CONST_TGPAWN_WIZARD_APassive_ID                          16574
#define CONST_TGPAWN_ERLANGSHEN_Psv_ID                           13022
#define CONST_TGPAWN_ERLANGSHEN_A03_IDa                          13019
#define CONST_TGPAWN_ERLANGSHEN_A03_IDb                          13020
#define CONST_TGPAWN_ERLANGSHEN_MINK_MESH_ID                     6668
#define CONST_TGPAWN_OLORUN_A02_AMMO_INDICATOR_FX_ID             21114
#define CONST_TGPAWN_ERLANGSHEN_PET_SPEED_PCT_RUN                3.3f
#define CONST_TGI_FROZEN_ID                                      15232
#define CONST_TGPAWN_ERLANGSHEN_PET_SPEED_PCT_WALK               1.0f
#define CONST_TGDEVICE_HACHIMAN_HORSE_ACCELTIME                  2.0f
#define CONST_TGDEVICE_HEIMDALLR_PSV_MAX_TARGETS                 32
#define CONST_TGDEVICE_JORMUNGANDR_BASIC_CONE_PULLBACK           3
#define CONST_TGPAWN_JORM_DEV3_POSTPROCESS_RES_ID                51314
#define CONST_TGEGC_CUPID_HEARTBOMB_STUN                         11072
#define CONST_TGEGC_BIND                                         17696
#define CONST_TGDEVICE_NUWA_PASSIVE_SITUATIONAL_TYPE             10718
#define CONST_TGDEVICE_OLORUN_A02_COOLDOWN_TRACKER               1
#define CONST_TGDEVICE_PERSEPHONE_A02_MAX                        32
#define CONST_PERSEPHONE_LEAP_SMALLDOT                           0.1f
#define CONST_TGPID_TGPAWN_APOLLO_CHARIOT_ID                     3502
#define CONST_TgDevice_Raijin_RaijuuBouncing_TGDEVICE_MONKEY_FURIOUSMONKEY_TARGET_FX_ID 6186
#define CONST_TGPAWN_SOL_HEAT_BOOST                              11309
#define CONST_TGDEV_RAVANA_DEV4_TARGET_SITUATIONAL_TYPE          11259
#define CONST_TGDEVICE_SERGET_PASSIVE_BACKUP_COOLDOWNTIME        3.0f
#define CONST_AIE_PROPERTY_PERC                                  7
#define CONST_TGPAWN_SUNWUKONG_ULT_BUILDUP_FX_ID_3               3401
#define CONST_TGPAWN_SUNWUKONG_ULT_BUILDUP_FX_ID_2               3400
#define CONST_TGPAWN_SUNWUKONG_ULT_JUMP_DEV_ID                   9325
#define CONST_TGDEVICE_SUSANO_DEV3_TIMER_FX_ID                   8659
#define CONST_TGDEVICE_SUSANO_DEV3_DIRECTION_FX_ID               8799
#define CONST_TGEGC_PERSEPHONE_A02b_DiminishingReturns           17729
#define CONST_TGPAWN_GANESHA_A03_KNOCKUP_SITUATIONAL_TYPE        15475
#define CONST_TGDEVICE_SUSANO_DEV3_TARGET_FX_ID                  8727
#define CONST_TGDEVICE_YMIR_EXPLOSION_STOPFIRE_SITUTATON_TYPE    10809
#define CONST_TGAB_NORMAL                                        1595
#define CONST_TGHT_EXAGGERATED_POKE                              0x02
#define CONST_TGHT_DEFAULT                                       0x01
#define CONST_TGHT_NONE                                          0x00
#define CONST_TGAUF_ALLOW_GRAB                                   4
#define CONST_TGAUF_ALLOW_SILENCE                                2
#define CONST_TGAUF_ALLOW_STUN                                   1
#define CONST_TGST_BASE_POWER                                    10625
#define CONST_TGAUF_ALLOW_NONE                                   0
#define CONST_TGRF_RESTRICT_POWERPACK                            64
#define CONST_TGRF_RESTRICT_SUIT                                 32
#define CONST_TGRF_RESTRICT_MOVEMENT                             4
#define CONST_TGRF_RESTRICT_RANGED                               2
#define CONST_TGRF_RESTRICT_MELEE                                1
#define CONST_TGDT_Magical                                       10057
#define CONST_TGDT_None                                          112
#define CONST_TGTT_REMOTE_TYPE_PROX_PROJ                         123
#define CONST_TGPAWN_TERRA_DEBUFF_WARDSTONE_MESH_ID              10282
#define CONST_TGTT_REMOTE_TYPE_PROXIMITY                         90
#define CONST_TGTT_REMOTE_TYPE_NA                                89
#define CONST_TGTT_TARGET_FRIEND_AND_ENEMY                       10029
#define CONST_PRE_MATCH_FROZEN_TIME_SECS                         3.0f
#define CONST_TGPAWN_GUANYUV2_WARHORSE_ID                        3674
#define CONST_TGTT_TARGET_ALL                                    703
#define CONST_TGTT_TARGET_ENEMY                                  212
#define CONST_TGTT_TARGET_FRIEND                                 10184
#define CONST_TGTT_ATTACK_PLAYER_SELECT                          15264
#define CONST_TGTT_ATTACK_ATTACHED_DEPLOYABLE                    10670
#define CONST_TGPAWN_THANATOS_FLAPUP_TIME                        0.802f
#define CONST_TGTT_ATTACK_MAP_TELEPORT                           10657
#define CONST_TGTT_ATTACK_GROUND_TARGET_TELEPORT                 10636
#define CONST_TGTT_ATTACK_ROLLING_LINE                           16625
#define CONST_TGTT_ATTACK_INSTANT_LINE                           10015
#define CONST_TGEGC_YEMOJA_A02_ALLY_BUFF                         17737
#define CONST_TGTT_ATTACK_GROUND_TARGET_BOT                      10382
#define CONST_TGTT_ATTACK_GROUND_TARGET_DEPLOYABLE               10011
#define CONST_TGTT_ATTACK_JETPACK                                1599
#define CONST_TGEGC_HEIMDALLR_PSV_MARK                           17775
#define CONST_REBORN_ACTIVITY_ID                                 1911
#define CONST_TGTT_ATTACK_TELEPORT_TO_SPAWN                      1442
#define CONST_TGPAWN_JINGWEI_OFFHAND4_ID                         13261
#define CONST_TGTT_ATTACK_ARTILLERY_STRIKE                       1177
#define CONST_TGTT_ATTACK_POWER_DOWN                             239
#define CONST_TGTT_ATTACK_INSTANT_BOT                            817
#define CONST_TGTT_ATTACK_INSTANT_DEPLOYABLE                     342
#define CONST_TGTT_ATTACK_SPAWN_PET                              17489
#define CONST_TGTT_ATTACK_PROJECTILE_RANGED                      177
#define CONST_TGTT_ATTACK_THROWN                                 87
#define CONST_TGTT_ATTACK_INSTANT_RANGED                         85
#define CONST_TGEGC_CAMAZOTZ_SIPHON_POWER_BUFF                   15174
#define CONST_TGPAWN_DOM_CYCLOPS_DAMAGE_TEAM_BUFF_ID             13023
#define CONST_TGPAWN_ARTIO_DRUID_DEV4_ID                         14685
#define CONST_TGPAWN_JORM_SPLINE_COUNT                           45
#define CONST_TGPAWN_ARTIO_DEV4_PASSIVE_FX_ID                    12964
#define CONST_TGPAWN_ARTIO_BEAR_DEV2_ID                          14677
#define CONST_TGPAWN_ARTIO_BEAR_MESH_ID                          9026
#define CONST_TGPAWN_SUSANO_TELEPORT_FX_ID                       8658
#define CONST_TGPAWN_ARTIO_DRUID_MESH_ID                         9025
#define CONST_TGEGC_AWILIX_MOONLIGHT_PULL                        11020
#define CONST_TGEGCC_CH05_STEAM                                  16854
#define CONST_TGPAWN_G72_SITUATIONAL_D41                         11319
#define CONST_BELLONA_SHIELD_BASH_BLOCK_SITUATIONAL              11065
#define CONST_TGPAWN_G72_SITUATIONAL_D43                         11321
#define CONST_MAX_CORE_STATS                                     18
#define CONST_TGPAWN_JINGWEI_INHAND_ID                           12765
#define CONST_TG_SURRENDER_VOTE_NONE                             0x00
#define CONST_TG_GENERAL_STATS_MAX                               4
#define CONST_TGPAWN_ARACHNE_IDLE_SITUATIONALTYPE                11040
#define CONST_TG_CONSUMABLE_MAX                                  2
#define CONST_TG_ACTIVE_ITEMS_MAX                                3
#define CONST_TGPAWN_MERCURY_ULT_DEPLOYABLE_ID_4                 496
#define CONST_TGPAWN_JING_WEI_DEV_1_OFFSET_HEIGHT                15.0f
#define CONST_TG_MAX_PING_INFO                                   4
#define CONST_TGIM_MAX_GOD_ENABLED_ITEMS                         8
#define CONST_TGDEVICE_SOL_SOLARFLAIR_UNSTABLE_MASK              0x10000
#define CONST_TGEGC_BUFF_DAMAGE_INTERNAL                         963
#define CONST_TGPAWN_THANATOS_EXECUTION_GOD_FX_ID                3184
#define CONST_TG_DEVICEFORM_MELEE                                2
#define CONST_TG_DEVICEFORM_BASIC                                4
#define CONST_TGEGC_AOKUANG_DELAYED_KNOCKUP_STUN_NOKILL          10943
#define CONST_IDLE_STATE_TIMING                                  1
#define CONST_TGPAWN_ULLR_BOW_MESH_ID                            4343
#define CONST_IDLE_STATE_ON                                      2
#define CONST_TGDEVICEFORM_OLORUN_A01_TARGETER_FX_ID             21106
#define CONST_TGCM_NA                                            119
#define CONST_TGCM_SUBTRACT                                      70
#define CONST_TGCM_PERC_INCREASE                                 68
#define CONST_NOX_ULT_HIT_1_SITUATIONAL                          11255
#define CONST_TGCM_PERC_DECREASE                                 69
#define CONST_TGEGC_ERLANG_SHEN_NINE_TURNS_BLESSING_MARK         15111
#define CONST_TG_ROOT_GROUNDSPEED                                10000
#define CONST_TGEGT_NEWEST                                       156
#define CONST_TGEGT_STRONGEST                                    157
#define CONST_TGEGT_OLDEST                                       874
#define CONST_TGEGT_STACK_IN_PLACE_INSTIGATOR                    10821
#define CONST_TGEGT_STRONGEST_BEFORE_NEWEST                      10886
#define CONST_TGEGC_GENERAL_BUFF                                 775
#define CONST_TGEGC_VULCAN_BACKFIRE_MARK                         10673
#define CONST_TGEGC_SLOW                                         10048
#define CONST_TGEGC_STUN                                         10049
#define CONST_TGPAWN_JINGWEI_OFFHAND4_LANDING_ID                 12865
#define CONST_TGEGC_MESMERIZE                                    10438
#define CONST_TGEGC_KNOCKBACK                                    10052
#define CONST_TGEGC_ROOT                                         10050
#define CONST_ARES_TETHER_MAXIMUM_DISTANCE                       150.0f
#define CONST_TGEGC_DISARM                                       10423
#define CONST_TGEGC_CRIPPLE                                      10585
#define CONST_TGEGC_FEAR_OR_PANIC                                10051
#define CONST_TGEGC_PILLAR_STUN                                  16585
#define CONST_TGEGC_MADNESS                                      16743
#define CONST_TGEGC_SHIELD_HEALTH                                10795
#define CONST_TGEGC_BANISH                                       16598
#define CONST_CU_CHULAINN_WAR_YELL_DEVICE                        14586
#define CONST_TGEGC_SUSPENDED                                    16916
#define CONST_TGEGC_YMIR_FREEZE                                  10027
#define CONST_TGEGC_ANHUR_SLOW                                   10435
#define CONST_TGPID_TGPAWN_GOD95_ULT_POSTPROCESS_REF             16028
#define CONST_TGPAWN_NUWA_AOEINHAND_DEV_ID                       9455
#define CONST_TGEGC_ARES_SEARING_FLESH                           10448
#define CONST_TGEGC_TOWER_BUFF                                   10453
#define CONST_TGEGC_JUMONG_COMBO_BUFF                            10461
#define CONST_TGEGC_LOKI_STIM_BUFF                               10463
#define CONST_TGPAWN_XINGTIAN_PASSIVE_BUFF_SITUATIONAL           11283
#define CONST_TGEGC_LOKI_VANISH_BUFF                             10464
#define CONST_MAX_REPLICATED_TRANSACTIONS                        32
#define CONST_TGPAWN_KNIGHT_3A_PROT_SHRED_CATEGORY_CODE          17421
#define CONST_TGEGC_LOKI_STEALTH                                 10465
#define CONST_TGEGC_NEITH_PATH_OF_THE_HUNTER_HEAL_BUFF           10568
#define CONST_TGEGC_VULCAN_PASSIVE_TURRET_SURVIVAL_BUFF          10564
#define CONST_TGEGC_CAMAZOTZ_DEADLY_BITE_GRAB                    15177
#define CONST_TGGAME_MAX_TEAM                                    2
#define CONST_TGEGC_VULCAN_ULTIMATE_TURRET_SURVIVAL_BUFF         10563
#define CONST_TGEGC_VULCAN_EXHAUSTED_DEBUFF                      10569
#define CONST_TGPRI_BOT_STORE_MAX                                6
#define CONST_TGEGC_XBALANQUE_APOCALYPSE_SHROUD                  10532
#define CONST_TGEGC_APOLLO_SERENADE                              10617
#define CONST_TGEGC_FENRIR_BITE                                  10628
#define CONST_TGEGC_FENRIR_BITE_BUFF                             10629
#define CONST_FX_SCALE_BY_RADIUS                                 746
#define CONST_TGEGC_FENRIR_HOWL_BUFF                             10630
#define CONST_TGEGC_KALI_BLEED                                   10631
#define CONST_TGEGC_KALI_RAGE                                    10632
#define CONST_TGEGC_KALI_INCENSE                                 10727
#define CONST_TGEGC_ISIS_DEATHWARD                               10644
#define CONST_TGPAWN_BARONSAMEDI_PSV_NIL_HYSTERIA_SITUATIONAL_TYPE 17154
#define CONST_TGEGC_CHRONOS_FAST_BUFF                            10654
#define CONST_TGPAWN_THANATOS_HARVESTER_BALLMESH_OTHER_ID        3853
#define CONST_TGEGC_FURIOUS_MONKEY_CRIT                          10656
#define CONST_TGEGC_SLOW_EXPOSE_EVIL                             10669
#define CONST_TGPID_TGPAWN_GOD95_ULT_FLYING_POSTPROCESS_RES_ID   44631
#define CONST_TGEGC_RAIJIN_RAIJU_REVEAL                          16663
#define CONST_TGEGC_THANATOS_SCENT_OF_DEATH_BASE                 10686
#define CONST_TGEGC_THANATOS_SCENT_OF_DEATH_EXTRA                10687
#define CONST_TGEGC_SUNWUKONG_PASSIVE                            10696
#define CONST_GT_USE_ABILITY                                     105
#define CONST_TGEGC_NUWA_STEALTH                                 10716
#define CONST_TGPAWN_RAIJIN_OFFHAND4_BEAT3_ID                    12639
#define CONST_TGEGC_NEMESIS_PASSIVE_VICTIM_HIT                   10761
#define CONST_TGEGC_KUMBHAKARNA_SLEEP                            10780
#define CONST_TGEGC_ULLR_BOW_STIM                                10785
#define CONST_TGEGC_OSIRIS_SICKLE_SLOW                           10790
#define CONST_TGEGC_FULLHEALTH_MOVEMENT_BUFF                     10791
#define CONST_TGPAWN_MEDUSA_SITUATIONAL_NUM3_HIT                 11074
#define CONST_TGPAWN_TYR_D_1_STAGE1_SUB_ID                       9027
#define CONST_TGEGC_JANUS_EXTRA_DAMAGE                           10810
#define CONST_TGEGC_RAM_CIRCLE_DEBUFF                            10818
#define CONST_TGEGC_SERQET_COBRAS_KISS                           10838
#define CONST_TGPAWN_KALI_MARKED_LOWHEALTH_SITUATIONALTYPE       10912
#define CONST_TGEGC_CABRAKAN_2_BUFF                              10868
#define CONST_TGEGS_ACTIVE                                       2
#define CONST_TGEGC_GOD95_PSV_EXPLOSION_PRIMED                   17107
#define CONST_TGEGC_OSIRIS_SICKLE_STRIKE                         10872
#define CONST_TGPAWN_RATATOSKR_MAX_SKIN_COUNT                    32
#define CONST_TGEGC_ATHENA_BASIC_ATTACK_ABSORB                   10641
#define CONST_TGEGC_THYRSUS                                      10896
#define CONST_TGEGC_CAMAZOTZ_VAMPIRE_BATS_VICTIM                 15213
#define CONST_TGEGC_ARACHNE_TRAIL_SLOW                           10902
#define CONST_TGEGC_ARACHNE_WEB                                  17380
#define CONST_TGPAWN_JORM_SPLINE_RESID                           51264
#define CONST_TGPAWN_NIKE_A04_ID                                 13649
#define CONST_TGEGC_KALI_MARKED                                  10909
#define CONST_TGPAWN_BACCHUS_THIRSTY_MIN                         0.0f
#define CONST_TGEGC_AOKUANG_WILDSTORM_DEBUFF                     10926
#define CONST_TGEGC_NOX_DARKNESS_DEBUFF                          10939
#define CONST_TGEGC_AOKUANG_DELAYED_KNOCKUP_STUN                 10942
#define CONST_TGEGC_HOUYI_GOLDEN_CROW_MARK                       11044
#define CONST_TGEGC_CRIT_BLOCKER                                 11057
#define CONST_TGEGC_MEDUSA_ULT_STUN                              11084
#define CONST_TGEGC_RATATOSKR_TOPAZ_ACORN_TRIGGER                11196
#define CONST_TGEGC_KHEPRI_ABDUCTION                             11238
#define CONST_TGEGC_XBALANQUE_POISON_DARTS                       11247
#define CONST_TGEGC_NEZHA_SASH_STUN                              11254
#define CONST_TGEGC_AHMUZENCAB_SWARM                             10711
#define CONST_TGEGC_NOX_SHADOW_LOCK                              11258
#define CONST_TGEGC_NOX_SHADOW_STEP_ATTACHED                     11245
#define CONST_TGPAWN_TOTEM_PEP_MAX_TASKFORCES                    4
#define CONST_NO_RESPAWN_TIME_SEC                                99
#define CONST_LOW_PRIORITY_REMINDERS_SECS                        120.f
#define CONST_TGEGC_XINGTIAN_IGNITE                              11282
#define CONST_TGEGC_XINGTIAN_PASSIVE_BUFF_STACKS                 11284
#define CONST_TGEGC_SOL_COOLDOWN                                 11303
#define CONST_CH06_MAX_ROUND_STATS                               10
#define CONST_TGEGC_SOL_DECAYLOCK                                11306
#define CONST_TGEGC_SOL_DECAY                                    11307
#define CONST_TALARIA_BUFF_DEPLOY_ID                             969
#define CONST_TGEGC_PET_TARGET_MINOR                             11353
#define CONST_TGEGC_RATATOSKR_THISTLETHORN_DEBUFF                17902
#define CONST_TGEGC_PET_TARGET_MAJOR                             11354
#define CONST_REFRESH_STACK                                      3
#define CONST_TGPAWN_GANESHA_A01_ID                              14347
#define CONST_TGEGC_HERA_ARGUS_SLAM                              17301
#define CONST_TGEGC_TAINTED_AMULET_HEAL                          17972
#define CONST_TGPAWN_HACHIMAN_OFFHAND4_EXPLOSION_ID              14804
#define CONST_TGEGC_SUSANO_DEV3_STACKS                           11424
#define CONST_TGPAWN_ATHENA_STRIKE_FX                            2761
#define CONST_TGEGC_FAFNIR_DRAGON                                15088
#define CONST_TGPAWN_GANESHA_A03_STUN_CATEGORY_CODE              15488
#define CONST_TGEGC_FAFNIR_TRANSFORMING                          15102
#define CONST_TGEGC_ERLANG_SHEN_NINE_TURNS_BLESSING_SKILL        15110
#define CONST_TGEGC_ERLANG_SHEN_SPOT_WEAKNESS_STIM               15133
#define CONST_TGEGC_TERRA_MOTHER_EARTH_BUFF                      15112
#define CONST_TGEGS_EMPTY_REP                                    4
#define CONST_TGEGC_FREYA_USE_RANGED                             15117
#define CONST_TGEGC_CAMAZOTZ_SCREECH_BUFF                        15168
#define CONST_TGPROJ_OLORUN_DEV1_INVALID_MIN_RANGE               1.0f
#define CONST_TGEGC_CAMAZOTZ_SIPHON_POWER_LOCK                   15172
#define CONST_TGEGC_CAMAZOTZ_SIPHON_POWER_VICTIM                 15175
#define CONST_CONTRIBUTION_BUFFER                                0.75f
#define CONST_TGEGC_OLORUN_TRIGGER_DEV_3                         17636
#define CONST_TGEGC_CAMAZOTZ_VAMPIRE_BATS_LOCK                   15211
#define CONST_TGEGC_NIKE_A04_ARMOR                               15278
#define CONST_TGEGC_RACER_SPEED_BOOST                            15336
#define CONST_TGEGC_KUZENBO_SUMO_PUSH                            15359
#define CONST_TGEGC_G86_POLYMORPH                                15389
#define CONST_TGEGC_HERCULES_DEV3                                15417
#define CONST_TGEGC_KUZENBO_WATERY_GRAVE_KNOCKBACK               15435
#define CONST_TGEGC_DAJI_TORTURE_BLADES_BLEED                    15534
#define CONST_TFT_FRIENDLY                                       10132
#define CONST_TGEGC_HACHIMAN_A02_ABSORB                          16677
#define CONST_TGEGC_HACHIMAN_A02_REACTION                        16655
#define CONST_BIG_DAMAGE_DEPLOY_ID                               952
#define CONST_POWER_SCALING_ABILITY_SIZE                         10
#define CONST_TGEGC_DISCORDIA_CONTEST_WINNER                     16700
#define CONST_TGEGC_DISCORDIA_AOE                                17124
#define CONST_TGEGC_GOD95_A02_STIM                               17098
#define CONST_TGEGC_WIZARD_C_SLOW                                17377
#define CONST_TGEGC_JORMUNGANDR_UNDERGROUND_VISION               17440
#define CONST_TGEGC_JORMUNGANDR_SONAR_REVEAL                     17441
#define CONST_TGEGC_JORMUNGANDR_BONUS_DAMAGE                     17452
#define CONST_TGEGC_HORUS_PSV_CATEGORY_CODE                      17484
#define CONST_TGEGC_HORUS_ALT_AUTO_CATEGORY_CODE                 17488
#define CONST_TGEGC_DYNASTY_PLATE_HELM_BUFF                      17527
#define CONST_TGEGC_SET_PSV_BUFFED_CATEGORY_CODE                 17547
#define CONST_TGEGC_SET_A01_REDUCTION_CATEGORY_CODE              17539
#define CONST_TGITEM_DEFAULT_RESERVE_COUNT                       100
#define CONST_TGEGC_SET_A03_BUFF_CATEGORY_CODE                   17550
#define CONST_TGEGC_SET_A04_MARKED_CATEGORY_CODE                 17537
#define CONST_TGEGC_ARONDIGHT_SELF_BUFF                          17707
#define CONST_TGEGC_SET_A04_RELOAD_CATEGORY_CODE                 17538
#define CONST_TGEGC_SET_CLONE_POSTURE_CATEGORY_CODE              17544
#define CONST_TGEGC_PERSEPHONE_PASSIVE_STACKS                    17662
#define CONST_TGEGC_ENTRAP                                       17695
#define CONST_TGEGC_THOR_ANVIL_OF_DAWN_LIGHTNING_BUFF            17699
#define CONST_TGPAWN_HACHIMAN_A01_ROOT_CATAGORY_CODE             16690
#define CONST_TGEGC_NIKE_DEV_2_SHIELD_TRIGGER                    17705
#define CONST_TGEGC_ARONDIGHT_ENEMY_DEBUFF                       17708
#define CONST_TGEGC_MYRDDIN_SELF_BUFF                            17712
#define CONST_TGEGC_HEIMDALLR_A04_STUN                           17756
#define CONST_TGEGC_HEIMDALLR_A04_BANISH                         17757
#define CONST_TGEGC_AHPUCH_DEV3_DOT                              11103
#define CONST_TGEGC_HEIMDALLR_A04_TUMBLE                         17801
#define CONST_TGPAWN_TERRA_PASSIVE_ID                            13149
#define CONST_TGEGC_BASTET_CAT_INHAND_REDUCTION                  17832
#define CONST_TGEGC_DEPTHZY_TSTACKS                              17865
#define CONST_TGEGC_DEPTHZY_ISTATE                               17866
#define CONST_TGEGC_LOKI_POISON_STACKS                           17869
#define CONST_CH08_GOO_FX_BASIC                                  15689
#define CONST_TGEGC_DEPTHZY_A01_DEBUFF                           17888
#define CONST_TGEGC_DEPTHZY_A02_PULSE_CC                         17890
#define CONST_TGEGC_TSUKUYOMI_INHAND_DARK_MOONLIGHT              17908
#define CONST_TGEGC_LOKI_POISON_BLIND                            17903
#define CONST_TGPID_TGPAWN_FENRIR_MAUL_BONUS_DMG_SUB_ID          8911
#define CONST_TGEGC_RATATOSKR_DART_INHAND_BUFF                   17914
#define CONST_TGEGC_DANZABUROU_LIFETIME_SCALING                  17949
#define CONST_TGPAWN_SET_A03_TELEPORT_PROJ_ID                    1774
#define CONST_TGEGC_DANZABUROU_A02_TAUNT                         17938
#define CONST_TGEGC_INFUSED_SIGIL                                17985
#define CONST_TGEGC_DIALOGUE                                     17430
#define CONST_TGEGC_BULWARK_OF_HOPE                              10555
#define CONST_TGEGC_S8_GILDED_ARROW                              17973
#define CONST_TGEGC_JUNGLE_BUFF                                  10667
#define CONST_DEFAULT_MAX_EFFECT_STACKS                          100
#define CONST_TGST_HIGHEST_VALUE                                 10130
#define CONST_TGST_IN_HAND                                       10131
#define CONST_TGST_ITEM_POWER                                    10552
#define CONST_REVIVE_FX_ID                                       6725
#define CONST_TGST_CUSTOM_POWER                                  15358
#define CONST_CONTRIBUTION_BUFFEE                                0.25f
#define CONST_AIE_TIDI_PROXY_EFFECT_GROUP_ID                     54986
#define CONST_AIE_STUN_PROXY_EFFECT_GROUP_ID                     33431
#define CONST_AIE_SELFEXECUTE                                    11
#define CONST_AIE_TIDI                                           10
#define CONST_AIE_PROPERTY                                       6
#define CONST_AIE_HEALTH                                         1
#define CONST_AIE_DAMAGE                                         0
#define CONST_REFRESH_ADD                                        2
#define CONST_TGEGS_FLASH_REP                                    3
#define CONST_TGPAWN_JINGWEI_OFFHAND3_ID                         12764
#define CONST_TGEGS_ACTIVE_REP                                   1
#define CONST_TGPAWN_JORMUNGANDR_EMERGE_SHAKE_FX_ID              20079
#define CONST_TGPAWN_KUZENBO_A03_ID                              14166
#define CONST_TGEA_MAX_EFFECTS_QUEUE                             16
#define CONST_TGEA_MAX_EFFECTS                                   16
#define CONST_TG_MAX_CAPTURE_POINTS                              5
#define CONST_TG_MAX_GAME_CUSTOM_VALS                            10
#define CONST_SURRENDER_TIME_SECS                                60.0
#define CONST_SURRENDER_TIME_BETWEEN                             180.0
#define CONST_PLAYER_END_GAME_DELAY                              10.0f
#define CONST_TGPAWN_AHPUCH_DEV4_SUB_ID                          11436
#define CONST_FINISH_END_MISSION_DELAY                           300.0
#define CONST_GUARDIAN_PHASE_START                               7200.0f
#define CONST_LAST_MAN_STANDING_ACTIVITY_ID                      1909
#define CONST_COME_BACK_ACTIVITY_ID                              1912
#define CONST_MAX_GENERAL_PHYSICAL_STAT                          180.0f
#define CONST_MAX_GENERAL_DEFENSE_STAT                           228.0f
#define CONST_DOWN_TO_THE_WIRE_ACTIVITY_ID                       1914
#define CONST_TGPAWN_SUNWUKONG_DECOY_RETURN_PROJ_ID              411
#define CONST_TGAC_HYDRA_SCALE                                   14625
#define CONST_HST_CP_CAST_STACK                                  10674
#define CONST_TGAC_DIAMOND                                       14624
#define CONST_TGEGC_CHALLENGES_CTF_PREVIOUS_CARRIER_LOCKOUT      15382
#define CONST_SIEGE2_TIME_SETUP_SECS                             45.0
#define CONST_TGGAME_MULTIROUNDS_MAX_TASKFORCES                  16
#define CONST_TGPAWN_HACHIMAN_A03_V2_ID                          14933
#define CONST_TGITEM_ATTRIBUTE_PHYSICAL                          0x01
#define CONST_TGITEM_ATTRIBUTE_MAGICAL                           0x02
#define CONST_TGITEM_NEUTRAL_BIAS                                1.0f
#define CONST_GT_LEVEL_GAINED                                    1
#define CONST_GT_HIGH_GOLD                                       79
#define CONST_GT_TARGETED                                        102
#define CONST_GT_LOW_HEALTH                                      103
#define CONST_GT_LOW_MANA                                        107
#define CONST_HEALTH_DEPLOY_ID                                   468
#define CONST_GT_HIT_BASIC                                       106
#define CONST_TGPAWN_CAMAZOTZ_A03_ID                             13562
#define CONST_MIN_TIME_ON_TOP                                    5.f
#define CONST_GTT_HUD                                            10634
#define CONST_HEIM_ULT_COUNT                                     1
#define CONST_TGPRI_BOT_INV_MAX                                  10
#define CONST_TGPRI_BOT_INV_MAX_DOUBLE                           20
#define CONST_TG_SECOND_TRINKET_UPGRADE_LEVEL                    12
#define CONST_AOKUANG_KINGS_SWORD_MASK                           0x00000010
#define CONST_TGEGC_AWILIX_FIRST_STRIKE                          10953
#define CONST_BELLONA_SHIELD_SCOURGE_HEAL_SITUATIONAL            11067
#define CONST_HST_CP_CAST_ACTIVE                                 10675
#define CONST_PERSEPHONE_PSV_TRACK_COUNT                         10
#define CONST_TGPAWN_SET_PSV_BUFFED_EFFECT_ID                    57344
#define CONST_TGINVENTORY_WIZARD_PSV_MAX_INFO_COUNT              5
#define CONST_TG_NAV_ROUTE_INDICATOR_SPINUP_FX_ID                0
#define CONST_STINGER_EFFECT_GROUP_CATEGORY_CODE                 10714
#define CONST_TGPID_TGPAWN_ISIS_DISPELMAGIC_FX_ID                2758
#define CONST_STINGER_DEPLOYABLE_ID                              520
#define CONST_TGPAWN_AHPUCH_PASSIVE_ID                           11361
#define CONST_TGPAWN_AHPUCH_DEV3_SUB_ID                          11379
#define CONST_MANA_DEPLOY_ID                                     463
#define CONST_BIG_MANA_DEPLOY_ID                                 953
#define CONST_TGPAWN_APEP_OFFHAND_01_BEAM_FX                     11010
#define CONST_TGPID_TGPAWN_APOLLO_SKYJUMP_SUB_ID                 8813
#define CONST_TGPID_TGPAWN_APOLLO_SKYJUMP_KNOCKBACK_SUB_ID       8810
#define CONST_TGPID_TGPAWN_APOLLO_SKYJUMP_BEAM_FX_ID             2638
#define CONST_TGPID_TGPAWN_APOLLO_AGENT_FUSELAGE_ID              4603
#define CONST_TGEGC_ARACHNE_COCOON                               10889
#define CONST_TGPM_REMEMBER_PLAYER_ATTACKED_TIME                 4
#define CONST_TGPID_ARES_SPEED_EFFECT_GROUP_CATEGORY             10444
#define CONST_TGPID_ARES_SLOW_EFFECT_GROUP_CATEGORY              10445
#define CONST_TGPAWN_BARONSAMEDI_A02_ID                          16005
#define CONST_TGPAWN_ARTEMIS_RECON_SKIN_ID                       12786
#define CONST_TGPAWN_ARTEMIS_SPACE_SKIN_ID                       15866
#define CONST_TGPID_BOAR_CHARGE_SUB_ID                           8136
#define CONST_TGEGC_PERSEPHONE_REGROWTH                          17725
#define CONST_TGPAWN_ATHENA_LEAPING_LUNGE_SUB_ID                 8890
#define CONST_OSIRIS_TETHER_FX                                   4064
#define CONST_TGPAWN_ATHENA_ULT_SHOOTER_ID                       8972
#define CONST_TGDEVICE_ISIS_PASSIVE_ID                           8900
#define CONST_TGPAWN_ATHENA_ULT_EXPLOSION_SUB_ID                 8932
#define CONST_TGPAWN_ATHENA_ALL_OUT_FRIENDLY_REFLECT_DAMAGE_SUB_ID 8942
#define CONST_MAX_POWER_LEVEL                                    15
#define CONST_TGPAWN_BACCHUS_DRUNK_MODE_NUM                      3
#define CONST_TGPAWN_BACCHUS_TIPSY_MIN                           30.0f
#define CONST_TGPAWN_BACCHUS_SMASHED_MIN                         60.0f
#define CONST_TGPAWN_BACCHUS_THIRSTY_FX_ID                       2316
#define CONST_TGPAWN_BACCHUS_TIPSY_FX_ID                         2317
#define CONST_TGPID_TRUE_DAMAGE_SUB_ID                           8188
#define CONST_TGPAWN_BARONSAMEDI_PSV_HYSTERIA_CATEGORY_CODE      17108
#define CONST_TGPAWN_BARONSAMEDI_PSV_MAX_HYSTERIA_SITUATIONAL_TYPE 17135
#define CONST_TGPAWN_BARONSAMEDI_DEV3_SNAKE_CATEGORY_CODE        17113
#define CONST_TGPAWN_BARONSAMEDI_DEV3_SNAKE_WARNING_CATEGORY_CODE 17159
#define CONST_TGPAWN_BARONSAMEDI_DEV3_SNAKE_ATTACK_SITUATIONAL_TYPE 17155
#define CONST_TGPAWN_BARONSAMEDI_DEV4_PULL_FX_SITUATIONAL_TYPE   17182
#define CONST_TGPAWN_BARONSAMEDI_DEV4_MAIN_HIT_CATEGORY_CODE     17190
#define CONST_TGPAWN_BARONSAMEDI_DEV4_MAIN_HIT_PCT_CATEGORY_CODE 17195
#define CONST_TGPAWN_BARONSAMEDI_COFFIN_ID                       10465
#define CONST_TGPAWN_BARONSAMEDI_SNAKE_ID                        10443
#define CONST_TG_PAWN_CHRONOS_HIT_SITUATIONAL_QUAD_4             10664
#define CONST_TGPAWN_BARONSAMEDI_AUTO_ID                         16008
#define CONST_TGPAWN_BARONSAMEDI_A01_ID                          16003
#define CONST_TGPAWN_BARONSAMEDI_A04_SHOOTER_ID                  16013
#define CONST_TGPAWN_BARONSAMEDI_A04_EJECT_ID                    16037
#define CONST_TGPAWN_CABRAKAN_DEV2_MESH_ID                       4743
#define CONST_TGPAWN_CABRAKAN_DEV1_STUN_CODE                     10880
#define CONST_TGPAWN_CAMAZOTZ_MESH_ID                            6899
#define CONST_TgPawn_Camazotz_TGEGC_CAMAZOTZ_VAMPIRE_BATS_BUFF   15214
#define CONST_TGPAWN_CAMAZOTZ_A04_IDb                            13505
#define CONST_TGPAWN_CAMAZOTZ_A02_IDc                            13573
#define CONST_TGPAWN_CAMAZOTZ_Psv_ID                             13389
#define CONST_LOKI_EXTRA_DEATH_MESH_ID                           5780
#define CONST_TGPAWN_ADVENTURE_DRAUGR_SEAWEED_ID                 3424
#define CONST_TGPAWN_ADVENTURE_DRAUGR_SEAWEEDMANAGER_ID          15240
#define CONST_TGPAWN_ADVENTURE_DRAUGR_NIGHTMARE_SEAWEED_ID       3459
#define CONST_TGPAWN_GOD95_A03_ID                                15870
#define CONST_TGPAWN_DOM_CYCLOPS_SPEED_TEAM_BUFF_ID              13024
#define CONST_TGPAWN_ADVENTURE_DRAUGR_NIGHTMARE_SEAWEEDMANAGER_ID 15454
#define CONST_CH06_TRAPPER_PULL_BEAM_FX_ID                       15342
#define CONST_CHRONOS_PASSIVE_TIMED_STACK_SITUATIONAL            16660
#define CONST_TGPAWN_TOTEM_MEDUSA_MAX_TASKFORCES                 3
#define CONST_TG_PAWN_CHANGE_AVOID_HEAL_FX_ID                    2935
#define CONST_TGPAWN_CHIRON_INHAND_ID                            11974
#define CONST_TGPAWN_GOD94_A03_SHOOTER_ID                        15681
#define CONST_TGPAWN_NIKE_A02_A04_COMBO_SITUATIONAL_TYPE         15288
#define CONST_TGPAWN_CHIRON_TRAINING_EXERCISE_ID                 11944
#define CONST_TGPAWN_CHIRON_SPREADSHOT_SHOOTER_ID                12020
#define CONST_TGPAWN_CHIRON_CHARGE_LONG_ID                       11983
#define CONST_TGPAWN_CHIRON_ULTIMATE_ID                          11990
#define CONST_TGPAWN_CU_CHULAINN_KNOCKBACK_BUFF_DIST             40.0f
#define CONST_TGPAWN_CHIRON_ULTIMATE_SHOOTER_ID                  12022
#define CONST_TGPAWN_CHIRON_PASSIVE_ID                           12034
#define CONST_TGPAWN_CHIRON_REVIVE_FX_ID                         7702
#define CONST_TGPID_TGPAWN_CHRONOS_REWIND_MESH_ID                3653
#define CONST_TGPID_TGPAWN_CHRONOS_HASTEN_WING_FX_ID             2889
#define CONST_TGPID_TGPAWN_CHRONOS_PHASESHIFT_CHARGED_FX_1_ID    0
#define CONST_TGPID_TGPAWN_CHRONOS_PHASESHIFT_CHARGED_FX_2_ID    0
#define CONST_TGPID_TGPAWN_CHRONOS_PHASESHIFT_MANA_QUADRANT      1
#define CONST_TG_PAWN_CHRONOS_HIT_SITUATIONAL_QUAD_2             10662
#define CONST_TGPAWN_KNIGHT_4B_FINAL_SMASH_CATEGORY_CODE         17366
#define CONST_TG_PAWN_CHRONOS_HIT_SITUATIONAL_QUAD_5             10665
#define CONST_CU_CHULAINN_INHAND_DEVICE                          14577
#define CONST_TGPAWN_KNIGHT_DEVICEA_A01_ID                       16595
#define CONST_TGPID_TIMED_BOMB_SUB_ID                            8226
#define CONST_TGPID_TIMED_BOMB_INSTANT_EFFECT_GROUP_ID           29621
#define CONST_TGPAWN_DISCORDIA_A01_ID                            15063
#define CONST_TGPAWN_ULLR_A4_MELEE                               9801
#define CONST_TGPAWN_GOD94_A02_CATEGORY_CODE                     16915
#define CONST_TGPAWN_DISCORDIA_A02_ID                            15320
#define CONST_TGPAWN_DISCORDIA_MESH_ID                           9329
#define CONST_FAFNIR_DRAGON_MESH                                 6505
#define CONST_YMIR_NUCLEAR_SHARDS_ID                             4625
#define CONST_TGPID_TGPAWN_FENRIR_MAUL_DAMAGE_SUB_ID             8838
#define CONST_TGPID_TGPAWN_FENRIR_BITE_INHAND_ID                 8823
#define CONST_TGPID_TGPAWN_FENRIR_HOWL_AOE_SUB_ID                8888
#define CONST_TGG72_SITUATIONAL_A1                               11315
#define CONST_TGG72_SITUATIONAL_A2                               11316
#define CONST_TGG72_SITUATIONAL_A2_INIT                          11341
#define CONST_TGG72_SITUATIONAL_A3_INIT                          11342
#define CONST_TGG72_SITUATIONAL_A1_PER                           11350
#define CONST_TGEGC_G72_CHARGE                                   11322
#define CONST_TGEGC_G72_PASSIVE_COUNT                            11327
#define CONST_TGPAWN_G86_EGST_SEASONAL_SUMMER                    15387
#define CONST_TGPAWN_GANESHA_A02_POSE_SITUATIONAL_TYPE           15492
#define CONST_TGPAWN_GANESHA_A02_DAMAGE_OVERRIDE_CATEGORY_CODE   15491
#define CONST_TGPAWN_GANESHA_A03_HIT_SITUATIONAL_TYPE            15474
#define CONST_TGPAWN_GANESHA_OUTER_BARRIER_SITUATIONAL_TYPE      15467
#define CONST_TGPAWN_GANESHA_OUTER_BARRIER_CATEGORY_CODE         15468
#define CONST_TGPAWN_SET_A03_SUB_ID                              17206
#define CONST_TGPAWN_GANESHA_A03_ID                              14346
#define CONST_TGPAWN_GOD94_A04_CATEGORY_CODE                     16928
#define CONST_TGPAWN_PELE_A03_CATEGORY_CODE                      17211
#define CONST_TGPAWN_GOD94_A04_SELF_CATEGORY_CODE                16933
#define CONST_TGPAWN_GOD94_PSV_ID                                15678
#define CONST_TGPAWN_PELE_PSV_ID                                 16200
#define CONST_TGPAWN_GOD94_A01_ID                                15676
#define CONST_TGPAWN_GOD94_A02_ID                                15677
#define CONST_TGPAWN_GOD94_A03_ID                                15679
#define CONST_TGPAWN_PELE_A04_ID                                 16204
#define CONST_TGPAWN_GOD94_A04_ID                                15680
#define CONST_TGPAWN_PELE_A03_ID                                 16203
#define CONST_TGPAWN_GOD95_A02_ID                                15860
#define CONST_TGPAWN_GOD95_A02_SUB_ID                            15881
#define CONST_TGPAWN_GOD95_A04_ID                                15909
#define CONST_TGPAWN_GOD95_A04_SHOOTER_ID                        15910
#define CONST_TGPAWN_GOD95_MESH_ID                               10064
#define CONST_TGPID_TGPAWN_GOD95_ULT_POSTPROCESS_RES_ID          44574
#define CONST_TGPAWN_GUAN_YU_V2_ULT_DISMOUNT_ID                  9193
#define CONST_TGPAWN_GUAN_YU_V2_ULT_SHOOTER_ID                   9189
#define CONST_GUARDIAN_SEASON5_DEATH_MESH_2                      9747
#define CONST_TGPAWN_HACHIMAN_BOW_MESH_ID                        9328
#define CONST_TGPAWN_HACHIMAN_Psv_ID                             14793
#define CONST_TGPAWN_HACHIMAN_A01_ID                             14791
#define CONST_TGPAWN_HACHIMAN_A02_REACTION_ID                    14930
#define CONST_TGPAWN_HACHIMAN_A04_ID                             14802
#define CONST_TGPID_DEVOUR_SOULS_SUB_ID                          7477
#define CONST_TGPID_CLOUD_FX_ID                                  1763
#define CONST_TGPAWN_HERA_POLYMORPH_MESH_ID                      10659
#define CONST_TGPAWN_HERA_PORTAL_PROJ_ID                         1753
#define CONST_TGPAWN_RAIJIN_OFFHAND2_SUB_ID                      12609
#define CONST_TGPAWN_HERCULES_BOULDER_MESH_ID                    3396
#define CONST_TGDEVICE_HORUS_DEV4_BLINK_ID                       20991
#define CONST_TGEGC_IZANAMI_STEALTH                              15159
#define CONST_TGEGC_IZANAMI_ICY_GRASP                            15171
#define CONST_TGEGC_IZANAMI_SLOW                                 15182
#define CONST_IZANAMI_BITING_STRIKE_PAC_MESH                     6963
#define CONST_TGPAWN_JINGWEI_OFFHAND1_ID                         12763
#define CONST_TGPAWN_JORMUNGANDR_SUBMERGE_SHAKE_FX_ID            20080
#define CONST_TGPAWN_JORMUNGANDR_BELLOW_FX_ID                    19709
#define CONST_KALDR_DAMAGE_HISTORY_COUNT                         16
#define CONST_TGEGC_KALDR_HEAL                                   11411
#define CONST_TGEGC_KALDR_BUFF                                   11414
#define CONST_TGPAWN_KALIV2_BLOODLASH_MESH_ID                    4002
#define CONST_TGPAWN_KALI_MARKED_SITUATIONALTYPE                 10911
#define CONST_TGPAWN_KALI_MARKED_NOTIFY_SITUATIONALTYPE          15267
#define CONST_TGPAWN_KNIGHT_DEVICEB_A02_SUB_ID                   16609
#define CONST_TGPAWN_KNIGHT_DEVICEB_A02_ID                       16608
#define CONST_TGPAWN_KNIGHT_PASSIVE_STACKS                       17304
#define CONST_TGPID_KUKULKAN_ULTIMATE_KNOCKBACK_SUB_ID           7989
#define CONST_TGPAWN_KUZENBO_Psv_ID                              14131
#define CONST_TGPAWN_KUZENBO_A02_ID                              14165
#define CONST_TGPAWN_KUZENBO_A04_ID                              14302
#define CONST_TGPAWN_KUZENBO_MESH_ID                             7435
#define CONST_TGPAWN_KUZENBO_SHELL_SPIKES_MESH_ID                7549
#define CONST_TGPAWN_MEDUSA_OFFHAND1_MAX_COUNT                   4
#define CONST_TGPAWN_MERCURY_RUNEXE_SONICBOOM_FX                 4714
#define CONST_TGPAWN_MEDUSA_SITUATIONAL_NUM3_SELF                11075
#define CONST_TGPAWN_MERCURY_NUM1_SUBDEVICE_ID                   9267
#define CONST_TGPAWN_MERCURY_SITUATIONAL_NUM3_HIT_TARGET         10688
#define CONST_TGPAWN_MERCURY_SITUATIONAL_NUM3_THROW              10690
#define CONST_TGPAWN_MERCURY_WHIRLWIND_TARGETER_FX_ID            0
#define CONST_TGPAWN_MERCURY_ULT_SHOOTER_ID                      9222
#define CONST_TGPAWN_MERCURY_ULT_DEPLOYABLE_ID_3                 495
#define CONST_TGPAWN_MERCURY_ULT_DEPLOYABLE_ID_5                 497
#define CONST_TGPAWN_NEITH_ULT_WEAPON_ID                         8673
#define CONST_TGPID_TGPAWN_NEZHA_ULT_POSTPROCESS_REF             13213
#define CONST_TGPID_TGPAWN_NEZHA_SASH_PAC_MESH_ID                6293
#define CONST_TGPID_TGPAWN_NEZHA_LOTUS_MESH_ID                   3566
#define CONST_TGPID_TGPAWN_NEZHA_WINDFIRE_QTE_SUB_ID             8843
#define CONST_TGPID_TGPAWN_NEZHA_WINDFIRE_LANDED_BLAST_SUB_ID    8803
#define CONST_TGPID_TGPAWN_NEZHA_WINDFIRE_HIT_COUNT              3
#define CONST_TGPAWN_NIKE_ULT_WINGS_MESH_ID                      7299
#define CONST_TGPAWN_NIKE_A03_ID                                 13682
#define CONST_TGPAWN_NIKE_A02_ID                                 13647
#define CONST_TGPAWN_THANATOS_HARVESTER_SOUND_FX_ID              3175
#define CONST_TGPANW_NIKE_A04_STIMMED_SHIELD_SITUTAIONAL_TYPE    15299
#define CONST_TGPAWN_NIKE_A02_A01_COMBO_SITUATIONAL_TYPE         15286
#define CONST_NOX_PASSIVE_CANDLE_COUNT                           4
#define CONST_NOX_PASSIVE_CANDLE_FX_ID_1                         5250
#define CONST_NOX_PASSIVE_CANDLE_FX_ID_2                         8771
#define CONST_NOX_PASSIVE_CANDLE_FX_ID_3                         8772
#define CONST_NOX_PASSIVE_CANDLE_FX_ID_4                         8773
#define CONST_NOX_TGEGC_ULT_CATEGORY_CODE                        10940
#define CONST_NOX_ULT_LINK_MESH_ID                               5047
#define CONST_OSIRIS_ULT_PASSIVE_TIMER                           8.0f
#define CONST_OSIRIS_MAX_PASSIVE_TIMER                           6.0f
#define CONST_OSIRIS_TETHER_MESH                                 4376
#define CONST_TGPAWN_THANATOS_EXECUTION_OTHER_FX_ID              3201
#define CONST_OSIRIS_TETHER_MAXIMUM_DISTANCE                     35.0f
#define CONST_OSIRIS_PASSIVE_LOSS_FX                             3850
#define CONST_TGPAWN_PELE_A02_INNER_CATEGORY_CODE                17252
#define CONST_TGPAWN_PELE_A02_MIDDLE_CATEGORY_CODE               17253
#define CONST_TGPAWN_PELE_A04_BUFF_CATEGORY_CODE                 17235
#define CONST_TGPAWN_PELE_A01_ID                                 16201
#define CONST_TGFXLIGHT_MAX_SETTINGS_VALUE                       5
#define CONST_TGPAWN_PELE_A02_ID                                 16279
#define CONST_TGEGC_OBELISK_SHIELD                               15164
#define CONST_TgPawn_Phoenix_ClashV3_TGPAWN_Phoenix_ClashV3_DEATH_ID 7551
#define CONST_TGPAWN_POSEIDON_FEET_FX_ID                         2522
#define CONST_TGPID_DivineLightBlindDetonationItemID             7703
#define CONST_TGPID_DivineLightSlowDetonationItemID              7697
#define CONST_TGPAWN_RAIJIN_PASSIVE_ID                           12348
#define CONST_TGPAWN_RAIJIN_OFFHAND1_ID                          12652
#define CONST_TGPAWN_RAIJIN_OFFHAND2_ID                          12351
#define CONST_TGPAWN_RAIJIN_OFFHAND3_ID                          12352
#define CONST_TGPAWN_RAIJIN_OFFHAND4_ID                          12353
#define CONST_TGPAWN_RAIJIN_KOTO_DRUMS_ID                        12657
#define CONST_TGPAWN_RAIJIN_OFFHAND4_BEAT1_ID                    12656
#define CONST_TGPAWN_RAIJIN_OFFHAND4_BEAT2_ID                    12638
#define CONST_TGPAWN_RAIJIN_PASSIVE_EFFECT_GROUP_ID              42893
#define CONST_TGPAWN_RAIJIN_RAIJUU_MESH_ID                       6307
#define CONST_TGPAWN_RAIJIN_DRUM_CHARGED_FX_ID                   8154
#define CONST_TGPAWN_RAIJIN_V2_PASSIVE_ID                        14698
#define CONST_TGPAWN_RAIJIN_V2_OFFHAND1_ID                       14746
#define CONST_TGPAWN_RAIJIN_V2_OFFHAND2_ID                       14747
#define CONST_TGPAWN_RAIJIN_V2_OFFHAND3_ID                       14748
#define CONST_TGPAWN_RAIJIN_V2_OFFHAND4_ID                       12353
#define CONST_TGPAWN_RAIJIN_V2_OFFHAND2_SUB_ID                   12609
#define CONST_TGPAWN_TYR_D_1_SUB_ID                              9026
#define CONST_SOBEK_PASSIVE_EFFECT_GROUP_CATEGORY_CODE           10919
#define CONST_TGPAWN_RAIJIN_V2_OFFHAND4_BEAT1_ID                 12656
#define CONST_TGPAWN_RAIJIN_DEV1_SWITCH_NUM                      2
#define CONST_QuiverMaxAmmoCount                                 5
#define CONST_TGPAWN_RAM_OFFHAND3_TARGETTER_FX                   4421
#define CONST_TGPAWN_RAM_OFFHAND1_TARGETTER_FX                   4422
#define CONST_TGPAWN_RAM_IGNORE_INHAND_SLOW_TIME                 5.0f
#define CONST_TGPAWN_RATATOSKR_ULT_TARGET_SITUATIONAL            11158
#define CONST_TGPAWN_RATATOSKR_TOPAZ_SITUATIONAL                 11190
#define CONST_TGPAWN_SCYLLA_TENTACLE_BUDDY_MESH_ID               4260
#define CONST_TGPAWN_SCYLLA_ULTIMATE_LAUGH_FX_ID                 3866
#define CONST_TGPAWN_SET_CLONE_MAX                               20
#define CONST_TGPAWN_SET_PSV_ID                                  17063
#define CONST_TGPAWN_SET_A02_ID                                  17065
#define CONST_TGPAWN_SET_A03_ID                                  17205
#define CONST_TGPAWN_SET_INHAND_ID                               17064
#define CONST_TGPAWN_SET_CLONE_INHAND_1_ID                       17085
#define CONST_TGPAWN_SET_CLONE_INHAND_2_ID                       18939
#define CONST_TGPAWN_SET_CLONE_INHAND_3_ID                       18940
#define CONST_TGPAWN_TYR_A_1_STAGE3_SUB_ID                       9007
#define CONST_TGPAWN_SET_CLONE_INHAND_4_ID                       18941
#define CONST_TGPAWN_SET_DEATH_CLONE_01_MESH_ID                  11485
#define CONST_TGPAWN_SET_DEATH_CLONE_02_MESH_ID                  11486
#define CONST_TGPAWN_SET_A03_TELEPORT_INTRO_ID                   20341
#define CONST_TGPAWN_SOBEK_SITUATIONAL_ULT_IMMUNITY              10676
#define CONST_TGPAWN_SUSANO_PASSIVE_MAX                          4
#define CONST_TGPAWN_SUSANO_PASSIVE_CATEGORY_CODE                16662
#define CONST_TGPAWN_SUSANO_OFFHAND1_P2_ID                       12814
#define CONST_TGPAWN_SUSANO_OFFHAND1_P3_ID                       12812
#define CONST_TGPAWN_SUSANO_OFFHAND3_ID                          12869
#define CONST_TGPAWN_SUSANO_DEATH_ID                             6568
#define CONST_SYLVANUS_PULL_BEAM_FX_ID                           7429
#define CONST_TGPAWN_TERRA_DEV4_EFFECT_COUNT                     10
#define CONST_TGPAWN_TERRA_SHATTER_EXTEND_PASSIVE_TIME           3
#define CONST_TGPAWN_TERRA_SHATTER_ID                            13150
#define CONST_TGPAWN_TERRA_DEV3_SHATTER_ID                       13160
#define CONST_TGPAWN_TERRA_SPIKE_ARMOR_MESH_ID                   6860
#define CONST_TGPAWN_TERRA_DEATH_ID                              6904
#define CONST_TGEGC_THANATOS_PASSIVE_HEAL                        11159
#define CONST_TGPAWN_THANATOS_HARVESTER_SITUATION_GOD            10684
#define CONST_TGPAWN_THANATOS_HARVESTER_SITUATION_OTHER          0
#define CONST_TGPAWN_THANATOS_LOW_HEALTH_FX_ID                   3174
#define CONST_TGPAWN_THANATOS_HARVESTER_FX_MAX                   16
#define CONST_TGPAWN_THANATOS_EXECUTION_MAX                      16
#define CONST_TGPAWN_THANATOS_EXECUTE_LAND_FX_ID                 3083
#define CONST_TGPAWN_THANATOS_HOVERINGDEATH_STRIKE_DEV_ID        9237
#define CONST_TGPAWN_THANATOS_SCENTOFDEATH_DEV_ID                9229
#define CONST_TGPAWN_THANATOS_FLAPDOWN_TIME                      1.196f
#define CONST_TGPAWN_THANATOS_ULT_POSTPROCESS_SFX_ID             20589
#define CONST_THOR_HAMMER_SPIN_FXID                              2229
#define CONST_TGPAWN_TOTEM_CONQUEST_MAX_TASKFORCES               2
#define CONST_TGPAWN_TYR_D_BASIC_ATTACK_ID                       9088
#define CONST_TGPAWN_TYR_D_3_SUB_ID                              9031
#define CONST_TGPAWN_TYR_D_4_SUB_ID                              9152
#define CONST_TGPAWN_TYR_D_1_STAGE3_SUB_ID                       9030
#define CONST_TGPAWN_TYR_A_1_STAGE2_SUB_ID                       9006
#define CONST_TGPAWN_ULLR_AP_MELEE                               9920
#define CONST_TGPAWN_ULLR_A3_MELEE                               9887
#define CONST_TGPAWN_ULLR_A2_MELEE                               9917
#define CONST_TGPAWN_ULLR_A1_MELEE                               9891
#define CONST_TGPAWN_ULLR_MELEE_MESH_ASSEMBLY_ANIM               7879
#define CONST_INVALID_LIGHT_SCORE                                2
#define CONST_TGPAWN_ULLR_MELEE_ANIMSET_RES_ID                   15380
#define CONST_TGPID_TGPAWN_ULLR_LEAP_AOE_BLAST_SUB_ID            9874
#define CONST_VamanaGiantScaleMultiplier                         3.76f
#define CONST_VamanaGiantScaleMultiplierV2                       2.70f
#define CONST_TGPID_SPLIT_PROJECTILE_DEVICE_ID                   8523
#define CONST_TGPID_RAINING_DARTS_SUB_DEVICE_ID                  8532
#define CONST_TGPID_RAINING_POISON_DARTS_SUB_DEVICE_ID           8576
#define CONST_TGPID_APOCALYPSE_SHROUD_STUN_SUB_DEVICE_ID         8536
#define CONST_TGPID_BOLA_POWER_GLOW_FX_ID                        2893
#define CONST_TGPAWN_XINGTIAN_PASSIVE_BUFF_ID                    41566
#define CONST_TGDEVICE_XINGTIAN_ENRAGED_SITUATIONAL              11274
#define CONST_TGDEVICE_XINGTIAN_ULTSWEEP_ID                      11823
#define CONST_TGDEVICE_XINGTIAN_SKYCUTTINGAXE_ID                 13553
#define CONST_YMIR_CACODEMON_SHARDS_ID                           3286
#define CONST_YMIR_DIGIMIR_SHARDS_ID                             3641
#define CONST_YMIR_SHARDS_EXPLOSION_ID                           5245
#define CONST_TGEGC_ZEUS_DEV3_DISARM                             11275
#define CONST_TGPAWN_ZHONGKUI_FIERCEGLARE_HEAL_SUB_ID            9172
#define CONST_TGPAWN_ZHONGKUI_FIERCEGLARE_MESH_ID                3724
#define CONST_TGPAWN_ZHONGKUI_FIERCEGLARE_MAX                    16
#define CONST_TGPAWN_ZHONGKUI_MARKED_SITUATIONAL_TYPE            10680
#define CONST_TGPAWN_ZHONGKUI_BAGMORPH_CURVE_MAX                 10
#define CONST_TGPAWN_ZHONGKUI_RECALLDEMON_SHOTS                  5
#define CONST_BASE_AFK_DURATION                                  90.0f
#define CONST_INCREMENTAL_AFK_DURATION                           60.0f
#define CONST_m_fMinLookAccelSpeed                               0
#define CONST_m_fMaxLookAccelSpeed                               10.0
#define CONST_INPUT_BLOCK_TIME_WINDOW                            10.0f
#define CONST_INPUT_BLOCK_COOLDOWN_TIME                          15.0f
#define CONST_TGSKELETALMESH_OLORUN_CLONE_LEFT_MESH              11640
#define CONST_TG_ANHUR_SPACE_SKIN                                11603
#define CONST_TGPROJ_HERCULES_BOULDER_MESH_HEIGHT                -20.0f
#define CONST_MaxHitsPerJumongFanOfArrows                        3
#define CONST_TGPROJ_NEITH_WORLDWEAVER_TARGET_HIT_SOUND_FX_ID    2568
#define CONST_TG_ADVCART_STORE_MAX                               10
#define CONST_TGREPINFO_MULTIROUNDS_MAX_TEAMS                    4
#define CONST_TGPRI_PEP_ENTOURAGE_SPECIAL_UNIT_MAX               2
#define CONST_TGPRI_STORE_MAX                                    50
#define CONST_TG_MAX_PREMADE_DEPLOYS                             20
#define CONST_TG_MAX_PRIMARY_OBJECTIVES                          5
#define CONST_TG_MAX_TASK_TEAM_NUMBER                            10
#define CONST_TG_MAX_TF_CUSTOM_VALS                              10
#define CONST_TGPRI_PEP_INDEPENDENT_SPECIAL_UNIT_MAX             20
#define CONST_MERCURY_GHOST_MESH_ID                              3799
#define CONST_TGSKELETALMESH_OLORUN_CLONE_RIGHT_MESH             11642
#define CONST_FX_SCALE_BY_DAMAGE                                 745
#define CONST_FX_SCALE_ABSOLUTE                                  10677
#define CONST_INVALID_LIGHTARRAY_INDEX                           -1
#define CONST_ROTATION_FULL                                      0x10000
#define CONST_ROTATION_HALF                                      0x08000
#define CONST_ROTATION_SIXTEENTH                                 0x01000
#define CONST_RADIANS_TO_DEGREES                                 57.295779513082321600
#define CONST_DEGREES_TO_RADIANS                                 0.017453292519943296

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TgGame.AlienFXManager.FXOverlay
enum class EFXOverlay : uint8_t
{
	FXO_NONE                       = 0,
	FXO_MENU                       = 1,
	FXO_DYING                      = 2,
	FXO_EVENT                      = 3,
	FXO_MAX                        = 4
};


// Enum TgGame.TgActionPoint.eActionPointType
enum class EeActionPointType : uint8_t
{
	ACTION_NONE                    = 0,
	ACTION_RELAX_OPEN              = 1,
	ACTION_MINE_DEFAULT            = 2,
	ACTION_RELAX_WALL              = 3,
	ACTION_CONSOLE_STANDARD        = 4,
	ACTION_CONSOLE_LAB_DEFAULT     = 5,
	ACTION_GUARD_WATCH_NORMAL      = 6,
	ACTION_GUARD_WATCH_ELEVATED    = 7,
	ACTION_FACTORY_LINE_DEFAULT    = 8,
	ACTION_SNIPE                   = 9,
	ACTION_PLACE_TURRET            = 10,
	ACTION_PLACE_SHIELD            = 11,
	ACTION_PLACE_CRATE             = 12,
	ACTION_PLACE_MINE              = 13,
	ACTION_PLACE_SENSOR            = 14,
	ACTION_MAX                     = 15
};


// Enum TgGame.TgActor_DeathFog.FogFxType
enum class EFogFxType : uint8_t
{
	FOGFX_NONE                     = 0,
	FOGFX_SPHERICAL                = 1,
	FOGFX_FLAT                     = 2,
	FOGFX_MAX                      = 3
};


// Enum TgGame.TgObject.PEPRewardType
enum class EPEPRewardType : uint8_t
{
	PEPR_Lane                      = 0,
	PEPR_Independent               = 1,
	PEPR_Entourage                 = 2,
	PEPR_MAX                       = 3
};


// Enum TgGame.TgObject.ETargetAcceptedType
enum class ETargetAcceptedType : uint8_t
{
	TARGET_ACCEPTED_None           = 0,
	TARGET_ACCEPTED_Monster        = 1,
	TARGET_ACCEPTED_God            = 2,
	TARGET_ACCEPTED_GM             = 3,
	TARGET_ACCEPTED_Structure      = 4,
	TARGET_ACCEPTED_SM             = 5,
	TARGET_ACCEPTED_SG             = 6,
	TARGET_ACCEPTED_SGM            = 7,
	TARGET_ACCEPTED_Decoy          = 8,
	TARGET_ACCEPTED_DM             = 9,
	TARGET_ACCEPTED_DG             = 10,
	TARGET_ACCEPTED_DGM            = 11,
	TARGET_ACCEPTED_DS             = 12,
	TARGET_ACCEPTED_DSM            = 13,
	TARGET_ACCEPTED_DSG            = 14,
	TARGET_ACCEPTED_All            = 15,
	TARGET_ACCEPTED_MAX            = 16
};


// Enum TgGame.TgObject.PEPRewardTier
enum class EPEPRewardTier : uint8_t
{
	PEPT_Tier1                     = 0,
	PEPT_Tier2                     = 1,
	PEPT_Tier3                     = 2,
	PEPT_MAX                       = 3
};


// Enum TgGame.TgObject.PEPPusherType
enum class EPEPPusherType : uint8_t
{
	PEP_PUSH_None                  = 0,
	PEP_PUSH_AoE                   = 1,
	PEP_PUSH_Swarm                 = 2,
	PEP_PUSH_Tank                  = 3,
	PEP_PUSH_MAX                   = 4
};


// Enum TgGame.TgObject.SpecialItemPurchaseException
enum class ESpecialItemPurchaseException : uint8_t
{
	SIPE_Allowed                   = 0,
	SIPE_Disallowed                = 1,
	SIPE_MAX                       = 2
};


// Enum TgGame.TgObject.EDevAcceptedType
enum class EDevAcceptedType : uint8_t
{
	DEV_ACCEPTED_None              = 0,
	DEV_ACCEPTED_Inhand            = 1,
	DEV_ACCEPTED_Offhand           = 2,
	DEV_ACCEPTED_OI                = 3,
	DEV_ACCEPTED_Passive           = 4,
	DEV_ACCEPTED_PI                = 5,
	DEV_ACCEPTED_PO                = 6,
	DEV_ACCEPTED_All               = 7,
	DEV_ACCEPTED_MAX               = 8
};


// Enum TgGame.TgObject.EDevOnTriggerType
enum class EDevOnTriggerType : uint8_t
{
	DEV_ON_None                    = 0,
	DEV_ON_StartFire               = 1,
	DEV_ON_Fire                    = 2,
	DEV_ON_Hit                     = 3,
	DEV_ON_Damaged                 = 4,
	DEV_ON_StopFire                = 5,
	DEV_ON_MAX                     = 6
};


// Enum TgGame.TgObject.EUISettingUpdate
enum class EUISettingUpdate : uint8_t
{
	UISU_All                       = 0,
	UISU_AudioVideo                = 1,
	UISU_Interface                 = 2,
	UISU_Control                   = 3,
	UISU_Targeting                 = 4,
	UISU_Gamepad                   = 5,
	UISU_MAX                       = 6
};


// Enum TgGame.TgObject.EPetPosition
enum class EPetPosition : uint8_t
{
	PETPOS_Default                 = 0,
	PETPOS_Front                   = 1,
	PETPOS_FrontRight              = 2,
	PETPOS_Right                   = 3,
	PETPOS_BackRight               = 4,
	PETPOS_Back                    = 5,
	PETPOS_BackLeft                = 6,
	PETPOS_Left                    = 7,
	PETPOS_FrontLeft               = 8,
	PETPOS_MAX                     = 9
};


// Enum TgGame.TgObject.EPetPhase
enum class EPetPhase : uint8_t
{
	PETPHASE_Default               = 0,
	PETPHASE_CodeOverride          = 1,
	PETPHASE_Heel                  = 2,
	PETPHASE_Follow                = 3,
	PETPHASE_Guard                 = 4,
	PETPHASE_Wait                  = 5,
	PETPHASE_MAX                   = 6
};


// Enum TgGame.TgObject.ReplicatedFactoryState
enum class EReplicatedFactoryState : uint8_t
{
	RFS_None                       = 0,
	RFS_Vacant                     = 1,
	RFS_Intro                      = 2,
	RFS_Spawned                    = 3,
	RFS_OwnedByTF1                 = 4,
	RFS_OwnedByTF2                 = 5,
	RFS_OwnedByTF3                 = 6,
	RFS_OwnedByTF4                 = 7,
	RFS_OwnedByTF5                 = 8,
	RFS_MAX                        = 9
};


// Enum TgGame.TgObject.EConquestRole
enum class EConquestRole : uint8_t
{
	ECR_Any                        = 0,
	ECR_Support                    = 1,
	ECR_Carry                      = 2,
	ECR_Mid                        = 3,
	ECR_Solo                       = 4,
	ECR_Jungle                     = 5,
	ECR_MAX                        = 6
};


// Enum TgGame.TgObject.EGodRole
enum class EGodRole : uint8_t
{
	EGR_Any                        = 0,
	EGR_Assassin                   = 1,
	EGR_Guardian                   = 2,
	EGR_Hunter                     = 3,
	EGR_Mage                       = 4,
	EGR_Warrior                    = 5,
	EGR_MAX                        = 6
};


// Enum TgGame.TgObject.ETrainingQuest
enum class ETrainingQuest : uint8_t
{
	ETQ_None                       = 0,
	ETQ_Kills                      = 1,
	ETQ_Escort                     = 2,
	ETQ_Other                      = 3,
	ETQ_MAX                        = 4
};


// Enum TgGame.TgObject.EPurchaseFailure
enum class EPurchaseFailure : uint8_t
{
	TGPF_None                      = 0,
	TGPF_UnknownItem               = 1,
	TGPF_UnavailableItem           = 2,
	TGPF_UnknownOwner              = 3,
	TGPF_NotEnoughCurrency         = 4,
	TGPF_NotEquipped               = 5,
	TGPF_AtStackLimit              = 6,
	TGPF_AlreadyPurchased          = 7,
	TGPF_NoAvailableSlots          = 8,
	TGPF_InvalidUpgrade            = 9,
	TGPF_CannotSell                = 10,
	TGPF_CannotSellInUse           = 11,
	TGPF_InvalidForCourier         = 12,
	TGPF_NotInTransaction          = 13,
	TGPF_CannotTransactInUse       = 14,
	TGPF_Unknown                   = 15,
	TGPF_MAX                       = 16
};


// Enum TgGame.TgObject.ERewardValueType
enum class ERewardValueType : uint8_t
{
	RVT_None                       = 0,
	RVT_Initial                    = 1,
	RVT_Spool                      = 2,
	RVT_Kill                       = 3,
	RVT_Assist                     = 4,
	RVT_Objective                  = 5,
	RVT_Bonus                      = 6,
	RVT_MAX                        = 7
};


// Enum TgGame.TgObject.GOD_PANTHEON
enum class EGOD_PANTHEON : uint8_t
{
	PANTHEON_None                  = 0,
	PANTHEON_Egyptian              = 1,
	PANTHEON_Norse                 = 2,
	PANTHEON_Greek                 = 3,
	PANTHEON_Roman                 = 4,
	PANTHEON_Chinese               = 5,
	PANTHEON_Mayan                 = 6,
	PANTHEON_Hindu                 = 7,
	PANTHEON_Japanese              = 8,
	PANTHEON_Celtic                = 9,
	PANTHEON_Slavic                = 10,
	PANTHEON_Voodoo                = 11,
	PANTHEON_Polynesian            = 12,
	PANTHEON_Arthurian             = 13,
	PANTHEON_Yoruba                = 14,
	PANTHEON_GreatOldOnes          = 15,
	PANTHEON_MAX                   = 16
};


// Enum TgGame.TgObject.HitReactionMoveType
enum class EHitReactionMoveType : uint8_t
{
	HIT_MOVE_TYPE_ALL              = 0,
	HIT_MOVE_TYPE_IDLE             = 1,
	HIT_MOVE_TYPE_MOVING           = 2,
	HIT_MOVE_TYPE_MAX              = 3
};


// Enum TgGame.TgObject.RecoilHitDir
enum class ERecoilHitDir : uint8_t
{
	RECOIL_DIR_FromFront           = 0,
	RECOIL_DIR_FromBack            = 1,
	RECOIL_DIR_FromLeft            = 2,
	RECOIL_DIR_FromRight           = 3,
	RECOIL_DIR_MAX                 = 4
};


// Enum TgGame.TgObject.PING_TYPE
enum class EPING_TYPE : uint8_t
{
	PT_NORMAL                      = 0,
	PT_NORMAL_ENEMY                = 1,
	PT_RETREAT                     = 2,
	PT_RETREAT_ENEMY               = 3,
	PT_ALERT                       = 4,
	PT_ALERT_ENEMY                 = 5,
	PT_SENTINEL                    = 6,
	PT_SENTINEL_ENEMY              = 7,
	PT_ALERT_SILENT                = 8,
	PT_WAYPOINT                    = 9,
	PT_MAX                         = 10
};


// Enum TgGame.TgObject.EDeviceFailType
enum class EDeviceFailType : uint8_t
{
	DFT_None                       = 0,
	DFT_Unspecified                = 1,
	DFT_Custom                     = 2,
	DFT_NotEnoughPower             = 3,
	DFT_OnCooldown                 = 4,
	DFT_CannotPlace                = 5,
	DFT_Stunned                    = 6,
	DFT_Silenced                   = 7,
	DFT_Disarmed                   = 8,
	DFT_Crippled                   = 9,
	DFT_FireLockout                = 10,
	DFT_MAX                        = 11
};


// Enum TgGame.TgObject.TG_EQUIP_POINT
enum class ETG_EQUIP_POINT : uint8_t
{
	EQP_NONE                       = 0,
	EQP_AUTO                       = 1,
	EQP_OFFHAND                    = 2,
	EQP_OFFHAND01                  = 3,
	EQP_OFFHAND02                  = 4,
	EQP_OFFHAND03                  = 5,
	EQP_RECALL                     = 6,
	EQP_PASSIVE                    = 7,
	EQP_ACTIVE                     = 8,
	EQP_ACTIVE01                   = 9,
	EQP_ACTIVE02                   = 10,
	EQP_CONSUMABLE                 = 11,
	EQP_CONSUMABLE01               = 12,
	EQP_UNUSED                     = 13,
	EQP_UNUSED01                   = 14,
	EQP_UNUSED02                   = 15,
	EQP_UNUSED03                   = 16,
	EQP_UNUSED04                   = 17,
	EQP_UNUSED05                   = 18,
	EQP_ITEM_STORE                 = 19,
	EQP_ITEM_STORE01               = 20,
	EQP_ITEM_STORE02               = 21,
	EQP_ITEM_STORE03               = 22,
	EQP_ITEM_STORE04               = 23,
	EQP_ITEM_STORE05               = 24,
	EQP_ALT_AUTO                   = 25,
	EQP_ALT_OFFHAND                = 26,
	EQP_ALT_OFFHAND01              = 27,
	EQP_ALT_OFFHAND02              = 28,
	EQP_ALT_OFFHAND03              = 29,
	EQP_ALT_PASSIVE                = 30,
	EQP_MAX                        = 31
};


// Enum TgGame.TgObject.eTutorialForceableElements
enum class EeTutorialForceableElements : uint8_t
{
	ETBUI_Skills                   = 0,
	ETBUI_ItemShop                 = 1,
	ETBUI_ItemShopButton           = 2,
	ETBUI_Intro                    = 3,
	ETBUI_ItemShopWalkthrough      = 4,
	ETBUI_ActiveItems              = 5,
	ETBUI_ConsumableItems          = 6,
	ETBUI_Escape                   = 7,
	ETBUI_MAX                      = 8
};


// Enum TgGame.TgObject.TgSupportedAspectRatios
enum class ETgSupportedAspectRatios : uint8_t
{
	TgAR_4x3                       = 0,
	TgAR_5x4                       = 1,
	TgAR_16x9                      = 2,
	TgAR_16x10                     = 3,
	TgAR_Other                     = 4,
	TgAR_MAX                       = 5
};


// Enum TgGame.TgObject.ENPCVoices
enum class ENPCVoices : uint8_t
{
	NPCVOICE_VendorMale01          = 0,
	NPCVOICE_VendorMale02          = 1,
	NPCVOICE_VendorMale03          = 2,
	NPCVOICE_VendorMale04          = 3,
	NPCVOICE_VendorMale05          = 4,
	NPCVOICE_VendorMale06          = 5,
	NPCVOICE_VendorMale07          = 6,
	NPCVOICE_VendorMale08          = 7,
	NPCVOICE_VendorMale09          = 8,
	NPCVOICE_VendorMale10          = 9,
	NPCVOICE_VendorFemale01        = 10,
	NPCVOICE_VendorFemale02        = 11,
	NPCVOICE_VendorFemale03        = 12,
	NPCVOICE_VendorFemale04        = 13,
	NPCVOICE_VendorFemale05        = 14,
	NPCVOICE_VendorFemale06        = 15,
	NPCVOICE_VendorFemale07        = 16,
	NPCVOICE_VendorFemale08        = 17,
	NPCVOICE_VendorFemale09        = 18,
	NPCVOICE_VendorFemale10        = 19,
	NPCVOICE_MAX                   = 20
};


// Enum TgGame.TgObject.OverlayType
enum class EOverlayType : uint8_t
{
	OT_UNKNOWN                     = 0,
	OT_LOCALPLAYER                 = 1,
	OT_PLAYER                      = 2,
	OT_TOWER                       = 3,
	OT_MINION                      = 4,
	OT_DEPLOYABLE                  = 5,
	OT_BUFFMONSTER                 = 6,
	OT_NEITH_TARGETLOCK            = 7,
	OT_NEITH_TARGETLOCK_WEAVE      = 8,
	OT_NEITH_CHARGE                = 9,
	OT_NEZHA_ULTQTE                = 10,
	OT_ISIS_CIRCLEOFPROTECTION     = 11,
	OT_ATHENA_TARGETLOCK           = 12,
	OT_WAYPOINT                    = 13,
	OT_OBJECTIVEMINION             = 14,
	OT_RETICLE                     = 15,
	OT_RETICLE_O                   = 16,
	OT_RETICLELOCK                 = 17,
	OT_RETICLELOCK_QUAD            = 18,
	OT_KUMBHAKARNA_SLEEP           = 19,
	OT_SIEGE_MINION                = 20,
	OT_KALDR_PET                   = 21,
	OT_NEUTRAL_BOSS                = 22,
	OT_FLAG                        = 23,
	OT_FLAG_BASE                   = 24,
	OT_RACER                       = 25,
	OT_ADV_TAG                     = 26,
	OT_PERSEPHONE_ULTVINES         = 27,
	OT_GENERIC_PIP                 = 28,
	OT_MAX                         = 29
};


// Enum TgGame.TgObject.ESplineCartActionPoint
enum class ESplineCartActionPoint : uint8_t
{
	SCAP_None                      = 0,
	SCAP_PayloadBegin              = 1,
	SCAP_Checkpoint1               = 2,
	SCAP_Checkpoint2               = 3,
	SCAP_Goal                      = 4,
	SCAP_MAX                       = 5
};


// Enum TgGame.TgObject.OverlayLineCheckState
enum class EOverlayLineCheckState : uint8_t
{
	OLCS_Disallowed                = 0,
	OLCS_Allowed                   = 1,
	OLCS_DidLineCheck              = 2,
	OLCS_MAX                       = 3
};


// Enum TgGame.TgObject.OverlayOffscreenIndicator
enum class EOverlayOffscreenIndicator : uint8_t
{
	OOI_None                       = 0,
	OOI_Left                       = 1,
	OOI_Right                      = 2,
	OOI_MAX                        = 3
};


// Enum TgGame.TgObject.CourierPetPhase
enum class ECourierPetPhase : uint8_t
{
	CPP_WaitAtSpawn                = 0,
	CPP_FollowOwner                = 1,
	CPP_StoreGo                    = 2,
	CPP_StoreDropOff               = 3,
	CPP_MAX                        = 4
};


// Enum TgGame.TgObject.MinimapFactoryType
enum class EMinimapFactoryType : uint8_t
{
	MMF_None                       = 0,
	MMF_FireGiant                  = 1,
	MMF_Kraken                     = 2,
	MMF_Speed                      = 3,
	MMF_Damage                     = 4,
	MMF_Protection                 = 5,
	MMF_Mana                       = 6,
	MMF_Cooldown                   = 7,
	MMF_HealthRegen                = 8,
	MMF_BonusMinions               = 9,
	MMF_Tower                      = 10,
	MMF_Phoenix                    = 11,
	MMF_CapturePoint               = 12,
	MMF_MinorSpawn                 = 13,
	MMF_GoldFury                   = 14,
	MMF_SiegeSpawner               = 15,
	MMF_AttackSpeed                = 16,
	MMF_PortalDemon                = 17,
	MMF_VoidBuff                   = 18,
	MMF_Oracle                     = 19,
	MMF_CH08Objective              = 20,
	MMF_FuryMayan                  = 21,
	MMF_FuryShinto                 = 22,
	MMF_Totem                      = 23,
	MMF_Follower_Mage1             = 24,
	MMF_Follower_DPS1              = 25,
	MMF_Follower_Bruiser1          = 26,
	MMF_Follower_Heal1             = 27,
	MMF_Follower_Tank1             = 28,
	MMF_Lane_AOE1                  = 29,
	MMF_Lane_Tank1                 = 30,
	MMF_Lane_Swarm1                = 31,
	MMF_Follower_Mage2             = 32,
	MMF_Follower_DPS2              = 33,
	MMF_Follower_Bruiser2          = 34,
	MMF_Follower_Heal2             = 35,
	MMF_Follower_Tank2             = 36,
	MMF_Lane_AOE2                  = 37,
	MMF_Lane_Tank2                 = 38,
	MMF_Lane_Swarm2                = 39,
	MMF_Follower_Mage3             = 40,
	MMF_Follower_DPS3              = 41,
	MMF_Follower_Bruiser3          = 42,
	MMF_Follower_Heal3             = 43,
	MMF_Follower_Tank3             = 44,
	MMF_Lane_AOE3                  = 45,
	MMF_Lane_Tank3                 = 46,
	MMF_Lane_Swarm3                = 47,
	MMF_JungleShrineTotem          = 48,
	MMF_Speed_Enhanced             = 49,
	MMF_Mana_Enhanced              = 50,
	MMF_Damage_Enhanced            = 51,
	MMF_Void_Enhanced              = 52,
	MMF_Scorpion                   = 53,
	MMF_Scorpion_Large             = 54,
	MMF_MAX                        = 55
};


// Enum TgGame.TgObject.AlertType
enum class EAlertType : uint8_t
{
	ATT_Regular                    = 0,
	ATT_Beneficial                 = 1,
	ATT_Detrimental                = 2,
	ATT_Spectator                  = 3,
	ATT_Important                  = 4,
	ATT_MainNotify                 = 5,
	ATT_SubNotify                  = 6,
	ATT_MAX                        = 7
};


// Enum TgGame.TgObject.AlertPriority
enum class EAlertPriority : uint8_t
{
	APT_Minimal                    = 0,
	APT_Normal                     = 1,
	APT_High                       = 2,
	APT_Critical                   = 3,
	APT_MAX                        = 4
};


// Enum TgGame.TgObject.ETargetingHighlightStyle
enum class ETargetingHighlightStyle : uint8_t
{
	THS_None                       = 0,
	THS_Silhouette                 = 1,
	THS_HighlightAndBracketWorld   = 2,
	THS_MAX                        = 3
};


// Enum TgGame.TgObject.ETargetingReticleStyle
enum class ETargetingReticleStyle : uint8_t
{
	TRS_None                       = 0,
	TRS_X                          = 1,
	TRS_O                          = 2,
	TRS_MAX                        = 3
};


// Enum TgGame.TgObject.ETargetingPreviewStyle
enum class ETargetingPreviewStyle : uint8_t
{
	TPS_None                       = 0,
	TPS_Target                     = 1,
	TPS_ContrastTarget             = 2,
	TPS_3DArrow                    = 3,
	TPS_MAX                        = 4
};


// Enum TgGame.TgObject.ETargetingLineStyle
enum class ETargetingLineStyle : uint8_t
{
	TLS_None                       = 0,
	TLS_Ruler                      = 1,
	TLS_Line                       = 2,
	TLS_MAX                        = 3
};


// Enum TgGame.TgObject.CH08_GOO_SPOT_TYPES
enum class ECH08_GOO_SPOT_TYPES : uint8_t
{
	CH08GST_LEVEL1                 = 0,
	CH08GST_LEVEL2                 = 1,
	CH08GST_MAX                    = 2
};


// Enum TgGame.TgObject.MiniMapEntityType
enum class EMiniMapEntityType : uint8_t
{
	MMap_LocalSpectator            = 0,
	MMap_LocalPlayer               = 1,
	MMap_Player                    = 2,
	MMap_Bot                       = 3,
	MMap_Factory                   = 4,
	MMap_Deployable                = 5,
	MMap_CapturePoint              = 6,
	MMap_LocalWard                 = 7,
	MMap_CTF_Flag                  = 8,
	MMap_FactoryVisible            = 9,
	MMap_DeviceVolume              = 10,
	MMap_MAX                       = 11
};


// Enum TgGame.TgObject.TgMapTeam
enum class ETgMapTeam : uint8_t
{
	MAPTEAM                        = 0,
	MAPTEAM01                      = 1,
	MAPTEAM02                      = 2,
	MAPTEAM03                      = 3,
	MAPTEAM04                      = 4,
	MAPTEAM_NEUTRAL                = 5,
	MAPTEAM_MAX                    = 6
};


// Enum TgGame.TgObject.PLAYER_COMBAT_EVENT_TYPE
enum class EPLAYER_COMBAT_EVENT_TYPE : uint8_t
{
	PCET_None                      = 0,
	PCET_Spawn                     = 1,
	PCET_MAX                       = 2
};


// Enum TgGame.TgObject.ITEM_EVENT_TYPE
enum class EITEM_EVENT_TYPE : uint8_t
{
	IET_None                       = 0,
	IET_CastStart                  = 1,
	IET_CastComplete               = 2,
	IET_CastInterrupt              = 3,
	IET_ItemPurchase               = 4,
	IET_ItemSell                   = 5,
	IET_AbilityPurchase            = 6,
	IET_MAX                        = 7
};


// Enum TgGame.TgObject.DAMAGE_INFO_TYPE
enum class EDAMAGE_INFO_TYPE : uint8_t
{
	DIT_None                       = 0,
	DIT_Death                      = 1,
	DIT_Damage                     = 2,
	DIT_Status                     = 3,
	DIT_Healing                    = 4,
	DIT_ManaBurn                   = 5,
	DIT_ManaRestore                = 6,
	DIT_Objective                  = 7,
	DIT_Experience                 = 8,
	DIT_Currency                   = 9,
	DIT_Level                      = 10,
	DIT_CritDamage                 = 11,
	DIT_Backstab                   = 12,
	DIT_KillingBlow                = 13,
	DIT_Assist                     = 14,
	DIT_KillingBlowWrath           = 15,
	DIT_Ticket                     = 16,
	DIT_SelfExecute                = 17,
	DIT_HolyCrit                   = 18,
	DIT_MAX                        = 19
};


// Enum TgGame.TgObject.DeviceTargetMode
enum class EDeviceTargetMode : uint8_t
{
	TGDTM_Self                     = 0,
	TGDTM_Melee                    = 1,
	TGDTM_Reticle                  = 2,
	TGDTM_Projectile               = 3,
	TGDTM_AOE                      = 4,
	TGDTM_Deploy                   = 5,
	TGDTM_Ground                   = 6,
	TGDTM_Cone                     = 7,
	TGDTM_Linear                   = 8,
	TGDTM_LockOn                   = 9,
	TGDTM_SpawnPoint               = 10,
	TGDTM_WorldMap                 = 11,
	TGDTM_WorldMapLockOn           = 12,
	TGDTM_PawnSelect               = 13,
	TGDTM_MAX                      = 14
};


// Enum TgGame.TgObject.GameTimerState
enum class EGameTimerState : uint8_t
{
	TGMTS_UNSET                    = 0,
	TGMTS_WAITING_FOR_PLAYERS      = 1,
	TGMTS_SETUP                    = 2,
	TGMTS_MISSION_RUNNING          = 3,
	TGMTS_MISSION_OVERTIME         = 4,
	TGMTS_MISSION_COMPLETE         = 5,
	TGMTS_MISSION_PAUSED           = 6,
	TGMTS_CUSTOM                   = 7,
	TGMTS_ROUND_COMPLETE           = 8,
	TGMTS_MISSION_PRE_OVERTIME     = 9,
	TGMTS_MISSION_OVERTIME_SETUP   = 10,
	TGMTS_MAX                      = 11
};


// Enum TgGame.TgObject.TG_GAME_SEASONAL
enum class ETG_GAME_SEASONAL : uint8_t
{
	TGSN_NONE                      = 0,
	TGSN_HALLOWEEN                 = 1,
	TGSN_WINTER                    = 2,
	TGSN_MAX                       = 3
};


// Enum TgGame.TgObject.TG_GAME_TYPE
enum class ETG_GAME_TYPE : uint8_t
{
	TGT_UNSET                      = 0,
	TGT_CITY                       = 1,
	TGT_ARENA                      = 2,
	TGT_ARENA_TRAINING             = 3,
	TGT_ARENA_PRACTICE             = 4,
	TGT_ARENA_CAPTURE              = 5,
	TGT_ARENA_ESCORT               = 6,
	TGT_ARENA_ESCORT_PRACTICE      = 7,
	TGT_BATTLE                     = 8,
	TGT_BATTLE_EXPERT              = 9,
	TGT_BATTLE_PRACTICE            = 10,
	TGT_BATTLE_JOUST               = 11,
	TGT_BATTLE_CASUAL              = 12,
	TGT_BATTLE_TRAINING            = 13,
	TGT_BATTLE_CONQUEST_TRAINING   = 14,
	TGT_BATTLE_ARAM                = 15,
	TGT_BATTLE_ARAM_PRACTICE       = 16,
	TGT_POINTCAPTURE               = 17,
	TGT_DOMINATION                 = 18,
	TGT_SINGLEPOINTCAPTUREANDHOLD  = 19,
	TGT_IDOL                       = 20,
	TGT_SIEGE                      = 21,
	TGT_BATTLE_TC                  = 22,
	TGT_BATTLE_SHOOTINGRANGE       = 23,
	TGT_BATTLE_JOUST_PRACTICE      = 24,
	TGT_BATTLE_CLASH               = 25,
	TGT_BATTLE_CLASH_PRACTICE      = 26,
	TGT_BATTLE_CLASH_TRAINING      = 27,
	TGT_BATTLE_ENCOUNTER           = 28,
	TGT_CHALLENGE_CTF              = 29,
	TGT_CHALLENGE_RACER            = 30,
	TGT_CHALLENGE_ADVENTURE        = 31,
	TGT_CHALLENGE_ADVENTURE_STORY  = 32,
	TGT_ARENA_ESCORT_SD            = 33,
	TGT_BATTLE_ROUND               = 34,
	TGT_BATTLE_MULTIROUND          = 35,
	TGT_BATTLE_PEP                 = 36,
	TGT_BATTLE_JOUST_DUEL          = 37,
	TGT_MAX                        = 38
};


// Enum TgGame.TgObject.GAME_WIN_STATE
enum class EGAME_WIN_STATE : uint8_t
{
	GWS_NONE                       = 0,
	GWS_TASKFORCE_TWO_WON          = 1,
	GWS_TASKFORCE_ONE_WON          = 2,
	GWS_TIE                        = 3,
	GWS_SD_TF_TWO_WON              = 4,
	GWS_SD_TF_ONE_WON              = 5,
	GWS_SD_TIE                     = 6,
	GWS_MAX                        = 7
};


// Enum TgGame.TgActorFactory.eSelectionMethod
enum class EeSelectionMethod : uint8_t
{
	TGSM_RANDOM                    = 0,
	TGSM_SEQUENTIAL                = 1,
	TGSM_MAX                       = 2
};


// Enum TgGame.TgAIBehaviorNode.EBehaviorStatus
enum class EBehaviorStatus : uint8_t
{
	BEHAVIOR_None                  = 0,
	BEHAVIOR_Complete              = 1,
	BEHAVIOR_Running               = 2,
	BEHAVIOR_Paused                = 3,
	BEHAVIOR_Failed                = 4,
	BEHAVIOR_Aborted               = 5,
	BEHAVIOR_MAX                   = 6
};


// Enum TgGame.TgAIBehaviorNode.EBehaviorComparison
enum class EBehaviorComparison : uint8_t
{
	BEHAVIORCOMPARE_Equal          = 0,
	BEHAVIORCOMPARE_NotEqual       = 1,
	BEHAVIORCOMPARE_LessThan       = 2,
	BEHAVIORCOMPARE_LessThanOrEqual = 3,
	BEHAVIORCOMPARE_GreaterThan    = 4,
	BEHAVIORCOMPARE_GreaterThanOrEqual = 5,
	BEHAVIORCOMPARE_MAX            = 6
};


// Enum TgGame.TgAIController_Behavior.EUseDeviceAimType
enum class EUseDeviceAimType : uint8_t
{
	AIDeviceAim_CombatTarget       = 0,
	AIDeviceAim_Self               = 1,
	AIDeviceAim_MAX                = 2
};


// Enum TgGame.TgAIController_Behavior.EEffectGroupCategory
enum class EEffectGroupCategory : uint8_t
{
	AIEffectCategory_None          = 0,
	AIEffectCategory_Slow          = 1,
	AIEffectCategory_Stun          = 2,
	AIEffectCategory_Mesmerize     = 3,
	AIEffectCategory_Knockback     = 4,
	AIEffectCategory_Root          = 5,
	AIEffectCategory_Silence       = 6,
	AIEffectCategory_Disarm        = 7,
	AIEffectCategory_Cripple       = 8,
	AIEffectCategory_FearOrPanic   = 9,
	AIEffectCategory_Taunt         = 10,
	AIEffectCategory_Charm         = 11,
	AIEffectCategory_Madness       = 12,
	AIEffectCategory_JungleBuff    = 13,
	AIEffectCategory_MAX           = 14
};


// Enum TgGame.TgAIController_Behavior.EBotDifficultyLevel
enum class EBotDifficultyLevel : uint8_t
{
	AIDifficulty_Practice          = 0,
	AIDifficulty_Easy              = 1,
	AIDifficulty_Medium            = 2,
	AIDifficulty_Hard              = 3,
	AIDifficulty_Pro               = 4,
	AIDifficulty_MAX               = 5
};


// Enum TgGame.TgAIController_Behavior.EActiveType
enum class EActiveType : uint8_t
{
	AIActive_Meditation            = 0,
	AIActive_Shell                 = 1,
	AIActive_Wings                 = 2,
	AIActive_Aegis                 = 3,
	AIActive_Beads                 = 4,
	AIActive_Ankh                  = 5,
	AIActive_Blink                 = 6,
	AIActive_Thorns                = 7,
	AIActive_Spear                 = 8,
	AIActive_Veil                  = 9,
	AIActive_Bracer                = 10,
	AIActive_Horrific              = 11,
	AIActive_Frenzy                = 12,
	AIActive_MAX                   = 13
};


// Enum TgGame.TgAIController_Behavior.EConsumableType
enum class EConsumableType : uint8_t
{
	AIConsumable_HealthPotion      = 0,
	AIConsumable_ManaPotion        = 1,
	AIConsumable_MultiPotion       = 2,
	AIConsumable_HealthChalice     = 3,
	AIConsumable_ManaChalice       = 4,
	AIConsumable_BaronBrew         = 5,
	AIConsumable_Ward              = 6,
	AIConsumable_PhysicalPotion    = 7,
	AIConsumable_MagicalPotion     = 8,
	AIConsumable_SpeedElixer       = 9,
	AIConsumable_DefenseElixer     = 10,
	AIConsumable_PowerElixer       = 11,
	AIConsumable_MAX               = 12
};


// Enum TgGame.TgAIController_Behavior.ERoleType
enum class ERoleType : uint8_t
{
	AIRoleType_Hunter              = 0,
	AIRoleType_Guardian            = 1,
	AIRoleType_Mage                = 2,
	AIRoleType_Assassin            = 3,
	AIRoleType_Warrior             = 4,
	AIRoleType_MAX                 = 5
};


// Enum TgGame.TgAIController_Behavior.EJungleTargetType
enum class EJungleTargetType : uint8_t
{
	AIJungleTarget_Attack          = 0,
	AIJungleTarget_Mana            = 1,
	AIJungleTarget_Speed           = 2,
	AIJungleTarget_BackHarpies     = 3,
	AIJungleTarget_MidHarpies      = 4,
	AIJungleTarget_Boars           = 5,
	AIJungleTarget_FireElementals  = 6,
	AIJungleTarget_FireGiant       = 7,
	AIJungleTarget_GoldFury        = 8,
	AIJungleTarget_Nearest         = 9,
	AIJungleTarget_AttackSpeed     = 10,
	AIJungleTarget_Totem           = 11,
	AIJungleTarget_MAX             = 12
};


// Enum TgGame.TgAIController_Behavior.ECombatTargetType
enum class ECombatTargetType : uint8_t
{
	AICombatTarget_Any             = 0,
	AICombatTarget_God             = 1,
	AICombatTarget_Guardian        = 2,
	AICombatTarget_Minion          = 3,
	AICombatTarget_EliteMinion     = 4,
	AICombatTarget_Tower           = 5,
	AICombatTarget_JungleCamp      = 6,
	AICombatTarget_Pet             = 7,
	AICombatTarget_Decoy           = 8,
	AICombatTarget_Deployable      = 9,
	AICombatTarget_GodBot          = 10,
	AICombatTarget_GodHuman        = 11,
	AICombatTarget_MAX             = 12
};


// Enum TgGame.TgPawn.EEmoteFail
enum class EEmoteFail : uint8_t
{
	EMOTEFAIL_None                 = 0,
	EMOTEFAIL_DoNotOwn             = 1,
	EMOTEFAIL_NoPawn               = 2,
	EMOTEFAIL_Cooldown             = 3,
	EMOTEFAIL_InCombat             = 4,
	EMOTEFAIL_MAX                  = 5
};


// Enum TgGame.TgPawn.EEmote
enum class EEmote : uint8_t
{
	EMOTE_None                     = 0,
	EMOTE_Taunt                    = 1,
	EMOTE_Joke                     = 2,
	EMOTE_Laugh                    = 3,
	EMOTE_Health_Low               = 4,
	EMOTE_Kill_Jungle_Boss         = 5,
	EMOTE_Kill_Phoenix             = 6,
	EMOTE_Kill_Streak              = 7,
	EMOTE_Kill_Tower               = 8,
	EMOTE_Purchase_Consumable      = 9,
	EMOTE_Purchase_Defense         = 10,
	EMOTE_Purchase_Power           = 11,
	EMOTE_Purchase_Utility         = 12,
	EMOTE_Ward_Placed              = 13,
	EMOTE_Kill_God                 = 14,
	EMOTE_Wave                     = 15,
	EMOTE_Dance                    = 16,
	EMOTE_Clap                     = 17,
	EMOTE_God_Special              = 18,
	EMOTE_Furious                  = 19,
	EMOTE_OdySpecial01             = 20,
	EMOTE_GlobalEmote              = 21,
	EMOTE_OwnerAuto                = 22,
	EMOTE_OwnerDev1                = 23,
	EMOTE_OwnerDev2                = 24,
	EMOTE_OwnerDev3                = 25,
	EMOTE_OwnerDev4                = 26,
	EMOTE_OwnerRecall              = 27,
	EMOTE_PetSelfRecall            = 28,
	EMOTE_Generic1                 = 29,
	EMOTE_Generic2                 = 30,
	EMOTE_Generic3                 = 31,
	EMOTE_MAX                      = 32
};


// Enum TgGame.TgPawn.ETweenState
enum class ETweenState : uint8_t
{
	TWEEN_None                     = 0,
	TWEEN_Default                  = 1,
	TWEEN_DefaultImmune            = 2,
	TWEEN_ActiveCollision          = 3,
	TWEEN_ActiveCollision_CollidesWorld = 4,
	TWEEN_BastetPounce             = 5,
	TWEEN_HadesDeathFromBelow      = 6,
	TWEEN_OdinLeap                 = 7,
	TWEEN_HeboWave                 = 8,
	TWEEN_MonkeyLeap               = 9,
	TWEEN_CuChulainnLeap           = 10,
	TWEEN_ArachnePull              = 11,
	TWEEN_ArachneAttach            = 12,
	TWEEN_AnhurDisarm              = 13,
	TWEEN_AnhurImpale              = 14,
	TWEEN_BakasuraTakedown         = 15,
	TWEEN_ThorLeap                 = 16,
	TWEEN_Levitate                 = 17,
	TWEEN_LevitateUnbreakable      = 18,
	TWEEN_Sink                     = 19,
	TWEEN_BacchusBellyFlop         = 20,
	TWEEN_HerculesPunch            = 21,
	TWEEN_HerculesBatterUp         = 22,
	TWEEN_NeithFlipOut             = 23,
	TWEEN_NeithFlipOutPlusKick     = 24,
	TWEEN_MinionKnockbackMelee     = 25,
	TWEEN_MinionKnockbackRanged    = 26,
	TWEEN_AphroditeGetAway         = 27,
	TWEEN_ApolloDive               = 28,
	TWEEN_NeZhaSash                = 29,
	TWEEN_NeZhaWindFire            = 30,
	TWEEN_NeZhaWindFire_SelfKnockDown = 31,
	TWEEN_FenrirMaul               = 32,
	TWEEN_FenrirDoubleJump         = 33,
	TWEEN_AthenaUlt                = 34,
	TWEEN_AthenaShieldWall         = 35,
	TWEEN_ChronosRewind            = 36,
	TWEEN_TyrComboStrike           = 37,
	TWEEN_TyrPush                  = 38,
	TWEEN_TyrUltLeap               = 39,
	TWEEN_ThanatosStrike           = 40,
	TWEEN_SunWukongToCloud         = 41,
	TWEEN_SunWukongAttack          = 42,
	TWEEN_SunWukongCancel          = 43,
	TWEEN_ChaacNum2                = 44,
	TWEEN_ChaacUlt                 = 45,
	TWEEN_KaliStrike               = 46,
	TWEEN_ScyllaNum3               = 47,
	TWEEN_ScyllaTentacle           = 48,
	TWEEN_UllrNum3                 = 49,
	TWEEN_AresTether               = 50,
	TWEEN_KumbhakarnaNum1          = 51,
	TWEEN_KumbhakarnaNum4TimedKnockup = 52,
	TWEEN_TimedKnockup             = 53,
	TWEEN_AutoPortal               = 54,
	TWEEN_ArtemisBoar              = 55,
	TWEEN_FloorPortal              = 56,
	TWEEN_FloorPortal_Friendly     = 57,
	TWEEN_SerqetLastBreathLeap     = 58,
	TWEEN_SerqetLastBreathKnockback = 59,
	TWEEN_CabrakanChargeKnockback  = 60,
	TWEEN_CabrakanUlt              = 61,
	TWEEN_ArachneCreepy            = 62,
	TWEEN_AoKuangUltimate          = 63,
	TWEEN_AoKuangUltimatePart3     = 64,
	TWEEN_AoKuangUltimateMegaKill  = 65,
	TWEEN_AwilixMoonlightPull      = 66,
	TWEEN_AwilixReposition         = 67,
	TWEEN_HouYi_DiveBomb           = 68,
	TWEEN_Osiris_UltLeap           = 69,
	TWEEN_RatatoskrTailSpin        = 70,
	TWEEN_RatatoskrUltimate        = 71,
	TWEEN_RavanaUltimate           = 72,
	TWEEN_ToTarget                 = 73,
	TWEEN_God95ToTarget            = 74,
	TWEEN_SolLeapBack              = 75,
	TWEEN_SolReappear              = 76,
	TWEEN_XingTianLeap             = 77,
	TWEEN_CircleTarget             = 78,
	TWEEN_Kaldr_Lunge              = 79,
	TWEEN_JingWei_AirDash          = 80,
	TWEEN_JingWei_Land             = 81,
	TWEEN_Fafnir_Leap              = 82,
	TWEEN_ErlangShen_Impale        = 83,
	TWEEN_Camazotz_ToothAndNailLeap = 84,
	TWEEN_Camazotz_Dev4            = 85,
	TWEEN_Nike_Dev3                = 86,
	TWEEN_Kismet                   = 87,
	TWEEN_Discordia_ErraticBehavior = 88,
	TWEEN_MOB_GenericLeap          = 89,
	TWEEN_Cerberus_Dev3            = 90,
	TWEEN_ToSocket                 = 91,
	TWEEN_BaronSamediUlt           = 92,
	TWEEN_BaronSamedi_Dev4_Eject   = 93,
	TWEEN_Pele_A03                 = 94,
	TWEEN_Knockback                = 95,
	TWEEN_Knockback_WithCollision  = 96,
	TWEEN_JormUlt                  = 97,
	TWEEN_HorusToTarget            = 98,
	TWEEN_HorusDescent             = 99,
	TWEEN_Set_A03                  = 100,
	TWEEN_Persephone_A03           = 101,
	TWEEN_Yemoja_A03               = 102,
	TWEEN_Heimdallr_A03_Portal     = 103,
	TWEEN_Heimdallr_A04_Intro      = 104,
	TWEEN_Heimdallr_A04            = 105,
	TWEEN_Heimdallr_A04_Delay      = 106,
	TWEEN_Heimdallr_A04_Outro      = 107,
	TWEEN_Mulan_GrapplePull        = 108,
	TWEEN_Mulan_GrappleLeap        = 109,
	TWEEN_Mulan_GrappleWall        = 110,
	TWEEN_BabaYaga_A03             = 111,
	TWEEN_Tsukuyomi_A04            = 112,
	TWEEN_Janus_A04_Portal         = 113,
	TWEEN_MAX                      = 114
};


// Enum TgGame.TgPawn.TG_DEATH_REASON
enum class ETG_DEATH_REASON : uint8_t
{
	DR_NORMAL                      = 0,
	DR_DESPAWN                     = 1,
	DR_DESPAWN_HIDDEN              = 2,
	DR_RECONNECT                   = 3,
	DR_BAKASURA_CONSUME            = 4,
	DR_AOKUANG_ULT                 = 5,
	DR_MEDUSA_STATUE               = 6,
	DR_MAX                         = 7
};


// Enum TgGame.TgPawn.EChargeState
enum class EChargeState : uint8_t
{
	CHARGE_None                    = 0,
	CHARGE_NoTurn                  = 1,
	CHARGE_NoTurnBackwards         = 2,
	CHARGE_Turn                    = 3,
	CHARGE_MercuryUlt              = 4,
	CHARGE_TurnToDesiredRotation   = 5,
	CHARGE_Slide                   = 6,
	CHARGE_TurnIndependant         = 7,
	CHARGE_TurnNoRate              = 8,
	CHARGE_Shove                   = 9,
	CHARGE_LockOn                  = 10,
	CHARGE_FlyingTurn              = 11,
	CHARGE_MAX                     = 12
};


// Enum TgGame.TgPawn.EGrabState
enum class EGrabState : uint8_t
{
	GRAB_None                      = 0,
	GRAB_ArachneLifeDrain          = 1,
	GRAB_FenrirBite                = 2,
	GRAB_LokiAssassinate           = 3,
	GRAB_AthenaUlt                 = 4,
	GRAB_TyrNum1                   = 5,
	GRAB_MercuryDelivery           = 6,
	GRAB_KumbhakarnaToss           = 7,
	GRAB_SerqetLastBreath          = 8,
	GRAB_KhepriAbduct              = 9,
	GRAB_KhepriRevive              = 10,
	GRAB_NoxShadowStep             = 11,
	GRAB_XingTianSweep             = 12,
	GRAB_ErlangShenImpale          = 13,
	GRAB_TerraMegaPunch            = 14,
	GRAB_G84Clone                  = 15,
	GRAB_KuzenboSumoPush           = 16,
	GRAB_BaronSamediUlt            = 17,
	GRAB_KnightDev2B               = 18,
	GRAB_MAX                       = 19
};


// Enum TgGame.TgPawn.STEALTH_TYPE
enum class ESTEALTH_TYPE : uint8_t
{
	STEALTH_TYPE_NONE              = 0,
	STEALTH_TYPE_INSTANT           = 1,
	STEALTH_TYPE_FADING            = 2,
	STEALTH_TYPE_MAX               = 3
};


// Enum TgGame.TgPawn.ELevitateType
enum class ELevitateType : uint8_t
{
	LEVITATE_None                  = 0,
	LEVITATE_Freya                 = 1,
	LEVITATE_NeZha                 = 2,
	LEVITATE_AwilixMoonlight       = 3,
	LEVITATE_JingWeiSelf           = 4,
	LEVITATE_JingWeiEnemy          = 5,
	LEVITATE_Terra                 = 6,
	LEVITATE_MAX                   = 7
};


// Enum TgGame.TgPawn.TG_POSTURE
enum class ETG_POSTURE : uint8_t
{
	TG_POSTURE_DEFAULT             = 0,
	TG_POSTURE_REST                = 1,
	TG_POSTURE_FUSSY               = 2,
	TG_POSTURE_ENRAGED             = 3,
	TG_POSTURE_GENERICFIRE1        = 4,
	TG_POSTURE_GENERICFIRE2        = 5,
	TG_POSTURE_GENERICFIRE3        = 6,
	TG_POSTURE_SCARED              = 7,
	TG_POSTURE_STUNNED             = 8,
	TG_POSTURE_STASIS              = 9,
	TG_POSTURE_KNOCKBACK           = 10,
	TG_POSTURE_MESMERIZE           = 11,
	TG_POSTURE_INTRO               = 12,
	TG_POSTURE_PATROL              = 13,
	TG_POSTURE_DEAD                = 14,
	TG_POSTURE_SEARCHING           = 15,
	TG_POSTURE_FALLING             = 16,
	TG_POSTURE_NONE                = 17,
	TG_POSTURE_MAX                 = 18
};


// Enum TgGame.TgPawn.OverlayState
enum class EOverlayState : uint8_t
{
	OMS_Normal                     = 0,
	OMS_ForceVisible               = 1,
	OMS_ForceHidden                = 2,
	OMS_MAX                        = 3
};


// Enum TgGame.TgPawn.OverlayMICType
enum class EOverlayMICType : uint8_t
{
	OMT_Outline                    = 0,
	OMT_Fade                       = 1,
	OMT_AthenaUltTarget            = 2,
	OMT_HitPulse                   = 3,
	OMT_ThanatosHarvester          = 4,
	OMT_MAX                        = 5
};


// Enum TgGame.TgPawn.EFloorPortalState
enum class EFloorPortalState : uint8_t
{
	FLOOR_PORTAL_NONE              = 0,
	FLOOR_PORTAL_PRETELEPORT       = 1,
	FLOOR_PORTAL_POSTTELEPORT      = 2,
	FLOOR_PORTAL_MAX               = 3
};


// Enum TgGame.TgPawn.EHitReactionType
enum class EHitReactionType : uint8_t
{
	HIT_REACTION_Anim              = 0,
	HIT_Reaction_Procedural        = 1,
	HIT_MAX                        = 2
};


// Enum TgGame.TgProperty.TG_PAWN_PROPERTIES
enum class ETG_PAWN_PROPERTIES : uint8_t
{
	TGPIDX_ATTACK_SPEED            = 0,
	TGPIDX_CHARACTER_VISION_RANGE  = 1,
	TGPIDX_COOLDOWN_REDUCTION_PERC = 2,
	TGPIDX_CRITICAL_STRIKE         = 3,
	TGPIDX_CRITICAL_STRIKE_DAMAGE  = 4,
	TGPIDX_CRIT_CHANCE_MODIFIER_PERC = 5,
	TGPIDX_DEPLOY_RATE_MODIFIER    = 6,
	TGPIDX_ENERGY_MAX              = 7,
	TGPIDX_ENERGY                  = 8,
	TGPIDX_EP5                     = 9,
	TGPIDX_GOLD_GAIN_PERC          = 10,
	TGPIDX_GOLD_PER_5_PERC         = 11,
	TGPIDX_XP_PER_5_PERC           = 12,
	TGPIDX_GROUND_SPEED            = 13,
	TGPIDX_HEALTH_MAX              = 14,
	TGPIDX_HEALTH_MAX_PERCENT      = 15,
	TGPIDX_HEALTH                  = 16,
	TGPIDX_HP5                     = 17,
	TGPIDX_MANA                    = 18,
	TGPIDX_MANA_MAX                = 19,
	TGPIDX_MANA_MAX_PERCENT        = 20,
	TGPIDX_MP5                     = 21,
	TGPIDX_SHIELD                  = 22,
	TGPIDX_SHIELD_MAX              = 23,
	TGPIDX_PENETRATION_MAGICAL     = 24,
	TGPIDX_PENETRATION_MAGICAL_PERC = 25,
	TGPIDX_PENETRATION_PHYSICAL    = 26,
	TGPIDX_PENETRATION_PHYSICAL_PERC = 27,
	TGPIDX_PHYSICAL_LIFESTEAL      = 28,
	TGPIDX_LIFESTEAL_BLOCK         = 29,
	TGPIDX_LIFESTEAL_REDUCTION     = 30,
	TGPIDX_POWER_MAGICAL_BOT       = 31,
	TGPIDX_POWER_PHYSICAL_BOT      = 32,
	TGPIDX_PROTECTION_FEAR_AND_PANIC = 33,
	TGPIDX_PROTECTION_KNOCKBACK    = 34,
	TGPIDX_PROTECTION_MAGICAL      = 35,
	TGPIDX_PROTECTION_MAGICAL_PERC = 36,
	TGPIDX_PROTECTION_PHYSICAL     = 37,
	TGPIDX_PROTECTION_PHYSICAL_PERC = 38,
	TGPIDX_PROTECTION_ROOT         = 39,
	TGPIDX_PROTECTION_CRIPPLE      = 40,
	TGPIDX_PROTECTION_SILENCE      = 41,
	TGPIDX_PROTECTION_SLOW         = 42,
	TGPIDX_PROTECTION_STUN         = 43,
	TGPIDX_PROTECTION_MESMERIZE    = 44,
	TGPIDX_PROTECTION_PULL         = 45,
	TGPIDX_PROTECTION_ATTACK_SLOW  = 46,
	TGPIDX_PROTECTION_TIDI         = 47,
	TGPIDX_PROTECTION_CC           = 48,
	TGPIDX_PROTECTION_VORTEX       = 49,
	TGPIDX_CC_IMMUNITY             = 50,
	TGPIDX_BASIC_ATTACK_SLOW_IMMUNITY = 51,
	TGPIDX_ABSORB_BASIC_ATTACK     = 52,
	TGPIDX_PUSHBACK                = 53,
	TGPIDX_REDUCTION_MAGICAL       = 54,
	TGPIDX_REDUCTION_MAGICAL_PERC  = 55,
	TGPIDX_REDUCTION_PHYSICAL      = 56,
	TGPIDX_REDUCTION_PHYSICAL_PERC = 57,
	TGPIDX_REVIVE_REDUCTION_PERC   = 58,
	TGPIDX_SILENT_MOVEMENT         = 59,
	TGPIDX_SPELL_VAMP              = 60,
	TGPIDX_TAUNT                   = 61,
	TGPIDX_XP_GAIN_PERC            = 62,
	TGPIDX_POWER_PHYSICAL_PERC     = 63,
	TGPIDX_POWER_MAGICAL_PERC      = 64,
	TGPIDX_HEALING_TAKEN_PERC      = 65,
	TGPIDX_HEALING_DEALT_PERC      = 66,
	TGPIDX_DAMAGE_TAKEN_PERC       = 67,
	TGPIDX_DAMAGE_REDUCTION_FLAT   = 68,
	TGPIDX_DAMAGE_DEALT_PERC       = 69,
	TGPIDX_DAMAGE_DEALT_PERC_BASIC = 70,
	TGPIDX_POWER_PHYSICAL_ITEM     = 71,
	TGPIDX_POWER_MAGICAL_ITEM      = 72,
	TGPIDX_POWER_UTILITY_BOT       = 73,
	TGPIDX_POWER_UTILITY_ITEM      = 74,
	TGPIDX_SLOW_DIMINISHING        = 75,
	TGPIDX_ATTACK_SLOW             = 76,
	TGPIDX_MINIMAP_WARD_VISION_PERC = 77,
	TGPIDX_MINIMAP_LOS_IGNORED     = 78,
	TGPIDX_MINIMAP_DETECTOR        = 79,
	TGPIDX_MINION_DAMAGE_BONUS     = 80,
	TGPIDX_DODGE_BASIC             = 81,
	TGPIDX_NO_BACKPEDAL_PENALTY    = 82,
	TGPIDX_GOLD_PER                = 83,
	TGPIDX_XP_PER                  = 84,
	TGPIDX_HP5_PERC                = 85,
	TGPIDX_BASIC_ATTACK_DAMAGE     = 86,
	TGPIDX_PHYSICAL_IMMUNITY       = 87,
	TGPIDX_MAGICAL_IMMUNITY        = 88,
	TGPIDX_DAMAGE_TAKEN_PERC_PHYS  = 89,
	TGPIDX_DAMAGE_TAKEN_PERC_MAG   = 90,
	TGPIDX_DAMAGE_TAKEN_PERC_CRIT  = 91,
	TGPIDX_DAMAGE_TAKEN_FLAT_CRIT  = 92,
	TGPIDX_DISABLE_CC_IMMUNITY_GLOW = 93,
	TGPIDX_POWER_HEALING_PERC_ITEM = 94,
	TGPIDX_OBJECTIVE_DAMAGE_BONUS  = 95,
	TGPIDX_MANA_COST_MODIFIER      = 96,
	TGPIDX_STRUCTURE_DAMAGE_MODIFIER = 97,
	TGPIDX_COOLDOWN_EXTENSION      = 98,
	TGPIDX_PHYS_ABILITY_LIFESTEAL  = 99,
	TGPIDX_GOLD_BONUS              = 100,
	TGPIDX_GOLD_BONUS_TEAM         = 101,
	TGPIDX_XP_BONUS                = 102,
	TGPIDX_XP_BONUS_TEAM           = 103,
	TGPIDX_TIDI                    = 104,
	TGPIDX_IGNORE_BACKDOOR_PROTECTIONS = 105,
	TGPIDX_EFFECT_FORM_STACKING_THRESHOLD = 106,
	TGPIDX_LOCAL_TIDI              = 107,
	TGPIDX_FORWARD_GROUNDSPEED_PERC = 108,
	TGPIDX_BACKPEDAL_GROUNDSPEED_PERC = 109,
	TGPIDX_STRAFE_GROUNDSPEED_PERC = 110,
	TGPIDX_BASIC_ATTACK_GROUNDSPEED_MELEE_PERC = 111,
	TGPIDX_BASIC_ATTACK_GROUNDSPEED_RANGED_PERC = 112,
	TGPIDX_DAMAGE_TAKEN_PERC_INHAND = 113,
	TGPIDX_MAX                     = 114
};


// Enum TgGame.TgPawn.ECollisionTransitionState
enum class ECollisionTransitionState : uint8_t
{
	COLTRAN_None                   = 0,
	COLTRAN_On                     = 1,
	COLTRAN_Off                    = 2,
	COLTRAN_MAX                    = 3
};


// Enum TgGame.TgSpecialFx.ELightFxState
enum class ELightFxState : uint8_t
{
	LFX_UNMANAGED                  = 0,
	LFX_ACTIVE                     = 1,
	LFX_KILLEDBYMGR                = 2,
	LFX_DYING                      = 3,
	LFX_INACTIVE                   = 4,
	LFX_MAX                        = 5
};


// Enum TgGame.TgPawn.TG_TELEPORT_STATE
enum class ETG_TELEPORT_STATE : uint8_t
{
	TELEPORT_NONE                  = 0,
	TELEPORT_ENTER                 = 1,
	TELEPORT_EXIT                  = 2,
	TELEPORT_ENTER_BLINK           = 3,
	TELEPORT_EXIT_BLINK            = 4,
	TELEPORT_ENTER_THOR_HAMMER     = 5,
	TELEPORT_EXIT_THOR_HAMMER      = 6,
	TELEPORT_ISIS_IDMET_BUILDUP    = 7,
	TELEPORT_ISIS_IDMET_HUMANOID   = 8,
	TELEPORT_LOKI_ASSASSINATE_ENTER = 9,
	TELEPORT_LOKI_ASSASSINATE_EXIT = 10,
	TELEPORT_NEITH_REBOUND_FROM_HUMANOID = 11,
	TELEPORT_NEITH_REBOUND_FROM_BROKENWEAVE = 12,
	TELEPORT_NEITH_UNRAVEL_AOE     = 13,
	TELEPORT_DAMAGE_REDIRECT       = 14,
	TELEPORT_HUNBATZ_ENTER         = 15,
	TELEPORT_HUNBATZ_EXIT          = 16,
	TELEPORT_FREYA_PULSE_AOE       = 17,
	TELEPORT_HEL_REBOUND_RESTORATION = 18,
	TELEPORT_AHMUZENCAB_SWARM_INFECT = 19,
	TELEPORT_AHMUZENCAB_HIVE_HEAL  = 20,
	TELEPORT_NEMESIS_PARRY         = 21,
	TELEPORT_SCYLLA_COBRA_STRIKE   = 22,
	TELEPORT_SCYLLA_COBRA_EXPLOSION = 23,
	TELEPORT_KUMBHAKARNA_BELLYBUCK = 24,
	TELEPORT_KUMBHAKARNA_UPPERCUT  = 25,
	TELEPORT_KUMBHAKARNA_SLEEPTAKEHIT = 26,
	TELEPORT_AUTOPORTAL_ENTER      = 27,
	TELEPORT_AUTOPORTAL_EXIT       = 28,
	TELEPORT_SIEGE_EXIT            = 29,
	TELEPORT_LASTBREATH_EXPLOSION  = 30,
	TELEPORT_SERQET_AMBUSH_ON      = 31,
	TELEPORT_SERQET_AMBUSH_OFF     = 32,
	TELEPORT_NUWA_ENVIRONMENT      = 33,
	TELEPORT_ODIN_RAVENSHOUT_AOE   = 34,
	TELEPORT_ARACHNE_COCOON_EXPLOSION = 35,
	TELEPORT_ENTER_AO_WATER        = 36,
	TELEPORT_EXIT_AO_WATER         = 37,
	TELEPORT_HOUYI_DIVEBOMB_EXPLOSION = 38,
	TELEPORT_CUPID_HEARTBOMB_INSTANT = 39,
	TELEPORT_AHPUCH_CORPSE_WARMUP  = 40,
	TELEPORT_SOL_REAPPEAR          = 41,
	TELEPORT_G72_FLASH             = 42,
	TELEPORT_RAIJIN_THUNDER_ENTER  = 43,
	TELEPORT_RAIJIN_THUNDER_EXIT   = 44,
	TELEPORT_KALDR_ENTER           = 45,
	TELEPORT_KALDR_EXIT            = 46,
	TELEPORT_ERLANG_SHEN_DOG_ENTER = 47,
	TELEPORT_ERLANG_SHEN_DOG_EXIT  = 48,
	TELEPORT_RELIC_ENTER           = 49,
	TELEPORT_RELIC_EXIT            = 50,
	TELEPORT_ANUBIS_ENVIRONMENT    = 51,
	TELEPORT_APEP_STRIKE           = 52,
	TELEPORT_FLICKER_ENTER         = 53,
	TELEPORT_FLICKER_EXIT          = 54,
	TELEPORT_TF1_KILLED_CAMP       = 55,
	TELEPORT_TF2_KILLED_CAMP       = 56,
	TELEPORT_DAJI_MOVEMENT         = 57,
	TELEPORT_SKYDOME_FX            = 58,
	TELEPORT_GOD95_EXPLOSION_INSTANT = 59,
	TELEPORT_GOD95_A01_WARNING     = 60,
	TELEPORT_FREYA_EXPLOSION_INSTANT = 61,
	TELEPORT_KNIGHT_EXPLOSION_INSTANT = 62,
	TELEPORT_WIZARD_A03_ENTER      = 63,
	TELEPORT_WIZARD_A03_EXIT       = 64,
	TELEPORT_SET_A03_ENTER         = 65,
	TELEPORT_SET_A03_EXIT          = 66,
	TELEPORT_HORUS_A04_BLINK       = 67,
	TELEPORT_NGM3BLINK_ENTER       = 68,
	TELEPORT_NGM3BLINK_EXIT        = 69,
	TELEPORT_HEIMDALLR_ENTER       = 70,
	TELEPORT_HEIMDALLR_EXIT        = 71,
	TELEPORT_HOUYI_T5_A01          = 72,
	TELEPORT_HOUYI_T5_A02_OUT      = 73,
	TELEPORT_HOUYI_T5_A02_IN       = 74,
	TELEPORT_JANUS_ENTER           = 75,
	TELEPORT_JANUS_EXIT            = 76,
	TELEPORT_MAX                   = 77
};


// Enum TgGame.TgPawn.ESkinLevelMechanic
enum class ESkinLevelMechanic : uint8_t
{
	SLM_Manual                     = 0,
	SLM_Auto                       = 1,
	SLM_Gated                      = 2,
	SLM_MAX                        = 3
};


// Enum TgGame.TgPawn.ENewChargeState
enum class ENewChargeState : uint8_t
{
	NEWCHARGE_None                 = 0,
	NEWCHARGE_Accel                = 1,
	NEWCHARGE_MAX                  = 2
};


// Enum TgGame.TgPawn.SkyJumpPhase
enum class ESkyJumpPhase : uint8_t
{
	SJP_None                       = 0,
	SJP_Summon                     = 1,
	SJP_Ascend                     = 2,
	SJP_Riding                     = 3,
	SJP_Dismount                   = 4,
	SJP_Death                      = 5,
	SJP_Death_While_Summon         = 6,
	SJP_MAX                        = 7
};


// Enum TgGame.TgAIBehaviorCondition_PawnState.PawnStateName
enum class EPawnStateName : uint8_t
{
	PSN_Auto                       = 0,
	PSN_Idle                       = 1,
	PSN_Dying                      = 2,
	PSN_Evade                      = 3,
	PSN_Downed                     = 4,
	PSN_MAX                        = 5
};


// Enum TgGame.TgAILocalPositionSolver.ERepulsorWeightMethod
enum class ERepulsorWeightMethod : uint8_t
{
	RWM_Cubic                      = 0,
	RWM_Lerp                       = 1,
	RWM_Slerp                      = 2,
	RWM_MAX                        = 3
};


// Enum TgGame.TgAIObstacleAvoidance.EObstacleAvoidanceStatus
enum class EObstacleAvoidanceStatus : uint8_t
{
	OAS_NoPath                     = 0,
	OAS_Pathing                    = 1,
	OAS_PathFinished               = 2,
	OAS_MAX                        = 3
};


// Enum TgGame.TgBehaviorTracker.ETrackerActionTypes
enum class ETrackerActionTypes : uint8_t
{
	TBAT_Prompt                    = 0,
	TBAT_Record                    = 1,
	TBAT_MAX                       = 2
};


// Enum TgGame.TgBehaviorTracker.ETrackedBehaviorType
enum class ETrackedBehaviorType : uint8_t
{
	BTIR_DeathCount                = 0,
	BTIR_DeathFrequency            = 1,
	BTIR_Idle                      = 2,
	BTIR_OutOfCombat               = 3,
	BTIR_BuildValue                = 4,
	BTIR_Communication             = 5,
	BTIR_Mutes                     = 6,
	BTIR_VGS                       = 7,
	BTIR_MAX                       = 8
};


// Enum TgGame.TgBehaviorTracker.ETrackedBehaviorCategory
enum class ETrackedBehaviorCategory : uint8_t
{
	TBC_Feeding                    = 0,
	TBC_AFK                        = 1,
	TBC_Behavior                   = 2,
	TBC_MAX                        = 3
};


// Enum TgGame.TgPawn_BabaYaga.BabaYagaA02IngredientMajority
enum class EBabaYagaA02IngredientMajority : uint8_t
{
	BYIM_IngredientA               = 0,
	BYIM_IngredientB               = 1,
	BYIM_IngredientC               = 2,
	BYIM_Neutral                   = 3,
	BYIM_MAX                       = 4
};


// Enum TgGame.TgPawn_BabaYaga.BabaYagaA02Ingredients
enum class EBabaYagaA02Ingredients : uint8_t
{
	BYI_IngredientA                = 0,
	BYI_IngredientB                = 1,
	BYI_IngredientC                = 2,
	BYI_MAX                        = 3
};


// Enum TgGame.TgPawn_BabaYaga.BabaYagaA01AnimState
enum class EBabaYagaA01AnimState : uint8_t
{
	BYA01A_Circle                  = 0,
	BYA01A_Straight                = 1,
	BYA01A_MAX                     = 2
};


// Enum TgGame.TgPawn_BabaYaga.BabaYagaTargeterDevice
enum class EBabaYagaTargeterDevice : uint8_t
{
	BYT_Inhand                     = 0,
	BYT_A02                        = 1,
	BYT_A04                        = 2,
	BYT_MAX                        = 3
};


// Enum TgGame.TgPawn_BabaYaga.BabaYagaA02VisualState
enum class EBabaYagaA02VisualState : uint8_t
{
	BYA02VS_Equipped               = 0,
	BYA02VS_Stored                 = 1,
	BYA02VS_Consumed               = 2,
	BYA02VS_MAX                    = 3
};


// Enum TgGame.TgPawn_BabaYaga.BabaYagaA02AnimState
enum class EBabaYagaA02AnimState : uint8_t
{
	BYA02A_None                    = 0,
	BYA02A_Brew                    = 1,
	BYA02A_Store                   = 2,
	BYA02A_Retrieve                = 3,
	BYA02A_MAX                     = 4
};


// Enum TgGame.TgPawn_BabaYaga.BabaYagaA02IngredientTotals
enum class EBabaYagaA02IngredientTotals : uint8_t
{
	BYIT_Low                       = 0,
	BYIT_Mid                       = 1,
	BYIT_High                      = 2,
	BYIT_MAX                       = 3
};


// Enum TgGame.TgPawn_Bellona.EBellonaWeaponSwapState
enum class EBellonaWeaponSwapState : uint8_t
{
	SWAPSTATE_PreSwap              = 0,
	SWAPSTATE_DeviceSwapped        = 1,
	SWAPSTATE_FullSwap             = 2,
	SWAPSTATE_MAX                  = 3
};


// Enum TgGame.TgPawn_Bellona.EBellonaWeaponSet
enum class EBellonaWeaponSet : uint8_t
{
	BWS_Sword                      = 0,
	BWS_SwordShield                = 1,
	BWS_Hammer                     = 2,
	BWS_Scourge                    = 3,
	BWS_EmptyHands                 = 4,
	BWS_MAX                        = 5
};


// Enum TgGame.TgAnimBlendByDirection.EBlendDirTypes
enum class EBlendDirTypes : uint8_t
{
	FBDir_Forward                  = 0,
	FBDir_Back                     = 1,
	FBDir_Left                     = 2,
	FBDir_Right                    = 3,
	FBDir_ForwardRight             = 4,
	FBDir_ForwardLeft              = 5,
	FBDir_BackRight                = 6,
	FBDir_BackLeft                 = 7,
	FBDir_Standing                 = 8,
	FBDir_None                     = 9,
	FBDir_MAX                      = 10
};


// Enum TgGame.TgAnimBlendByDirection.EBlendByDirectionSpeedType
enum class EBlendByDirectionSpeedType : uint8_t
{
	EBBDST_Velocity                = 0,
	EBBDST_Accel                   = 1,
	EBBDST_MAX                     = 2
};


// Enum TgGame.TgAnimBlendByFall.EBlendFallTypes
enum class EBlendFallTypes : uint8_t
{
	FBT_Up                         = 0,
	FBT_UpLoop                     = 1,
	FBT_Down                       = 2,
	FBT_PreLand                    = 3,
	FBT_Land                       = 4,
	FBT_Jump                       = 5,
	FBT_None                       = 6,
	FBT_MovingLand                 = 7,
	FBT_MAX                        = 8
};


// Enum TgGame.TgAnimBlendByFire_ZhongKui.DemonScrollState
enum class EDemonScrollState : uint8_t
{
	DEMONSCROLL_CHARGING           = 0,
	DEMONSCROLL_CHARGED            = 1,
	DEMONSCROLL_DISCHARGING        = 2,
	DEMONSCROLL_DISCHARGED         = 3,
	DEMONSCROLL_MAX                = 4
};


// Enum TgGame.TgAnimBlendByFlying.EFlyDirTypes
enum class EFlyDirTypes : uint8_t
{
	FDir_Forward                   = 0,
	FDir_Back                      = 1,
	FDir_Left                      = 2,
	FDir_Right                     = 3,
	FDir_Up                        = 4,
	FDir_Down                      = 5,
	FDir_UpMidair                  = 6,
	FDir_None                      = 7,
	FDir_MAX                       = 8
};


// Enum TgGame.TgPawn_Freya.TgPawn_Freya_WeaponType
enum class ETgPawn_Freya_WeaponType : uint8_t
{
	TGPFWT_MELEE                   = 0,
	TGPFWT_RANGED                  = 1,
	TGPFWT_ULTIMATE                = 2,
	TGPFWT_MAX                     = 3
};


// Enum TgGame.TgPawn_G84.MirrorImageStates
enum class EMirrorImageStates : uint8_t
{
	MirrorImageState_IntroA        = 0,
	MirrorImageState_IntroB        = 1,
	MirrorImageState_IdleA         = 2,
	MirrorImageState_IdleB         = 3,
	MirrorImageState_Attack        = 4,
	MirrorImageState_Outro         = 5,
	MirrorImageState_MAX           = 6
};


// Enum TgGame.TgPawn_Racer.RacerFloatGameStatsIndices
enum class ERacerFloatGameStatsIndices : uint8_t
{
	RacerFloatGameStatsIndices_Lap1Time = 0,
	RacerFloatGameStatsIndices_Lap2Time = 1,
	RacerFloatGameStatsIndices_Lap3Time = 2,
	RacerFloatGameStatsIndices_Lap4Time = 3,
	RacerFloatGameStatsIndices_MAX = 4
};


// Enum TgGame.TgPawn_Racer.RacerIntGameStatsIndices
enum class ERacerIntGameStatsIndices : uint8_t
{
	RacerIntGameStatsIndices_Place = 0,
	RacerIntGameStatsIndices_LapsCompleted = 1,
	RacerIntGameStatsIndices_CurrentItem = 2,
	RacerIntGameStatsIndices_ItemsUsed = 3,
	RacerIntGameStatsIndices_WrongWay = 4,
	RacerIntGameStatsIndices_ItemHits = 5,
	RacerIntGameStatsIndices_SpeedPads = 6,
	RacerIntGameStatsIndices_DriftBoosts = 7,
	RacerIntGameStatsIndices_MAX   = 8
};


// Enum TgGame.TgPawn_Racer.RacerActionAnimNames
enum class ERacerActionAnimNames : uint8_t
{
	RacerActionAnimNames_Accel     = 0,
	RacerActionAnimNames_Wall      = 1,
	RacerActionAnimNames_Brake     = 2,
	RacerActionAnimNames_EngineShake = 3,
	RacerActionAnimNames_Fire_F    = 4,
	RacerActionAnimNames_Fire_B    = 5,
	RacerActionAnimNames_Fire_G    = 6,
	RacerActionAnimNames_Fwd_Turn_L = 7,
	RacerActionAnimNames_Fwd_Turn_L_Drift = 8,
	RacerActionAnimNames_Fwd_Turn_R = 9,
	RacerActionAnimNames_Fwd_Turn_R_Drift = 10,
	RacerActionAnimNames_HitReaction_B = 11,
	RacerActionAnimNames_HitReaction_F = 12,
	RacerActionAnimNames_HitReaction_L = 13,
	RacerActionAnimNames_HitReaction_R = 14,
	RacerActionAnimNames_Idle      = 15,
	RacerActionAnimNames_Jump      = 16,
	RacerActionAnimNames_KnockedUp = 17,
	RacerActionAnimNames_OnGrass   = 18,
	RacerActionAnimNames_Rev_Turn_L = 19,
	RacerActionAnimNames_Rev_Turn_L_Drift = 20,
	RacerActionAnimNames_Rev_Turn_R = 21,
	RacerActionAnimNames_Rev_Turn_R_Drift = 22,
	RacerActionAnimNames_SpeedBoost = 23,
	RacerActionAnimNames_SpinOut   = 24,
	RacerActionAnimNames_Victory   = 25,
	RacerActionAnimNames_Defeat    = 26,
	RacerActionAnimNames_Honk      = 27,
	RacerActionAnimNames_PassL     = 28,
	RacerActionAnimNames_PassR     = 29,
	RacerActionAnimNames_Taunt     = 30,
	RacerActionAnimNames_Wave      = 31,
	RacerActionAnimNames_Fwd_Turn_L_Loose_Drift = 32,
	RacerActionAnimNames_Fwd_Turn_L_Counter_Drift = 33,
	RacerActionAnimNames_Fwd_Turn_R_Loose_Drift = 34,
	RacerActionAnimNames_Fwd_Turn_R_Counter_Drift = 35,
	RacerActionAnimNames_MAX       = 36
};


// Enum TgGame.TgPawn_Racer.RacerGear
enum class ERacerGear : uint8_t
{
	RacerGear_Drive                = 0,
	RacerGear_Neutral              = 1,
	RacerGear_Reverse              = 2,
	RacerGear_MAX                  = 3
};


// Enum TgGame.TgPawn_Racer.RacerDriftState
enum class ERacerDriftState : uint8_t
{
	RacerDriftState_Inactive       = 0,
	RacerDriftState_DriftRight     = 1,
	RacerDriftState_DriftLeft      = 2,
	RacerDriftState_MAX            = 3
};


// Enum TgGame.TgPawn_Racer.RacerFinishState
enum class ERacerFinishState : uint8_t
{
	RacerFinishState_NoStart       = 0,
	RacerFinishState_Countdown     = 1,
	RacerFinishState_NotFinished   = 2,
	RacerFinishState_VictoryLap    = 3,
	RacerFinishState_Spectating    = 4,
	RacerFinishState_Disconnected  = 5,
	RacerFinishState_MAX           = 6
};


// Enum TgGame.TgAnimBlendBySpeed.ESpeedType
enum class ESpeedType : uint8_t
{
	EST_Velocity                   = 0,
	EST_AccelAndMaxSpeed           = 1,
	EST_MAX                        = 2
};


// Enum TgGame.TgAnimMetaData_SkelControl_BoneScale_KeyFrame.EOnRelevanceChange
enum class EOnRelevanceChange : uint8_t
{
	ORC_NORMAL                     = 0,
	ORC_FORCE_KEYFRAME             = 1,
	ORC_FORCE_ACTIVE               = 2,
	ORC_FORCE_INACTIVE             = 3,
	ORC_FORCE_OTHER                = 4,
	ORC_MAX                        = 5
};


// Enum TgGame.TgAnimMetaData_SkinLevel.StartingSkinLevel
enum class EStartingSkinLevel : uint8_t
{
	SSL_NONE                       = 0,
	SSL_CURRENT                    = 1,
	SSL_NEXT                       = 2,
	SSL_CUSTOM                     = 3,
	SSL_MAX                        = 4
};


// Enum TgGame.TgAnimNodeBlendByKnockdown.EKnockDownChildren
enum class EKnockDownChildren : uint8_t
{
	KNOCKDOWNANIM_Input            = 0,
	KNOCKDOWNANIM_DownState        = 1,
	KNOCKDOWNANIM_GetUp            = 2,
	KNOCKDOWNANIM_MAX              = 3
};


// Enum TgGame.TgPawn_Mulan.MulanA03AnimState
enum class EMulanA03AnimState : uint8_t
{
	MAS3_Intro                     = 0,
	MAS3_HitIntro                  = 1,
	MAS3_ShortWallHit              = 2,
	MAS3_LongWallHit               = 3,
	MAS3_GodHit                    = 4,
	MAS3_Miss                      = 5,
	MAS3_MAX                       = 6
};


// Enum TgGame.TgPawn_DaJi.EDajiUltState
enum class EDajiUltState : uint8_t
{
	DAJI_ULT_NORMAL                = 0,
	DAJI_ULT_BUILDUP               = 1,
	DAJI_ULT_MAIN                  = 2,
	DAJI_ULT_TAKEDOWN_TARGETING    = 3,
	DAJI_ULT_TAKEDOWN              = 4,
	DAJI_ULT_DIED                  = 5,
	DAJI_ULT_MAX                   = 6
};


// Enum TgGame.TgAnimNodeBlendList_EquipScreen.EEquipScreenAnimTypes
enum class EEquipScreenAnimTypes : uint8_t
{
	ESAT_Default                   = 0,
	ESAT_Weapon                    = 1,
	ESAT_Helmet                    = 2,
	ESAT_Backpack                  = 3,
	ESAT_Suit                      = 4,
	ESAT_MAX                       = 5
};


// Enum TgGame.TgPawn_HouYi.EHouYiDivebombState
enum class EHouYiDivebombState : uint8_t
{
	HDBS_None                      = 0,
	HDBS_Buildup                   = 1,
	HDBS_Rising                    = 2,
	HDBS_InAir                     = 3,
	HDBS_Takedown                  = 4,
	HDBS_DiedInAir                 = 5,
	HDBS_MAX                       = 6
};


// Enum TgGame.TgPawn_HouYi.EHouyiDev1State
enum class EHouyiDev1State : uint8_t
{
	HDS_INACTIVE                   = 0,
	HDS_CHARGING                   = 1,
	HDS_ACTIVE                     = 2,
	HDS_MAX                        = 3
};


// Enum TgGame.TgPawn_HouYiSkin.HouYiSkinState
enum class EHouYiSkinState : uint8_t
{
	HYSS_IWannBeTheVeryBest        = 0,
	HYSS_TheBestThatEverWas        = 1,
	HYSS_MAX                       = 2
};


// Enum TgGame.TgPawn_HouYiSkin.HouYiPetAnimType
enum class EHouYiPetAnimType : uint8_t
{
	HYPAT_PlayAndGo                = 0,
	HYPAT_StopAndPlay              = 1,
	HYPAT_MAX                      = 2
};


// Enum TgGame.TgPawn_HouYiSkin.HouYiPetEvolution
enum class EHouYiPetEvolution : uint8_t
{
	HYPE_Auto                      = 0,
	HYPE_A01                       = 1,
	HYPE_A02                       = 2,
	HYPE_A03                       = 3,
	HYPE_MAX                       = 4
};


// Enum TgGame.TgPawn_HouYiSkin.HouYiPetType
enum class EHouYiPetType : uint8_t
{
	HYPT_Bot                       = 0,
	HYPT_Mesh                      = 1,
	HYPT_MAX                       = 2
};


// Enum TgGame.TgPawn_Thoth.EThothInhandState
enum class EThothInhandState : uint8_t
{
	ThothInhandState_Basic         = 0,
	ThothInhandState_Dev1          = 1,
	ThothInhandState_Dev2          = 2,
	ThothInhandState_Dev4          = 3,
	ThothInhandState_MAX           = 4
};


// Enum TgGame.TgAnimNodeBlendNPC.NPCAnimationStates
enum class ENPCAnimationStates : uint8_t
{
	NPCAS_NoCustomerPresent        = 0,
	NPCAS_CustomerPresent          = 1,
	NPCAS_Greeting                 = 2,
	NPCAS_NoSale                   = 3,
	NPCAS_CallOut                  = 4,
	NPCAS_Sale                     = 5,
	NPCAS_TransCustomerPresentToNotPresent = 6,
	NPCAS_None                     = 7,
	NPCAS_MAX                      = 8
};


// Enum TgGame.TgAnimNodeFidget.EFidgetType
enum class EFidgetType : uint8_t
{
	FT_Timed                       = 0,
	FT_ChanceOnIdleCompletes       = 1,
	FT_MAX                         = 2
};


// Enum TgGame.TgAnimNotify_AudioGroup.TG_MESH_SOURCE
enum class ETG_MESH_SOURCE : uint8_t
{
	TG_MESH_SOURCE_PAWN            = 0,
	TG_MESH_SOURCE_IN_HAND_DEVICE  = 1,
	TG_MESH_SOURCE_MAX             = 2
};


// Enum TgGame.TgAnimNotify_InterpolateMorphTargetWeight.InterruptMorphTargetBehavior
enum class EInterruptMorphTargetBehavior : uint8_t
{
	ResetToInitial                 = 0,
	ResetToValue                   = 1,
	RestToTarget                   = 2,
	InterruptMorphTargetBehavior_MAX = 3
};


// Enum TgGame.TgAnimNotify_ToggleMeshAttachment.eMeshAssemblyType
enum class EeMeshAssemblyType : uint8_t
{
	EMT_NONE                       = 0,
	EMT_MATCH                      = 1,
	EMT_VICTORY                    = 2,
	EMT_DEFEAT                     = 3,
	EMT_MAX                        = 4
};


// Enum TgGame.TgAnimNotify_ToggleRigidBodies.ERigidBodyFixationChange
enum class ERigidBodyFixationChange : uint8_t
{
	RBF_Fix                        = 0,
	RBF_Unfix                      = 1,
	RBF_Toggle                     = 2,
	RBF_MAX                        = 3
};


// Enum TgGame.TgAnimTurnInPlace.ForcedTransitionAngle
enum class EForcedTransitionAngle : uint8_t
{
	FTA_NONE                       = 0,
	FTA                            = 1,
	FTA01                          = 2,
	FTA_MAX                        = 3
};


// Enum TgGame.TgArenaManager.EArenaRoundState
enum class EArenaRoundState : uint8_t
{
	ARS_Pre                        = 0,
	ARS_Active                     = 1,
	ARS_Post                       = 2,
	ARS_Empty                      = 3,
	ARS_MAX                        = 4
};


// Enum TgGame.TgBotFactory.eBotSelection
enum class EeBotSelection : uint8_t
{
	BS_RANDOM                      = 0,
	BS_SEQUENTIAL                  = 1,
	BS_MAX                         = 2
};


// Enum TgGame.TgBotFactory_Adventure.EChestType
enum class EChestType : uint8_t
{
	TGCHEST_Normal                 = 0,
	TGCHEST_Elite                  = 1,
	TGCHEST_MAX                    = 2
};


// Enum TgGame.TgRepInfo_Factory_FireGiantGC2015a.EFireGiantChestState
enum class EFireGiantChestState : uint8_t
{
	CHEST_CLOSED                   = 0,
	CHEST_OPENING                  = 1,
	CHEST_OPENED                   = 2,
	CHEST_MAX                      = 3
};


// Enum TgGame.TgBotFactory_LeashedConfigurable.EQUEUESELECTIONTYPE
enum class EQUEUESELECTIONTYPE : uint8_t
{
	EQST_SEQUENTIAL                = 0,
	EQST_RANDOM                    = 1,
	EQST_RANDNOREPEAT              = 2,
	EQST_TIME                      = 3,
	EQST_CUSTOM                    = 4,
	EQST_KISMET                    = 5,
	EQST_MAX                       = 6
};


// Enum TgGame.TgBotFactory_LeashedConfigurable.EQUEUEPROFILESELECTION
enum class EQUEUEPROFILESELECTION : uint8_t
{
	EQPS_RANDOM                    = 0,
	EQPS_TIME                      = 1,
	EQPS_KISMET                    = 2,
	EQPS_MAX                       = 3
};


// Enum TgGame.TgBotFactory_Minions.MinionFactoryType
enum class EMinionFactoryType : uint8_t
{
	MFT_Conquest                   = 0,
	MFT_Joust                      = 1,
	MFT_Assault                    = 2,
	MFT_Mayan                      = 3,
	MFT_Other                      = 4,
	MFT_ConquestS2                 = 5,
	MFT_JoustS2                    = 6,
	MFT_Clash_Egypt                = 7,
	MFT_ConquestS5                 = 8,
	MFT_MAX                        = 9
};


// Enum TgGame.TgBotStart_Formation.BotStartFormation_Position
enum class EBotStartFormation_Position : uint8_t
{
	POS_Front                      = 0,
	POS_TopLeft                    = 1,
	POS_TopMid                     = 2,
	POS_TopRight                   = 3,
	POS_CenterLeft                 = 4,
	POS_CenterMid                  = 5,
	POS_CenterRight                = 6,
	POS_BottomLeft                 = 7,
	POS_BottomMid                  = 8,
	POS_BottomRight                = 9,
	POS_Undefined                  = 10,
	POS_MAX                        = 11
};


// Enum TgGame.TgCameraModifier_LobbyCameraTransition.CameraTransType
enum class ECameraTransType : uint8_t
{
	CTT_None                       = 0,
	CTT_PanRight                   = 1,
	CTT_PanLeft                    = 2,
	CTT_PanUp                      = 3,
	CTT_PanDown                    = 4,
	CTT_FadeToWhite                = 5,
	CTT_FadeToWhiteFast            = 6,
	CTT_MAX                        = 7
};


// Enum TgGame.TgPawn_Depthzy.DepthzyMeshSwapStance
enum class EDepthzyMeshSwapStance : uint8_t
{
	DMSS_Base                      = 0,
	DMSS_Large                     = 1,
	DMSS_MAX                       = 2
};


// Enum TgGame.TgPlayerController.EWatchOtherPlayersMode
enum class EWatchOtherPlayersMode : uint8_t
{
	WOPM_NONE                      = 0,
	WOPM_PLAYER                    = 1,
	WOPM_MAX                       = 2
};


// Enum TgGame.TgPlayerController.EGiveGoldResult
enum class EGiveGoldResult : uint8_t
{
	GGR_PlayerNotFound             = 0,
	GGR_PlayerNotFriendly          = 1,
	GGR_NotEnoughGold              = 2,
	GGR_Success                    = 3,
	GGR_MAX                        = 4
};


// Enum TgGame.TgPlayerController.EClientGameEvent
enum class EClientGameEvent : uint8_t
{
	ECGE_StoreReroll               = 0,
	ECGE_BuyXp                     = 1,
	ECGE_BankGold                  = 2,
	ECGE_ShareGold                 = 3,
	ECGE_LockStore                 = 4,
	ECGE_PurchaseUnit              = 5,
	ECGE_SellUnit                  = 6,
	ECGE_BuffUnit                  = 7,
	ECGE_ResetAllPurchases         = 8,
	ECGE_MAX                       = 9
};


// Enum TgGame.TgGameplayCurvesSet.ECurveSetTypes
enum class ECurveSetTypes : uint8_t
{
	CST_None                       = 0,
	CST_Recoil                     = 1,
	CST_RecoilSimple               = 2,
	CST_AccuracyBloom              = 3,
	CST_DamageFalloff              = 4,
	CST_DamageFalloffAOE           = 5,
	CST_DamagePerShotHit           = 6,
	CST_SpreadTendency             = 7,
	CST_RuckusSpinUpControl        = 8,
	CST_GravityFromZVelocity       = 9,
	CST_AirControlFromZVelocity    = 10,
	CST_WallRunVerticalMovement    = 11,
	CST_AimAssist                  = 12,
	CST_AimAssistKeyframes         = 13,
	CST_AimAcceleration            = 14,
	CST_TargetTracking             = 15,
	CST_HitMarkerScaleByDamage     = 16,
	CST_GravityFromCustom          = 17,
	CST_ProjectileSpeedOverTime    = 18,
	CST_FlakInhandSlow             = 19,
	CST_FlakInhandKnockback        = 20,
	CST_ThreatLevelByRange         = 21,
	CST_AimAssistBoundsScale       = 22,
	CST_ProjFrictionOverTime       = 23,
	CST_ProjGravityOverTime        = 24,
	CST_ScopeWeaponFOV             = 25,
	CST_ScopeWorldFOV              = 26,
	CST_AimAssistBoundsByFOV       = 27,
	CST_SpeedOverDistance          = 28,
	CST_PositionFromPitch          = 29,
	CST_RecoilVisual               = 30,
	CST_StackDamageMultiplier      = 31,
	CST_MoveSpeedOverTime          = 32,
	CST_BulletMagnetOverDist       = 33,
	CST_Friction                   = 34,
	CST_Basic                      = 35,
	CST_Aiming                     = 36,
	CST_MAX                        = 37
};


// Enum TgGame.TgCharmComponent.EFiringState
enum class EFiringState : uint8_t
{
	FIRINGSTATE_NONE               = 0,
	FIRINGSTATE_PREHIT             = 1,
	FIRINGSTATE_POSTHIT            = 2,
	FIRINGSTATE_MAX                = 3
};


// Enum TgGame.TgClientSettings.ECastMode
enum class ECastMode : uint8_t
{
	CM_Default                     = 0,
	CM_Quick                       = 1,
	CM_Instant                     = 2,
	CM_Use_Global                  = 3,
	CM_MAX                         = 4
};


// Enum TgGame.TgClientSettings.EFriendStateNotifications
enum class EFriendStateNotifications : uint8_t
{
	FSN_Never                      = 0,
	FSN_Lobby_Only                 = 1,
	FSN_InGame_Only                = 2,
	FSN_Always                     = 3,
	FSN_MAX                        = 4
};


// Enum TgGame.TgClientSettings.ENamePlateName
enum class ENamePlateName : uint8_t
{
	NPN_PlayerName                 = 0,
	NPN_GodName                    = 1,
	NPN_None                       = 2,
	NPN_MAX                        = 3
};


// Enum TgGame.TgClientSettings.EColorBlindOption
enum class EColorBlindOption : uint8_t
{
	CB_None                        = 0,
	CB_Protanope                   = 1,
	CB_Deuteranope                 = 2,
	CB_Tritanope                   = 3,
	CB_MAX                         = 4
};


// Enum TgGame.TgClientSettings.ETgClientSettingVersion
enum class ETgClientSettingVersion : uint8_t
{
	TCSV_Baseline                  = 0,
	TCSV_Season3Launch             = 1,
	TCSV_Racer                     = 2,
	TCSV_AimAssist                 = 3,
	TCSV_Crossplay                 = 4,
	TCSV_StreamerMode              = 5,
	TCSV_KBM                       = 6,
	TCSV_Crossplay_Settings_Update = 7,
	TCSV_Clan_Notification_Settings_Update = 8,
	TCSV_MAX                       = 9
};


// Enum TgGame.TgTimerManager.TGT_EVENT
enum class ETGT_EVENT : uint8_t
{
	TGTE_DONE                      = 0,
	TGTE_START                     = 1,
	TGTE_UPDATE                    = 2,
	TGTE_PAUSED                    = 3,
	TGTE_MAX                       = 4
};


// Enum TgGame.TgDevice.ETargetingModeStatus
enum class ETargetingModeStatus : uint8_t
{
	TMS_None                       = 0,
	TMS_PreFire                    = 1,
	TMS_CannotFire                 = 2,
	TMS_CannotPlace                = 3,
	TMS_OK                         = 4,
	TMS_MAX                        = 5
};


// Enum TgGame.TgDevice.EWeaponFireType
enum class EWeaponFireType : uint8_t
{
	EWFT_InstantHit                = 0,
	EWFT_Projectile                = 1,
	EWFT_Custom                    = 2,
	EWFT_Arcing                    = 3,
	EWFT_Melee                     = 4,
	EWFT_None                      = 5,
	EWFT_MAX                       = 6
};


// Enum TgGame.TgDevice.EDeviceChangeEvent
enum class EDeviceChangeEvent : uint8_t
{
	DCE_Created                    = 0,
	DCE_ToggleState                = 1,
	DCE_CanFire                    = 2,
	DCE_Selected                   = 3,
	DCE_Cooldown                   = 4,
	DCE_PtsAlloc                   = 5,
	DCE_Refire                     = 6,
	DCE_InstanceCount              = 7,
	DCE_DeviceBuildup              = 8,
	DCE_MAX                        = 9
};


// Enum TgGame.TgDevice_BabaYaga_A01.BabaYagaProjStatusType
enum class EBabaYagaProjStatusType : uint8_t
{
	BYPST_Slow                     = 0,
	BYPST_Silence                  = 1,
	BYPST_Speed                    = 2,
	BYPST_Protections              = 3,
	BYPST_MAX                      = 4
};


// Enum TgGame.TgDevice_BabaYaga_A01.BabaYagaProjShape
enum class EBabaYagaProjShape : uint8_t
{
	BYPS_Left                      = 0,
	BYPS_Right                     = 1,
	BYPS_Split                     = 2,
	BYPS_Circle                    = 3,
	BYPS_MAX                       = 4
};


// Enum TgGame.TgCustomBlockingTypeInterface.TG_CUSTOM_BLOCKING_TYPE
enum class ETG_CUSTOM_BLOCKING_TYPE : uint8_t
{
	CBT_None                       = 0,
	CBT_Friendly                   = 1,
	CBT_Enemy                      = 2,
	CBT_All                        = 3,
	CBT_MAX                        = 4
};


// Enum TgGame.TgDeploy_Yemoja_A04.YemojaInterriorProxy
enum class EYemojaInterriorProxy : uint8_t
{
	YIP_River                      = 0,
	YIP_ZipperHit                  = 1,
	YIP_Vision                     = 2,
	YIP_MAX                        = 3
};


// Enum TgGame.TgDeploy_Yemoja_A04.YemojaWaveProxy
enum class EYemojaWaveProxy : uint8_t
{
	YWP_Left                       = 0,
	YWP_Right                      = 1,
	YWP_MAX                        = 2
};


// Enum TgGame.TgSpectatorController.EZoomState
enum class EZoomState : uint8_t
{
	ZOOM_None                      = 0,
	ZOOM_In                        = 1,
	ZOOM_Out                       = 2,
	ZOOM_MAX                       = 3
};


// Enum TgGame.TgSpectatorController.SpecFlightMode
enum class ESpecFlightMode : uint8_t
{
	SFM_Normal                     = 0,
	SFM_Heli                       = 1,
	SFM_HeliNoVert                 = 2,
	SFM_MAX                        = 3
};


// Enum TgGame.TgSpectatorController.SpectatorCameraMode
enum class ESpectatorCameraMode : uint8_t
{
	SpecCam_None                   = 0,
	SpecCam_Fly                    = 1,
	SpecCam_FollowThirdPerson      = 2,
	SpecCam_FollowTopDown          = 3,
	SpecCam_Camera                 = 4,
	SpecCam_Overview               = 5,
	SpecCam_LockedView             = 6,
	SpecCam_MAX                    = 7
};


// Enum TgGame.TgSpectatorController.SpectatorCameraCycle
enum class ESpectatorCameraCycle : uint8_t
{
	SpecCycle_None                 = 0,
	SpecCycle_PlayerFriendly       = 1,
	SpecCycle_PlayerEnemy          = 2,
	SpecCycle_Player               = 3,
	SpecCycle_TowerFriendly        = 4,
	SpecCycle_TowerEnemy           = 5,
	SpecCycle_Tower                = 6,
	SpecCycle_Cinematic            = 7,
	SpecCycle_Action               = 8,
	SpecCycle_MAX                  = 9
};


// Enum TgGame.TgSpectatorController.ESpectatorMode
enum class ESpectatorMode : uint8_t
{
	SPECMODE_Manual                = 0,
	SPECMODE_Director              = 1,
	SPECMODE_Assisted              = 2,
	SPECMODE_Broadcast1            = 3,
	SPECMODE_Broadcast2            = 4,
	SPECMODE_Broadcast3            = 5,
	SPECMODE_Broadcast4            = 6,
	SPECMODE_MAX                   = 7
};


// Enum TgGame.TgDeployable.DeployableCollisionComponentInitType
enum class EDeployableCollisionComponentInitType : uint8_t
{
	DCCIT_MeshSetup                = 0,
	DCCIT_FireMode_MinimumRadius   = 1,
	DCCIT_FireMode_DamageRadius    = 2,
	DCCIT_CustomValues             = 3,
	DCCIT_MAX                      = 4
};


// Enum TgGame.TgDeploy_ForceField.TG_DAMAGETYPE_INDEX
enum class ETG_DAMAGETYPE_INDEX : uint8_t
{
	TDT_THERMAL                    = 0,
	TDT_PHYSICAL                   = 1,
	TDT_MAGICAL                    = 2,
	TDT_BIO                        = 3,
	TDT_MAX                        = 4
};


// Enum TgGame.TgDeploy_Artillery.ArtilleryType
enum class EArtilleryType : uint8_t
{
	Artillery_Player               = 0,
	Artillery_Self                 = 1,
	Artillery_MAX                  = 2
};


// Enum TgGame.TgDeploy_BabaYaga_A01.BabaYagaWarningShape
enum class EBabaYagaWarningShape : uint8_t
{
	BYWS_Left                      = 0,
	BYWS_Right                     = 1,
	BYWS_Split                     = 2,
	BYWS_MAX                       = 3
};


// Enum TgGame.TgDeploy_BabaYaga_A04.BabaYagaA04TargetType
enum class EBabaYagaA04TargetType : uint8_t
{
	BYTT_God                       = 0,
	BYTT_Minion                    = 1,
	BYTT_MAX                       = 2
};


// Enum TgGame.TgDeploy_EffectVolume_WithEncroachment.EDeployableEncroachmentEvent
enum class EDeployableEncroachmentEvent : uint8_t
{
	DEE_Touch                      = 0,
	DEE_Untouch                    = 1,
	DEE_MAX                        = 2
};


// Enum TgGame.TgDeploy_Odin_Spears_V2.OdinOctogonSection
enum class EOdinOctogonSection : uint8_t
{
	OOS_Square                     = 0,
	OOS_Diamond                    = 1,
	OOS_MAX                        = 2
};


// Enum TgGame.TgDeploy_Odin_Spears_V2.OdinRingSection
enum class EOdinRingSection : uint8_t
{
	ORS_Top                        = 0,
	ORS_TopRight                   = 1,
	ORS_Right                      = 2,
	ORS_BottomRight                = 3,
	ORS_Bottom                     = 4,
	ORS_BottomLeft                 = 5,
	ORS_Left                       = 6,
	ORS_TopLeft                    = 7,
	ORS_MAX                        = 8
};


// Enum TgGame.TgDeploy_Persephone_A01.EPersephoneWarriorState
enum class EPersephoneWarriorState : uint8_t
{
	PWS_NONE                       = 0,
	PWS_BUILDUP                    = 1,
	PWS_RUNNING                    = 2,
	PWS_FIRING                     = 3,
	PWS_MAX                        = 4
};


// Enum TgGame.TgDeploy_Persephone_A02.PersephoneA02DeployStage
enum class EPersephoneA02DeployStage : uint8_t
{
	PDS_First                      = 0,
	PDS_Second                     = 1,
	PDS_Third                      = 2,
	PDS_MAX                        = 3
};


// Enum TgGame.TgDevice_Wizard_B02.EWizardB02Position
enum class EWizardB02Position : uint8_t
{
	WB2P_Left                      = 0,
	WB2P_Right                     = 1,
	WB2P_MAX                       = 2
};


// Enum TgGame.TgDeploy_Yemoja_B01.EYemojaB01Stages
enum class EYemojaB01Stages : uint8_t
{
	YEMOJAB01_Outer                = 0,
	YEMOJAB01_Inner                = 1,
	YEMOJAB01_Center               = 2,
	YEMOJAB01_MAX                  = 3
};


// Enum TgGame.TgDeployable_Heimdallr_A03.HeimdallrA03ActiveStatus
enum class EHeimdallrA03ActiveStatus : uint8_t
{
	HAAS_None                      = 0,
	HAAS_Origin                    = 1,
	HAAS_Destination               = 2,
	HAAS_MAX                       = 3
};


// Enum TgGame.TgDeployable_Heimdallr_A03.HeimdallrDeployableFxState
enum class EHeimdallrDeployableFxState : uint8_t
{
	HDFS_Closed                    = 0,
	HDFS_Breaking                  = 1,
	HDFS_Open                      = 2,
	HDFS_MAX                       = 3
};


// Enum TgGame.TgDeployable_Heimdallr_A04.HeimA04VisibilityState
enum class EHeimA04VisibilityState : uint8_t
{
	HVS_First                      = 0,
	HVS_Second                     = 1,
	HVS_MAX                        = 2
};


// Enum TgGame.TgDeployable_Heimdallr_A04.HeimA04FXConstruction
enum class EHeimA04FXConstruction : uint8_t
{
	HMFS_Barrier                   = 0,
	HMFS_Break                     = 1,
	HMFS_MAX                       = 2
};


// Enum TgGame.TgDeployable_Heimdallr_A04.HeimA04MeshConstruction
enum class EHeimA04MeshConstruction : uint8_t
{
	HMCS_Inner                     = 0,
	HMCS_Outer                     = 1,
	HMCS_MAX                       = 2
};


// Enum TgGame.TgDeployable_Jorm_ArcV2.eJormArcState
enum class EeJormArcState : uint8_t
{
	JAS_None                       = 0,
	JAS_Leaping                    = 1,
	JAS_Stable                     = 2,
	JAS_Falling                    = 3,
	JAS_MAX                        = 4
};


// Enum TgGame.TgDeployable_Susano_Dev4_Typhoon.ESusanoTyphoonState
enum class ESusanoTyphoonState : uint8_t
{
	TGPAWN_STS_None                = 0,
	TGPAWN_STS_Growing             = 1,
	TGPAWN_STS_Traveling           = 2,
	TGPAWN_STS_MAX                 = 3
};


// Enum TgGame.TgDeployable_Terra_CrushingShale.ETerraCrushingShaleDestructionState
enum class ETerraCrushingShaleDestructionState : uint8_t
{
	ShaleDestroyed_Crush           = 0,
	ShaleDestroyed_Shatter         = 1,
	ShaleDestroyed_Timeout         = 2,
	ShaleDestroyed_MAX             = 3
};


// Enum TgGame.TgDevice_TwoPhase.ETwoPhaseState
enum class ETwoPhaseState : uint8_t
{
	DTP_Normal                     = 0,
	DTP_Waiting                    = 1,
	DTP_AltFireReady               = 2,
	DTP_AltFireActive              = 3,
	DTP_MAX                        = 4
};


// Enum TgGame.TgDevice_TwoPhase.ETwoPhaseCustomValueType
enum class ETwoPhaseCustomValueType : uint8_t
{
	DTPCV_NormalFire               = 0,
	DTPCV_AltFire                  = 1,
	DTPCV_Never                    = 2,
	DTPCV_MAX                      = 3
};


// Enum TgGame.TgDevice_TimerFromParent.ETargetingTimerCheckpointType
enum class ETargetingTimerCheckpointType : uint8_t
{
	TTCT_BuildUp                   = 0,
	TTCT_StartFire                 = 1,
	TTCT_Fire                      = 2,
	TTCT_StopFire                  = 3,
	TTCT_MAX                       = 4
};


// Enum TgGame.TgDevice_Staging.EBlockAegisType
enum class EBlockAegisType : uint8_t
{
	BAT_Never                      = 0,
	BAT_BuildUp                    = 1,
	BAT_WhileFiring                = 2,
	BAT_FullFireLoop               = 3,
	BAT_MAX                        = 4
};


// Enum TgGame.TgDevice_TogglableDeployable.ETogglableDeployableState
enum class ETogglableDeployableState : uint8_t
{
	TDS_Normal                     = 0,
	TDS_Waiting                    = 1,
	TDS_ToggleReady                = 2,
	TDS_MAX                        = 3
};


// Enum TgGame.TgDevice_Charge.ChargeFiringType
enum class EChargeFiringType : uint8_t
{
	CFT_Fire                       = 0,
	CFT_PreFire                    = 1,
	CFT_PostFire                   = 2,
	CFT_MAX                        = 3
};


// Enum TgGame.TgDevice_Charge.ChargeStopOnHitType
enum class EChargeStopOnHitType : uint8_t
{
	CSHT_None                      = 0,
	CSHT_AnyValidTarget            = 1,
	CSHT_GodOnly                   = 2,
	CSHT_NotGod                    = 3,
	CSHT_SpecialTarget             = 4,
	CSHT_MAX                       = 5
};


// Enum TgGame.TgDevice_Charge.ChargeEndState
enum class EChargeEndState : uint8_t
{
	CES_Miss                       = 0,
	CES_Hit                        = 1,
	CES_Interrupted                = 2,
	CES_MAX                        = 3
};


// Enum TgGame.TgDevice_BabaYaga_A02.BabaYagaA02ArrayIndex
enum class EBabaYagaA02ArrayIndex : uint8_t
{
	BYAI_Potion1                   = 0,
	BYAI_Potion2                   = 1,
	BYAI_MAX                       = 2
};


// Enum TgGame.TgDevice_BabaYaga_A02_Consumable.BabaYagaA02Icons
enum class EBabaYagaA02Icons : uint8_t
{
	BYIC_MajorA                    = 0,
	BYIC_MajorB                    = 1,
	BYIC_MajorC                    = 2,
	BYIC_Neutral                   = 3,
	BYIC_MAX                       = 4
};


// Enum TgGame.TgDevice_BabaYaga_A04_Sub.BabaYagaA04FireTimings
enum class EBabaYagaA04FireTimings : uint8_t
{
	BY4FT_FireAPreHitDelay         = 0,
	BY4FT_FireAPostHitDelay        = 1,
	BY4FT_FireBPreHitDelay         = 2,
	BY4FT_FireBPostHitDelay        = 3,
	BY4FT_FireCPreHitDelay         = 4,
	BY4FT_FireCPostHitDelay        = 5,
	BY4FT_FireDPreHitDelay         = 6,
	BY4FT_FireDPostHitDelay        = 7,
	BY4FT_MAX                      = 8
};


// Enum TgGame.TgDevice_BabaYaga_A04_Sub.BabaYagaA04FireType
enum class EBabaYagaA04FireType : uint8_t
{
	BY4F_FireA                     = 0,
	BY4F_FireB                     = 1,
	BY4F_FireC                     = 2,
	BY4F_FireD                     = 3,
	BY4F_BlockedFire               = 4,
	BY4F_MAX                       = 5
};


// Enum TgGame.TgDevice_WarningDeployable.EWarningDeployableTimingType
enum class EWarningDeployableTimingType : uint8_t
{
	WDTT_Buildup                   = 0,
	WDTT_StartFire                 = 1,
	WDTT_Fire                      = 2,
	WDTT_ProjectileShutdown        = 3,
	WDTT_StopFire                  = 4,
	WDTT_MAX                       = 5
};


// Enum TgGame.TgDevice_BabaYagaHut_A04_Reposition.BabaYagaHutA04RepositionType
enum class EBabaYagaHutA04RepositionType : uint8_t
{
	BYHR_ToOwner                   = 0,
	BYHR_ToOrigin                  = 1,
	BYHR_MAX                       = 2
};


// Enum TgGame.TgDevice_BastetPounce.EBastetPounceState
enum class EBastetPounceState : uint8_t
{
	BPS_Normal                     = 0,
	BPS_InForwardWaiting           = 1,
	BPS_ShouldPounceBack           = 2,
	BPS_InBackwardWaiting          = 3,
	BPS_MAX                        = 4
};


// Enum TgGame.TgPawn_BastetV2.BastetSphinxPosition
enum class EBastetSphinxPosition : uint8_t
{
	BSP_Left                       = 0,
	BSP_Right                      = 1,
	BSP_MAX                        = 2
};


// Enum TgGame.TgPawn_BastetV2.BastetA01LeapState
enum class EBastetA01LeapState : uint8_t
{
	BLS_ForwardLeap                = 0,
	BLS_ForwardLand                = 1,
	BLS_BackwardLeap               = 2,
	BLS_BackwardLand               = 3,
	BLS_MAX                        = 4
};


// Enum TgGame.TgDevice_Bastet_A03.BastetA03FireType
enum class EBastetA03FireType : uint8_t
{
	BFT_Left                       = 0,
	BFT_Right                      = 1,
	BFT_MAX                        = 2
};


// Enum TgGame.TgDevice_Bellona_ShieldBash.EShieldBashState
enum class EShieldBashState : uint8_t
{
	BASH_INACTIVE                  = 0,
	BASH_START                     = 1,
	BASH_ACTIVE                    = 2,
	BASH_MAX                       = 3
};


// Enum TgGame.TgDevice_Bellona_SpinToStrike.ESpinToStrikeState
enum class ESpinToStrikeState : uint8_t
{
	STRIKE_INACTIVE                = 0,
	STRIKE_START                   = 1,
	STRIKE_ACTIVE                  = 2,
	STRIKE_MAX                     = 3
};


// Enum TgGame.TgPawn_Cerberus.ECerberusA01Anims
enum class ECerberusA01Anims : uint8_t
{
	CA1A_S                         = 0,
	CA1A_L                         = 1,
	CA1A_M                         = 2,
	CA1A_LM                        = 3,
	CA1A_R                         = 4,
	CA1A_LR                        = 5,
	CA1A_RM                        = 6,
	CA1A_LMR                       = 7,
	CA1A_MAX                       = 8
};


// Enum TgGame.TgPawn_Cerberus.ECerberusHead
enum class ECerberusHead : uint8_t
{
	CH_Snake                       = 0,
	CH_LeftHead                    = 1,
	CH_MiddleHead                  = 2,
	CH_RightHead                   = 3,
	CH_MAX                         = 4
};


// Enum TgGame.TgDevice_CH05_Seaweed.CURRENTSEAWEEDSTATE
enum class ECURRENTSEAWEEDSTATE : uint8_t
{
	TGCSS_FIRST                    = 0,
	TGCSS_SECOND                   = 1,
	TGCSS_MAX                      = 2
};


// Enum TgGame.TgDevice_Danzaburou_A04.DanzaburouA04FireType
enum class EDanzaburouA04FireType : uint8_t
{
	D4FT_Undecided                 = 0,
	D4FT_Charge                    = 1,
	D4FT_Projectile                = 2,
	D4FT_MAX                       = 3
};


// Enum TgGame.TgDevice_Danzaburou_PSV.DanzaburouMoneyPouchType
enum class EDanzaburouMoneyPouchType : uint8_t
{
	DMPT_Pouch1                    = 0,
	DMPT_Pouch2                    = 1,
	DMPT_Pouch3                    = 2,
	DMPT_Pouch4                    = 3,
	DMPT_MAX                       = 4
};


// Enum TgGame.TgDevice_Depthzy_A03.DepthzyRollingLinePosition
enum class EDepthzyRollingLinePosition : uint8_t
{
	DRLP_Left                      = 0,
	DRLP_Right                     = 1,
	DRLP_MAX                       = 2
};


// Enum TgGame.TgDevice_Depthzy_B01.DepthzyClawPosition
enum class EDepthzyClawPosition : uint8_t
{
	DCP_Center                     = 0,
	DCP_Left                       = 1,
	DCP_Right                      = 2,
	DCP_MAX                        = 3
};


// Enum TgGame.TgDevice_Dialogue.EDialogueComplianceType
enum class EDialogueComplianceType : uint8_t
{
	DCT_NOT_FOUND                  = 0,
	DCT_FOUND_TRIGGER              = 1,
	DCT_FOUND_NO_TRIGGER           = 2,
	DCT_MAX                        = 3
};


// Enum TgGame.TgPawn_NPC_Wizard.EWizardEquipPoint
enum class EWizardEquipPoint : uint8_t
{
	WEP_AUTO                       = 0,
	WEP_PASSIVE                    = 1,
	WEP_OFFHAND                    = 2,
	WEP_OFFHAND01                  = 3,
	WEP_OFFHAND02                  = 4,
	WEP_OFFHAND03                  = 5,
	WEP_MAX                        = 6
};


// Enum TgGame.TgPawn_NPC_Wizard.EWizardType
enum class EWizardType : uint8_t
{
	WT_Minor                       = 0,
	WT_Major                       = 1,
	WT_Champ                       = 2,
	WT_MAX                         = 3
};


// Enum TgGame.TgPawn_ErlangShen.ERLANG_SHEN_TRANSFORM
enum class ERLANG_SHEN_TRANSFORM : uint8_t
{
	ERLANG_SHEN_TRANSFORM_SELF     = 0,
	ERLANG_SHEN_TRANSFORM_MINK     = 1,
	ERLANG_SHEN_TRANSFORM_TURTLE   = 2,
	ERLANG_SHEN_TRANSFORM_MAX      = 3
};


// Enum TgGame.TgDevice_G72_Dev1.G72_AuraType
enum class EG72_AuraType : uint8_t
{
	G72A_AWis                      = 0,
	G72A_AVal                      = 1,
	G72A_MAX                       = 2
};


// Enum TgGame.TgDevice_God94_PSV.EGod94PassiveType
enum class EGod94PassiveType : uint8_t
{
	G94PassiveType_None            = 0,
	G94PassiveType_A               = 1,
	G94PassiveType_B               = 2,
	G94PassiveType_MAX             = 3
};


// Enum TgGame.TgDevice_Heimdallr_A03.HeimdallrA03State
enum class EHeimdallrA03State : uint8_t
{
	HeimA03_Inactive               = 0,
	HeimA03_Active                 = 1,
	HeimA03_Firing                 = 2,
	HeimA03_Cooldown               = 3,
	HeimA03_MAX                    = 4
};


// Enum TgGame.TgDevice_Heimdallr_A03.HeimdallrDeployableOrder
enum class EHeimdallrDeployableOrder : uint8_t
{
	HDO_First                      = 0,
	HDO_Second                     = 1,
	HDO_MAX                        = 2
};


// Enum TgGame.TgDevice_Heimdallr_PSV.HeimdallrPSVStateFlag
enum class EHeimdallrPSVStateFlag : uint8_t
{
	HPSF_Visible                   = 0,
	HPSF_Marked                    = 1,
	HPSF_Unmarked                  = 2,
	HPSF_MAX                       = 3
};


// Enum TgGame.TgDevice_Horus_Dev4_Staging.EHorusTeleportDeployable
enum class EHorusTeleportDeployable : uint8_t
{
	HORUS_TP_START                 = 0,
	HORUS_TP_END                   = 1,
	HORUS_TP_MAX                   = 2
};


// Enum TgGame.TgDevice_Horus_Dev4_Staging.EHorusUltState
enum class EHorusUltState : uint8_t
{
	HORUS_ULT_NONE                 = 0,
	HORUS_ULT_BUILDUP              = 1,
	HORUS_ULT_RISING               = 2,
	HORUS_ULT_FLYING               = 3,
	HORUS_ULT_TELEPORTING          = 4,
	HORUS_ULT_LANDED               = 5,
	HORUS_ULT_DIED                 = 6,
	HORUS_ULT_MAX                  = 7
};


// Enum TgGame.TgDevice_Janus_A02_V2.DeathGateProjectileType
enum class EDeathGateProjectileType : uint8_t
{
	DGPT_Sinusoid                  = 0,
	DGPT_Middle                    = 1,
	DGPT_MAX                       = 2
};


// Enum TgGame.TgDevice_Knight_Dev3A.EKnightDev3AState
enum class EKnightDev3AState : uint8_t
{
	KD3A_INACTIVE                  = 0,
	KD3A_STRIKE                    = 1,
	KD3A_SPIN                      = 2,
	KD3A_MAX                       = 3
};


// Enum TgGame.TgDevice_Monkey_FuriousMonkey.EFuriousMonkeyState
enum class EFuriousMonkeyState : uint8_t
{
	FMS_Normal                     = 0,
	FMS_ProjectileOut              = 1,
	FMS_PostProjectile             = 2,
	FMS_MAX                        = 3
};


// Enum TgGame.TgMulanEvolutionInterface.MulanEvolutionState
enum class EMulanEvolutionState : uint8_t
{
	MES_EVOLUTIONBASE              = 0,
	MES_EVOLUTION1                 = 1,
	MES_EVOLUTION2                 = 2,
	MES_EVOLUTION3                 = 3,
	MES_MAX                        = 4
};


// Enum TgGame.TgDevice_Neith_BrokenWeave.WeaveSpawnType
enum class EWeaveSpawnType : uint8_t
{
	TG_WEAVESPAWNTYPE_BACKFLIP     = 0,
	TG_WEAVESPAWNTYPE_PAWNDEATH    = 1,
	TG_WEAVESPAWNTYPE_UNTRACKED    = 2,
	TG_WEAVESPAWNTYPE_MAX          = 3
};


// Enum TgGame.TgDevice_Nike_Dev2_V2.ENikeDev2AnimState
enum class ENikeDev2AnimState : uint8_t
{
	NIKE_DEV2_IDLE                 = 0,
	NIKE_DEV2_SHIELD_INTRO         = 1,
	NIKE_DEV2_SHIELD_ACTIVE        = 2,
	NIKE_DEV2_PREFIRE              = 3,
	NIKE_DEV2_POSTFIRE             = 4,
	NIKE_DEV2_MAX                  = 5
};


// Enum TgGame.TgDevice_NuWa_Passive.CRYSTAL_TYPE
enum class ECRYSTAL_TYPE : uint8_t
{
	CRYSTAL_TYPE_NONE              = 0,
	CRYSTAL_TYPE_AURA              = 1,
	CRYSTAL_TYPE_SELF              = 2,
	CRYSTAL_TYPE_MAX               = 3
};


// Enum TgGame.TgDevice_Odin_A03.OdinSpearState
enum class EOdinSpearState : uint8_t
{
	OSS_None                       = 0,
	OSS_Stage1                     = 1,
	OSS_Stage2                     = 2,
	OSS_Stage3                     = 3,
	OSS_MAX                        = 4
};


// Enum TgGame.TgDevice_Olorun_Dev1.EOlorunDev1State
enum class EOlorunDev1State : uint8_t
{
	OLORUN_DEV1_IDLE               = 0,
	OLORUN_DEV1_INTRO              = 1,
	OLORUN_DEV1_CHARGING           = 2,
	OLORUN_DEV1_PREFIRE            = 3,
	OLORUN_DEV1_POSTFIRE           = 4,
	OLORUN_DEV1_MAX                = 5
};


// Enum TgGame.TgDevice_Olorun_Dev2.EOlorunDev2State
enum class EOlorunDev2State : uint8_t
{
	OLORUN_DEV2_IDLE               = 0,
	OLORUN_DEV2_STIM_PREFIRE       = 1,
	OLORUN_DEV2_STIM_POSTFIRE      = 2,
	OLORUN_DEV2_SUN_PREFIRE        = 3,
	OLORUN_DEV2_SUN_POSTFIRE       = 4,
	OLORUN_DEV2_MAX                = 5
};


// Enum TgGame.TgDevice_ProcOnNearbyDeath.ProcOnNearbyDeathFaction
enum class EProcOnNearbyDeathFaction : uint8_t
{
	PONDF_All                      = 0,
	PONDF_Friendly                 = 1,
	PONDF_Enemy                    = 2,
	PONDF_MAX                      = 3
};


// Enum TgGame.TgDevice_Raijin_Dev4.EBeatSelect
enum class EBeatSelect : uint8_t
{
	BEAT                           = 0,
	BEAT01                         = 1,
	BEAT02                         = 2,
	BEAT_MAX                       = 3
};


// Enum TgGame.TgDevice_Raijin_KotoDrums.EKotoBeat
enum class EKotoBeat : uint8_t
{
	KOTO                           = 0,
	KOTO01                         = 1,
	KOTO02                         = 2,
	KOTO_MAX                       = 3
};


// Enum TgGame.TgDevice_Scylla_Num3.EScyllaSentinelState
enum class EScyllaSentinelState : uint8_t
{
	SSS_Normal                     = 0,
	SSS_Waiting                    = 1,
	SSS_ToggleReady                = 2,
	SSS_ToggleActive               = 3,
	SSS_MAX                        = 4
};


// Enum TgGame.TgDevice_Set_A03.EDeviceSetA03State
enum class EDeviceSetA03State : uint8_t
{
	SetA03State_Inactive           = 0,
	SetA03State_Teleport_Success   = 1,
	SetA03State_Teleport_Fail      = 2,
	SetA03State_MAX                = 3
};


// Enum TgGame.TgPawn_Sol.ESolUltState
enum class ESolUltState : uint8_t
{
	SUS_Inactive                   = 0,
	SUS_Charging                   = 1,
	SUS_Exploded                   = 2,
	SUS_MAX                        = 3
};


// Enum TgGame.TgPawn_Sol.ESolInstabilityState
enum class ESolInstabilityState : uint8_t
{
	SOL_INSTABILITY_None           = 0,
	SOL_INSTABILITY_Stage1         = 1,
	SOL_INSTABILITY_Stage2         = 2,
	SOL_INSTABILITY_MAX            = 3
};


// Enum TgGame.TgPawn_SunWukong.WUKONG_OX_HIT_ANIM
enum class EWUKONG_OX_HIT_ANIM : uint8_t
{
	WUKONG_OX_HIT_ANIM_LEFT        = 0,
	WUKONG_OX_HIT_ANIM_RIGHT       = 1,
	WUKONG_OX_HIT_ANIM_MAX         = 2
};


// Enum TgGame.TgPawn_SunWukong.WUKONG_ULTIMATE
enum class EWUKONG_ULTIMATE : uint8_t
{
	WUKONG_ULTIMATE_INACTIVE       = 0,
	WUKONG_ULTIMATE_BUILDUP        = 1,
	WUKONG_ULTIMATE_LEAPBACK       = 2,
	WUKONG_ULTIMATE_EAT            = 3,
	WUKONG_ULTIMATE_ATTACK         = 4,
	WUKONG_ULTIMATE_CANCEL         = 5,
	WUKONG_ULTIMATE_DEATH          = 6,
	WUKONG_ULTIMATE_MAX            = 7
};


// Enum TgGame.TgPawn_SunWukong.WUKONG_TRANSFORM
enum class EWUKONG_TRANSFORM : uint8_t
{
	WUKONG_TRANSFORM_SELF          = 0,
	WUKONG_TRANSFORM_EAGLE         = 1,
	WUKONG_TRANSFORM_TIGER         = 2,
	WUKONG_TRANSFORM_OX            = 3,
	WUKONG_TRANSFORM_MAX           = 4
};


// Enum TgGame.TgDevice_Susano_Dev3.ESusanoDev3State
enum class ESusanoDev3State : uint8_t
{
	SusanoWindState_Inactive       = 0,
	SusanoWindState_ProjFired      = 1,
	SusanoWindState_WaitForTeleport = 2,
	SusanoWindState_MAX            = 3
};


// Enum TgGame.TgDevice_Terra_CrushingShale.ETerraDev3State
enum class ETerraDev3State : uint8_t
{
	TerraDev3State_Inactive        = 0,
	TerraDev3State_Deploying       = 1,
	TerraDev3State_SingleDeployed  = 2,
	TerraDev3State_Deployed        = 3,
	TerraDev3State_Crush           = 4,
	TerraDev3State_WallDestroyed   = 5,
	TerraDev3State_MAX             = 6
};


// Enum TgGame.TgDevice_XingTian_AxeSweepShieldBash.EXingAttackState
enum class EXingAttackState : uint8_t
{
	ATTACK_INACTIVE                = 0,
	ATTACK_SWEEP                   = 1,
	ATTACK_BASH                    = 2,
	ATTACK_MAX                     = 3
};


// Enum TgGame.TgDevice_Yemoja_A03.EYemojaRiptideOrientation
enum class EYemojaRiptideOrientation : uint8_t
{
	YRO_Forwards                   = 0,
	YRO_Backwards                  = 1,
	YRO_MAX                        = 2
};


// Enum TgGame.TgDevice_Zeus_SuperLightningBolt.ELightningBoltState
enum class ELightningBoltState : uint8_t
{
	LBS_Normal                     = 0,
	LBS_ProjectileOut              = 1,
	LBS_PostProjectile             = 2,
	LBS_MAX                        = 3
};


// Enum TgGame.TgDeviceFire.DeviceTargeterType
enum class EDeviceTargeterType : uint8_t
{
	TGDTT_None                     = 0,
	TGDTT_Self                     = 1,
	TGDTT_Friend                   = 2,
	TGDTT_Enemy                    = 3,
	TGDTT_Enemy_And_Self           = 4,
	TGDTT_Friend_Only              = 5,
	TGDTT_Not_Self                 = 6,
	TGDTT_All                      = 7,
	TGDTT_MAX                      = 8
};


// Enum TgGame.TgDeviceFire.ESweepType
enum class ESweepType : uint8_t
{
	Sweep_Static                   = 0,
	Sweep_Rotating                 = 1,
	Sweep_Moving                   = 2,
	Sweep_MAX                      = 3
};


// Enum TgGame.TgPawn_Artio.EArtioStances
enum class EArtioStances : uint8_t
{
	EArtioStances_Druid            = 0,
	EArtioStances_Bear             = 1,
	EArtioStances_MAX              = 2
};


// Enum TgGame.TgDeviceFire_Cerberus_SpawnPet.ESoulGodRanks
enum class ESoulGodRanks : uint8_t
{
	SGR                            = 0,
	SGR01                          = 1,
	SGR02                          = 2,
	SGR03                          = 3,
	SGR04                          = 4,
	SGR_MAX                        = 5
};


// Enum TgGame.TgDeviceFire_DistanceThreshold.DistanceThresholdCheckType
enum class EDistanceThresholdCheckType : uint8_t
{
	DTCT_GreaterThan               = 0,
	DTCT_GreaterOrEqual            = 1,
	DTCT_LessThan                  = 2,
	DTCT_LessOrEqual               = 3,
	DTCT_MAX                       = 4
};


// Enum TgGame.TgRepInfo_Player.LayeredBuffEffects
enum class ELayeredBuffEffects : uint8_t
{
	LBE_MinionFireBuff             = 0,
	LBE_MinionOniFuryBuff          = 1,
	LBE_MAX                        = 2
};


// Enum TgGame.TgRepInfo_Player.DEVICE_STATS
enum class EDEVICE_STATS : uint8_t
{
	DS_ID                          = 0,
	DS_DAMAGE                      = 1,
	DS_HEALING                     = 2,
	DS_PLAYER_KILLS                = 3,
	DS_BOT_KILLS                   = 4,
	DS_DPM                         = 5,
	DS_HPM                         = 6,
	DS_MODE_COUNT                  = 7,
	DS_BUFF_VALUE                  = 8,
	DS_MAX                         = 9
};


// Enum TgGame.TgRepInfo_Player.GAME_SCORE_TYPE
enum class EGAME_SCORE_TYPE : uint8_t
{
	GSTYPE_FLAG_CAPTURES           = 0,
	GSTYPE_FLAG_RETURNS            = 1,
	GSTYPE_FLAG_CARRIER_KILLS      = 2,
	GSTYPE_FLAG_FLAG_PICKUPS       = 3,
	GSTYPE_FLAG_CARRY_TIME         = 4,
	GSTYPE_FLAG_MAX                = 5
};


// Enum TgGame.TgRepInfo_Player.SCORE_TYPE
enum class ESCORE_TYPE : uint8_t
{
	STYPE_REPPTS                   = 0,
	STYPE_KILLS                    = 1,
	STYPE_ASSISTS                  = 2,
	STYPE_DAMAGETAKEN              = 3,
	STYPE_DAMAGE                   = 4,
	STYPE_BUFFVALUE                = 5,
	STYPE_HEALING                  = 6,
	STYPE_DEFENSE                  = 7,
	STYPE_DEATHS                   = 8,
	STYPE_OBJS                     = 9,
	STYPE_KILLS_BOT                = 10,
	STYPE_EARNED_XP                = 11,
	STYPE_EARNED_GOLD              = 12,
	STYPE_CURRENT_GOLD             = 13,
	STYPE_GOLD_PER_MIN             = 14,
	STYPE_XP_PER_MIN               = 15,
	STYPE_PLAYER_DMG               = 16,
	STYPE_BOT_DMG                  = 17,
	STYPE_STRUCT_DMG               = 18,
	STYPE_OBJ_ASSISTS              = 19,
	STYPE_WARDS_PLACED             = 20,
	STYPE_TIME_DEAD                = 21,
	STYPE_DMG_MITIGATED            = 22,
	STYPE_MAX                      = 23
};


// Enum TgGame.TgRatatoskrAcorn.EAcornType
enum class EAcornType : uint8_t
{
	ACORN_None                     = 0,
	ACORN_White                    = 1,
	ACORN_Blue                     = 2,
	ACORN_Yellow                   = 3,
	ACORN_Sapphire                 = 4,
	ACORN_Emerald                  = 5,
	ACORN_Opal                     = 6,
	ACORN_Topaz                    = 7,
	ACORN_Lively                   = 8,
	ACORN_Evergreen                = 9,
	ACORN_Thickbark                = 10,
	ACORN_Nettle                   = 11,
	ACORN_Bristlebush              = 12,
	ACORN_Thistlethorn             = 13,
	ACORN_MAX                      = 14
};


// Enum TgGame.TgDeviceForm_Cerberus_Dev2.CerberusHeadsDevForm2
enum class ECerberusHeadsDevForm2 : uint8_t
{
	CHDF2_Middle                   = 0,
	CHDF2_Left                     = 1,
	CHDF2_Right                    = 2,
	CHDF2_Fill                     = 3,
	CHDF2_MAX                      = 4
};


// Enum TgGame.TgDeviceForm_Thoth_Dash.EThothDashTargetingMode
enum class EThothDashTargetingMode : uint8_t
{
	EThothDashTargetingMode_NormalDash = 0,
	EThothDashTargetingMode_BonusDash = 1,
	EThothDashTargetingMode_NoDash = 2,
	EThothDashTargetingMode_MAX    = 3
};


// Enum TgGame.TgDeviceVolume.VolumeMapVisibilityType
enum class EVolumeMapVisibilityType : uint8_t
{
	VMVT_Default                   = 0,
	VMVT_Special01                 = 1,
	VMVT_Special02                 = 2,
	VMVT_Special03                 = 3,
	VMVT_MAX                       = 4
};


// Enum TgGame.TgDeviceVolume.VolumeMiniMapType
enum class EVolumeMiniMapType : uint8_t
{
	VMMT_Pyro                      = 0,
	VMMT_REPLACE_ME                = 1,
	VMMT_MAX                       = 2
};


// Enum TgGame.TgDistributionFloatSoundAttenuation.SoundAttenuationType
enum class ESoundAttenuationType : uint8_t
{
	TG_ATTENUATION_None            = 0,
	TG_ATTENUATION_Sm_foley        = 1,
	TG_ATTENUATION_Lg_foley        = 2,
	TG_ATTENUATION_Melee_Hit       = 3,
	TG_ATTENUATION_Sm_gun          = 4,
	TG_ATTENUATION_Med_gun         = 5,
	TG_ATTENUATION_Lg_gun          = 6,
	TG_ATTENUATION_Sm_exp          = 7,
	TG_ATTENUATION_Med_exp         = 8,
	TG_ATTENUATION_Lg_exp          = 9,
	TG_ATTENUATION_MAX             = 10
};


// Enum TgGame.TgDominantDirectionalLightSwitchableComponent.SwitchableDominantLightMode
enum class ESwitchableDominantLightMode : uint8_t
{
	SDLM_Unset                     = 0,
	SDLM_Dynamic                   = 1,
	SDLM_DominantDynamic           = 2,
	SDLM_MAX                       = 3
};


// Enum TgGame.TgDoorMarker.DoorStatus
enum class EDoorStatus : uint8_t
{
	TGD_NONE                       = 0,
	TGD_LOCKED                     = 1,
	TGD_OPEN                       = 2,
	TGD_CLOSE                      = 3,
	TGD_MAX                        = 4
};


// Enum TgGame.TgEffectForm_BuffBelt.EBuffBeltPriority
enum class EBuffBeltPriority : uint8_t
{
	BBP_Default                    = 0,
	BBP_Debuff                     = 1,
	BBP_InstigatorBuff             = 2,
	BBP_MAX                        = 3
};


// Enum TgGame.TgEffectForm_Depthzy_SBreak.SBreakMicState
enum class ESBreakMicState : uint8_t
{
	SBMS_Active                    = 0,
	SBMS_FadingOut                 = 1,
	SBMS_Removed                   = 2,
	SBMS_MAX                       = 3
};


// Enum TgGame.TgPawn_Cerberus_Soul.ECerberusSoul
enum class ECerberusSoul : uint8_t
{
	SOUL_DAMAGE                    = 0,
	SOUL_HEAL                      = 1,
	SOUL_MAX                       = 2
};


// Enum TgGame.TgPawn_Cerberus_Soul.ESoulFXSet
enum class ESoulFXSet : uint8_t
{
	SFXS_Owner                     = 0,
	SFXS_Connected                 = 1,
	SFXS_Unconnected               = 2,
	SFXS_MAX                       = 3
};


// Enum TgGame.TgEffectGroup.AttackType
enum class EAttackType : uint8_t
{
	TGAT_None                      = 0,
	TGAT_Melee                     = 1,
	TGAT_Range                     = 2,
	TGAT_AOE                       = 3,
	TGAT_Falling                   = 4,
	TGAT_MAX                       = 5
};


// Enum TgGame.TgEffectManager.ERevealType
enum class ERevealType : uint8_t
{
	REVEAL_GLOBAL                  = 0,
	REVEAL_TEAM                    = 1,
	REVEAL_INSTIGATOR              = 2,
	REVEAL_INSTIGATOR_NO_PING      = 3,
	REVEAL_MAX                     = 4
};


// Enum TgGame.TgEffectParameterTransition.EffectParameterTransitionRepeatStrategy
enum class EffectParameterTransitionRepeatStrategy : uint8_t
{
	EPTRS_Loop                     = 0,
	EPTRS_Oscillate                = 1,
	EPTRS_MAX                      = 2
};


// Enum TgGame.TgFlagContentData.FlagContentDataType
enum class EFlagContentDataType : uint8_t
{
	FCDT_None                      = 0,
	FCDT_Egyptian_Lobby            = 1,
	FCDT_Egyptian_Wall             = 2,
	FCDT_Norse_Lobby               = 3,
	FCDT_Norse_Wall                = 4,
	FCDT_Greek_Lobby               = 5,
	FCDT_Greek_Wall                = 6,
	FCDT_Roman_Lobby               = 7,
	FCDT_Roman_Wall                = 8,
	FCDT_Chinese_Lobby             = 9,
	FCDT_Chinese_Wall              = 10,
	FCDT_Mayan_Lobby               = 11,
	FCDT_Mayan_Wall                = 12,
	FCDT_Hindu_Lobby               = 13,
	FCDT_Hindu_Wall                = 14,
	FCDT_Japanese_Lobby            = 15,
	FCDT_Japanese_Wall             = 16,
	FCDT_Celtic_Lobby              = 17,
	FCDT_Celtic_Wall               = 18,
	FCDT_Slavic_Lobby              = 19,
	FCDT_Slavic_Wall               = 20,
	FCDT_Voodoo_Lobby              = 21,
	FCDT_Voodoo_Wall               = 22,
	FCDT_Polynesian_Lobby          = 23,
	FCDT_Polynesian_Wall           = 24,
	FCDT_Arthurian_Lobby           = 25,
	FCDT_Arthurian_Wall            = 26,
	FCDT_Yoruba_Lobby              = 27,
	FCDT_Yoruba_Wall               = 28,
	FCDT_GreatOldOnes_Lobby        = 29,
	FCDT_GreatOldOnes_Wall         = 30,
	FCDT_MAX                       = 31
};


// Enum TgGame.TgRepInfo_Game.MAP_LANE
enum class EMAP_LANE : uint8_t
{
	MAP_LANE_NONE                  = 0,
	MAP_LANE_LEFT                  = 1,
	MAP_LANE_MIDDLE                = 2,
	MAP_LANE_RIGHT                 = 3,
	MAP_LANE_MAX                   = 4
};


// Enum TgGame.TgRepInfo_Game.MissionTimerState
enum class EMissionTimerState : uint8_t
{
	MTS_STOPPED                    = 0,
	MTS_RUNNING                    = 1,
	MTS_PAUSED                     = 2,
	MTS_MAX                        = 3
};


// Enum TgGame.TgRepInfo_Game.EFlagState
enum class EFlagState : uint8_t
{
	FLAG_Home                      = 0,
	FLAG_HeldFriendly              = 1,
	FLAG_HeldEnemy                 = 2,
	FLAG_Down                      = 3,
	FLAG_MAX                       = 4
};


// Enum TgGame.TgGame_Mission.PauseMode
enum class EPauseMode : uint8_t
{
	TGPM_None                      = 0,
	TGPM_Default                   = 1,
	TGPM_Vote                      = 2,
	TGPM_Free                      = 3,
	TGPM_MAX                       = 4
};


// Enum TgGame.TgGame_Battle_Adventure.EAdventureLootType
enum class EAdventureLootType : uint8_t
{
	ALT_Gear                       = 0,
	ALT_Currency                   = 1,
	ALT_Deployable                 = 2,
	ALT_CampItem                   = 3,
	ALT_MAX                        = 4
};


// Enum TgGame.TgGame_Battle_CTF.CTFMessageEvent
enum class ECTFMessageEvent : uint8_t
{
	TG_CTFME_CAPTURE               = 0,
	TG_CTFME_PICKUP                = 1,
	TG_CTFME_DROP                  = 2,
	TG_CTFME_RESET                 = 3,
	TG_CTFME_RETURN                = 4,
	TG_CTFME_LEAD_GAIN             = 5,
	TG_CTFME_LEAD_LOSS             = 6,
	TG_CTFME_GAME_OVER             = 7,
	TG_CTFME_OVERTIME              = 8,
	TG_CTFME_MAX                   = 9
};


// Enum TgGame.TgGame_Battle_CTF.CTFStatEvent
enum class ECTFStatEvent : uint8_t
{
	TG_CTFSE_FLAG_PICKUP           = 0,
	TG_CTFSE_FLAG_TIME             = 1,
	TG_CTFSE_FLAG_CAP              = 2,
	TG_CTFSE_CARRIER_KILLED        = 3,
	TG_CTFSE_FLAG_RETURNED         = 4,
	TG_CTFSE_MELEE_KILL            = 5,
	TG_CTFSE_MAX                   = 6
};


// Enum TgGame.TgGame_Battle_Encounters.ERoundState
enum class ERoundState : uint8_t
{
	BERS_Purchasing                = 0,
	BERS_Transition                = 1,
	BERS_Active                    = 2,
	BERS_Pass                      = 3,
	BERS_Fail                      = 4,
	BERS_MAX                       = 5
};


// Enum TgGame.TgGame_Battle_Round.BattleRoundState
enum class EBattleRoundState : uint8_t
{
	BRS_ResetLocation              = 0,
	BRS_ResetDevices               = 1,
	BRS_Setup                      = 2,
	BRS_Active                     = 3,
	BRS_WindDown                   = 4,
	BRS_Over                       = 5,
	BRS_MAX                        = 6
};


// Enum TgGame.TgGame_Battle_Siege2.SIEGE2_BATTLE_PHASE
enum class ESIEGE2_BATTLE_PHASE : uint8_t
{
	SBP_DAY                        = 0,
	SBP_NIGHT                      = 1,
	SBP_MAX                        = 2
};


// Enum TgGame.TgGame_MultiRounds.EGameMultiRoundState
enum class EGameMultiRoundState : uint8_t
{
	GMRS_ItemStore                 = 0,
	GMRS_RoundSetup                = 1,
	GMRS_RoundActive               = 2,
	GMRS_RoundInactive             = 3,
	GMRS_RoundReset                = 4,
	GMRS_Complete                  = 5,
	GMRS_MAX                       = 6
};


// Enum TgGame.TgGameConfig_MultiRounds.EXpPurchaseType
enum class EXpPurchaseType : uint8_t
{
	EXPT_Levels                    = 0,
	EXPT_FlatXp                    = 1,
	EXPT_XpPerc                    = 2,
	EXPT_MAX                       = 3
};


// Enum TgGame.TgGameConfig_MultiRounds.ERoundStoreType
enum class ERoundStoreType : uint8_t
{
	ERST_Random                    = 0,
	ERST_TeamDraft                 = 1,
	ERST_MAX                       = 2
};


// Enum TgGame.TgInventory_RandomizedShop.RandomizedShopItemTier
enum class ERandomizedShopItemTier : uint8_t
{
	RSIT_Tier1                     = 0,
	RSIT_Tier2                     = 1,
	RSIT_Tier3                     = 2,
	RSIT_MAX                       = 3
};


// Enum TgGame.TgRepInfo_Player_BotShop.EBotStoreReplicationType
enum class EBotStoreReplicationType : uint8_t
{
	EBSRT_Bots                     = 0,
	EBSRT_MAX                      = 1
};


// Enum TgGame.TgRepInfo_Player_BotShop.EBotInventoryReplicationType
enum class EBotInventoryReplicationType : uint8_t
{
	EBIRT_BotsActive               = 0,
	EBIRT_BotsInactive             = 1,
	EBIRT_BotsEffect               = 2,
	EBIRT_ShopUpdate               = 3,
	EBIRT_MAX                      = 4
};


// Enum TgGame.TgInventoryManager.PendingTransactionType
enum class EPendingTransactionType : uint8_t
{
	PTT_None                       = 0,
	PTT_Purchase                   = 1,
	PTT_Upgrade                    = 2,
	PTT_Sell                       = 3,
	PTT_UpgradeRetry               = 4,
	PTT_Swap                       = 5,
	PTT_MAX                        = 6
};


// Enum TgGame.TgInventoryObject.EReplicatedState
enum class EReplicatedState : uint8_t
{
	IORS_Ok                        = 0,
	IORS_Edited                    = 1,
	IORS_Deleted                   = 2,
	IORS_MAX                       = 3
};


// Enum TgGame.TgInventoryObject_Listen_AhMuzenCabBees.EBeesApplyType
enum class EBeesApplyType : uint8_t
{
	BEES_Default                   = 0,
	BEES_BasicAttack               = 1,
	BEES_BasicAttackStrain         = 2,
	BEES_MAX                       = 3
};


// Enum TgGame.TgInventoryObject_Listen_BastetPassive.BastetPSVTravelState
enum class EBastetPSVTravelState : uint8_t
{
	BTS_IsTraveling                = 0,
	BTS_WasTraveling               = 1,
	BTS_MAX                        = 2
};


// Enum TgGame.TgInventoryObject_Listen_DeviceCooldown.EDeviceTypeCooldown
enum class EDeviceTypeCooldown : uint8_t
{
	EDTC_Movement                  = 0,
	EDTC_Offhands                  = 1,
	EDTC_Relics                    = 2,
	EDTC_MAX                       = 3
};


// Enum TgGame.TgInventoryObject_Listen_DeviceCooldown.EDeviceCooldownType
enum class EDeviceCooldownType : uint8_t
{
	EDCT_Flat                      = 0,
	EDCT_Percent                   = 1,
	EDCT_MAX                       = 2
};


// Enum TgGame.TgInventoryObject_Listen_SuccessfulHit.EDeviceSuccessfulHitType
enum class EDeviceSuccessfulHitType : uint8_t
{
	SUCCESSFULHIT_PER_TICK         = 0,
	SUCCESSFULHIT_PER_FIRE         = 1,
	SUCCESSFULHIT_PER_MAX          = 2
};


// Enum TgGame.TgPawn_Yemoja.EYemojaPassiveObjectiveTiers
enum class EYemojaPassiveObjectiveTiers : uint8_t
{
	YPOT_MANA_T1                   = 0,
	YPOT_LEVEL_T1                  = 1,
	YPOT_LEVEL_T2                  = 2,
	YPOT_MAX                       = 3
};


// Enum TgGame.TgPawn_Yemoja.EYemojaStance
enum class EYemojaStance : uint8_t
{
	YS_Bubbles                     = 0,
	YS_Crystal                     = 1,
	YS_MAX                         = 2
};


// Enum TgGame.TgLevelStreamingSpectator.SpectatorStreamingMethod
enum class ESpectatorStreamingMethod : uint8_t
{
	SSM_OnlyLoadIfSpectating       = 0,
	SSM_OnlyLoadIfNotSpectating    = 1,
	SSM_AlwaysLoad                 = 2,
	SSM_MAX                        = 3
};


// Enum TgGame.TgMapTracker_Depthzy_IState.DepthzyMapFlags
enum class EDepthzyMapFlags : uint8_t
{
	DMF_PlayArea                   = 0,
	DMF_Interior                   = 1,
	DMF_MAX                        = 2
};


// Enum TgGame.TgMenuContentData.MenuContentDataType
enum class EMenuContentDataType : uint8_t
{
	MCDT_None                      = 0,
	MCDT_Login                     = 1,
	MCDT_Login2                    = 2,
	MCDT_Login3                    = 3,
	MCDT_MainMenu                  = 4,
	MCDT_MainMenu_Featured         = 5,
	MCDT_MainMenu_Featured01       = 6,
	MCDT_MainMenu_Featured02       = 7,
	MCDT_MainMenu_Featured03       = 8,
	MCDT_MainMenu_Featured04       = 9,
	MCDT_MainMenu_Featured05       = 10,
	MCDT_MainMenu_BetaPromo        = 11,
	MCDT_MainMenu_GodPack          = 12,
	MCDT_MainMenu_FacebookPromo    = 13,
	MCDT_MainMenu_TwitterPromo     = 14,
	MCDT_MainMenu_NewPlayer_Feature = 15,
	MCDT_MainMenu_NewPlayer_Feature01 = 16,
	MCDT_MainMenu_NewPlayer_Feature02 = 17,
	MCDT_Play                      = 18,
	MCDT_Store                     = 19,
	MCDT_Social_Friends            = 20,
	MCDT_Social_Followers          = 21,
	MCDT_Social_Blocked            = 22,
	MCDT_Settings                  = 23,
	MCDT_Lobby                     = 24,
	MCDT_Home                      = 25,
	MCDT_MAX                       = 26
};


// Enum TgGame.TgNavRouteIndicator.eSetRouteResult
enum class EeSetRouteResult : uint8_t
{
	SetRoute_Failed                = 0,
	SetRoute_OK                    = 1,
	SetRoute_AtDestination         = 2,
	SetRoute_MAX                   = 3
};


// Enum TgGame.TgOwnedPlaceableMesh.OwnedMeshSkinType
enum class EOwnedMeshSkinType : uint8_t
{
	OBST_Fountain                  = 0,
	OBST_Configurable              = 1,
	OBST_MAX                       = 2
};


// Enum TgGame.TgPawn_Adv_Cart.AdvCartTowerState
enum class EAdvCartTowerState : uint8_t
{
	ACTS_Dead                      = 0,
	ACTS_Tier1                     = 1,
	ACTS_Tier2                     = 2,
	ACTS_Tier3                     = 3,
	ACTS_MaxHealth                 = 4,
	ACTS_MAX                       = 5
};


// Enum TgGame.TgPawn_Adv_Cart.AdvCartFoxState
enum class EAdvCartFoxState : uint8_t
{
	ACFS_Moving                    = 0,
	ACFS_StoppedImmune             = 1,
	ACFS_StoppedVulnerable         = 2,
	ACFS_MAX                       = 3
};


// Enum TgGame.TgPawn_AoKuang.EAoKuangUltimateState
enum class EAoKuangUltimateState : uint8_t
{
	AO_ULT_NORMAL                  = 0,
	AO_ULT_DASH                    = 1,
	AO_ULT_NORMALSTUN              = 2,
	AO_ULT_MEGAKILLSTUN            = 3,
	AO_ULT_DRAGONBUILDUP           = 4,
	AO_ULT_DRAGONACTIVE            = 5,
	AO_ULT_DRAGONTAKEDOWN          = 6,
	AO_ULT_DRAGONCANCEL            = 7,
	AO_ULT_DRAGONDEAD              = 8,
	AO_ULT_MAX                     = 9
};


// Enum TgGame.TgPawn_AoKuang.EDragonBushelState
enum class EDragonBushelState : uint8_t
{
	BUSHEL                         = 0,
	BUSHEL01                       = 1,
	BUSHEL02                       = 2,
	BUSHEL03                       = 3,
	BUSHEL04                       = 4,
	BUSHEL05                       = 5,
	BUSHEL06                       = 6,
	BUSHEL_DISSIPATE               = 7,
	BUSHEL_COMBINE                 = 8,
	BUSHEL_MAX                     = 9
};


// Enum TgGame.TgPawn_AoKuang.AOKUANG_TRANSFORM
enum class EAOKUANG_TRANSFORM : uint8_t
{
	AOFORM_NORMAL                  = 0,
	AOFORM_DRAGON                  = 1,
	AOFORM_MAX                     = 2
};


// Enum TgGame.TgPawn_ArachneV2.EArachneUltState
enum class EArachneUltState : uint8_t
{
	ARACHNE_ULT_NORMAL             = 0,
	ARACHNE_ULT_BUILDUP            = 1,
	ARACHNE_ULT_MAIN               = 2,
	ARACHNE_ULT_FIRED              = 3,
	ARACHNE_ULT_LANDED             = 4,
	ARACHNE_ULT_CANCELLED          = 5,
	ARACHNE_ULT_DIED               = 6,
	ARACHNE_ULT_MAX                = 7
};


// Enum TgGame.TgPawn_WiseCleric.EDestroyAnimStages
enum class EDestroyAnimStages : uint8_t
{
	TowerDestruction_FullHealth_Idle = 0,
	TowerDestruction_FirstDestruction = 1,
	TowerDestruction_SecondDestruction = 2,
	TowerDestruction_MAX           = 3
};


// Enum TgGame.TgPawn_Athena.LeapingLungeState
enum class ELeapingLungeState : uint8_t
{
	LEAPINGLUNGE_INACTIVE          = 0,
	LEAPINGLUNGE_ACTIVE            = 1,
	LEAPINGLUNGE_HITTARGET         = 2,
	LEAPINGLUNGE_MAX               = 3
};


// Enum TgGame.TgPawn_Awilix.eMoonlightState
enum class EeMoonlightState : uint8_t
{
	EML_UNBUFFED                   = 0,
	EML_BUFFED                     = 1,
	EML_MAX                        = 2
};


// Enum TgGame.TgPawn_Awilix.eStarlightLanceState
enum class EeStarlightLanceState : uint8_t
{
	ESL_NONE                       = 0,
	ESL_NORMAL                     = 1,
	ESL_KNOCKUP                    = 2,
	ESL_MAX                        = 3
};


// Enum TgGame.TgPawn_Awilix.eMountState
enum class EeMountState : uint8_t
{
	EMS_NONE                       = 0,
	EMS_MOUNTED                    = 1,
	EMS_LEAP                       = 2,
	EMS_CANCEL                     = 3,
	EMS_MAX                        = 4
};


// Enum TgGame.TgPawn_BabaYaga_Hut.BabaYagaHutState
enum class EBabaYagaHutState : uint8_t
{
	BYHS_Active                    = 0,
	BYHS_Idle                      = 1,
	BYHS_Ulting                    = 2,
	BYHS_MAX                       = 3
};


// Enum TgGame.TgPawn_BabaYaga_Hut.BabaYagaHutA04FireType
enum class EBabaYagaHutA04FireType : uint8_t
{
	BYH4F_FireA                    = 0,
	BYH4F_FireB                    = 1,
	BYH4F_FireC                    = 2,
	BYH4F_FireD                    = 3,
	BYH4F_MAX                      = 4
};


// Enum TgGame.TgPawn_Bacchus.TgPawn_Bacchus_DrunkType
enum class ETgPawn_Bacchus_DrunkType : uint8_t
{
	TGPBDT_THIRSTY                 = 0,
	TGPBDT_TIPSY                   = 1,
	TGPBDT_SMASHED                 = 2,
	TGPBDT_MAX                     = 3
};


// Enum TgGame.TgPawn_BaronSamedi.EBaronCross
enum class EBaronCross : uint8_t
{
	BARON_CROSS_Left               = 0,
	BARON_CROSS_Right              = 1,
	BARON_CROSS_MAX                = 2
};


// Enum TgGame.TgPawn_BaronSamedi.EBaronCoffin
enum class EBaronCoffin : uint8_t
{
	BARON_COFFIN_None              = 0,
	BARON_COFFIN_Intro             = 1,
	BARON_COFFIN_Loop              = 2,
	BARON_COFFIN_OutroMiss         = 3,
	BARON_COFFIN_OutroHit          = 4,
	BARON_COFFIN_MAX               = 5
};


// Enum TgGame.TgPawn_BaronSamediSkin.EBaronSamediSkinState
enum class EBaronSamediSkinState : uint8_t
{
	BSSS_Hunter                    = 0,
	BSSS_Hybrid                    = 1,
	BSSS_Horror                    = 2,
	BSSS_MAX                       = 3
};


// Enum TgGame.TgPawn_Camazotz.ECamazotzUltState
enum class ECamazotzUltState : uint8_t
{
	CAM_ULT_NORMAL                 = 0,
	CAM_ULT_BUILDUP                = 1,
	CAM_ULT_MAIN                   = 2,
	CAM_ULT_TAKEDOWN               = 3,
	CAM_ULT_DIED                   = 4,
	CAM_ULT_MAX                    = 5
};


// Enum TgGame.TgPawn_Camazotz.ECamazotzWeaponType
enum class ECamazotzWeaponType : uint8_t
{
	CAM_WT_MELEE                   = 0,
	CAM_WT_ULTIMATE                = 1,
	CAM_WT_MAX                     = 2
};


// Enum TgGame.TgPawn_SoloObjective.SoloObjectiveHitDirection
enum class ESoloObjectiveHitDirection : uint8_t
{
	SOHD_None                      = 0,
	SOHD_HitFromFront              = 1,
	SOHD_HitFromBack               = 2,
	SOHD_HitFromLeft               = 3,
	SOHD_HitFromRight              = 4,
	SOHD_MAX                       = 5
};


// Enum TgGame.TgPawn_ChaacSkin.ChaacKillAssistEvolutionStates
enum class EChaacKillAssistEvolutionStates : uint8_t
{
	CKAES_Stage0                   = 0,
	CKAES_Stage1                   = 1,
	CKAES_Stage2                   = 2,
	CKAES_Stage3                   = 3,
	CKAES_MAX                      = 4
};


// Enum TgGame.TgPawn_ChaacSkin.ChaacSkinStates
enum class EChaacSkinStates : uint8_t
{
	CSS_Priest                     = 0,
	CSS_Optimism                   = 1,
	CSS_Passion                    = 2,
	CSS_Rage                       = 3,
	CSS_MAX                        = 4
};


// Enum TgGame.TgPawn_CuChulainn.CuChulainnFerocityLevel
enum class ECuChulainnFerocityLevel : uint8_t
{
	LEVEL1                         = 0,
	LEVEL2                         = 1,
	LEVEL3                         = 2,
	CuChulainnFerocityLevel_MAX    = 3
};


// Enum TgGame.TgPawn_Fenrir.EBiteState
enum class EBiteState : uint8_t
{
	BITE_None                      = 0,
	BITE_Grow                      = 1,
	BITE_BeforeGrab                = 2,
	BITE_Grab                      = 3,
	BITE_Throwdown                 = 4,
	BITE_Shrink                    = 5,
	BITE_MAX                       = 6
};


// Enum TgGame.TgPawn_Geb.GebBoulderState
enum class EGebBoulderState : uint8_t
{
	GBS_Normal                     = 0,
	GBS_Boulder                    = 1,
	GBS_BoulderHit                 = 2,
	GBS_MAX                        = 3
};


// Enum TgGame.TgPawn_God95.EGod95UltState
enum class EGod95UltState : uint8_t
{
	God95_ULT_NORMAL               = 0,
	God95_ULT_BUILDUP              = 1,
	God95_ULT_TARGETING            = 2,
	God95_ULT_FIRING_INTRO         = 3,
	God95_ULT_FIRING_LOOP          = 4,
	God95_ULT_FIRING_OUTRO         = 5,
	God95_ULT_MAX                  = 6
};


// Enum TgGame.TgPawn_GuanYuV2.GuanYuPassiveState
enum class EGuanYuPassiveState : uint8_t
{
	GYPS_Inactive                  = 0,
	GYPS_Active                    = 1,
	GYPS_Warning                   = 2,
	GYPS_MAX                       = 3
};


// Enum TgGame.TgPawn_GuanYuV2.GuanYuUltPhase
enum class EGuanYuUltPhase : uint8_t
{
	GUANYUV2_UltNone               = 0,
	GUANYUV2_UltPhase1             = 1,
	GUANYUV2_UltPhase2             = 2,
	GUANYUV2_MAX                   = 3
};


// Enum TgGame.TgPawn_Guardian.EThroneState
enum class EThroneState : uint8_t
{
	THRONE_ONTHRONE                = 0,
	THRONE_TRANSITIONING           = 1,
	THRONE_OFFTHRONE               = 2,
	THRONE_MAX                     = 3
};


// Enum TgGame.TgPawn_Hachiman.HachimanUltHorsePhase
enum class EHachimanUltHorsePhase : uint8_t
{
	HACHIMAN_HorseIn               = 0,
	HACHIMAN_HorseRiding           = 1,
	HACHIMAN_HorseOut              = 2,
	HACHIMAN_HorseNone             = 3,
	HACHIMAN_MAX                   = 4
};


// Enum TgGame.TgPawn_HelV3.HEL_STANCE
enum class EHEL_STANCE : uint8_t
{
	HEL_STANCE_DARK                = 0,
	HEL_STANCE_LIGHT               = 1,
	HEL_STANCE_INVALID             = 2,
	HEL_STANCE_MAX                 = 3
};


// Enum TgGame.TgPawn_HelV3Skin.HelSkinState
enum class EHelSkinState : uint8_t
{
	HSS_Base                       = 0,
	HSS_Evolved                    = 1,
	HSS_MAX                        = 2
};


// Enum TgGame.TgPawn_JingWei.TGJingWeiDev4Phase
enum class ETGJingWeiDev4Phase : uint8_t
{
	TGJingWeiDev4Phase_Inactive    = 0,
	TGJingWeiDev4Phase_Buildup     = 1,
	TGJingWeiDev4Phase_Charge      = 2,
	TGJingWeiDev4Phase_Floating    = 3,
	TGJingWeiDev4Phase_Landing     = 4,
	TGJingWeiDev4Phase_MAX         = 5
};


// Enum TgGame.TgPawn_Jormungandr.EJormungandrShakeState
enum class EJormungandrShakeState : uint8_t
{
	JORM_SHAKE_EMERGE              = 0,
	JORM_SHAKE_SUBMERGE            = 1,
	JORM_SHAKE_MAX                 = 2
};


// Enum TgGame.TgPawn_Jormungandr.EJormungandrUltimateState
enum class EJormungandrUltimateState : uint8_t
{
	JORM_ULT_NONE                  = 0,
	JORM_ULT_BUILDUP               = 1,
	JORM_ULT_MAIN                  = 2,
	JORM_ULT_TAKEDOWN              = 3,
	JORM_ULT_DIED                  = 4,
	JORM_ULT_MAX                   = 5
};


// Enum TgGame.TgPawn_Jormungandr.EJomungandrSubmergeState
enum class EJomungandrSubmergeState : uint8_t
{
	JORM_DEV3_NONE                 = 0,
	JORM_DEV3_DIVING               = 1,
	JORM_DEV3_SUBMERGED            = 2,
	JORM_DEV3_EMERGING             = 3,
	JORM_DEV3_MAX                  = 4
};


// Enum TgGame.TgPawn_LanePusher.EDestroyedAnimStages
enum class EDestroyedAnimStages : uint8_t
{
	EngineDestruction_FullHealth_Idle = 0,
	EngineDestruction_FirstDestruction = 1,
	EngineDestruction_SecondDestruction = 2,
	EngineDestruction_MAX          = 3
};


// Enum TgGame.TgPawn_Juggernaut.EJuggernautActiveArcher
enum class EJuggernautActiveArcher : uint8_t
{
	ACTIVEARCHER_FRONT             = 0,
	ACTIVEARCHER_BACK              = 1,
	ACTIVEARCHER_MAX               = 2
};


// Enum TgGame.TgPawn_Knight.EKnightUltStance
enum class EKnightUltStance : uint8_t
{
	KUS_A                          = 0,
	KUS_B                          = 1,
	KUS_C                          = 2,
	KUS_MAX                        = 3
};


// Enum TgGame.TgPawn_Knight.EKnightStance
enum class EKnightStance : uint8_t
{
	KS_Normal                      = 0,
	KS_Spartan                     = 1,
	KS_MAX                         = 2
};


// Enum TgGame.TgPawn_Knight.EKnight4BState
enum class EKnight4BState : uint8_t
{
	K4BS_None                      = 0,
	K4BS_FinalSmash                = 1,
	K4BS_MAX                       = 2
};


// Enum TgGame.TgPawn_KukulkanSkin.EWindsOfChangeSkinState
enum class EWindsOfChangeSkinState : uint8_t
{
	WOCSS_Celestial                = 0,
	WOCSS_Life                     = 1,
	WOCSS_Void                     = 2,
	WOCSS_MAX                      = 3
};


// Enum TgGame.TgPawn_NeZha.WindFireWheelsPhase
enum class EWindFireWheelsPhase : uint8_t
{
	WFWP_None                      = 0,
	WFWP_Miss                      = 1,
	WFWP_LiftMiss                  = 2,
	WFWP_SelfDied                  = 3,
	WFWP_Lift                      = 4,
	WFWP_Dash                      = 5,
	WFWP_KnockDown                 = 6,
	WFWP_Landed                    = 7,
	WFWP_TargetEscaped             = 8,
	WFWP_MAX                       = 9
};


// Enum TgGame.TgPawn_NeZha.ArmillarySashPhase
enum class EArmillarySashPhase : uint8_t
{
	ASP_None                       = 0,
	ASP_Throw                      = 1,
	ASP_Hit                        = 2,
	ASP_Miss                       = 3,
	ASP_MAX                        = 4
};


// Enum TgGame.TgPawn_NeZha.NEZHA_PASSIVE_STATE
enum class ENEZHA_PASSIVE_STATE : uint8_t
{
	NPS_OUTOFCOMBAT                = 0,
	NPS_INCOMBAT                   = 1,
	NPS_TRANSITION                 = 2,
	NPS_MAX                        = 3
};


// Enum TgGame.TgPawn_Nike.ENikeUltVisualsState
enum class ENikeUltVisualsState : uint8_t
{
	NIKEULTVISUALS_ACTIVE          = 0,
	NIKEULTVISUALS_INACTIVE        = 1,
	NIKEULTVISUALS_MAX             = 2
};


// Enum TgGame.TgPawn_NuWa.NUWA_FORM
enum class ENUWA_FORM : uint8_t
{
	NUWA_FORM_NORMAL               = 0,
	NUWA_FORM_SNAKE                = 1,
	NUWA_FORM_MAX                  = 2
};


// Enum TgGame.TgPawn_NuWaV2.ENuWaUltState
enum class ENuWaUltState : uint8_t
{
	NUWA_ULT_NORMAL                = 0,
	NUWA_ULT_BUILDUP               = 1,
	NUWA_ULT_MAIN                  = 2,
	NUWA_ULT_TAKEDOWN              = 3,
	NUWA_ULT_DIED                  = 4,
	NUWA_ULT_MAX                   = 5
};


// Enum TgGame.TgPawn_Osiris.EOsirisBodypartsMissing
enum class EOsirisBodypartsMissing : uint8_t
{
	OBM_NONE                       = 0,
	OBM_HAND_LEFT                  = 1,
	OBM_HAND_RIGHT                 = 2,
	OBM_ARM_LEFT                   = 3,
	OBM_ARM_RIGHT                  = 4,
	OBM_LEG_LEFT                   = 5,
	OBM_LEG_RIGHT                  = 6,
	OBM_HEAD                       = 7,
	OBM_CHEST                      = 8,
	OBM_MAX                        = 9
};


// Enum TgGame.TgPawn_Osiris.ESoulTearState
enum class ESoulTearState : uint8_t
{
	STS_None                       = 0,
	STS_HitMinions                 = 1,
	STS_HitGod                     = 2,
	STS_MAX                        = 3
};


// Enum TgGame.TgPawn_Ram.ERamUltState
enum class ERamUltState : uint8_t
{
	RAM_ULT_NORMAL                 = 0,
	RAM_ULT_BUILDUP                = 1,
	RAM_ULT_MAIN                   = 2,
	RAM_ULT_TAKEDOWN               = 3,
	RAM_ULT_DIED                   = 4,
	RAM_ULT_MAX                    = 5
};


// Enum TgGame.TgPawn_Ram.ERamProjectile
enum class ERamProjectile : uint8_t
{
	RIP_DEFAULT                    = 0,
	RIP_QUIVER_TOGGLE              = 1,
	RIP_DODGE_SPECIAL              = 2,
	RIP_MAX                        = 3
};


// Enum TgGame.TgPawn_Ratatoskr.ERatatoskrUltimateState
enum class ERatatoskrUltimateState : uint8_t
{
	RATULT_None                    = 0,
	RATULT_Targeting               = 1,
	RATULT_Buildup                 = 2,
	RATULT_Climb                   = 3,
	RATULT_TreeHopping             = 4,
	RATULT_Takedown                = 5,
	RATULT_DiedTree                = 6,
	RATULT_DiedFlying              = 7,
	RATULT_MAX                     = 8
};


// Enum TgGame.TgPawn_Scylla.EScyllaUltimateState
enum class EScyllaUltimateState : uint8_t
{
	SCYLLAULT_Normal               = 0,
	SCYLLAULT_Buildup              = 1,
	SCYLLAULT_Active               = 2,
	SCYLLAULT_Takedown             = 3,
	SCYLLAULT_DieInUlt             = 4,
	SCYLLAULT_MAX                  = 5
};


// Enum TgGame.TgPawn_Thanatos.HoveringDeathState
enum class EHoveringDeathState : uint8_t
{
	HOVERINGDEATH_INACTIVE         = 0,
	HOVERINGDEATH_GROUNDBUILDUP    = 1,
	HOVERINGDEATH_RISING           = 2,
	HOVERINGDEATH_INAIR            = 3,
	HOVERINGDEATH_DASH             = 4,
	HOVERINGDEATH_GROUNDDEATH      = 5,
	HOVERINGDEATH_AIRDEATH         = 6,
	HOVERINGDEATH_MAX              = 7
};


// Enum TgGame.TgPawn_Tyr.ETyrStance
enum class ETyrStance : uint8_t
{
	TYR_STANCE_Aggressive          = 0,
	TYR_STANCE_Defensive           = 1,
	TYR_STANCE_MAX                 = 2
};


// Enum TgGame.TgPawn_Ullr.EUllrInhandWeapon
enum class EUllrInhandWeapon : uint8_t
{
	UIW_RANGED                     = 0,
	UIW_MELEE                      = 1,
	UIW_MAX                        = 2
};


// Enum TgGame.TgPawn_Ullr.EUllrEquippedDevice
enum class EUllrEquippedDevice : uint8_t
{
	UED_Inhand                     = 0,
	UED_Offhand1                   = 1,
	UED_Offhand2                   = 2,
	UED_Offhand3                   = 3,
	UED_MAX                        = 4
};


// Enum TgGame.TgPawn_Vamana.VAMANA_SIZE
enum class EVAMANA_SIZE : uint8_t
{
	VAMANA_SIZE_NORMAL             = 0,
	VAMANA_SIZE_GROWING            = 1,
	VAMANA_SIZE_GIANT              = 2,
	VAMANA_SIZE_SHRINKING          = 3,
	VAMANA_SIZE_MAX                = 4
};


// Enum TgGame.TgPawn_XingTian.EXingTianUltState
enum class EXingTianUltState : uint8_t
{
	XTULT_None                     = 0,
	XTULT_Spin                     = 1,
	XTULT_Fling                    = 2,
	XTULT_Miss                     = 3,
	XTULT_MAX                      = 4
};


// Enum TgGame.TgPawn_Zeus.EZeusShieldThrowState
enum class EZeusShieldThrowState : uint8_t
{
	ZEUSSHIELD_ATTACHED            = 0,
	ZEUSSHIELD_DETACHED            = 1,
	ZEUSSHIELD_RECOVER             = 2,
	ZEUSSHIELD_MAX                 = 3
};


// Enum TgGame.TgPawn_ZhongKui.EZhongKuiAbsorbState
enum class EZhongKuiAbsorbState : uint8_t
{
	ZAS_OFF                        = 0,
	ZAS_RAMPUP                     = 1,
	ZAS_ON                         = 2,
	ZAS_WINDDOWN                   = 3,
	ZAS_MAX                        = 4
};


// Enum TgGame.TgPhysAnimTestActor.EPATAState
enum class EPATAState : uint8_t
{
	PATA_FixedAll                  = 0,
	PATA_FixedLower                = 1,
	PATA_MotorRagdoll              = 2,
	PATA_Floppy                    = 3,
	PATA_Recover                   = 4,
	PATA_MAX                       = 5
};


// Enum TgGame.TgProj_Simulated.eSimProjEvent
enum class EeSimProjEvent : uint8_t
{
	Proj_Spawn                     = 0,
	Proj_Exploded                  = 1,
	Proj_Shutdown                  = 2,
	Proj_Hit                       = 3,
	Proj_Target                    = 4,
	Proj_HitWall                   = 5,
	Proj_Sync                      = 6,
	Proj_UpdateTiDi                = 7,
	Proj_UpdateStimmedShotFX       = 8,
	Proj_MAX                       = 9
};


// Enum TgGame.TgProj_BabaYaga_A01.BabaYagaDeployableFxType
enum class EBabaYagaDeployableFxType : uint8_t
{
	BYDFXT_Long                    = 0,
	BYDFXT_Short                   = 1,
	BYDFXT_Circle                  = 2,
	BYDFXT_MAX                     = 3
};


// Enum TgGame.TgRepInfo_CTF_FlagBase.TgRepInfo_FlagBase_BaseState
enum class ETgRepInfo_FlagBase_BaseState : uint8_t
{
	CTF_BASE_NONE                  = 0,
	CTF_BASE_DELIVER_ACTIVE        = 1,
	CTF_BASE_DELIVER_INACTIVE      = 2,
	CTF_BASE_CAPTURE               = 3,
	CTF_BASE_DEFEND                = 4,
	CTF_BASE_MAX                   = 5
};


// Enum TgGame.TgRepInfo_CTF_Flag.TgRepInfo_Flag_FlagState
enum class ETgRepInfo_Flag_FlagState : uint8_t
{
	CTF_NONE                       = 0,
	CTF_CAPTURE                    = 1,
	CTF_RETURN                     = 2,
	CTF_MAX                        = 3
};


// Enum TgGame.TgRepInfo_Player_Store.EStoreReplicationType
enum class EStoreReplicationType : uint8_t
{
	ESRT_Items                     = 0,
	ESRT_Consumables               = 1,
	ESRT_Relics                    = 2,
	ESRT_MAX                       = 3
};


// Enum TgGame.TgRepInfo_VortexVolume.VortexVolumeState
enum class EVortexVolumeState : uint8_t
{
	VVS_Off                        = 0,
	VVS_Warmup                     = 1,
	VVS_Persist                    = 2,
	VVS_Rampdown                   = 3,
	VVS_MAX                        = 4
};


// Enum TgGame.TgRoundSchedule.ETaskForceSelectionStrategy
enum class ETaskForceSelectionStrategy : uint8_t
{
	TFSS_AssignedTaskForces        = 0,
	TFSS_ByLeastMatchups           = 1,
	TFSS_ByTeamRankings            = 2,
	TFSS_MAX                       = 3
};


// Enum TgGame.TgSeqAct_ForceClientTutorialAction.eForcedClientTutorialAction
enum class EeForcedClientTutorialAction : uint8_t
{
	FCTA_BlockAvl                  = 0,
	FCTA_UnblockAvl                = 1,
	FCTA_Open                      = 2,
	FCTA_Close                     = 3,
	FCTA_MAX                       = 4
};


// Enum TgGame.TgSeqAct_ModifyPropValue.TgPropValueType
enum class ETgPropValueType : uint8_t
{
	TGPVT_Value                    = 0,
	TGPVT_MinVal                   = 1,
	TGPVT_MaxVal                   = 2,
	TGPVT_MAX                      = 3
};


// Enum TgGame.TgSeqAct_RequestMission.EMissionDifficultyLevel
enum class EMissionDifficultyLevel : uint8_t
{
	DL_Easy                        = 0,
	DL_Medium                      = 1,
	DL_Hard                        = 2,
	DL_MAX                         = 3
};


// Enum TgGame.TgSeqAct_ToggleWaypoint.SequenceWaypointInputLinks
enum class ESequenceWaypointInputLinks : uint8_t
{
	SWIL_WaypointOn                = 0,
	SWIL_WaypointOff               = 1,
	SWIL_WaypointToggle            = 2,
	SWIL_MAX                       = 3
};


// Enum TgGame.TgSeqAct_TutorialHighlighter.eTutorialHighlighterElement
enum class EeTutorialHighlighterElement : uint8_t
{
	THE_Hide_All                   = 0,
	THE_Ability1                   = 1,
	THE_ActiveItem                 = 2,
	THE_ConsumableItem             = 3,
	THE_Gold                       = 4,
	THE_ItemShop_Gold              = 5,
	THE_ItemShop_Item              = 6,
	THE_ItemShop_Item2             = 7,
	THE_ItemShop_Item3             = 8,
	THE_ItemShop_Purchase          = 9,
	THE_ItemShop_AllItems          = 10,
	THE_ItemShop_RemoveOverlay     = 11,
	THE_ItemShop_AddBlocker        = 12,
	THE_Stats_Display              = 13,
	THE_Objective_Display          = 14,
	THE_PlayerLevel_Display        = 15,
	THE_ItemShop_T2L               = 16,
	THE_ItemShop_T2R               = 17,
	THE_ItemShop_T3L               = 18,
	THE_ItemShop_T3R               = 19,
	THE_ItemShop_BootItem          = 20,
	THE_ItemShop_AddBlocker2       = 21,
	THE_ItemShop_Item_Grid         = 22,
	THE_ItemShop_Item_Grid01       = 23,
	THE_ItemShop_Item_Grid02       = 24,
	THE_ItemShop_Item_Grid03       = 25,
	THE_ItemShop_T2M               = 26,
	THE_ItemShop_T3Executioner     = 27,
	THE_MAX                        = 28
};


// Enum TgGame.TgSeqAct_TutorialImage.eTutorialImageActionEnum
enum class EeTutorialImageActionEnum : uint8_t
{
	TIAE_Show                      = 0,
	TIAE_Hide                      = 1,
	TIAE_MAX                       = 2
};


// Enum TgGame.TgSeqCond_HasCondition.ConditionType
enum class EConditionType : uint8_t
{
	TGCT_POISON                    = 0,
	TGCT_DISEASE                   = 1,
	TGCT_REGENERATION              = 2,
	TGCT_STUN                      = 3,
	TGCT_STEALTH                   = 4,
	TGCT_EMP_STUN                  = 5,
	TGCT_IGNITE                    = 6,
	TGCT_INVULNERABLE              = 7,
	TGCT_SLOW                      = 8,
	TGCT_MAX                       = 9
};


// Enum TgGame.TgSeqEvent_MICParameterEvent.eMICEventType
enum class EeMICEventType : uint8_t
{
	MET_NONE                       = 0,
	MET_DEFENSE_ALARM              = 1,
	MET_MAX                        = 2
};


// Enum TgGame.TgSeqEvent_MultiRoundsTimer.EMultiRoundsEvent
enum class EMultiRoundsEvent : uint8_t
{
	MRE_Mision_SetupStarted        = 0,
	MRE_Mision_MissionStarted      = 1,
	MRE_Mision_PreGuardianPhase    = 2,
	MRE_Mision_GuardianPhase       = 3,
	MRE_Mision_MissionEnded        = 4,
	MRE_Mision_RoundReset          = 5,
	MRE_Mision_RoundEnded          = 6,
	MRE_Mision_TimedObjectiveUnlock = 7,
	MRE_Mision_OvertimeTransition  = 8,
	MRE_Mision_OvertimeSetup       = 9,
	MRE_Mision_OvertimeStarted     = 10,
	MRE_ItemStoreBegin             = 11,
	MRE_ItemStoreEnd               = 12,
	MRE_RoundSetupBegin            = 13,
	MRE_RoundSetupEnd              = 14,
	MRE_RoundActiveStart           = 15,
	MRE_RoundActiveEnd             = 16,
	MRE_RoundInactiveStart         = 17,
	MRE_RoundInactiveEnd           = 18,
	MRE_RoundResetStart            = 19,
	MRE_RoundResetEnd              = 20,
	MRE_CompleteStart              = 21,
	MRE_CompleteEnd                = 22,
	MRE_MAX                        = 23
};


// Enum TgGame.TgSeqEvent_Named.TSE_NAME
enum class ETSE_NAME : uint8_t
{
	TSE_NONE                       = 0,
	TSE_MENU_CLOSE                 = 1,
	TSE_MOVIE_DONE                 = 2,
	TSE_MAX                        = 3
};


// Enum TgGame.TgSeqEvent_TutorialEvent.TUTORIAL_EVENT
enum class ETUTORIAL_EVENT : uint8_t
{
	TUTEVT_OPENED_ITEM_SHOP        = 0,
	TUTEVT_BOUGHT_ITEM             = 1,
	TUTEVT_CLOSED_ITEM_SHOP        = 2,
	TUTEVT_OPENED_SKILLS           = 3,
	TUTEVT_BOUGHT_SKILL            = 4,
	TUTEVT_CLOSED_SKILLS           = 5,
	TUTEVT_USED_ABILITY            = 6,
	TUTEVT_USED_RECALL             = 7,
	TUTEVT_TARGETED                = 8,
	TUTEVT_OPENED_INTRO            = 9,
	TUTEVT_CLOSED_INTRO            = 10,
	TUTEVT_USED_ACTIVE_ITEM        = 11,
	TUTEVT_SELECTED_SHOP_ITEM      = 12,
	TUTEVT_SELECTED_SHOP_ITEM2     = 13,
	TUTEVT_SELECTED_SHOP_ITEM3     = 14,
	TUTEVT_USED_CONSUMABLE_ITEM    = 15,
	TUTEVT_SELECTED_ALL_ITEMS      = 16,
	TUTEVT_SELECTED_TIER2          = 17,
	TUTEVT_SELECTED_TIER3          = 18,
	TUTEVT_EFFECT_EARNED           = 19,
	TUTEVT_GRID_SELECTED           = 20,
	TUTEVT_GOD_SELECTED            = 21,
	TUTEVT_SELECTED_SHOP_ITEM4     = 22,
	TUTEVT_MAX                     = 23
};


// Enum TgGame.TgSeqEvent_TutorialEvent.TUTORIAL_TARGET_TYPE
enum class ETUTORIAL_TARGET_TYPE : uint8_t
{
	TUT_TARGET_TOWER               = 0,
	TUT_TARGET_PHOENIX             = 1,
	TUT_TARGET_GUARDIAN            = 2,
	TUT_TARGET_MAX                 = 3
};


// Enum TgGame.TgSiegePushActor.EPushState
enum class EPushState : uint8_t
{
	PushState_Paused               = 0,
	PushState_Forward              = 1,
	PushState_PendingReverse       = 2,
	PushState_Reverse              = 3,
	PushState_MAX                  = 4
};


// Enum TgGame.TgSkelCon_ScaleByTranslation.SkelControlAxis
enum class ESkelControlAxis : uint8_t
{
	skelControlX                   = 0,
	skelControlY                   = 1,
	skelControlZ                   = 2,
	SkelControlAxis_MAX            = 3
};


// Enum TgGame.TgSkelCon_ScalarParamByTranslation.TranslationRoundingType
enum class ETranslationRoundingType : uint8_t
{
	TRT_None                       = 0,
	TRT_Round                      = 1,
	TRT_Floor                      = 2,
	TRT_Ceiling                    = 3,
	TRT_MAX                        = 4
};


// Enum TgGame.TgSkelCon_WithMesh.MeshOnType
enum class EMeshOnType : uint8_t
{
	EXTRAMESH_ON_INACTIVE          = 0,
	EXTRAMESH_ON_ACTIVE            = 1,
	EXTRAMESH_ON_STRENGTHABOVE     = 2,
	EXTRAMESH_ON_STRENGTHBELOW     = 3,
	EXTRAMESH_ON_MAX               = 4
};


// Enum TgGame.TgSkelControlSingleBone_DisplayGroup.DisplayGroupOnType
enum class EDisplayGroupOnType : uint8_t
{
	DISPLAYGROUP_ON_INACTIVE       = 0,
	DISPLAYGROUP_ON_ACTIVE         = 1,
	DISPLAYGROUP_ON_STRENGTHABOVE  = 2,
	DISPLAYGROUP_ON_STRENGTHBELOW  = 3,
	DISPLAYGROUP_ON_MAX            = 4
};


// Enum TgGame.TgSkeletalMeshActor_Loader.ELobbyMeshType
enum class ELobbyMeshType : uint8_t
{
	ELMT_GodSelection              = 0,
	ELMT_Home                      = 1,
	ELMT_Event                     = 2,
	ELMT_GodsPage                  = 3,
	ELMT_MAX                       = 4
};


// Enum TgGame.TgSkeletalMeshActor_Loader.LobbyAnimPose
enum class ELobbyAnimPose : uint8_t
{
	LAP_Match                      = 0,
	LAP_Victory                    = 1,
	LAP_Defeat                     = 2,
	LAP_InGame                     = 3,
	LAP_MAX                        = 4
};


// Enum TgGame.TgSkeletalMeshActor_LobbyBase.ELobbyEventType
enum class ELobbyEventType : uint8_t
{
	LET_None                       = 0,
	LET_Hovered                    = 1,
	LET_Selected                   = 2,
	LET_MAX                        = 3
};


// Enum TgGame.TgSkeletalMeshActorSpawnable_BabaYagaPotion.BabaYagaPotionAnimState
enum class EBabaYagaPotionAnimState : uint8_t
{
	BYPA_Intro                     = 0,
	BYPA_SwapIn                    = 1,
	BYPA_Looping                   = 2,
	BYPA_SwapOut                   = 3,
	BYPA_Stored                    = 4,
	BYPA_MAX                       = 5
};


// Enum TgGame.TgSkeletalMeshActorSpawnable_DepthzyIStateMesh.DepthzyIStateMeshType
enum class EDepthzyIStateMeshType : uint8_t
{
	DISMT_Eye1                     = 0,
	DISMT_Tentacle1                = 1,
	DISMT_Tentacle2                = 2,
	DISMT_Tentacle3                = 3,
	DISMT_MAX                      = 4
};


// Enum TgGame.TgSkeletalMeshActorSpawnable_OlorunClone.EOlorunCloneState
enum class EOlorunCloneState : uint8_t
{
	OLORUN_CLONE_NONE              = 0,
	OLORUN_CLONE_INTRO             = 1,
	OLORUN_CLONE_CHARGING          = 2,
	OLORUN_CLONE_OUTRO             = 3,
	OLORUN_CLONE_MAX               = 4
};


// Enum TgGame.TgSoundGroup.eTG_SOUNDS
enum class EeTG_SOUNDS : uint8_t
{
	TGS_FOOTSTEP                   = 0,
	TGS_DODGE                      = 1,
	TGS_JUMP                       = 2,
	TGS_LAND                       = 3,
	TGS_DOUBLEJUMP                 = 4,
	TGS_DOUBLELAND                 = 5,
	TGS_DYING                      = 6,
	TGS_HIT                        = 7,
	TGS_MAX                        = 8
};


// Enum TgGame.TgSpecialFxLightManager.SpecialFxLightState
enum class ESpecialFxLightState : uint8_t
{
	FxLight_Normal                 = 0,
	FxLight_Dying                  = 1,
	FxLight_Kill                   = 2,
	FxLight_MAX                    = 3
};


// Enum TgGame.TgTeleportPlayerVolume.TgTeleportVolumeType
enum class ETgTeleportVolumeType : uint8_t
{
	Inactive                       = 0,
	Respawn                        = 1,
	TgTeleportVolumeType_MAX       = 2
};


// Enum TgGame.TgValueDataItem.TgValueType
enum class ETgValueType : uint8_t
{
	TGVT_None                      = 0,
	TGVT_Bool                      = 1,
	TGVT_Int                       = 2,
	TGVT_Float                     = 3,
	TGVT_Qword                     = 4,
	TGVT_Dword                     = 5,
	TGVT_MAX                       = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TgGame.TgActor_CH08_GooSpawner.CH08_GOO_SPAWNER
// 0x0030
struct FCH08_GOO_SPAWNER
{
	struct FVector                                     vSpawnLocation;                                           // 0x0000(0x000C)
	int                                                nGooSpawnCount;                                           // 0x000C(0x0004)
	unsigned long                                      bIsActive : 1;                                            // 0x0010(0x0004)
	float                                              fSpawnOffsetZ;                                            // 0x0014(0x0004)
	float                                              fMaxSpread;                                               // 0x0018(0x0004)
	float                                              fMinSpread;                                               // 0x001C(0x0004)
	float                                              fRespawnDelay;                                            // 0x0020(0x0004)
	float                                              fTimeRemaining;                                           // 0x0024(0x0004)
	class ATgCollisionProxy_CH08*                      collisionProxy;                                           // 0x0028(0x0008)
};

// ScriptStruct TgGame.TgAnimNodeSequence_WithMultiMesh.AnimMeshEntry
// 0x0018
struct FAnimMeshEntry
{
	int                                                m_nMeshId;                                                // 0x0000(0x0004) (Edit)
	struct FName                                       m_nmSocketName;                                           // 0x0004(0x0008) (Edit)
	struct FName                                       m_nmFullBodyName;                                         // 0x000C(0x0008) (Edit)
	unsigned long                                      m_bUseSocketRelativeLoc : 1;                              // 0x0014(0x0004) (Edit)
	unsigned long                                      m_bUseSocketRelativeRot : 1;                              // 0x0014(0x0004) (Edit)
	unsigned long                                      m_bIgnoreOwnerHidden : 1;                                 // 0x0014(0x0004) (Edit)
	unsigned long                                      m_bIgnoreOwnerRotation : 1;                               // 0x0014(0x0004) (Edit)
};

// ScriptStruct TgGame.TgPlayerController.FLOOD
// 0x0008
struct FFLOOD
{
	int                                                m_nCount;                                                 // 0x0000(0x0004)
	float                                              m_fLastUpdate;                                            // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.PlayerBuildRecs
// 0x0128
struct FPlayerBuildRecs
{
	int                                                m_nSupportRecommendedItems[0xC];                          // 0x0000(0x0004) (Const)
	int                                                m_nCarryRecommendedItems[0xC];                            // 0x0030(0x0004) (Const)
	int                                                m_nMidRecommendedItems[0xC];                              // 0x0060(0x0004) (Const)
	int                                                m_nSoloRecommendedItems[0xC];                             // 0x0090(0x0004) (Const)
	int                                                m_nJungleRecommendedItems[0xC];                           // 0x00C0(0x0004) (Const)
	int                                                m_nGenericRecommendedItems[0xC];                          // 0x00F0(0x0004) (Const)
	TEnumAsByte<EConquestRole>                         m_eCurrentRecommendedRole;                                // 0x0120(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	unsigned long                                      m_bUseRecommendedItems : 1;                               // 0x0124(0x0004) (Const)
};

// ScriptStruct TgGame.TgPlayerController.sSimProjectileFireInfo
// 0x0034
struct FsSimProjectileFireInfo
{
	struct FVector                                     vLocation;                                                // 0x0000(0x000C)
	struct FVector                                     vDirectionMunged;                                         // 0x000C(0x000C)
	int                                                nFlashProjectile;                                         // 0x0018(0x0004)
	int                                                nOwnerFireModeId;                                         // 0x001C(0x0004)
	int                                                nActorId;                                                 // 0x0020(0x0004)
	float                                              fGeneric1;                                                // 0x0024(0x0004)
	float                                              fGeneric2;                                                // 0x0028(0x0004)
	TEnumAsByte<ECMTargetType>                         ActorType;                                                // 0x002C(0x0001)
	unsigned char                                      byTiDi;                                                   // 0x002D(0x0001)
	unsigned char                                      byLocalTiDi;                                              // 0x002E(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x002F(0x0001) MISSED OFFSET
	unsigned long                                      bClientProcessed : 1;                                     // 0x0030(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.sDeferredProjectileFireInfo
// 0x0038
struct FsDeferredProjectileFireInfo
{
	struct FsSimProjectileFireInfo                     Info;                                                     // 0x0000(0x0034)
	int                                                nDeferCount;                                              // 0x0034(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.AbilityLevelInfo
// 0x0008
struct FAbilityLevelInfo
{
	int                                                Ability[0x2];                                             // 0x0000(0x0004)
};

// ScriptStruct TgGame.TgProperty.TgPropertyInstance
// 0x001C
struct FTgPropertyInstance
{
	int                                                m_nPropIndex;                                             // 0x0000(0x0004)
	int                                                m_nPropertyId;                                            // 0x0004(0x0004)
	float                                              m_fBase;                                                  // 0x0008(0x0004)
	float                                              m_fRaw;                                                   // 0x000C(0x0004)
	float                                              m_fMinimum;                                               // 0x0010(0x0004)
	float                                              m_fMaximum;                                               // 0x0014(0x0004)
	float                                              m_fScalingFactor;                                         // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgClientSettings.TgListLastSeen
// 0x0030
struct FTgListLastSeen
{
	struct FString                                     sStoreDeals;                                              // 0x0000(0x0010) (Edit, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     sStoreChests;                                             // 0x0010(0x0010) (Edit, Config, GlobalConfig, NeedCtorLink)
	struct FString                                     sStoreGodsSkins;                                          // 0x0020(0x0010) (Edit, Config, GlobalConfig, NeedCtorLink)
};

// ScriptStruct TgGame.TgCollisionProxy_CH08.CH08_PAWN_LOCATION_HISTORY
// 0x0018
struct FCH08_PAWN_LOCATION_HISTORY
{
	class ATgPawn*                                     trackedPawn;                                              // 0x0000(0x0008)
	struct FVector                                     vPreviousLocation;                                        // 0x0008(0x000C)
	unsigned long                                      bDeleteAfterUpdate : 1;                                   // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgObject.CH08_GOO_SPOT
// 0x0018
struct FCH08_GOO_SPOT
{
	struct FVector                                     vGooLocation;                                             // 0x0000(0x000C)
	TEnumAsByte<ECH08_GOO_SPOT_TYPES>                  nGooType;                                                 // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                nGooId;                                                   // 0x0010(0x0004)
	int                                                nSpawnerId;                                               // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgCollisionProxy_FX.ProxyFxInfo
// 0x0010
struct FProxyFxInfo
{
	class UTgSpecialFx*                                Fx;                                                       // 0x0000(0x0008)
	class ATgPawn*                                     Target;                                                   // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgObject.OnDamagedParams
// 0x00A4
struct FOnDamagedParams
{
	class ATgPawn*                                     attacker;                                                 // 0x0000(0x0008)
	class ATgDevice*                                   Dev;                                                      // 0x0008(0x0008)
	class UTgEffectGroup*                              eg;                                                       // 0x0010(0x0008)
	struct FImpactInfo                                 Impact;                                                   // 0x0018(0x0078) (Component)
	float                                              fBuffedDamage;                                            // 0x0090(0x0004)
	float                                              fMitigatedDamage;                                         // 0x0094(0x0004)
	float                                              fPreDamageHealth;                                         // 0x0098(0x0004)
	unsigned long                                      bCritical : 1;                                            // 0x009C(0x0004)
	int                                                nPropertyId;                                              // 0x00A0(0x0004)
};

// ScriptStruct TgGame.TgValueDataItem.TgDataItemValue
// 0x000C
struct FTgDataItemValue
{
	TEnumAsByte<ETgValueType>                          eType;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FQWord                                      Dummy;                                                    // 0x0004(0x0008) (Const, Native)
};

// ScriptStruct TgGame.TgObject.TG_HUD_INFO_EFFECTS
// 0x0014
struct FTG_HUD_INFO_EFFECTS
{
	int                                                nEffectGroupId;                                           // 0x0000(0x0004)
	int                                                nIconStackId;                                             // 0x0004(0x0004)
	int                                                nStackCount;                                              // 0x0008(0x0004)
	float                                              fDurationSecs;                                            // 0x000C(0x0004)
	float                                              fRemainingSecs;                                           // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgObject.TG_HUD_INFO
// 0x013E
struct FTG_HUD_INFO
{
	TEnumAsByte<EOverlayType>                          eOverlayType;                                             // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                nActorId;                                                 // 0x0004(0x0004)
	unsigned long                                      bEnemy : 1;                                               // 0x0008(0x0004)
	struct FString                                     objectiveString;                                          // 0x000C(0x0010) (NeedCtorLink)
	unsigned long                                      bShowNameplate : 1;                                       // 0x001C(0x0004)
	unsigned long                                      bShowPortrait : 1;                                        // 0x001C(0x0004)
	unsigned long                                      bShowOverlays : 1;                                        // 0x001C(0x0004)
	unsigned long                                      bShowTaskForce : 1;                                       // 0x001C(0x0004)
	unsigned long                                      bIsWinning : 1;                                           // 0x001C(0x0004)
	unsigned long                                      bIsTargeted : 1;                                          // 0x001C(0x0004)
	struct FVector                                     vScreenLoc;                                               // 0x0020(0x000C)
	float                                              fScale;                                                   // 0x002C(0x0004)
	float                                              fAlphaLevel;                                              // 0x0030(0x0004)
	float                                              fLastSeenTime;                                            // 0x0034(0x0004)
	float                                              fLastUnseenTime;                                          // 0x0038(0x0004)
	struct FString                                     sName;                                                    // 0x003C(0x0010) (NeedCtorLink)
	int                                                nHealth;                                                  // 0x004C(0x0004)
	int                                                nMaxHealth;                                               // 0x0050(0x0004)
	int                                                nMana;                                                    // 0x0054(0x0004)
	int                                                nMaxMana;                                                 // 0x0058(0x0004)
	int                                                nShield;                                                  // 0x005C(0x0004)
	int                                                nMaxShield;                                               // 0x0060(0x0004)
	float                                              fDistance;                                                // 0x0064(0x0004)
	int                                                nLevel;                                                   // 0x0068(0x0004)
	int                                                nProfileId;                                               // 0x006C(0x0004)
	int                                                nSkinId;                                                  // 0x0070(0x0004)
	int                                                nPacingType;                                              // 0x0074(0x0004)
	int                                                nTaskForce;                                               // 0x0078(0x0004)
	int                                                nHardCCCategoryId;                                        // 0x007C(0x0004)
	float                                              fHardCCLengthSecs;                                        // 0x0080(0x0004)
	float                                              fHardCCRemainingSecs;                                     // 0x0084(0x0004)
	int                                                nImmunityTypeId;                                          // 0x0088(0x0004)
	struct FTG_HUD_INFO_EFFECTS                        ImportantEffects[0x8];                                    // 0x008C(0x0014)
	float                                              fLifeLengthSecs;                                          // 0x012C(0x0004)
	float                                              fLifeRemainingSecs;                                       // 0x0130(0x0004)
	float                                              fNextLineCheckTime;                                       // 0x0134(0x0004)
	unsigned long                                      bLastLineCheckResult : 1;                                 // 0x0138(0x0004)
	TEnumAsByte<EOverlayLineCheckState>                eLineCheckState;                                          // 0x013C(0x0001)
	TEnumAsByte<EOverlayOffscreenIndicator>            eOffscreenIndicator;                                      // 0x013D(0x0001)
};

// ScriptStruct TgGame.TgDistributionFloatSoundAttenuation.AttenuationGroup
// 0x000C
struct FAttenuationGroup
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008)
	float                                              AttenuationDistance;                                      // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgEffectParameterTransition.EffectParameterTransition
// 0x0012
struct FEffectParameterTransition
{
	struct FName                                       m_nmParameter;                                            // 0x0000(0x0008) (Const)
	float                                              m_fDuration;                                              // 0x0008(0x0004) (Const)
	float                                              m_fLerpExponential;                                       // 0x000C(0x0004) (Const)
	TEnumAsByte<EffectParameterTransitionRepeatStrategy> m_eRepeatStrategy;                                        // 0x0010(0x0001) (Const)
	unsigned char                                      m_nRepeatCount;                                           // 0x0011(0x0001)
};

// ScriptStruct TgGame.TgEmoteConfigResource.EmoteConfigEntry
// 0x000C
struct FEmoteConfigEntry
{
	TEnumAsByte<EEmote>                                Emote;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned long                                      bWantsLoop : 1;                                           // 0x0004(0x0004)
	unsigned long                                      bWantsSuppress : 1;                                       // 0x0004(0x0004)
	unsigned long                                      bBlockAnimRestart : 1;                                    // 0x0004(0x0004)
	unsigned long                                      bLocksMusicTheme : 1;                                     // 0x0004(0x0004)
	unsigned long                                      bUsesPostProcess : 1;                                     // 0x0004(0x0004)
	int                                                nLockedBeforeLevel;                                       // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgEmoteConfigResource.EmoteSuccessiveStates
// 0x0008
struct FEmoteSuccessiveStates
{
	TEnumAsByte<EEmote>                                Emote;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                nTrackedStates;                                           // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgFlagContentData.FlagMeshData
// 0x000C
struct FFlagMeshData
{
	TEnumAsByte<EFlagContentDataType>                  ContentDataType;                                          // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UTgMenuMeshInfo*                             MainMeshInfo;                                             // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgLootTable.LootData
// 0x0014
struct FLootData
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	int                                                nLootTableItemId;                                         // 0x0004(0x0004)
	float                                              fWeight;                                                  // 0x0008(0x0004)
	int                                                nQuantity;                                                // 0x000C(0x0004)
	unsigned long                                      bCanStack : 1;                                            // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgMarkComponent.TargetMark
// 0x0020
struct FTargetMark
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	float                                              fTimeLeft;                                                // 0x0008(0x0004)
	int                                                nNumMarks;                                                // 0x000C(0x0004)
	TArray<class UTgEffectGroup*>                      AppliedEffects;                                           // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgMenuContentData.MeshData
// 0x0014
struct FMeshData
{
	TEnumAsByte<EMenuContentDataType>                  ContentDataType;                                          // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UTgMenuMeshInfo*                             MainMeshInfo;                                             // 0x0004(0x0008)
	struct FName                                       CameraName;                                               // 0x000C(0x0008)
};

// ScriptStruct TgGame.TgMenuMeshInfo.LobbyMeshInfo
// 0x0068
struct FLobbyMeshInfo
{
	struct FVector                                     Translation;                                              // 0x0000(0x000C) (Edit)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit)
	float                                              Scale;                                                    // 0x0018(0x0004) (Edit)
	class USkeletalMesh*                               SkelMesh;                                                 // 0x001C(0x0008) (Edit)
	class UPhysicsAsset*                               PhysAsset;                                                // 0x0024(0x0008) (Edit)
	class UAnimTree*                                   AnimTreeTemplate;                                         // 0x002C(0x0008) (Edit)
	TArray<class UAnimSet*>                            AnimSets;                                                 // 0x0034(0x0010) (Edit, NeedCtorLink)
	class UMorphTargetSet*                             MorphTargetSet;                                           // 0x0044(0x0008) (Edit)
	unsigned long                                      bOnlySelfShadow : 1;                                      // 0x004C(0x0004) (Edit)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        // 0x0050(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      bUseIndividualLightEnvironment : 1;                       // 0x0060(0x0004) (Edit)
	unsigned long                                      bUseOverlayMesh : 1;                                      // 0x0060(0x0004) (Edit)
	int                                                SkinOverrideId;                                           // 0x0064(0x0004) (Edit)
};

// ScriptStruct TgGame.TgMenuMeshInfo.ParticleSystemInfo
// 0x0010
struct FParticleSystemInfo
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit)
};

// ScriptStruct TgGame.TgSpectatorDirector.ViewTargetInfo
// 0x0038
struct FViewTargetInfo
{
	class ATgPawn*                                     Pawn;                                                     // 0x0000(0x0008)
	class ATgPawn_Tower*                               ClosestEnemyTower;                                        // 0x0008(0x0008)
	int                                                Rating;                                                   // 0x0010(0x0004)
	float                                              DistSqToClosestEnemy;                                     // 0x0014(0x0004)
	float                                              DistSqToClosestFriend;                                    // 0x0018(0x0004)
	float                                              DistSqToFireGiant;                                        // 0x001C(0x0004)
	float                                              DistSqToGoldFury;                                         // 0x0020(0x0004)
	float                                              DistSqToEnemyTower;                                       // 0x0024(0x0004)
	float                                              DistSqToEnemyMinotaur;                                    // 0x0028(0x0004)
	float                                              DistSqToEnemyPhoenix;                                     // 0x002C(0x0004)
	int                                                NumCloseEnemies;                                          // 0x0030(0x0004)
	int                                                NumCloseFriends;                                          // 0x0034(0x0004)
};

// ScriptStruct TgGame.TgTiDiState.TidiStackItem
// 0x0008
struct FTidiStackItem
{
	class UTgEffectGroup*                              m_EffectGroup;                                            // 0x0000(0x0008)
};

// ScriptStruct TgGame.TgAnimBlendBySpeed.ResetSynchGroup
// 0x0028
struct FResetSynchGroup
{
	struct FName                                       AnimNodeSynchName;                                        // 0x0000(0x0008) (Edit)
	class UAnimNodeSynch*                              SynchNode;                                                // 0x0008(0x0008)
	struct FName                                       GroupName;                                                // 0x0010(0x0008) (Edit)
	TArray<int>                                        ResetChannels;                                            // 0x0018(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgAnimMetaData_MICScalarParameter.MICScalarParameterKeyFrame
// 0x0008
struct FMICScalarParameterKeyFrame
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit)
	float                                              TargetValue;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimMetaData_MICScalarParameter.MICScalarParameterSkinIdOverride
// 0x0024
struct FMICScalarParameterSkinIdOverride
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	int                                                nSkinLevel;                                               // 0x0004(0x0004) (Edit)
	struct FName                                       MICParameterName;                                         // 0x0008(0x0008) (Edit)
	int                                                MaterialIndex;                                            // 0x0010(0x0004) (Edit)
	TArray<struct FMICScalarParameterKeyFrame>         KeyFrames;                                                // 0x0014(0x0010) (Edit, NeedCtorLink, EditInline)
};

// ScriptStruct TgGame.TgAnimMetaData_MICVectorParameter.MICVectorParameterKeyFrame
// 0x0020
struct FMICVectorParameterKeyFrame
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FVector4                                    TargetValue;                                              // 0x0010(0x0010) (Edit)
};

// ScriptStruct TgGame.TgAnimMetaData_MICVectorParameter.MICVectorParameterSkinIdOverride
// 0x0024
struct FMICVectorParameterSkinIdOverride
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	int                                                nSkinLevel;                                               // 0x0004(0x0004) (Edit)
	struct FName                                       MICParameterName;                                         // 0x0008(0x0008) (Edit)
	int                                                MaterialIndex;                                            // 0x0010(0x0004) (Edit)
	TArray<struct FMICVectorParameterKeyFrame>         KeyFrames;                                                // 0x0014(0x0010) (Edit, NeedCtorLink, EditInline)
};

// ScriptStruct TgGame.TgAnimMetaData_MICVectorPlusSocket.MICVectorSocketKeyFrame
// 0x0030
struct FMICVectorSocketKeyFrame
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FVector4                                    TranslationTargetValue;                                   // 0x0010(0x0010) (Edit)
	struct FVector4                                    RotationTargetValue;                                      // 0x0020(0x0010) (Edit)
};

// ScriptStruct TgGame.TgAnimMetaData_MICVectorPlusSocket.MICVectorSocketSkinIdOverride
// 0x0038
struct FMICVectorSocketSkinIdOverride
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	int                                                nSkinLevel;                                               // 0x0004(0x0004) (Edit)
	struct FName                                       TranslationMICParameterName;                              // 0x0008(0x0008) (Edit)
	struct FName                                       RotationMICParameterName;                                 // 0x0010(0x0008) (Edit)
	int                                                TranslationMaterialIndex;                                 // 0x0018(0x0004) (Edit)
	int                                                RotationMaterialIndex;                                    // 0x001C(0x0004) (Edit)
	struct FName                                       SocketName;                                               // 0x0020(0x0008) (Edit)
	TArray<struct FMICVectorSocketKeyFrame>            KeyFrames;                                                // 0x0028(0x0010) (Edit, NeedCtorLink, EditInline)
};

// ScriptStruct TgGame.TgAnimMetaData_SkelControl_BoneScale_KeyFrame.BoneScaleKeyFrameSkinIdOverride
// 0x0028
struct FBoneScaleKeyFrameSkinIdOverride
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	int                                                nSkinLevel;                                               // 0x0004(0x0004) (Edit)
	TArray<struct FName>                               SkelControlNameList;                                      // 0x0008(0x0010) (Edit, NeedCtorLink)
	TArray<struct FTimeModifier>                       KeyFrames;                                                // 0x0018(0x0010) (Edit, NeedCtorLink, EditInline)
};

// ScriptStruct TgGame.TgAnimMetaData_SkinLevel.SkinLevelParameterKeyFrame
// 0x0010
struct FSkinLevelParameterKeyFrame
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit)
	float                                              fVXGStartTime;                                            // 0x0004(0x0004) (Edit)
	int                                                nSkinLevel;                                               // 0x0008(0x0004) (Edit)
	unsigned long                                      bNoLevelChange : 1;                                       // 0x000C(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimMetaData_WithMesh.WithMeshKeyFrame
// 0x0008
struct FWithMeshKeyFrame
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit)
	unsigned long                                      Active : 1;                                               // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimMetaData_WithMesh.WithMeshMetaData
// 0x0034
struct FWithMeshMetaData
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	int                                                nSkinLevel;                                               // 0x0004(0x0004) (Edit)
	int                                                nMeshId;                                                  // 0x0008(0x0004) (Edit)
	unsigned long                                      bPAC : 1;                                                 // 0x000C(0x0004) (Edit)
	struct FName                                       nmFullBodyName;                                           // 0x0010(0x0008) (Edit)
	struct FName                                       nmSocketName;                                             // 0x0018(0x0008) (Edit)
	unsigned long                                      bUseSocketLoc : 1;                                        // 0x0020(0x0004) (Edit)
	unsigned long                                      bUseSocketRot : 1;                                        // 0x0020(0x0004) (Edit)
	unsigned long                                      bIgnoreOwnerHidden : 1;                                   // 0x0020(0x0004) (Edit)
	TArray<struct FWithMeshKeyFrame>                   KeyFrames;                                                // 0x0024(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgAnimNodeAimOffset_Skinned.AimSkinProfile
// 0x000C
struct FAimSkinProfile
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	struct FName                                       nmProfile;                                                // 0x0004(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimNodeBlendByPhysics.ChildBlendInfo
// 0x0008
struct FChildBlendInfo
{
	TEnumAsByte<EPhysics>                              m_PhysicsState;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              m_fBlendTime;                                             // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimNodeBlendByPhysics.ChildrenBlendInfo
// 0x0014
struct FChildrenBlendInfo
{
	TEnumAsByte<EPhysics>                              m_PhysicsState;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<struct FChildBlendInfo>                     m_ChildBlendInfo;                                         // 0x0004(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgAnimNodeBlendList.ChildBlendParam
// 0x0018
struct FChildBlendParam
{
	int                                                FromChild;                                                // 0x0000(0x0004) (Edit)
	int                                                ToChild;                                                  // 0x0004(0x0004) (Edit)
	float                                              BlendTime;                                                // 0x0008(0x0004) (Edit)
	float                                              StationaryBlendTime;                                      // 0x000C(0x0004) (Edit)
	unsigned long                                      UseAltBlendTimeWhileStationary : 1;                       // 0x0010(0x0004) (Edit)
	float                                              MaxBlendTime;                                             // 0x0014(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnim_MeshPassthrough.TgAnimPassthroughMeshMap
// 0x0014
struct FTgAnimPassthroughMeshMap
{
	int                                                m_nMeshId;                                                // 0x0000(0x0004) (Edit)
	struct FName                                       m_nmSocketName;                                           // 0x0004(0x0008) (Edit)
	struct FName                                       m_nmMeshFullbodyName;                                     // 0x000C(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnim_MeshPassthrough.TgAnimPassthroughPACMap
// 0x000C
struct FTgAnimPassthroughPACMap
{
	int                                                m_nMeshId;                                                // 0x0000(0x0004) (Edit)
	struct FName                                       m_nmBoneName;                                             // 0x0004(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByDirection_WithTransitions.DirectionTransitionAnimSet
// 0x000C
struct FDirectionTransitionAnimSet
{
	TEnumAsByte<EBlendDirTypes>                        m_eEndDirection;                                          // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       m_nmDirectionTransitionAnim;                              // 0x0004(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByDirection_WithTransitions.DirectionalProfile
// 0x0014
struct FDirectionalProfile
{
	TEnumAsByte<EBlendDirTypes>                        m_eStartDirection;                                        // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<struct FDirectionTransitionAnimSet>         m_directionTransitionAnimSets;                            // 0x0004(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgAnimBlendByEmote.EmoteBlendMap
// 0x0008
struct FEmoteBlendMap
{
	TEnumAsByte<EEmote>                                EmoteOverride;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                nChildOverride;                                           // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByFire.DeviceParameters
// 0x0014
struct FDeviceParameters
{
	struct FString                                     SlotName;                                                 // 0x0000(0x0010) (NeedCtorLink)
	unsigned long                                      bForceReplayOnBuildup : 1;                                // 0x0010(0x0004) (Edit)
	unsigned long                                      bForceReplayOnStartFire : 1;                              // 0x0010(0x0004) (Edit)
	unsigned long                                      bShouldInterruptIfStopped : 1;                            // 0x0010(0x0004) (Edit)
	unsigned long                                      bShouldInterruptIfInterrupted : 1;                        // 0x0010(0x0004) (Edit)
	unsigned long                                      bShouldInterruptIfJumping : 1;                            // 0x0010(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByPhase.m_PhaseTransitionAnimSet
// 0x000C
struct Fm_PhaseTransitionAnimSet
{
	int                                                m_TransitionToPhase;                                      // 0x0000(0x0004) (Edit)
	struct FName                                       m_TransitionAnimName;                                     // 0x0004(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByPhase.m_PhaseProfile
// 0x0014
struct Fm_PhaseProfile
{
	int                                                m_Phase;                                                  // 0x0000(0x0004) (Edit)
	TArray<struct Fm_PhaseTransitionAnimSet>           m_TransitionAnimSets;                                     // 0x0004(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgAnimBlendByPosture.PostureTransitionOverride
// 0x000E
struct FPostureTransitionOverride
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008)
	float                                              BlendTime;                                                // 0x0008(0x0004)
	TEnumAsByte<ETG_POSTURE>                           StartPosture;                                             // 0x000C(0x0001)
	TEnumAsByte<ETG_POSTURE>                           EndPosture;                                               // 0x000D(0x0001)
};

// ScriptStruct TgGame.TgAnimBlendByPosture.m_TransitionAnimSet
// 0x000C
struct Fm_TransitionAnimSet
{
	TEnumAsByte<ETG_POSTURE>                           m_TransitionToPosture;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       m_TransitionAnimName;                                     // 0x0004(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByPosture.m_PostureProfile
// 0x0018
struct Fm_PostureProfile
{
	TEnumAsByte<ETG_POSTURE>                           m_Posture;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<struct Fm_TransitionAnimSet>                m_TransitionAnimSets;                                     // 0x0004(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      m_bResetBlendByFireToIdleOnTransition : 1;                // 0x0014(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimBlendByRacerAction.RacerActionAnimSlotData
// 0x0028
struct FRacerActionAnimSlotData
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008)
	TEnumAsByte<ERacerActionAnimNames>                 ActionName;                                               // 0x0008(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	unsigned long                                      ReplayOnRetrigger : 1;                                    // 0x000C(0x0004) (Edit)
	unsigned long                                      CanBeInterrupted : 1;                                     // 0x000C(0x0004) (Edit)
	TArray<TEnumAsByte<ERacerActionAnimNames>>         InterruptExceptions;                                      // 0x0010(0x0010) (Edit, NeedCtorLink)
	float                                              CooldownTime;                                             // 0x0020(0x0004) (Edit)
	float                                              LastTriggerTime;                                          // 0x0024(0x0004) (Transient)
};

// ScriptStruct TgGame.TgAnimBlendBySkin.SkinChildInfo
// 0x0008
struct FSkinChildInfo
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	int                                                nChildIndex;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimNodeRandom.TgRandomAnimInfo
// 0x0024
struct FTgRandomAnimInfo
{
	float                                              Chance;                                                   // 0x0000(0x0004) (Edit)
	unsigned char                                      LoopCountMin;                                             // 0x0004(0x0001) (Edit)
	unsigned char                                      LoopCountMax;                                             // 0x0005(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              BlendInTime;                                              // 0x0008(0x0004) (Edit)
	unsigned long                                      bCanRepeat : 1;                                           // 0x000C(0x0004) (Edit)
	unsigned char                                      LoopCount;                                                // 0x0010(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	unsigned long                                      bCallOnAnimEndOnParent : 1;                               // 0x0014(0x0004) (Edit)
	unsigned long                                      m_bChooseNewNodeOnAnimEnd : 1;                            // 0x0014(0x0004) (Edit)
	struct FVector2D                                   m_ChildActiveTime;                                        // 0x0018(0x0008) (Edit)
	int                                                m_nChildIndex;                                            // 0x0020(0x0004)
};

// ScriptStruct TgGame.TgAnimNodeEmoteSequence_WithMesh.EMOTE_MESH_INFO
// 0x001C
struct FEMOTE_MESH_INFO
{
	TEnumAsByte<EEmote>                                Emote;                                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MeshId;                                                   // 0x0004(0x0004) (Edit)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit)
	struct FName                                       FullBodyName;                                             // 0x0010(0x0008) (Edit)
	unsigned long                                      m_bIgnoreOwnerHidden : 1;                                 // 0x0018(0x0004) (Edit)
	unsigned long                                      m_bUseSocketRelativeLoc : 1;                              // 0x0018(0x0004) (Edit)
	unsigned long                                      m_bUseSocketRelativeRot : 1;                              // 0x0018(0x0004) (Edit)
	unsigned long                                      m_bPlayEmoteAfterSpawn : 1;                               // 0x0018(0x0004) (Edit)
	unsigned long                                      m_bIgnoreOwnerRotation : 1;                               // 0x0018(0x0004) (Edit)
	unsigned long                                      c_bActive : 1;                                            // 0x0018(0x0004) (Transient)
};

// ScriptStruct TgGame.TgAnimNodeEmoteSequence_WithPAC.EMOTE_PAC_INFO
// 0x001C
struct FEMOTE_PAC_INFO
{
	TEnumAsByte<EEmote>                                Emote;                                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MeshId;                                                   // 0x0004(0x0004) (Edit)
	struct FString                                     BoneName;                                                 // 0x0008(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      c_bActive : 1;                                            // 0x0018(0x0004) (Transient)
};

// ScriptStruct TgGame.TgAnimNodeSequence_WithPAC.ANIM_PAC_INFO
// 0x0018
struct FANIM_PAC_INFO
{
	int                                                MeshId;                                                   // 0x0000(0x0004) (Edit)
	struct FString                                     BoneName;                                                 // 0x0004(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      c_bActive : 1;                                            // 0x0014(0x0004) (Transient)
};

// ScriptStruct TgGame.TgAnimNodeSlot.FullbodyMeshEntry
// 0x0020
struct FFullbodyMeshEntry
{
	TArray<struct FName>                               m_nmUseDuringAnims;                                       // 0x0000(0x0010) (Edit, NeedCtorLink)
	struct FName                                       m_nmSocketName;                                           // 0x0010(0x0008) (Edit)
	struct FName                                       m_nmMeshFullbodyName;                                     // 0x0018(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimNodeSlot.TgAnimSlotMeshMap
// 0x0018
struct FTgAnimSlotMeshMap
{
	int                                                m_nMeshId;                                                // 0x0000(0x0004) (Edit)
	TArray<struct FFullbodyMeshEntry>                  m_AnimMap;                                                // 0x0004(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      c_bMeshActive : 1;                                        // 0x0014(0x0004) (Transient)
};

// ScriptStruct TgGame.TgAnimNodeSlot.TgAnimSlotPACMap
// 0x0020
struct FTgAnimSlotPACMap
{
	int                                                m_nMeshId;                                                // 0x0000(0x0004) (Edit)
	struct FName                                       m_nmBoneName;                                             // 0x0004(0x0008) (Edit)
	TArray<struct FName>                               m_AnimList;                                               // 0x000C(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      c_bPACActive : 1;                                         // 0x001C(0x0004) (Transient)
};

// ScriptStruct TgGame.TgAnimNodeStanceTransitioner.CachedTgAnimNodeStanceInfo
// 0x000C
struct FCachedTgAnimNodeStanceInfo
{
	int                                                Index;                                                    // 0x0000(0x0004)
	class UTgAnimNodeStance*                           Node;                                                     // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgAnimNodeStanceTransitioner.CachedTgAnimNodeStanceTransitionInfo
// 0x000C
struct FCachedTgAnimNodeStanceTransitionInfo
{
	int                                                Index;                                                    // 0x0000(0x0004)
	class UTgAnimNodeStanceTransition*                 Node;                                                     // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgAnimNotify_PlayParticleEffect_Skinned.PPE_Skin
// 0x0018
struct FPPE_Skin
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	int                                                nSkinLevel;                                               // 0x0004(0x0004) (Edit)
	class UParticleSystem*                             PSTemplate;                                               // 0x0008(0x0008) (Edit)
	class UParticleSystem*                             PSTemplateLobby;                                          // 0x0010(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimNotify_Sound.PSE_Skin
// 0x0020
struct FPSE_Skin
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	int                                                nSkinLevel;                                               // 0x0004(0x0004) (Edit)
	class USoundCue*                                   SoundCue;                                                 // 0x0008(0x0008) (Edit)
	unsigned long                                      bPreventRepeat : 1;                                       // 0x0010(0x0004) (Edit)
	float                                              fCueDuration;                                             // 0x0014(0x0004) (Edit)
	unsigned long                                      bPreventGroupRepeat : 1;                                  // 0x0018(0x0004) (Edit)
	int                                                nCueGroup;                                                // 0x001C(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimTurnInPlace.RotTransitionInfo
// 0x000C
struct FRotTransitionInfo
{
	float                                              RotationOffset;                                           // 0x0000(0x0004) (Edit)
	struct FName                                       TransName;                                                // 0x0004(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimTurnInPlace_Player.TIP_Transition
// 0x0010
struct FTIP_Transition
{
	struct FName                                       TransName;                                                // 0x0000(0x0008)
	struct FName                                       AnimName;                                                 // 0x0008(0x0008) (Edit)
};

// ScriptStruct TgGame.TgSkelCon_CCD_IK_FootPlacement.JointConstraintInformation
// 0x0008
struct FJointConstraintInformation
{
	float                                              AngleConstraint;                                          // 0x0000(0x0004) (Edit)
	float                                              StretchConstraint;                                        // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgSkelCon_Gate.SkelControlGateChild
// 0x000C
struct FSkelControlGateChild
{
	class USkelControlBase*                            SkelControl;                                              // 0x0000(0x0008)
	float                                              DrawY;                                                    // 0x0008(0x0004) (Transient, EditConst)
};

// ScriptStruct TgGame.TgSkelCon_HitReaction.RecoilInfo
// 0x00E0
struct FRecoilInfo
{
	struct FRecoilDef                                  Min;                                                      // 0x0000(0x0070) (Edit)
	struct FRecoilDef                                  Max;                                                      // 0x0070(0x0070) (Edit)
};

// ScriptStruct TgGame.TgSkelCon_PropertyGate.SkelControlPropertyGateConfig
// 0x002C
struct FSkelControlPropertyGateConfig
{
	unsigned long                                      bWasInitialized : 1;                                      // 0x0000(0x0004)
	class AActor*                                      CachedOwner;                                              // 0x0004(0x0008) (Transient)
	struct FPointer                                    CachedByteProperty;                                       // 0x000C(0x0008) (Const, Native, Transient)
	struct FPointer                                    CachedFloatProperty;                                      // 0x0014(0x0008) (Const, Native, Transient)
	struct FPointer                                    CachedBoolProperty;                                       // 0x001C(0x0008) (Const, Native, Transient)
	struct FPointer                                    CachedIntProperty;                                        // 0x0024(0x0008) (Const, Native, Transient)
};

// ScriptStruct TgGame.TgSkelCon_PropertyGate.SkelControlPropertyGateChild
// 0x001C
struct FSkelControlPropertyGateChild
{
	class USkelControlBase*                            SkelControl;                                              // 0x0000(0x0008)
	unsigned char                                      nBytePropertyValue;                                       // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              fFloatPropertyValue;                                      // 0x000C(0x0004) (Edit)
	unsigned long                                      bBoolPropertyValue : 1;                                   // 0x0010(0x0004) (Edit)
	int                                                nIntPropertyValue;                                        // 0x0014(0x0004) (Edit)
	float                                              DrawY;                                                    // 0x0018(0x0004) (Transient, EditConst)
};

// ScriptStruct TgGame.TgSkelCon_SkinGate.SkelControlSkinGateChild
// 0x0014
struct FSkelControlSkinGateChild
{
	class USkelControlBase*                            SkelControl;                                              // 0x0000(0x0008)
	int                                                nSkinId;                                                  // 0x0008(0x0004) (Edit)
	int                                                nSkinLevel;                                               // 0x000C(0x0004) (Edit)
	float                                              DrawY;                                                    // 0x0010(0x0004) (Transient, EditConst)
};

// ScriptStruct TgGame.TgSkelCon_Spinner_Skinned.SkinnedSpinData
// 0x0008
struct FSkinnedSpinData
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	float                                              fSkinnedRotationsPerSecond;                               // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgSkelControlSingleBone.TgSkelControlSingleBoneSkinControls
// 0x0034
struct FTgSkelControlSingleBoneSkinControls
{
	int                                                OverrideSkinId;                                           // 0x0000(0x0004) (Edit)
	TArray<TEnumAsByte<EEmote>>                        SkinOverrideStrengthEmoteNameList;                        // 0x0004(0x0010) (Edit, NeedCtorLink)
	TArray<struct FName>                               SkinOverrideFullBodyAnimNameList;                         // 0x0014(0x0010) (Edit, NeedCtorLink)
	TArray<struct FName>                               SkinOverrideAnimNodeNameList;                             // 0x0024(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgSkelCon_ScalarParamByTranslation.TranslationScalarMICParamInfo
// 0x0010
struct FTranslationScalarMICParamInfo
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit)
	unsigned long                                      bInverseOfControlStrength : 1;                            // 0x0008(0x0004) (Edit)
	float                                              ParamStrength;                                            // 0x000C(0x0004) (Transient)
};

// ScriptStruct TgGame.TgSkelCon_WithMesh.WithMeshInfo
// 0x0028
struct FWithMeshInfo
{
	int                                                MeshId;                                                   // 0x0000(0x0004) (Edit)
	unsigned long                                      bPAC : 1;                                                 // 0x0004(0x0004) (Edit)
	struct FName                                       FullBodyName;                                             // 0x0008(0x0008) (Edit)
	TEnumAsByte<EMeshOnType>                           WhenMeshOn;                                               // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Strength;                                                 // 0x0014(0x0004) (Edit)
	unsigned long                                      bOn : 1;                                                  // 0x0018(0x0004) (Transient)
	unsigned long                                      ForceOffIfMeshHidden : 1;                                 // 0x0018(0x0004) (Edit)
	struct FName                                       SocketName;                                               // 0x001C(0x0008) (Edit)
	unsigned long                                      bUseSocketLocation : 1;                                   // 0x0024(0x0004) (Edit)
	unsigned long                                      bUseSocketRotation : 1;                                   // 0x0024(0x0004) (Edit)
	unsigned long                                      ForceOffIfBelowLobbyWall : 1;                             // 0x0024(0x0004) (Edit)
	unsigned long                                      bFreezeAnimTreeOnHidden : 1;                              // 0x0024(0x0004) (Edit)
	unsigned long                                      bResetMeshOnActivate : 1;                                 // 0x0024(0x0004) (Edit)
	unsigned long                                      m_bIgnoreOwnerRotation : 1;                               // 0x0024(0x0004) (Edit)
};

// ScriptStruct TgGame.TgSkelControlSingleBone_DisplayGroup.DisplayGroupInfo
// 0x0028
struct FDisplayGroupInfo
{
	struct FName                                       DisplayGroupName;                                         // 0x0000(0x0008) (Edit)
	TEnumAsByte<EDisplayGroupOnType>                   WhenDisplayGroupOn;                                       // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Strength;                                                 // 0x000C(0x0004) (Edit)
	unsigned long                                      bOn : 1;                                                  // 0x0010(0x0004) (Transient)
	unsigned long                                      ForceOffIfMeshHidden : 1;                                 // 0x0010(0x0004) (Edit)
	TArray<struct FName>                               SocketNames;                                              // 0x0014(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      ForceOffIfBelowLobbyWall : 1;                             // 0x0024(0x0004) (Edit)
};

// ScriptStruct TgGame.TgSkelControlSingleBone_ScalarMICParam.ScalarMICParamInfo
// 0x0018
struct FScalarMICParamInfo
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit)
	unsigned long                                      bInverseOfControlStrength : 1;                            // 0x0008(0x0004) (Edit)
	unsigned long                                      bUseMultScale : 1;                                        // 0x0008(0x0004) (Edit)
	float                                              fMultScale;                                               // 0x000C(0x0004) (Edit)
	unsigned long                                      bApplyToChildren : 1;                                     // 0x0010(0x0004) (Edit)
	float                                              ParamStrength;                                            // 0x0014(0x0004) (Transient)
};

// ScriptStruct TgGame.TgSkelControlSingleBone_Skinned.SkinStrengthOverride
// 0x0008
struct FSkinStrengthOverride
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	float                                              fDesiredStrength;                                         // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgCharmComponent.FireChainInfo
// 0x0010
struct FFireChainInfo
{
	int                                                nMode;                                                    // 0x0000(0x0004)
	float                                              fPreFireDelay;                                            // 0x0004(0x0004)
	float                                              fPostFireDelay;                                           // 0x0008(0x0004)
	int                                                nAttackType;                                              // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgObject.AimData
// 0x0030
struct FAimData
{
	struct FVector                                     StartTrace;                                               // 0x0000(0x000C)
	struct FVector                                     EndTrace;                                                 // 0x000C(0x000C)
	struct FVector                                     AimVector;                                                // 0x0018(0x000C)
	class AActor*                                      HitActor;                                                 // 0x0024(0x0008)
	unsigned long                                      bResult : 1;                                              // 0x002C(0x0004)
};

// ScriptStruct TgGame.TgDevice.RollingLineAttack
// 0x003C
struct FRollingLineAttack
{
	struct FVector                                     vStartLocation;                                           // 0x0000(0x000C)
	struct FRotator                                    rStartRotation;                                           // 0x000C(0x000C)
	float                                              fStartTime;                                               // 0x0018(0x0004)
	float                                              fDuration;                                                // 0x001C(0x0004)
	float                                              fLastUpdatePercent;                                       // 0x0020(0x0004)
	int                                                nFiringInstance;                                          // 0x0024(0x0004)
	unsigned long                                      bUseProximityDistance : 1;                                // 0x0028(0x0004)
	TArray<class AActor*>                              HitActors;                                                // 0x002C(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgDevice_ArcingBeam.ArcTargetSequence
// 0x0034
struct FArcTargetSequence
{
	class AActor*                                      s_PreviousArcTarget;                                      // 0x0000(0x0008)
	TArray<class AActor*>                              s_PreviousTargets;                                        // 0x0008(0x0010) (NeedCtorLink)
	class UTgDeviceFire_ArcingBeam*                    s_ArcFiremode;                                            // 0x0018(0x0008)
	int                                                s_nFiringInstance;                                        // 0x0020(0x0004)
	int                                                s_nJumpsRemaining;                                        // 0x0024(0x0004)
	float                                              s_fPersistPulseTime;                                      // 0x0028(0x0004)
	float                                              s_fArcRange;                                              // 0x002C(0x0004)
	float                                              s_fTriggerTime;                                           // 0x0030(0x0004)
};

// ScriptStruct TgGame.TgDevice_CH05_Surtr_FireSpinAndTrail.SurtrDeployTouchStatus
// 0x000C
struct FSurtrDeployTouchStatus
{
	class AActor*                                      Other;                                                    // 0x0000(0x0008)
	int                                                NumTouches;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_ChainedMelee.AttackModeInfo
// 0x000C
struct FAttackModeInfo
{
	int                                                nAttackNum;                                               // 0x0000(0x0004)
	unsigned char                                      nMode;                                                    // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              fRefireTime;                                              // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_ActiveMode.ActiveModeInfo
// 0x0008
struct FActiveModeInfo
{
	int                                                ActiveMode;                                               // 0x0000(0x0004)
	int                                                AttackCounter;                                            // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgObject.ChargeHitInfo
// 0x000C
struct FChargeHitInfo
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	float                                              TimeStamp;                                                // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_CH06_TurtleSpin.TurtleSpinDeployTouchStatus
// 0x000C
struct FTurtleSpinDeployTouchStatus
{
	class AActor*                                      Other;                                                    // 0x0000(0x0008)
	int                                                NumTouches;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_Apep_AcidSpray.DeployTouchStatus
// 0x000C
struct FDeployTouchStatus
{
	class AActor*                                      Other;                                                    // 0x0000(0x0008)
	int                                                NumTouches;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_CH05_SunderEarth.SunderEarthDeployTouchStatus
// 0x000C
struct FSunderEarthDeployTouchStatus
{
	class AActor*                                      Other;                                                    // 0x0000(0x0008)
	int                                                NumTouches;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_Hydra_Arc.DEP_TOUCH_INFO
// 0x0018
struct FDEP_TOUCH_INFO
{
	class AActor*                                      Other;                                                    // 0x0000(0x0008)
	TArray<class ATgDeployable*>                       Deps;                                                     // 0x0008(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgDevice_Surtr_LavaPools.SurtrPoolDeployTouchStatus
// 0x000C
struct FSurtrPoolDeployTouchStatus
{
	class AActor*                                      Other;                                                    // 0x0000(0x0008)
	int                                                NumTouches;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_Dialogue.DialogueLineInfo
// 0x0010
struct FDialogueLineInfo
{
	int                                                m_nEffectGroupId;                                         // 0x0000(0x0004) (Const)
	int                                                m_nSituationalDialogueType;                               // 0x0004(0x0004) (Const)
	int                                                m_nSpeakerBotId;                                          // 0x0008(0x0004) (Const)
	float                                              m_fLifeTime;                                              // 0x000C(0x0004) (Const)
};

// ScriptStruct TgGame.TgDevice_Dialogue.DialogueInfo
// 0x003C
struct FDialogueInfo
{
	TArray<struct FDialogueLineInfo>                   m_Lines;                                                  // 0x0000(0x0010) (NeedCtorLink)
	TArray<int>                                        m_RequiredSpeakerIds;                                     // 0x0010(0x0010) (NeedCtorLink)
	struct FName                                       m_nmDamageTypeClass;                                      // 0x0020(0x0008) (Const)
	float                                              m_fPctChanceTrigger;                                      // 0x0028(0x0004) (Const)
	float                                              m_fMinInGameTriggerTime;                                  // 0x002C(0x0004) (Const)
	float                                              m_fMaxInGameTriggerTime;                                  // 0x0030(0x0004) (Const)
	float                                              m_fTotalLifeTime;                                         // 0x0034(0x0004) (Const)
	unsigned long                                      m_bHasBeenTriggeredOnce : 1;                              // 0x0038(0x0004)
};

// ScriptStruct TgGame.TgDevice_Dialogue_Arthurian.MerlinDialogueRestriction
// 0x0009
struct FMerlinDialogueRestriction
{
	struct FName                                       m_nmDamageTypeClass;                                      // 0x0000(0x0008)
	TEnumAsByte<EWizardType>                           m_wtWizardType;                                           // 0x0008(0x0001)
};

// ScriptStruct TgGame.TgDevice_CH05_LokiExsanguinate.ExsanguinateData
// 0x000C
struct FExsanguinateData
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	int                                                bleedStacks;                                              // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_FireGiant_RagnarokFury.RFPotentialTargetData
// 0x000C
struct FRFPotentialTargetData
{
	class ATgPawn*                                     TargetPawn;                                               // 0x0000(0x0008)
	float                                              Distance;                                                 // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_Surtr_SwordSwing.SurtrFanInformation
// 0x0010
struct FSurtrFanInformation
{
	int                                                nFiringInstanceId;                                        // 0x0000(0x0004)
	class AActor*                                      HitActor;                                                 // 0x0004(0x0008)
	int                                                nHits;                                                    // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDevice_RadialSweep_MultiHit.MultiHitTrackingInfo
// 0x000C
struct FMultiHitTrackingInfo
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	int                                                nHitCounter;                                              // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_WarningDeployable.WarningDeployableInfo
// 0x0010
struct FWarningDeployableInfo
{
	class ATgDeployable*                               WarningDeployable;                                        // 0x0000(0x0008)
	class ATgProjectile*                               Proj;                                                     // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgDeviceFire.TGDFM_ANIM_SEQUENCE
// 0x0010
struct FTGDFM_ANIM_SEQUENCE
{
	int                                                nId;                                                      // 0x0000(0x0004)
	struct FName                                       nmSeqName;                                                // 0x0004(0x0008)
	unsigned long                                      bLeftHand : 1;                                            // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgObject.EquipDeviceInfo
// 0x000C
struct FEquipDeviceInfo
{
	int                                                nDeviceId;                                                // 0x0000(0x0004)
	int                                                nDeviceInstanceId;                                        // 0x0004(0x0004)
	int                                                nMode;                                                    // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDeviceForm.ModeData
// 0x0020
struct FModeData
{
	float                                              c_fEquipModeTime;                                         // 0x0000(0x0004) (AlwaysInit)
	float                                              c_fBuildupTime;                                           // 0x0004(0x0004) (AlwaysInit)
	unsigned long                                      c_bContinuousFire : 1;                                    // 0x0008(0x0004) (AlwaysInit)
	unsigned long                                      c_FxInstantFire : 1;                                      // 0x0008(0x0004) (AlwaysInit)
	struct FName                                       c_nmOffhandAnimationType;                                 // 0x000C(0x0008) (AlwaysInit)
	unsigned long                                      c_bScaleFireAnimsWithRefire : 1;                          // 0x0014(0x0004) (AlwaysInit)
	unsigned long                                      c_bInterruptAnimOnRefire : 1;                             // 0x0014(0x0004) (AlwaysInit)
	float                                              c_fEffectRadius;                                          // 0x0018(0x0004) (AlwaysInit)
	float                                              c_fFullBodyAnimTime;                                      // 0x001C(0x0004) (AlwaysInit)
};

// ScriptStruct TgGame.TgDeviceForm_MultipleTargetIndicator.FormTargetingInfo
// 0x0010
struct FFormTargetingInfo
{
	class UTgSpecialFx*                                Fx;                                                       // 0x0000(0x0008)
	class AActor*                                      Target;                                                   // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgDeviceForm_SplineTarget.SplineContainer
// 0x0024
struct FSplineContainer
{
	struct FInterpCurveVector                          Spline;                                                   // 0x0000(0x0014) (NeedCtorLink)
	TArray<class ATgSplineLoftActorSpawnable*>         SplineActors;                                             // 0x0014(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgDeploy_AutoPortal.PortalExcludeInfo
// 0x000C
struct FPortalExcludeInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	float                                              fTimeLeft;                                                // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDeploy_AutoPortal.PortalPermanentExcludeInfo
// 0x000C
struct FPortalPermanentExcludeInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	int                                                nTimesUsed;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDeploy_MovingEffectVolume.InterpAnchor
// 0x0024
struct FInterpAnchor
{
	struct FVector                                     LastLocation;                                             // 0x0000(0x000C)
	struct FRotator                                    LastRotation;                                             // 0x000C(0x000C)
	struct FName                                       SocketName;                                               // 0x0018(0x0008)
	unsigned long                                      bExists : 1;                                              // 0x0020(0x0004)
};

// ScriptStruct TgGame.TgDeployable_CTF_Flag.CarrierAbilityData
// 0x0038
struct FCarrierAbilityData
{
	class ATgPawn*                                     CarrierPawn;                                              // 0x0000(0x0008)
	class ATgDevice*                                   OriginalInhandDevice;                                     // 0x0008(0x0008)
	class ATgDevice*                                   OriginalRelic01Device;                                    // 0x0010(0x0008)
	class ATgDevice*                                   OriginalRelic02Device;                                    // 0x0018(0x0008)
	class ATgDevice*                                   ChargeDevice;                                             // 0x0020(0x0008)
	class ATgDevice*                                   MeleeDevice;                                              // 0x0028(0x0008)
	class ATgDevice*                                   ThrowDevice;                                              // 0x0030(0x0008)
};

// ScriptStruct TgGame.TgDeployable_CTF_Flag.ThrowLocationData
// 0x001C
struct FThrowLocationData
{
	int                                                ThrowCount;                                               // 0x0000(0x0004)
	struct FVector                                     ResultLocation;                                           // 0x0004(0x000C)
	struct FRotator                                    ResultRotation;                                           // 0x0010(0x000C)
};

// ScriptStruct TgGame.TgDeploy_Racer_TargetAhead.DelayedImpactByPlace
// 0x000C
struct FDelayedImpactByPlace
{
	class ATgPawn_Racer*                               racerTarget;                                              // 0x0000(0x0008)
	int                                                nPlacesAhead;                                             // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgSpecialFx.Fx_PSC
// 0x0035
struct FFx_PSC
{
	int                                                c_nId;                                                    // 0x0000(0x0004)
	class UParticleSystemComponent*                    c_PSC;                                                    // 0x0004(0x0008) (ExportObject, Component, EditInline)
	class UParticleSystem*                             c_PSCTemplate;                                            // 0x000C(0x0008) (Const)
	float                                              c_fScale;                                                 // 0x0014(0x0004)
	int                                                c_nScaleType;                                             // 0x0018(0x0004)
	unsigned long                                      c_bRunning : 1;                                           // 0x001C(0x0004)
	struct FName                                       c_nmSocketDisplayGrp;                                     // 0x0020(0x0008)
	struct FName                                       c_nmSocket;                                               // 0x0028(0x0008)
	unsigned long                                      c_bAbsoluteRotation : 1;                                  // 0x0030(0x0004)
	TEnumAsByte<ESceneDepthPriorityGroup>              c_eDepthPriorityGroup;                                    // 0x0034(0x0001)
};

// ScriptStruct TgGame.TgObject.PEPRewardEntry
// 0x0014
struct FPEPRewardEntry
{
	int                                                m_nRewardBotId;                                           // 0x0000(0x0004) (Edit)
	TEnumAsByte<EPEPRewardType>                        m_eRewardType;                                            // 0x0004(0x0001) (Edit)
	TEnumAsByte<EPEPRewardTier>                        m_eRewardTier;                                            // 0x0005(0x0001) (Edit)
	TEnumAsByte<EPEPPusherType>                        m_ePusherType;                                            // 0x0006(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	struct FName                                       m_nmTypeName;                                             // 0x0008(0x0008) (Edit)
	int                                                m_nSpawnMultiplier;                                       // 0x0010(0x0004) (Edit)
};

// ScriptStruct TgGame.TgObject.PEPRewardMap
// 0x001C
struct FPEPRewardMap
{
	struct FName                                       m_nmEntryName;                                            // 0x0000(0x0008) (Edit, Const)
	struct FPEPRewardEntry                             m_eRewardData;                                            // 0x0008(0x0014) (Edit)
};

// ScriptStruct TgGame.TgDeployable_Racer_Pickup.RacerLootData
// 0x0008
struct FRacerLootData
{
	int                                                ItemId;                                                   // 0x0000(0x0004)
	int                                                Weight;                                                   // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDeployable_Racer_Pickup.RacerLootSet
// 0x0014
struct FRacerLootSet
{
	TArray<struct FRacerLootData>                      Data;                                                     // 0x0000(0x0010) (NeedCtorLink)
	int                                                TotalWeight;                                              // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgDeployable_PortalEntrance.PortalTimer
// 0x000C
struct FPortalTimer
{
	class ATgPawn*                                     P;                                                        // 0x0000(0x0008)
	float                                              fTime;                                                    // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgTrailComponent_GroundTrail.TouchInfo
// 0x0018
struct FTouchInfo
{
	class AActor*                                      TouchedActor;                                             // 0x0000(0x0008)
	TArray<class ATgDeployable*>                       TouchingChildren;                                         // 0x0008(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgActor_DeathFog.FOG_CONFIG
// 0x0020
struct FFOG_CONFIG
{
	float                                              fSafeDistance;                                            // 0x0000(0x0004) (Edit)
	float                                              fPhaseDuration;                                           // 0x0004(0x0004) (Edit)
	float                                              fSpreadRate;                                              // 0x0008(0x0004) (Edit)
	float                                              fTickInterval;                                            // 0x000C(0x0004) (Edit)
	TArray<class AEmitter*>                            Emitters;                                                 // 0x0010(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgRepInfo_DeathFog.FOG_FX
// 0x0014
struct FFOG_FX
{
	unsigned long                                      bHasInitializedFx : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bFogFxVisible : 1;                                        // 0x0000(0x0004)
	class ATgSurvivalFogVolumeDensityInfo*             sphericalFogFx;                                           // 0x0004(0x0008)
	class ATgSkeletalMeshActorSpawnable*               flatFogFx;                                                // 0x000C(0x0008)
};

// ScriptStruct TgGame.TgRepInfo_DeathFog.FOG_GROWTH
// 0x000C
struct FFOG_GROWTH
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004)
	float                                              fSafeRadius;                                              // 0x0004(0x0004)
	float                                              fSpreadRate;                                              // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgSoundGroup.FootstepSoundInfo
// 0x0010
struct FFootstepSoundInfo
{
	struct FName                                       MaterialType;                                             // 0x0000(0x0008)
	class USoundCue*                                   Sound;                                                    // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgSpecialFx.Fx_Decal
// 0x0028
struct FFx_Decal
{
	int                                                c_nId;                                                    // 0x0000(0x0004)
	class UMaterialInterface*                          c_MaterialInterface;                                      // 0x0004(0x0008)
	float                                              c_fWidth;                                                 // 0x000C(0x0004)
	float                                              c_fHeight;                                                // 0x0010(0x0004)
	float                                              c_fThickness;                                             // 0x0014(0x0004)
	unsigned long                                      c_bNoClip : 1;                                            // 0x0018(0x0004)
	unsigned long                                      c_bAttach : 1;                                            // 0x0018(0x0004)
	class UDecalComponent*                             c_Decal;                                                  // 0x001C(0x0008) (ExportObject, Component, EditInline)
	float                                              c_fLifetime;                                              // 0x0024(0x0004)
};

// ScriptStruct TgGame.TgSpecialFx.Fx_Sound
// 0x0020
struct FFx_Sound
{
	int                                                c_nId;                                                    // 0x0000(0x0004)
	class USoundCue*                                   c_SoundCue;                                               // 0x0004(0x0008)
	class UAudioComponent*                             c_acSound;                                                // 0x000C(0x0008) (ExportObject, Component, EditInline)
	unsigned long                                      c_bAllowSoundToFinishFlag : 1;                            // 0x0014(0x0004)
	int                                                c_nAudienceType;                                          // 0x0018(0x0004)
	unsigned long                                      c_bForceAudioComponent : 1;                               // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgSpecialFx.Fx_Material
// 0x0014
struct FFx_Material
{
	int                                                nFxMatId;                                                 // 0x0000(0x0004)
	int                                                nFxMatTypeCode;                                           // 0x0004(0x0004)
	struct FName                                       nmMIC;                                                    // 0x0008(0x0008)
	unsigned long                                      bApplyIfSameTeam : 1;                                     // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgEffectForm.MicFxInfo
// 0x000C
struct FMicFxInfo
{
	class UMaterialInstanceConstant*                   m_micFx;                                                  // 0x0000(0x0008)
	unsigned long                                      c_bApplied : 1;                                           // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgObject.MicList
// 0x0010
struct FMicList
{
	TArray<class UMaterialInstanceConstant*>           m_micList;                                                // 0x0000(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgEffectForm_WithMeshes.EffectMeshInfo
// 0x0040
struct FEffectMeshInfo
{
	class UMeshComponent*                              Mesh;                                                     // 0x0000(0x0008) (ExportObject, Component, EditInline)
	struct FName                                       DisplayGroup;                                             // 0x0008(0x0008)
	struct FName                                       AnimName;                                                 // 0x0010(0x0008)
	struct FVector                                     vAdditiveTranslation;                                     // 0x0018(0x000C)
	struct FRotator                                    rAdditiveRotation;                                        // 0x0024(0x000C)
	float                                              fScaleMultipler;                                          // 0x0030(0x0004)
	int                                                nMeshId;                                                  // 0x0034(0x0004)
	int                                                nSkinId;                                                  // 0x0038(0x0004)
	unsigned long                                      AbsoluteTranslation : 1;                                  // 0x003C(0x0004)
	unsigned long                                      AbsoluteRotation : 1;                                     // 0x003C(0x0004)
	unsigned long                                      AbsoluteScale : 1;                                        // 0x003C(0x0004)
	unsigned long                                      bWillSelfDestruct : 1;                                    // 0x003C(0x0004)
	unsigned long                                      bUsesParentAnimComponent : 1;                             // 0x003C(0x0004)
	unsigned long                                      bLoopAnim : 1;                                            // 0x003C(0x0004)
};

// ScriptStruct TgGame.TgEffectManager.EffectListEntry
// 0x0018
struct FEffectListEntry
{
	int                                                nEffectGroupId;                                           // 0x0000(0x0004)
	int                                                nSourceItemId;                                            // 0x0004(0x0004)
	unsigned char                                      byNumStacks;                                              // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              fInitTimeRemaining;                                       // 0x000C(0x0004)
	int                                                nExtraInfo;                                               // 0x0010(0x0004)
	int                                                nInstigatorId;                                            // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgEffectManager.EffectQueueEntry
// 0x0024
struct FEffectQueueEntry
{
	int                                                nEffectGroupId;                                           // 0x0000(0x0004)
	int                                                nExtraInfo;                                               // 0x0004(0x0004)
	int                                                nInstigatorInstId;                                        // 0x0008(0x0004)
	struct FVector                                     vHitLocation;                                             // 0x000C(0x000C)
	struct FRotator                                    rHitNormal;                                               // 0x0018(0x000C)
};

// ScriptStruct TgGame.TgEffectManager.StunStackEntry
// 0x0009
struct FStunStackEntry
{
	class UTgEffect*                                   Effect;                                                   // 0x0000(0x0008)
	TEnumAsByte<EStunType>                             StunType;                                                 // 0x0008(0x0001)
};

// ScriptStruct TgGame.TgEffectManager.RevealStackEntry
// 0x0014
struct FRevealStackEntry
{
	class UTgEffect*                                   Effect;                                                   // 0x0000(0x0008)
	TEnumAsByte<ERevealType>                           RevealType;                                               // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	class ATgRepInfo_Player*                           RevealedBy;                                               // 0x000C(0x0008)
};

// ScriptStruct TgGame.TgEffectManager.SlowToHaltMode
// 0x000C
struct FSlowToHaltMode
{
	class UTgDeviceFire*                               m_DeviceMode;                                             // 0x0000(0x0008)
	int                                                m_nFiringInstance;                                        // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgObject.ScoreKillData
// 0x00B4
struct FScoreKillData
{
	class AController*                                 Killer;                                                   // 0x0000(0x0008)
	class ATgRepInfo_Player*                           KillerPRI;                                                // 0x0008(0x0008)
	class ATgPawn*                                     KillerPawn;                                               // 0x0010(0x0008)
	struct FPointer                                    KillerBotAssembly;                                        // 0x0018(0x0008) (Native)
	unsigned long                                      bKillerIsGod : 1;                                         // 0x0020(0x0004)
	unsigned long                                      bKillerIsMinion : 1;                                      // 0x0020(0x0004)
	unsigned long                                      bKillerIsTower : 1;                                       // 0x0020(0x0004)
	class AController*                                 Victim;                                                   // 0x0024(0x0008)
	class ATgPawn*                                     VictimPawn;                                               // 0x002C(0x0008)
	class ATgRepInfo_Player*                           VictimPRI;                                                // 0x0034(0x0008)
	class ATgRepInfo_TaskForce*                        VictimTaskForce;                                          // 0x003C(0x0008)
	struct FPointer                                    VictimBotAssembly;                                        // 0x0044(0x0008) (Native)
	unsigned long                                      VictimCanScore : 1;                                       // 0x004C(0x0004)
	unsigned long                                      bVictimIsGod : 1;                                         // 0x004C(0x0004)
	unsigned long                                      bVictimIsMinion : 1;                                      // 0x004C(0x0004)
	unsigned long                                      bVictimIsTower : 1;                                       // 0x004C(0x0004)
	class AController*                                 Scorer;                                                   // 0x0050(0x0008)
	class ATgPawn*                                     ScorerPawn;                                               // 0x0058(0x0008)
	class ATgRepInfo_Player*                           ScorerPRI;                                                // 0x0060(0x0008)
	class ATgRepInfo_TaskForce*                        ScorerTaskForce;                                          // 0x0068(0x0008)
	unsigned long                                      ScorerCanScore : 1;                                       // 0x0070(0x0004)
	class AController*                                 KillerOverride;                                           // 0x0074(0x0008)
	class ATgPawn*                                     KillerOverridePawn;                                       // 0x007C(0x0008)
	class ATgRepInfo_Player*                           KillerOverridePRI;                                        // 0x0084(0x0008)
	class ATgRepInfo_TaskForce*                        KillerOverrideTaskForce;                                  // 0x008C(0x0008)
	unsigned long                                      KillerOverrideCanScore : 1;                               // 0x0094(0x0004)
	class UTgEffectGroup*                              KillingEffectGroup;                                       // 0x0098(0x0008)
	unsigned long                                      bSuicide : 1;                                             // 0x00A0(0x0004)
	unsigned long                                      bFirstBlood : 1;                                          // 0x00A0(0x0004)
	TArray<class ATgRepInfo_Player*>                   AssistingPlayers;                                         // 0x00A4(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgBotFactory.SpawnQueueEntry
// 0x0018
struct FSpawnQueueEntry
{
	float                                              fSpawnTime;                                               // 0x0000(0x0004)
	int                                                nBotId;                                                   // 0x0004(0x0004)
	int                                                nSkinId;                                                  // 0x0008(0x0004)
	int                                                nSpawnTableDetailId;                                      // 0x000C(0x0004)
	struct FName                                       BehaviorTreeOverride;                                     // 0x0010(0x0008)
};

// ScriptStruct TgGame.TgBotFactory.BuffMap
// 0x0010
struct FBuffMap
{
	int                                                nBotId;                                                   // 0x0000(0x0004) (Edit)
	int                                                nBuffId;                                                  // 0x0004(0x0004) (Edit)
	struct FName                                       nmAnimOverride;                                           // 0x0008(0x0008) (Edit)
};

// ScriptStruct TgGame.TgBotFactory.TeamBuffMap
// 0x000C
struct FTeamBuffMap
{
	int                                                nBotId;                                                   // 0x0000(0x0004) (Edit)
	int                                                nTeamBuffId;                                              // 0x0004(0x0004) (Edit)
	float                                              fUseAfterGameTime;                                        // 0x0008(0x0004) (Edit)
};

// ScriptStruct TgGame.TgBotFactory.FactorySpawnModifier
// 0x000C
struct FFactorySpawnModifier
{
	int                                                nSpawnModifierItemId;                                     // 0x0000(0x0004)
	float                                              fSpawnModifierDuration;                                   // 0x0004(0x0004)
	int                                                nModifierStacks;                                          // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgBotFactory.AccoladeMap
// 0x0018
struct FAccoladeMap
{
	int                                                nBotId;                                                   // 0x0000(0x0004) (Edit)
	int                                                nAccoladeMessage;                                         // 0x0004(0x0004) (Edit)
	unsigned long                                      bTracksObjectiveSteal : 1;                                // 0x0008(0x0004) (Edit)
	unsigned long                                      bOverrideFriendlyMsg : 1;                                 // 0x0008(0x0004) (Edit)
	int                                                nSpectatorMessage;                                        // 0x000C(0x0004) (Edit)
	int                                                nEnemyMessage;                                            // 0x0010(0x0004) (Edit)
	int                                                nFriendlyMessage;                                         // 0x0014(0x0004) (Edit)
};

// ScriptStruct TgGame.TgBotFactory.RewardModifiers
// 0x0028
struct FRewardModifiers
{
	float                                              fUseAfterTime;                                            // 0x0000(0x0004) (Edit)
	float                                              fUseUntilTime;                                            // 0x0004(0x0004) (Edit)
	TArray<int>                                        TaskForceList;                                            // 0x0008(0x0010) (Edit, NeedCtorLink)
	float                                              fGoldMultStart;                                           // 0x0018(0x0004) (Edit)
	float                                              fGoldMultEnd;                                             // 0x001C(0x0004) (Edit)
	float                                              fXPMultStart;                                             // 0x0020(0x0004) (Edit)
	float                                              fXPMultEnd;                                               // 0x0024(0x0004) (Edit)
};

// ScriptStruct TgGame.TgBotFactory_LeashedConfigurable.LeashedBotEntry
// 0x0010
struct FLeashedBotEntry
{
	struct FName                                       EntryName;                                                // 0x0000(0x0008) (Edit)
	int                                                nBotId;                                                   // 0x0008(0x0004) (Edit)
	int                                                nBotSkin;                                                 // 0x000C(0x0004) (Edit)
};

// ScriptStruct TgGame.TgBotFactory_LeashedConfigurable.LeashedBotQueueEntry
// 0x0010
struct FLeashedBotQueueEntry
{
	struct FName                                       EntryName;                                                // 0x0000(0x0008) (Edit)
	struct FName                                       BehaviorOverride;                                         // 0x0008(0x0008) (Edit)
};

// ScriptStruct TgGame.TgBotFactory_LeashedConfigurable.LeashedBotQueue
// 0x001C
struct FLeashedBotQueue
{
	TArray<struct FLeashedBotQueueEntry>               SpawnQueue;                                               // 0x0000(0x0010) (Edit, NeedCtorLink)
	float                                              fRespawnDelay;                                            // 0x0010(0x0004) (Edit)
	int                                                nVisualOverrideIndex;                                     // 0x0014(0x0004) (Edit)
	float                                              fUseAfterTime;                                            // 0x0018(0x0004) (Edit)
};

// ScriptStruct TgGame.TgBotFactory_LeashedConfigurable.QueueProfile
// 0x0030
struct FQueueProfile
{
	TEnumAsByte<EQUEUESELECTIONTYPE>                   eSelectionType;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<struct FLeashedBotQueue>                    ProfileQueues;                                            // 0x0004(0x0010) (Edit, NeedCtorLink)
	float                                              fUseAfterTime;                                            // 0x0014(0x0004) (Edit)
	TArray<int>                                        nCustomOrder;                                             // 0x0018(0x0010) (Edit, NeedCtorLink)
	int                                                nCustomOrderIndex;                                        // 0x0028(0x0004)
	int                                                nStartingQueue;                                           // 0x002C(0x0004) (Edit)
};

// ScriptStruct TgGame.TgBotFactory_LeashedConfigurable.IndicatorEntry
// 0x001C
struct FIndicatorEntry
{
	class UMaterialInstanceConstant*                   IndicatorMIC;                                             // 0x0000(0x0008) (Edit)
	TEnumAsByte<EMinimapFactoryType>                   MinimapType;                                              // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TArray<class UMaterialInstanceConstant*>           InWorldMICs;                                              // 0x000C(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgBotFactory_Minions_Configurable.AdditionalBotData
// 0x000C
struct FAdditionalBotData
{
	int                                                nBotId;                                                   // 0x0000(0x0004)
	int                                                nSkinId;                                                  // 0x0004(0x0004)
	int                                                nQueueIndex;                                              // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgBotFactory_Minions_Configurable.BotEntryData
// 0x0018
struct FBotEntryData
{
	struct FName                                       EntryName;                                                // 0x0000(0x0008) (Edit)
	int                                                nBaseBotId;                                               // 0x0008(0x0004) (Edit)
	int                                                nBaseBotSkin;                                             // 0x000C(0x0004) (Edit)
	int                                                nSuperBotId;                                              // 0x0010(0x0004) (Edit)
	int                                                nSuperBotSkin;                                            // 0x0014(0x0004) (Edit)
};

// ScriptStruct TgGame.TgBotFactory_Minions_Configurable.QueueEntryData
// 0x0010
struct FQueueEntryData
{
	TArray<struct FName>                               Bots;                                                     // 0x0000(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgBotFactory_Minions_Configurable.SpawnQueueData
// 0x0014
struct FSpawnQueueData
{
	float                                              fUseAfterTime;                                            // 0x0000(0x0004) (Edit)
	TArray<struct FQueueEntryData>                     SpawnEntries;                                             // 0x0004(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgInventory_BuildCache.BuildItem
// 0x0010
struct FBuildItem
{
	TArray<int>                                        m_BuildItemIds;                                           // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgInventory_BuildCache.BuildLibrary
// 0x0010
struct FBuildLibrary
{
	TArray<struct FBuildItem>                          m_Builds;                                                 // 0x0000(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgInventory_BuildCache.BotBuildPair
// 0x000C
struct FBotBuildPair
{
	TEnumAsByte<EConquestRole>                         m_eRole;                                                  // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                m_nGameType;                                              // 0x0004(0x0004)
	int                                                m_nBuildIndex;                                            // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventory_BuildCache.BotBuildMap
// 0x0014
struct FBotBuildMap
{
	int                                                m_nBotId;                                                 // 0x0000(0x0004)
	TArray<struct FBotBuildPair>                       m_BuildPairs;                                             // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgInventory_BuildCache.BuildMap
// 0x0018
struct FBuildMap
{
	int                                                m_nModeType;                                              // 0x0000(0x0004)
	int                                                m_nDefaultGameMode;                                       // 0x0004(0x0004)
	TArray<struct FBotBuildMap>                        m_BotBuilds;                                              // 0x0008(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgInventory_BuildCache.TeamComp
// 0x0005
struct FTeamComp
{
	unsigned char                                      m_bytHunters;                                             // 0x0000(0x0001)
	unsigned char                                      m_bytGuardians;                                           // 0x0001(0x0001)
	unsigned char                                      m_bytMages;                                               // 0x0002(0x0001)
	unsigned char                                      m_bytAssassins;                                           // 0x0003(0x0001)
	unsigned char                                      m_bytWarriors;                                            // 0x0004(0x0001)
};

// ScriptStruct TgGame.TgRepInfo_Player_BotShop.BotUnit
// 0x000C
struct FBotUnit
{
	int                                                m_nBotId;                                                 // 0x0000(0x0004) (Const)
	int                                                m_nCost;                                                  // 0x0004(0x0004) (Const)
	int                                                m_nEffectGroupId;                                         // 0x0008(0x0004) (Const)
};

// ScriptStruct TgGame.TgInventory_RandomizedShop.InventoryList
// 0x0010
struct FInventoryList
{
	TArray<int>                                        m_nItems;                                                 // 0x0000(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgInventoryManager.CourierTransaction
// 0x001D
struct FCourierTransaction
{
	TEnumAsByte<EPendingTransactionType>               Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemId;                                                   // 0x0004(0x0004)
	int                                                ItemCount;                                                // 0x0008(0x0004)
	int                                                InventoryId;                                              // 0x000C(0x0004)
	int                                                Currency;                                                 // 0x0010(0x0004)
	class ATgPawn_Courier*                             Courier;                                                  // 0x0014(0x0008)
	TEnumAsByte<ECourierPetPhase>                      CourierPhase;                                             // 0x001C(0x0001)
};

// ScriptStruct TgGame.TgInventoryManager.InventoryTransaction
// 0x001C
struct FInventoryTransaction
{
	TEnumAsByte<EPendingTransactionType>               Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ExistingObjectInvId;                                      // 0x0004(0x0004)
	int                                                NewObjectInvId;                                           // 0x0008(0x0004)
	int                                                nInstanceCountChange;                                     // 0x000C(0x0004)
	int                                                nGoldValue;                                               // 0x0010(0x0004)
	int                                                nEqpPoint;                                                // 0x0014(0x0004)
	float                                              fCooldown;                                                // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgInventoryManager.ItemStatsDetail
// 0x000C
struct FItemStatsDetail
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	unsigned long                                      bSell : 1;                                                // 0x0004(0x0004)
	float                                              fMissionTime;                                             // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryManager.AutoPurchaseItem
// 0x0008
struct FAutoPurchaseItem
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	int                                                nQuantity;                                                // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgInventoryManager.sInventoryStackItem
// 0x0009
struct FsInventoryStackItem
{
	class UTgInventoryObject_Device*                   Device;                                                   // 0x0000(0x0008)
	TEnumAsByte<ETG_EQUIP_POINT>                       OldEquipPoint;                                            // 0x0008(0x0001)
};

// ScriptStruct TgGame.TgInventoryManager.InventoryData
// 0x001C
struct FInventoryData
{
	int                                                nInvId;                                                   // 0x0000(0x0004) (AlwaysInit)
	int                                                nItemId;                                                  // 0x0004(0x0004) (AlwaysInit)
	int                                                nInstanceCount;                                           // 0x0008(0x0004) (AlwaysInit)
	unsigned long                                      bBoundFlag : 1;                                           // 0x000C(0x0004) (AlwaysInit)
	float                                              fAcquiredDatetime;                                        // 0x0010(0x0004) (AlwaysInit)
	int                                                nEquipSlotValueId;                                        // 0x0014(0x0004) (AlwaysInit)
	int                                                nRequiredLevel;                                           // 0x0018(0x0004) (AlwaysInit)
};

// ScriptStruct TgGame.TgInventoryObject.DeviceInstanceTracker
// 0x000C
struct FDeviceInstanceTracker
{
	class ATgDevice*                                   m_dev;                                                    // 0x0000(0x0008) (Const)
	int                                                m_nFiringInstance;                                        // 0x0008(0x0004) (Const)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Arondight.RevealedPawn
// 0x000C
struct FRevealedPawn
{
	class ATgPawn*                                     TargetPawn;                                               // 0x0000(0x0008)
	unsigned long                                      bHasBeenHit : 1;                                          // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_StaffOfMyrddin.AffectedDevice
// 0x000C
struct FAffectedDevice
{
	class ATgDevice*                                   m_Device;                                                 // 0x0000(0x0008)
	int                                                m_nFiringInstance;                                        // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_DeviceTracked.DTFireInstanceData
// 0x0014
struct FDTFireInstanceData
{
	int                                                DeviceID;                                                 // 0x0000(0x0004)
	TArray<int>                                        FiringInstances;                                          // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_DynastyPlateHelm.BUFFED_AUTO_INFO
// 0x0008
struct FBUFFED_AUTO_INFO
{
	int                                                nDevId;                                                   // 0x0000(0x0004)
	int                                                nFiringInstance;                                          // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Ancile_S3_6.CooldownModifierInfo
// 0x0010
struct FCooldownModifierInfo
{
	class ATgDevice*                                   ModifiedDevice;                                           // 0x0000(0x0008)
	float                                              ModifiedCooldown;                                         // 0x0008(0x0004)
	unsigned long                                      bDidModify : 1;                                           // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Effect_Shockwave_OnHitHigherLevel.TGHHL_HITINFO
// 0x0008
struct FTGHHL_HITINFO
{
	int                                                nDeviceId;                                                // 0x0000(0x0004)
	int                                                nLastTrackedFiringInstance;                               // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_PotionOfMagMight.DeviceToReduce
// 0x000C
struct FDeviceToReduce
{
	int                                                m_nDeviceId;                                              // 0x0000(0x0004)
	int                                                m_nFiringInst;                                            // 0x0004(0x0004)
	unsigned long                                      m_bCooldownReduced : 1;                                   // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_HitByOffhand.CastTrackingHitInfo
// 0x0008
struct FCastTrackingHitInfo
{
	int                                                nDeviceId;                                                // 0x0000(0x0004)
	int                                                nFiringInstance;                                          // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_InHand_OncePerCast.DEV_INST_INFO
// 0x0014
struct FDEV_INST_INFO
{
	int                                                nDev;                                                     // 0x0000(0x0004)
	TArray<int>                                        TrackedInstances;                                         // 0x0004(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_OffHand.CastTrackingInfo
// 0x000C
struct FCastTrackingInfo
{
	int                                                nTargetId;                                                // 0x0000(0x0004)
	int                                                nDeviceId;                                                // 0x0004(0x0004)
	int                                                nFiringInstance;                                          // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_OffHand_IncrementalDamage.IncrementalDamageTracker
// 0x000C (0x0018 - 0x000C)
struct FIncrementalDamageTracker : public FDeviceInstanceTracker
{
	class AActor*                                      m_hitActor;                                               // 0x000C(0x0008) (Const)
	int                                                m_nHitCount;                                              // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_ConduitGem.StacksTrackingInfo
// 0x000C
struct FStacksTrackingInfo
{
	int                                                nStacks;                                                  // 0x0000(0x0004)
	int                                                nDeviceId;                                                // 0x0004(0x0004)
	int                                                nFiringInstance;                                          // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_HeartSeeker_S6.HeartSeekerHitTracker
// 0x000C
struct FHeartSeekerHitTracker
{
	class AActor*                                      m_trackedTarget;                                          // 0x0000(0x0008) (Const)
	float                                              m_fTimeSinceLastHit;                                      // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_SoulReaverS6.SRPrevHitInfo
// 0x0010
struct FSRPrevHitInfo
{
	class ATgPawn*                                     PrevHitTarget;                                            // 0x0000(0x0008)
	float                                              fPrevHitTime;                                             // 0x0008(0x0004)
	int                                                nTargetHitCount;                                          // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_RewardBoots.RewardHitInfo
// 0x0018
struct FRewardHitInfo
{
	class ATgPawn_Character*                           m_GodPawn;                                                // 0x0000(0x0008)
	class UObject*                                     m_DeviceModeReference;                                    // 0x0008(0x0008)
	int                                                m_nFiringInstance;                                        // 0x0010(0x0004)
	float                                              m_fLastHitTime;                                           // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_DamageOrHeal.DOHFireInstanceCount
// 0x0008
struct FDOHFireInstanceCount
{
	int                                                nFiringInstance;                                          // 0x0000(0x0004)
	int                                                nAbilityCount;                                            // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_DamageOrHeal.DOHFireInstanceData
// 0x0014
struct FDOHFireInstanceData
{
	int                                                DeviceID;                                                 // 0x0000(0x0004)
	TArray<struct FDOHFireInstanceCount>               FireInstanceCounts;                                       // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_KillStackRandom.StackTypeProps
// 0x0010
struct FStackTypeProps
{
	int                                                m_nEffectGroupId;                                         // 0x0000(0x0004) (Const)
	int                                                m_nStackTypeSitType;                                      // 0x0004(0x0004) (Const)
	int                                                m_nStackTypeMax;                                          // 0x0008(0x0004) (Const)
	int                                                m_nStackTypeCurrent;                                      // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_SoulStone_S3.SoulStoneTrackingData
// 0x000C
struct FSoulStoneTrackingData
{
	int                                                DeviceID;                                                 // 0x0000(0x0004)
	int                                                FiringInstance;                                           // 0x0004(0x0004)
	unsigned long                                      ConsumedStacks : 1;                                       // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Heartseeker_S4.FireInstanceData
// 0x0008
struct FFireInstanceData
{
	int                                                DeviceID;                                                 // 0x0000(0x0004)
	int                                                FiringInstance;                                           // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Stack_BonusDamageAtMax_DeviceTracked.BDAMFireInstanceData
// 0x0014
struct FBDAMFireInstanceData
{
	int                                                DeviceID;                                                 // 0x0000(0x0004)
	TArray<int>                                        FiringInstances;                                          // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_UndoRelic.HistoryElement
// 0x0008
struct FHistoryElement
{
	int                                                m_delta;                                                  // 0x0000(0x0004)
	float                                              m_timestamp;                                              // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgObject.MeshAssets
// 0x0040
struct FMeshAssets
{
	struct FString                                     m_sSkeletalMesh;                                          // 0x0000(0x0010) (Edit, NeedCtorLink)
	struct FString                                     m_sPhysicsAsset;                                          // 0x0010(0x0010) (Edit, NeedCtorLink)
	struct FString                                     m_sAnimTreeTemplate;                                      // 0x0020(0x0010) (Edit, NeedCtorLink)
	struct FString                                     m_sAnimSets;                                              // 0x0030(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgMeshPool.MeshPool
// 0x0010
struct FMeshPool
{
	TArray<class ATgSkeletalMeshActorSpawnable*>       m_meshes;                                                 // 0x0000(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgPawn.SpawnedAnimNotifyMeshEntry
// 0x0010
struct FSpawnedAnimNotifyMeshEntry
{
	class ATgSkeletalMeshActorSpawnable*               SpawnedMesh;                                              // 0x0000(0x0008)
	class UAnimNotify*                                 AnimNotifyData;                                           // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgPawn.AnimNotifyAudioEntry
// 0x0010
struct FAnimNotifyAudioEntry
{
	class USoundCue*                                   PlayedCue;                                                // 0x0000(0x0008)
	float                                              fLastTime;                                                // 0x0008(0x0004)
	int                                                nGroupNum;                                                // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgObject.OnHealedParams
// 0x009C
struct FOnHealedParams
{
	class ATgPawn*                                     Healer;                                                   // 0x0000(0x0008)
	class ATgDevice*                                   Dev;                                                      // 0x0008(0x0008)
	class UTgEffectGroup*                              eg;                                                       // 0x0010(0x0008)
	struct FImpactInfo                                 Impact;                                                   // 0x0018(0x0078) (Component)
	float                                              fHealAmount;                                              // 0x0090(0x0004)
	float                                              fHealthChange;                                            // 0x0094(0x0004)
	int                                                nPropertyId;                                              // 0x0098(0x0004)
};

// ScriptStruct TgGame.TgObject.OnDodgedParams
// 0x0020
struct FOnDodgedParams
{
	class ATgPawn*                                     attacker;                                                 // 0x0000(0x0008)
	class ATgDevice*                                   Dev;                                                      // 0x0008(0x0008)
	class UTgDeviceFire*                               DeviceMode;                                               // 0x0010(0x0008)
	class AActor*                                      DodgingActor;                                             // 0x0018(0x0008)
};

// ScriptStruct TgGame.TgObject.OnAbsorbHitParams
// 0x0028
struct FOnAbsorbHitParams
{
	class ATgPawn*                                     attacker;                                                 // 0x0000(0x0008)
	class ATgDevice*                                   Dev;                                                      // 0x0008(0x0008)
	class UTgDeviceFire*                               DeviceMode;                                               // 0x0010(0x0008)
	class UTgEffectGroup*                              AbsorbedEG;                                               // 0x0018(0x0008)
	class AActor*                                      AbsorbingActor;                                           // 0x0020(0x0008)
};

// ScriptStruct TgGame.TgPawn.GravityModifierInfo
// 0x0008
struct FGravityModifierInfo
{
	unsigned long                                      bEnable : 1;                                              // 0x0000(0x0004)
	float                                              fMultipler;                                               // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPawn.DeathStampFlashInfo
// 0x0005
struct FDeathStampFlashInfo
{
	int                                                nPawnId;                                                  // 0x0000(0x0004)
	unsigned char                                      nTicker;                                                  // 0x0004(0x0001)
};

// ScriptStruct TgGame.TgPawn.GlobalEmoteInfo
// 0x0006
struct FGlobalEmoteInfo
{
	int                                                nSkinId;                                                  // 0x0000(0x0004)
	unsigned char                                      nTicker;                                                  // 0x0004(0x0001)
	unsigned char                                      nFilters;                                                 // 0x0005(0x0001)
};

// ScriptStruct TgGame.TgPawn.DeployWallPushingInfo
// 0x0014
struct FDeployWallPushingInfo
{
	class ATgDeploy_Wall*                              OverlappingWall;                                          // 0x0000(0x0008)
	struct FVector                                     PushingVector;                                            // 0x0008(0x000C)
};

// ScriptStruct TgGame.TgPawn.PostureStack
// 0x0024
struct FPostureStack
{
	TArray<int>                                        GUIDs;                                                    // 0x0000(0x0010) (NeedCtorLink)
	TArray<TEnumAsByte<ETG_POSTURE>>                   Postures;                                                 // 0x0010(0x0010) (NeedCtorLink)
	int                                                NewPostureGUID;                                           // 0x0020(0x0004)
};

// ScriptStruct TgGame.TgPawn.PawnDamagerStruct
// 0x000C
struct FPawnDamagerStruct
{
	class ATgPawn*                                     DamagerPawn;                                              // 0x0000(0x0008)
	float                                              fTimestamp;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn.OverlayMICList
// 0x0010
struct FOverlayMICList
{
	TArray<class UMaterialInstanceConstant*>           MICs;                                                     // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgPawn.OverlayInfo
// 0x006D
struct FOverlayInfo
{
	class UTgSkeletalMeshComponent*                    OverlayMesh;                                              // 0x0000(0x0008) (ExportObject, Component, EditInline)
	class UTgSilhouetteComponent*                      Silhouette;                                               // 0x0008(0x0008) (ExportObject, Component, EditInline)
	class USkeletalMeshComponent*                      ParentMesh;                                               // 0x0010(0x0008) (ExportObject, Component, EditInline)
	unsigned long                                      bSetPhysAsset : 1;                                        // 0x0018(0x0004)
	struct FOverlayMICList                             OverlayMICInstances[0x5];                                 // 0x001C(0x0010) (NeedCtorLink)
	TEnumAsByte<EOverlayState>                         CurrentState;                                             // 0x006C(0x0001)
};

// ScriptStruct TgGame.TgPawn.SpawnedSkelMeshEntry
// 0x0020
struct FSpawnedSkelMeshEntry
{
	int                                                nMeshId;                                                  // 0x0000(0x0004)
	class ATgSkeletalMeshActorSpawnable*               SpawnedMesh;                                              // 0x0004(0x0008)
	class UTgSkeletalMeshComponent*                    SpawnedMeshComp;                                          // 0x000C(0x0008) (ExportObject, Component, EditInline)
	class UTgAnimNodeSlot*                             FullBodyNode;                                             // 0x0014(0x0008)
	int                                                nActiveCount;                                             // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgPawn.HealingInfo
// 0x0008
struct FHealingInfo
{
	float                                              HealAmount;                                               // 0x0000(0x0004)
	float                                              TimeStamp;                                                // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPawn.ManaHealToHealth
// 0x0008
struct FManaHealToHealth
{
	unsigned long                                      m_bApplyManaHealToHealth : 1;                             // 0x0000(0x0004)
	unsigned long                                      m_bUseHealthCalculations : 1;                             // 0x0000(0x0004)
	float                                              m_fPercManaHealToHealth;                                  // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPawn.FloorPortalTweenInfo
// 0x0014
struct FFloorPortalTweenInfo
{
	TEnumAsByte<EFloorPortalState>                     FloorPortalState;                                         // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     StartPosition;                                            // 0x0004(0x000C)
	float                                              StartVelocityZ;                                           // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgPawn.ExternalCameraOverrides
// 0x001C
struct FExternalCameraOverrides
{
	struct FVector                                     m_vAbsoluteOffset;                                        // 0x0000(0x000C)
	struct FVector                                     m_vScaledByZoomOffset;                                    // 0x000C(0x000C)
	float                                              m_fZoomOverride;                                          // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgPawn.MicOverridesMap
// 0x0010
struct FMicOverridesMap
{
	TArray<struct FMicList>                            m_micOverrides;                                           // 0x0000(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgPawn_Character.PERSISTENT_BUFF_STRUCT
// 0x0014
struct FPERSISTENT_BUFF_STRUCT
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	int                                                nPropId;                                                  // 0x0004(0x0004)
	float                                              fValue;                                                   // 0x0008(0x0004)
	struct FQWord                                      nExpireDateTime;                                          // 0x000C(0x0008)
};

// ScriptStruct TgGame.TgPawn_Character.DEATH_CAM_ZOOM
// 0x000C
struct FDEATH_CAM_ZOOM
{
	unsigned long                                      bUsesDeathZoomOverride : 1;                               // 0x0000(0x0004)
	float                                              fDeathZoom;                                               // 0x0004(0x0004)
	float                                              fDeathZoomTweenTime;                                      // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_MeshSwapper.CachedStanceObject
// 0x0038
struct FCachedStanceObject
{
	int                                                nBaseMeshId;                                              // 0x0000(0x0004)
	struct FPointer                                    StanceMeshAssembly;                                       // 0x0004(0x0008) (Native)
	struct FPointer                                    StanceDestroyedMeshAssembly;                              // 0x000C(0x0008) (Native)
	TArray<class ATgDevice*>                           StanceDevices;                                            // 0x0014(0x0010) (AlwaysInit, NeedCtorLink)
	struct FName                                       fnMeshSwapBodyAnim;                                       // 0x0024(0x0008)
	float                                              fBlendInTime;                                             // 0x002C(0x0004)
	float                                              fBlendOutTime;                                            // 0x0030(0x0004)
	unsigned long                                      bDoesFullBodyOnSwap : 1;                                  // 0x0034(0x0004)
};

// ScriptStruct TgGame.TgPawn_MeshSwapper.StanceInfo
// 0x0038
struct FStanceInfo
{
	int                                                nMeshId;                                                  // 0x0000(0x0004)
	TArray<int>                                        nDeviceIds;                                               // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        nDeviceEqPoints;                                          // 0x0014(0x0010) (AlwaysInit, NeedCtorLink)
	struct FName                                       fnMeshSwapBodyAnim;                                       // 0x0024(0x0008)
	float                                              fBlendInTime;                                             // 0x002C(0x0004)
	float                                              fBlendOutTime;                                            // 0x0030(0x0004)
	unsigned long                                      bDoesFullBodyOnSwap : 1;                                  // 0x0034(0x0004)
};

// ScriptStruct TgGame.TgPawn_Racer.RacerAnimInstanceData
// 0x0008
struct FRacerAnimInstanceData
{
	TEnumAsByte<ERacerActionAnimNames>                 Current;                                                  // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPawn_Racer.RacerSoundData
// 0x0010
struct FRacerSoundData
{
	class USoundCue*                                   Cue;                                                      // 0x0000(0x0008)
	float                                              LastTriggerTime;                                          // 0x0008(0x0004)
	unsigned long                                      ConditionMet : 1;                                         // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgPawn_Minion.FireMinionIds
// 0x0050
struct FFireMinionIds
{
	TArray<int>                                        m_nConquestFireMinions;                                   // 0x0000(0x0010) (Const, NeedCtorLink)
	TArray<int>                                        m_nJoustFireMinions;                                      // 0x0010(0x0010) (Const, NeedCtorLink)
	TArray<int>                                        m_nClashFireMinions;                                      // 0x0020(0x0010) (Const, NeedCtorLink)
	TArray<int>                                        m_nAssaultFireMinions;                                    // 0x0030(0x0010) (Const, NeedCtorLink)
	TArray<int>                                        m_nSiegeFireMinions;                                      // 0x0040(0x0010) (Const, NeedCtorLink)
};

// ScriptStruct TgGame.TgPawn_Juggernaut.MinionSpawnInfo
// 0x003C
struct FMinionSpawnInfo
{
	float                                              fSpawnDelay;                                              // 0x0000(0x0004)
	struct FName                                       DeathAnimName;                                            // 0x0004(0x0008)
	struct FVector                                     vSpawnLocations[0x2];                                     // 0x000C(0x000C)
	struct FRotator                                    rSpawnRotations[0x2];                                     // 0x0024(0x000C)
};

// ScriptStruct TgGame.TgPawn_Totem_JungleShrine_Conquest_S7.ChaliceInfo
// 0x001C
struct FChaliceInfo
{
	class UTgStaticMeshComponent*                      m_Mesh;                                                   // 0x0000(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     m_vLocation;                                              // 0x0008(0x000C)
	class UTgSpecialFx*                                m_auraFx;                                                 // 0x0014(0x0008)
};

// ScriptStruct TgGame.TgPawn_SplineCart.ServerSplineSync
// 0x0010
struct FServerSplineSync
{
	class ATgSplineActor*                              Spline;                                                   // 0x0000(0x0008)
	float                                              SplineDist;                                               // 0x0008(0x0004)
	unsigned long                                      bMoving : 1;                                              // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgPawn_Courier.CourierPhaseState
// 0x000C
struct FCourierPhaseState
{
	TEnumAsByte<ECourierPetPhase>                      Phase;                                                    // 0x0000(0x0001)
	TEnumAsByte<EPendingTransactionType>               TransactionType;                                          // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	class ATgPawn*                                     Customer;                                                 // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgPawn_Phoenix.NavMeshBorderEdges
// 0x0018
struct FNavMeshBorderEdges
{
	struct FVector                                     P1;                                                       // 0x0000(0x000C)
	struct FVector                                     P2;                                                       // 0x000C(0x000C)
};

// ScriptStruct TgGame.TgPawn_Djinni.ScalingProp
// 0x0008
struct FScalingProp
{
	int                                                Id;                                                       // 0x0000(0x0004)
	float                                              Value;                                                    // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPawn_Tower_Obelisk.TowerBeamInfo
// 0x0010
struct FTowerBeamInfo
{
	class ATgPawn*                                     TargetActor;                                              // 0x0000(0x0008)
	class UTgSpecialFx*                                TowerBeamFx;                                              // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgSpectatorController.SpectatorBookmark
// 0x0030
struct FSpectatorBookmark
{
	class AActor*                                      ViewTarget;                                               // 0x0000(0x0008) (Transient)
	TEnumAsByte<ESpectatorCameraMode>                  ViewMode;                                                 // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FTPOV                                       POV;                                                      // 0x000C(0x0024)
};

// ScriptStruct TgGame.TgSpectatorController.BroadcastChannel
// 0x0008
struct FBroadcastChannel
{
	TEnumAsByte<ESpectatorMode>                        Channel;                                                  // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PlayerID;                                                 // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDemoRecSpectator.SpectatorCommand
// 0x000C
struct FSpectatorCommand
{
	int                                                nFrame;                                                   // 0x0000(0x0004)
	unsigned long                                      bUseIndex : 1;                                            // 0x0004(0x0004)
	float                                              fSpeed;                                                   // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDemoRecSpectator.DilationData
// 0x0014
struct FDilationData
{
	float                                              fValue;                                                   // 0x0000(0x0004)
	struct FString                                     sName;                                                    // 0x0004(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgPlayerInput_Racer.RacerKeyBind
// 0x0018
struct FRacerKeyBind
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	struct FString                                     Command;                                                  // 0x0008(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgSkeletalMeshActor_Pedestal.RacerPedestalFlags
// 0x0014
struct FRacerPedestalFlags
{
	int                                                nRacerPedestalId;                                         // 0x0000(0x0004) (Const)
	int                                                nAchievement1Id;                                          // 0x0004(0x0004) (Const)
	int                                                nAchievement2Id;                                          // 0x0008(0x0004) (Const)
	int                                                nAchievement3Id;                                          // 0x000C(0x0004) (Const)
	unsigned long                                      bHasAchievement1 : 1;                                     // 0x0010(0x0004)
	unsigned long                                      bHasAchievement2 : 1;                                     // 0x0010(0x0004)
	unsigned long                                      bHasAchievement3 : 1;                                     // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgAIController_Behavior.DeferredNode
// 0x0028
struct FDeferredNode
{
	float                                              WorldTime;                                                // 0x0000(0x0004)
	struct FPointer                                    CurrentNode;                                              // 0x0004(0x0008) (Native)
	struct FPointer                                    CachedStatus;                                             // 0x000C(0x0008) (Native)
	struct FPointer                                    StorageMemory;                                            // 0x0014(0x0008) (Native)
	struct FPointer                                    WorkingMemory;                                            // 0x001C(0x0008) (Native)
	unsigned long                                      bExpensiveAction : 1;                                     // 0x0024(0x0004)
};

// ScriptStruct TgGame.TgAIBehaviorNode.BehaviorStateData
// 0x0009
struct FBehaviorStateData
{
	float                                              LastTickTime;                                             // 0x0000(0x0004)
	int                                                NodeToken;                                                // 0x0004(0x0004)
	TEnumAsByte<EBehaviorStatus>                       Status;                                                   // 0x0008(0x0001)
};

// ScriptStruct TgGame.TgAIController_Behavior.NavigationQueueEntry
// 0x0040
struct FNavigationQueueEntry
{
	class ATgPawn*                                     TargetPawn;                                               // 0x0000(0x0008)
	class AActor*                                      TargetActor;                                              // 0x0008(0x0008)
	struct FVector                                     TargetLocation;                                           // 0x0010(0x000C)
	unsigned long                                      bNewEntry : 1;                                            // 0x001C(0x0004)
	unsigned long                                      bCachedReachability : 1;                                  // 0x001C(0x0004)
	struct FVector                                     CachedReachabilityLocation;                               // 0x0020(0x000C)
	float                                              CachedReachabilityTime;                                   // 0x002C(0x0004)
	unsigned long                                      bLookAtTarget : 1;                                        // 0x0030(0x0004)
	unsigned long                                      bMustHaveLOS : 1;                                         // 0x0030(0x0004)
	unsigned long                                      bStopNavOnReachedDestination : 1;                         // 0x0030(0x0004)
	float                                              DistanceTolerance;                                        // 0x0034(0x0004)
	int                                                NodeToken;                                                // 0x0038(0x0004)
	int                                                TeleportIndex;                                            // 0x003C(0x0004)
};

// ScriptStruct TgGame.TgAIController_Behavior.FollowLaneState
// 0x0008
struct FFollowLaneState
{
	int                                                LastLaneIndex;                                            // 0x0000(0x0004)
	unsigned long                                      bFinalApproach : 1;                                       // 0x0004(0x0004)
	unsigned long                                      bLockedToMarker : 1;                                      // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgAIController_Behavior.IncomingDamageEntry
// 0x0030
struct FIncomingDamageEntry
{
	class ATgPawn*                                     attacker;                                                 // 0x0000(0x0008)
	TEnumAsByte<ETG_EQUIP_POINT>                       DeviceSlot;                                               // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     SourceInitialLocation;                                    // 0x000C(0x000C)
	struct FRotator                                    SourceInitialAim;                                         // 0x0018(0x000C)
	float                                              ExpireTime;                                               // 0x0024(0x0004)
	float                                              RemovalTime;                                              // 0x0028(0x0004)
	float                                              Weight;                                                   // 0x002C(0x0004)
};

// ScriptStruct TgGame.TgAIController_BehaviorMapNpc.ThreatEntry
// 0x000C
struct FThreatEntry
{
	class ATgPawn*                                     attacker;                                                 // 0x0000(0x0008)
	float                                              ThreatLevel;                                              // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgAILocalPositionSolver.DefaultRepulsorData
// 0x000D
struct FDefaultRepulsorData
{
	unsigned char                                      TargetType;                                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MaxEnemyWeight;                                           // 0x0004(0x0004)
	float                                              MaxFriendlyWeight;                                        // 0x0008(0x0004)
	TEnumAsByte<ERepulsorWeightMethod>                 SolverType;                                               // 0x000C(0x0001)
};

// ScriptStruct TgGame.TgAIObstacleAvoidance.ObstacleQueryCache
// 0x0029
struct FObstacleQueryCache
{
	struct FVector                                     RealGoalPos;                                              // 0x0000(0x000C)
	struct FVector                                     ModifiedGoalPos;                                          // 0x000C(0x000C)
	TArray<struct FVector>                             IntermediatePoints;                                       // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	TEnumAsByte<EObstacleAvoidanceStatus>              PathStatus;                                               // 0x0028(0x0001)
};

// ScriptStruct TgGame.TgAISquad.SquadPendingRemove
// 0x000C
struct FSquadPendingRemove
{
	class ATgAIController*                             m_aicPendingRemoveMember;                                 // 0x0000(0x0008)
	unsigned long                                      m_bDied : 1;                                              // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgCameraModule_SpectatorOverview.CameraPitchInfo
// 0x0008
struct FCameraPitchInfo
{
	float                                              ZHeight;                                                  // 0x0000(0x0004)
	float                                              Pitch;                                                    // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgCameraModule_Action.CameraShakeState
// 0x003C
struct FCameraShakeState
{
	float                                              fTimeTillStart;                                           // 0x0000(0x0004)
	struct FVector                                     Epicenter;                                                // 0x0004(0x000C)
	float                                              fDuration;                                                // 0x0010(0x0004)
	float                                              fShakeScale;                                              // 0x0014(0x0004)
	struct FROscillator                                RotOscillation;                                           // 0x0018(0x0024)
};

// ScriptStruct TgGame.TgCameraModule_Action.CameraTranslationState
// 0x0020
struct FCameraTranslationState
{
	struct FVector                                     AbsoluteTranslationVector;                                // 0x0000(0x000C)
	struct FVector                                     RelativeTranslationVector;                                // 0x000C(0x000C)
	float                                              fDuration;                                                // 0x0018(0x0004)
	unsigned long                                      bLockAbsoluteTranslationAfter : 1;                        // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgCameraModule_Action.CameraZoomState
// 0x000C
struct FCameraZoomState
{
	float                                              fZoomTarget;                                              // 0x0000(0x0004)
	float                                              fDuration;                                                // 0x0004(0x0004)
	unsigned long                                      bLockZoomAfter : 1;                                       // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgLobbyCamera_DynamicFocus.LobbyFocusData
// 0x0020
struct FLobbyFocusData
{
	struct FVector                                     vDestination;                                             // 0x0000(0x000C) (Edit)
	struct FRotator                                    rRotation;                                                // 0x000C(0x000C) (Edit)
	class ATgSkeletalMeshActor_Lobby*                  ViewTarget;                                               // 0x0018(0x0008) (Edit)
};

// ScriptStruct TgGame.TgDeviceVolume.VolumeMapInfo
// 0x0014
struct FVolumeMapInfo
{
	TEnumAsByte<EVolumeMapVisibilityType>              mVisType;                                                 // 0x0000(0x0001) (Edit)
	TEnumAsByte<EVolumeMiniMapType>                    mMapType;                                                 // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     vVisLocation;                                             // 0x0004(0x000C) (Edit)
	float                                              fActiveDuration;                                          // 0x0010(0x0004) (Edit)
};

// ScriptStruct TgGame.TgDeviceVolume_TimedStack.DVTSTouchedPawn
// 0x0014
struct FDVTSTouchedPawn
{
	unsigned long                                      bStillTouching : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bHasInverseEffect : 1;                                    // 0x0000(0x0004)
	class ATgPawn*                                     TouchedPawn;                                              // 0x0004(0x0008)
	float                                              fCurrentTimer;                                            // 0x000C(0x0004)
	int                                                nNumStacks;                                               // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgVolume_TimedKill.TimedKillTrackedPawn
// 0x0010
struct FTimedKillTrackedPawn
{
	class ATgPawn*                                     trackedPawn;                                              // 0x0000(0x0008)
	float                                              TrackedPawnTime;                                          // 0x0008(0x0004)
	unsigned long                                      bWaitingForKill : 1;                                      // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgArenaManager.ArenaTFMap
// 0x0008
struct FArenaTFMap
{
	int                                                nTfNum;                                                   // 0x0000(0x0004)
	int                                                nArenaTeamNum;                                            // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgArenaManager.ArenaTeamSpawns
// 0x0014
struct FArenaTeamSpawns
{
	int                                                nTeamNum;                                                 // 0x0000(0x0004) (Edit)
	TArray<class ATgTeamPlayerStart*>                  SpawnPoints;                                              // 0x0004(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgArenaManager.ArenaFactoryInfo
// 0x0028
struct FArenaFactoryInfo
{
	class ATgBotFactory*                               Factory;                                                  // 0x0000(0x0008) (Edit)
	unsigned long                                      bUsesTeamTF : 1;                                          // 0x0008(0x0004) (Edit)
	int                                                nTeamOverride;                                            // 0x000C(0x0004) (Edit)
	unsigned long                                      bSetsTF : 1;                                              // 0x0010(0x0004) (Edit)
	int                                                nFactoryTF;                                               // 0x0014(0x0004) (Edit)
	TArray<int>                                        FactoryModItems;                                          // 0x0018(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgArenaManager.ArenaFactories
// 0x0014
struct FArenaFactories
{
	int                                                nEncounterType;                                           // 0x0000(0x0004) (Edit)
	TArray<struct FArenaFactoryInfo>                   Factories;                                                // 0x0004(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgArenaManager.PlayerEffects
// 0x0024
struct FPlayerEffects
{
	unsigned long                                      bAllTeams : 1;                                            // 0x0000(0x0004) (Edit)
	TArray<int>                                        AppliedTeams;                                             // 0x0004(0x0010) (Edit, NeedCtorLink)
	TArray<int>                                        PlayerModItems;                                           // 0x0014(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgArenaManager.ArenaEffects
// 0x0014
struct FArenaEffects
{
	int                                                nEncounterId;                                             // 0x0000(0x0004) (Edit)
	TArray<struct FPlayerEffects>                      EncounterEffects;                                         // 0x0004(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgArenaManager.SpectatorTargets
// 0x0010
struct FSpectatorTargets
{
	TArray<class ATgBotFactory*>                       TowerFactories;                                           // 0x0000(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgBehaviorTracker.BehaviorCategoryMap
// 0x0010
struct FBehaviorCategoryMap
{
	TArray<TEnumAsByte<ETrackedBehaviorType>>          eTrackedBehaviors;                                        // 0x0000(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgCapturePoint_2019.CapturePointTouchingData
// 0x0008
struct FCapturePointTouchingData
{
	int                                                TaskforceNum;                                             // 0x0000(0x0004)
	int                                                TouchingCount;                                            // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgGame.TgAIBotPlayersToSpawn
// 0x0020
struct FTgAIBotPlayersToSpawn
{
	struct FString                                     fsName;                                                   // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nBotId;                                                   // 0x0010(0x0004)
	int                                                nTaskForceId;                                             // 0x0014(0x0004)
	int                                                nSpawnTableDetailId;                                      // 0x0018(0x0004)
	unsigned long                                      bFakeName : 1;                                            // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgGame.TgPlayerWardSkins
// 0x0014
struct FTgPlayerWardSkins
{
	int                                                nPlayerId;                                                // 0x0000(0x0004)
	TArray<int>                                        wardSkinIds;                                              // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgGame.TgPlayerGlobalEmoteSkins
// 0x0014
struct FTgPlayerGlobalEmoteSkins
{
	int                                                nPlayerId;                                                // 0x0000(0x0004)
	TArray<int>                                        globalEmoteSkinIds;                                       // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgGame_Mission.SurrenderVote
// 0x0008
struct FSurrenderVote
{
	int                                                nPlayerId;                                                // 0x0000(0x0004)
	unsigned long                                      bSurrender : 1;                                           // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgGame_Mission.SurrenderData
// 0x0024
struct FSurrenderData
{
	float                                              fLastSurrenderTime;                                       // 0x0000(0x0004)
	TArray<struct FSurrenderVote>                      SurrenderVotes;                                           // 0x0004(0x0010) (NeedCtorLink)
	int                                                nSurrenderTotal;                                          // 0x0014(0x0004)
	int                                                nSurrenderNeeded;                                         // 0x0018(0x0004)
	int                                                nSurrenderVoteCount;                                      // 0x001C(0x0004)
	int                                                nNoSurrenderVoteCount;                                    // 0x0020(0x0004)
};

// ScriptStruct TgGame.TgGame_Mission.SurrenderTimings
// 0x0018
struct FSurrenderTimings
{
	float                                              fSurrenderTime;                                           // 0x0000(0x0004)
	float                                              fUnbalancedSurrenderTime;                                 // 0x0004(0x0004)
	float                                              fUnbalancedCheckTime;                                     // 0x0008(0x0004)
	unsigned long                                      bUnbalanceAbsent : 1;                                     // 0x000C(0x0004)
	float                                              fDuelSurrenderTime;                                       // 0x0010(0x0004)
	float                                              fEarlySurrenderDisconnectTime;                            // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgGame_Mission.PauseVoteData
// 0x0024
struct FPauseVoteData
{
	float                                              fLastPauseTime;                                           // 0x0000(0x0004)
	TArray<int>                                        PauseVotes;                                               // 0x0004(0x0010) (NeedCtorLink)
	int                                                nPauseTotal;                                              // 0x0014(0x0004)
	int                                                nPauseNeeded;                                             // 0x0018(0x0004)
	int                                                nPausesRemaining;                                         // 0x001C(0x0004)
	unsigned long                                      bPausePending : 1;                                        // 0x0020(0x0004)
	unsigned long                                      bDisconnectPauseLimitOverride : 1;                        // 0x0020(0x0004)
};

// ScriptStruct TgGame.TgObject.GAMEMODE_PLAYER_MOD_INFO
// 0x0018
struct FGAMEMODE_PLAYER_MOD_INFO
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	int                                                nStacks;                                                  // 0x0004(0x0004)
	TArray<class UTgEffectGroup*>                      EffectGroups;                                             // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgObject.GAMEMODE_PLAYER_MODS
// 0x0014
struct FGAMEMODE_PLAYER_MODS
{
	int                                                nPlayerId;                                                // 0x0000(0x0004)
	TArray<struct FGAMEMODE_PLAYER_MOD_INFO>           Mods;                                                     // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgGame_Adv_CartDefense.CH06_ROUND_STATS
// 0x0068
struct FCH06_ROUND_STATS
{
	unsigned long                                      bIsValidStatBlock : 1;                                    // 0x0000(0x0004)
	int                                                topMinionKillId;                                          // 0x0004(0x0004)
	int                                                topEliteKillId;                                           // 0x0008(0x0004)
	int                                                topDamageAbsorbId;                                        // 0x000C(0x0004)
	int                                                topDamageDealtId;                                         // 0x0010(0x0004)
	int                                                topHealingId;                                             // 0x0014(0x0004)
	int                                                topMinionKillValue;                                       // 0x0018(0x0004)
	int                                                topEliteKillValue;                                        // 0x001C(0x0004)
	int                                                topDamageAbsorbValue;                                     // 0x0020(0x0004)
	int                                                topDamageDealtValue;                                      // 0x0024(0x0004)
	int                                                topHealingValue;                                          // 0x0028(0x0004)
	float                                              fFoxPercentHP;                                            // 0x002C(0x0004)
	float                                              fPillarPercentHP;                                         // 0x0030(0x0004)
	float                                              fFoxHP;                                                   // 0x0034(0x0004)
	float                                              fPillarHP;                                                // 0x0038(0x0004)
	float                                              fFoxDMGTaken;                                             // 0x003C(0x0004)
	float                                              fPillarDMGTaken;                                          // 0x0040(0x0004)
	TArray<int>                                        PlayerList;                                               // 0x0044(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        DeathCounts;                                              // 0x0054(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              fRoundScore;                                              // 0x0064(0x0004)
};

// ScriptStruct TgGame.TgGame_Adv_CartDefense.CH06_PLAYER_STATS
// 0x0034
struct FCH06_PLAYER_STATS
{
	int                                                nPlayerId;                                                // 0x0000(0x0004)
	int                                                nMinionKills;                                             // 0x0004(0x0004)
	int                                                nEliteKills;                                              // 0x0008(0x0004)
	float                                              fDamageAbsorbed;                                          // 0x000C(0x0004)
	float                                              fDamageDealt;                                             // 0x0010(0x0004)
	float                                              fHealing;                                                 // 0x0014(0x0004)
	int                                                nMinionKillsPrev;                                         // 0x0018(0x0004)
	int                                                nEliteKillsPrev;                                          // 0x001C(0x0004)
	float                                              fDamageAbsorbedPrev;                                      // 0x0020(0x0004)
	float                                              fDamageDealtPrev;                                         // 0x0024(0x0004)
	float                                              fHealingPrev;                                             // 0x0028(0x0004)
	int                                                nDeathCount;                                              // 0x002C(0x0004)
	int                                                nDeathCountPrev;                                          // 0x0030(0x0004)
};

// ScriptStruct TgGame.TgGame_Battle_Adventure.ADV_MOD_INFO
// 0x0008
struct FADV_MOD_INFO
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	int                                                nCount;                                                   // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgGame_Battle_CTF.CTFStats
// 0x001C
struct FCTFStats
{
	int                                                nPlayerId;                                                // 0x0000(0x0004)
	int                                                nFlagsPickedUp;                                           // 0x0004(0x0004)
	float                                              fTimeCarried;                                             // 0x0008(0x0004)
	int                                                nFlagsCaptured;                                           // 0x000C(0x0004)
	int                                                nCarriersKilled;                                          // 0x0010(0x0004)
	int                                                nFlagsReturned;                                           // 0x0014(0x0004)
	int                                                nMeleeKills;                                              // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgGame_Battle_Round.BattleRoundConfig
// 0x0018
struct FBattleRoundConfig
{
	unsigned long                                      bRoundUpdatesPlayerState : 1;                             // 0x0000(0x0004) (Edit)
	int                                                nPlayerLevel;                                             // 0x0004(0x0004) (Edit)
	int                                                nStartingGold;                                            // 0x0008(0x0004) (Edit)
	unsigned long                                      bAllowPlayerProgress : 1;                                 // 0x000C(0x0004) (Edit)
	float                                              fRoundSetupTime;                                          // 0x0010(0x0004) (Edit)
	float                                              fRoundDuration;                                           // 0x0014(0x0004) (Edit)
};

// ScriptStruct TgGame.TgGame_CH08.CH08_MOD_STACKER
// 0x0018
struct FCH08_MOD_STACKER
{
	int                                                nPlayerId;                                                // 0x0000(0x0004)
	int                                                nItemId;                                                  // 0x0004(0x0004)
	int                                                nAppliedStacks;                                           // 0x0008(0x0004)
	int                                                nMaxStacks;                                               // 0x000C(0x0004)
	float                                              fTimeToNextStack;                                         // 0x0010(0x0004)
	float                                              fStackTime;                                               // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgGame_MultiRounds.OpponentMatchups
// 0x0010
struct FOpponentMatchups
{
	unsigned char                                      m_MatchupCounts[0x10];                                    // 0x0000(0x0001)
};

// ScriptStruct TgGame.TgGameConfig_Adventure.QueueEffectMap
// 0x0008
struct FQueueEffectMap
{
	int                                                queueId;                                                  // 0x0000(0x0004) (Edit)
	int                                                EffectItemId;                                             // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgGameConfig_BotShop.BotShopUnit
// 0x0010
struct FBotShopUnit
{
	int                                                m_nBotId;                                                 // 0x0000(0x0004) (Edit, Const)
	int                                                m_nCost;                                                  // 0x0004(0x0004) (Edit, Const)
	int                                                m_nEffectGroupId;                                         // 0x0008(0x0004) (Edit, Const)
	float                                              m_fWeight;                                                // 0x000C(0x0004) (Edit, Const)
};

// ScriptStruct TgGame.TgGameConfig_BotShop.BotShopBag
// 0x0030
struct FBotShopBag
{
	TArray<struct FBotShopUnit>                        m_UnitList;                                               // 0x0000(0x0010) (Edit, Const, NeedCtorLink)
	TArray<struct FBotShopBag>                         m_BagList;                                                // 0x0010(0x0010) (Edit, Const, NeedCtorLink)
	float                                              m_fWeight;                                                // 0x0020(0x0004) (Edit, Const)
	float                                              m_fSellBackPct;                                           // 0x0024(0x0004) (Edit, Const)
	float                                              m_fUnitWeightSum;                                         // 0x0028(0x0004) (Const)
	float                                              m_fBagWeightSum;                                          // 0x002C(0x0004) (Const)
};

// ScriptStruct TgGame.TgGameConfig_CartDefense.CartRoundValues
// 0x0010
struct FCartRoundValues
{
	TArray<float>                                      s_fRoundVals;                                             // 0x0000(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct TgGame.TgGameConfig_MultiRounds.EMR_SHOPINFO
// 0x0018
struct FEMR_SHOPINFO
{
	struct FVector                                     vReadyLoc;                                                // 0x0000(0x000C) (Edit)
	struct FVector                                     vReadyBounds;                                             // 0x000C(0x000C) (Edit)
};

// ScriptStruct TgGame.TgInventory_RandomizedShop.CustomChanceItem
// 0x0008
struct FCustomChanceItem
{
	int                                                m_nItemId;                                                // 0x0000(0x0004)
	float                                              m_fCustomChance;                                          // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgObject.PEPRewardPawnData
// 0x0020
struct FPEPRewardPawnData
{
	class ATgPawn*                                     m_pRewardPawn;                                            // 0x0000(0x0008)
	struct FPEPRewardEntry                             m_eRewardData;                                            // 0x0008(0x0014) (Const)
	float                                              m_fCapturedTime;                                          // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgGameConfig_PEP.PEPUpgradeMap
// 0x0020
struct FPEPUpgradeMap
{
	struct FName                                       m_nmUpgradeMapName;                                       // 0x0000(0x0008) (Edit, Const)
	struct FName                                       m_nmTier1EntryName;                                       // 0x0008(0x0008) (Edit, Const)
	struct FName                                       m_nmTier2EntryName;                                       // 0x0010(0x0008) (Edit, Const)
	struct FName                                       m_nmTier3EntryName;                                       // 0x0018(0x0008) (Edit, Const)
};

// ScriptStruct TgGame.TgGameConfig_PEP.PEPTeamSpawnModifier
// 0x0008
struct FPEPTeamSpawnModifier
{
	int                                                m_nTFNum;                                                 // 0x0000(0x0004) (Edit, Const)
	int                                                m_nModID;                                                 // 0x0004(0x0004) (Edit, Const)
};

// ScriptStruct TgGame.TgGameTipManager.GameTipInfo
// 0x0024
struct FGameTipInfo
{
	int                                                nTipId;                                                   // 0x0000(0x0004)
	int                                                nPriority;                                                // 0x0004(0x0004)
	unsigned long                                      bSelfSuppress : 1;                                        // 0x0008(0x0004)
	float                                              fDuration;                                                // 0x000C(0x0004)
	float                                              fRemainingTime;                                           // 0x0010(0x0004)
	float                                              fTimeOnTop;                                               // 0x0014(0x0004)
	unsigned long                                      bRemoveOnTimer : 1;                                       // 0x0018(0x0004)
	unsigned long                                      bDismissed : 1;                                           // 0x0018(0x0004)
	unsigned long                                      bWaitForDismiss : 1;                                      // 0x0018(0x0004)
	unsigned long                                      bDisplayAlways : 1;                                       // 0x0018(0x0004)
	unsigned long                                      bPopupDisplay : 1;                                        // 0x0018(0x0004)
	class USoundCue*                                   PopupSoundCue;                                            // 0x001C(0x0008)
};

// ScriptStruct TgGame.TgGameTipManager.TipSavedState
// 0x0008
struct FTipSavedState
{
	int                                                nTipId;                                                   // 0x0000(0x0004)
	unsigned long                                      bEncountered : 1;                                         // 0x0004(0x0004)
	unsigned long                                      bCompleted : 1;                                           // 0x0004(0x0004)
	unsigned long                                      bSuppressed : 1;                                          // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgRacingCheckpoint.RaceSegmentData
// 0x0018
struct FRaceSegmentData
{
	struct FVector                                     P1;                                                       // 0x0000(0x000C)
	struct FVector                                     P2;                                                       // 0x000C(0x000C)
};

// ScriptStruct TgGame.TgObject.CH08_GOO_EVENT
// 0x001C
struct FCH08_GOO_EVENT
{
	struct FCH08_GOO_SPOT                              gooSpot;                                                  // 0x0000(0x0018)
	unsigned long                                      bSetActive : 1;                                           // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgObject.CH08_GOO_SPAWNER_EVENT
// 0x0014
struct FCH08_GOO_SPAWNER_EVENT
{
	struct FVector                                     vSpawnLocation;                                           // 0x0000(0x000C)
	int                                                nSpawnerId;                                               // 0x000C(0x0004)
	unsigned long                                      bSetActive : 1;                                           // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_CH08_GooSpawner.CH08_GOO_FX
// 0x0030
struct FCH08_GOO_FX
{
	struct FCH08_GOO_SPOT                              gooSpot;                                                  // 0x0000(0x0018)
	float                                              fElapsedTransition;                                       // 0x0018(0x0004)
	float                                              fTransitionTime;                                          // 0x001C(0x0004)
	class ATgSkeletalMeshActor*                        gooPreviewActor;                                          // 0x0020(0x0008)
	class UTgSpecialFx*                                gooPreviewFX;                                             // 0x0028(0x0008)
};

// ScriptStruct TgGame.TgRepInfo_CH08_GooSpawner.CH08_CLIENT_SPAWNER
// 0x0010
struct FCH08_CLIENT_SPAWNER
{
	struct FVector                                     vSpawnLocation;                                           // 0x0000(0x000C)
	int                                                nSpawnerId;                                               // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_Game.GraphData
// 0x000C
struct FGraphData
{
	int                                                XP;                                                       // 0x0000(0x0004)
	int                                                Gold;                                                     // 0x0004(0x0004)
	int                                                Time;                                                     // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_Game_MultiRounds.ArenaMatchup
// 0x0010
struct FArenaMatchup
{
	int                                                m_nTaskForces[0x4];                                       // 0x0000(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_Player.SocialEmoteInfo
// 0x000C
struct FSocialEmoteInfo
{
	TEnumAsByte<EEmote>                                Emote;                                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                nVgsId;                                                   // 0x0004(0x0004)
	unsigned long                                      bUseable : 1;                                             // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_Player.DeviceTeamInfo
// 0x0054
struct FDeviceTeamInfo
{
	int                                                CurrentDeviceId;                                          // 0x0000(0x0004)
	int                                                LastKnownDeviceId[0x6];                                   // 0x0004(0x0004)
	int                                                CurrentDeviceCount;                                       // 0x001C(0x0004)
	int                                                LastKnownDeviceCount[0x6];                                // 0x0020(0x0004)
	int                                                CurrentDeviceIconOverride;                                // 0x0038(0x0004)
	int                                                LastKnownDeviceIconOverride[0x6];                         // 0x003C(0x0004)
};

// ScriptStruct TgGame.TgObject.sPingInfo
// 0x001D
struct FsPingInfo
{
	class ATgRepInfo_Player*                           pingedPri;                                                // 0x0000(0x0008)
	float                                              fStartTime;                                               // 0x0008(0x0004)
	struct FVector                                     vPingedLoc;                                               // 0x000C(0x000C)
	unsigned long                                      bPinging : 1;                                             // 0x0018(0x0004)
	TEnumAsByte<EPING_TYPE>                            eType;                                                    // 0x001C(0x0001)
};

// ScriptStruct TgGame.TgRepInfo_Player.GodEnabledItem
// 0x0005
struct FGodEnabledItem
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	unsigned char                                      eTargeterType;                                            // 0x0004(0x0001)
};

// ScriptStruct TgGame.TgRepInfo_Player_BotShop.BotBuffPair
// 0x0008
struct FBotBuffPair
{
	int                                                m_nBotId;                                                 // 0x0000(0x0004) (Const)
	int                                                m_nEffectGroupId;                                         // 0x0004(0x0004) (Const)
};

// ScriptStruct TgGame.TgRepInfo_Player_Store.PlayerStoreItemList
// 0x00CC
struct FPlayerStoreItemList
{
	int                                                m_nItems[0x32];                                           // 0x0000(0x0004)
	int                                                m_nCount;                                                 // 0x00C8(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.TGTEAM_ENTRY
// 0x0034
struct FTGTEAM_ENTRY
{
	struct FString                                     fsName;                                                   // 0x0000(0x0010) (NeedCtorLink)
	struct FString                                     fsMapName;                                                // 0x0010(0x0010) (NeedCtorLink)
	int                                                nHealth;                                                  // 0x0020(0x0004)
	int                                                nMaxHealth;                                               // 0x0024(0x0004)
	unsigned long                                      bLeader : 1;                                              // 0x0028(0x0004)
	class ATgRepInfo_Player*                           pPrep;                                                    // 0x002C(0x0008)
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.TEAMTIMEMANAGER_ENTRY
// 0x000C
struct FTEAMTIMEMANAGER_ENTRY
{
	class UTgTimerManager*                             m_TimerManager;                                           // 0x0000(0x0008)
	int                                                m_nDeviceId;                                              // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.GLOBALEFFECT_ENTRY
// 0x0010
struct FGLOBALEFFECT_ENTRY
{
	class UTgEffectGroup*                              eg;                                                       // 0x0000(0x0008)
	class ATgPawn*                                     pawnInstigator;                                           // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgRepInfo_VolumeTimedKill.TimedKillInfo
// 0x0018
struct FTimedKillInfo
{
	struct FVector                                     vKillLoc;                                                 // 0x0000(0x000C)
	float                                              fKillTime;                                                // 0x000C(0x0004)
	int                                                nMeshId;                                                  // 0x0010(0x0004)
	int                                                nInstance;                                                // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgRoundSchedule.ArenaRoundConfig
// 0x0029
struct FArenaRoundConfig
{
	TArray<int>                                        nRoundTaskForces;                                         // 0x0000(0x0010) (Edit, NeedCtorLink)
	TArray<int>                                        nTeamRanks;                                               // 0x0010(0x0010) (Edit, NeedCtorLink)
	int                                                nEncounter;                                               // 0x0020(0x0004) (Edit)
	int                                                nArenaId;                                                 // 0x0024(0x0004) (Edit)
	TEnumAsByte<ETaskForceSelectionStrategy>           eTFSelectionStrategy;                                     // 0x0028(0x0001) (Edit)
};

// ScriptStruct TgGame.TgRoundSchedule.ArenaRoundInfo
// 0x002C
struct FArenaRoundInfo
{
	TArray<struct FArenaRoundConfig>                   m_Matches;                                                // 0x0000(0x0010) (Edit, NeedCtorLink)
	int                                                nStoreTime;                                               // 0x0010(0x0004) (Edit)
	int                                                nSetupTime;                                               // 0x0014(0x0004) (Edit)
	int                                                nRoundTime;                                               // 0x0018(0x0004) (Edit)
	int                                                nPostRoundTime;                                           // 0x001C(0x0004) (Edit)
	int                                                nGoldGift;                                                // 0x0020(0x0004) (Edit)
	int                                                nPlayerLevel;                                             // 0x0024(0x0004) (Edit)
	int                                                nPlayerXP;                                                // 0x0028(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAchievement_AbilityMultiHit.DeviceEffectPair
// 0x0020
struct FDeviceEffectPair
{
	TArray<int>                                        DeviceIds;                                                // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<int>                                        EffectIds;                                                // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgAchievement_AbilityMultiHit.DeviceHitInfo
// 0x001C
struct FDeviceHitInfo
{
	class UObject*                                     DeviceReference;                                          // 0x0000(0x0008)
	unsigned char                                      nFiringInstance;                                          // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TArray<class ATgPawn*>                             PawnsHit;                                                 // 0x000C(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgAchievement_DeviceHits_SingleShotPerTarget.ShotHitCountInfo
// 0x000C
struct FShotHitCountInfo
{
	class ATgPawn*                                     HitPawn;                                                  // 0x0000(0x0008)
	int                                                HitCount;                                                 // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgAchievement_DeviceHits_SingleShotPerTarget.ShotHitInfo
// 0x0014
struct FShotHitInfo
{
	int                                                FiringInstance;                                           // 0x0000(0x0004)
	TArray<struct FShotHitCountInfo>                   Hits;                                                     // 0x0004(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgAchievement_DeviceKillsSingleShot.TrackedKilledTargets
// 0x0014
struct FTrackedKilledTargets
{
	int                                                FiringInstance;                                           // 0x0000(0x0004)
	TArray<class ATgPawn*>                             Targets;                                                  // 0x0004(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgAchievement_DeviceMultiHit_ByType.TrackedTargets
// 0x0014
struct FTrackedTargets
{
	int                                                FiringInstance;                                           // 0x0000(0x0004)
	TArray<class ATgPawn*>                             Targets;                                                  // 0x0004(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgAchievement_HelpingHand.AssistComboData
// 0x000C
struct FAssistComboData
{
	class AActor*                                      m_ComboActor;                                             // 0x0000(0x0008)
	int                                                m_nPreviousKillCombo;                                     // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgAchievement_Kaboom.DeviceDamageInfo
// 0x001C
struct FDeviceDamageInfo
{
	class ATgDevice*                                   DeviceReference;                                          // 0x0000(0x0008)
	unsigned char                                      nFiringInstance;                                          // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x000C(0x0008)
	float                                              fDamage;                                                  // 0x0014(0x0004)
	unsigned long                                      bRecorded : 1;                                            // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgAchievement_KillsSingleAbility.DeviceKillsInfo
// 0x000A
struct FDeviceKillsInfo
{
	class UObject*                                     DeviceReference;                                          // 0x0000(0x0008)
	unsigned char                                      nFiringInstance;                                          // 0x0008(0x0001)
	unsigned char                                      nKills;                                                   // 0x0009(0x0001)
};

// ScriptStruct TgGame.TgAimAssistKeyframe.AimAssistKeyframeData
// 0x000C
struct FAimAssistKeyframeData
{
	struct FName                                       KeyframeName;                                             // 0x0000(0x0008)
	float                                              Distance;                                                 // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgGameplayCurvesSet_AimAssistKeyframes.AimAssistKeyframeDebugVals
// 0x0104
struct FAimAssistKeyframeDebugVals
{
	int                                                DebugState;                                               // 0x0000(0x0004)
	struct FName                                       curveMin[0x8];                                            // 0x0004(0x0008)
	struct FName                                       curveMax[0x8];                                            // 0x0044(0x0008)
	float                                              valMin[0x8];                                              // 0x0084(0x0004)
	float                                              valMax[0x8];                                              // 0x00A4(0x0004)
	float                                              valInterp[0x8];                                           // 0x00C4(0x0004)
	float                                              valFinal[0x8];                                            // 0x00E4(0x0004)
};

// ScriptStruct TgGame.TgGameplayCurvesSet_TargetAimTracking.TargetAimTrackingDebugVals
// 0x003C
struct FTargetAimTrackingDebugVals
{
	int                                                DebugState;                                               // 0x0000(0x0004)
	struct FName                                       trackingCurveSetName;                                     // 0x0004(0x0008)
	float                                              strengthMultiplier[0x2];                                  // 0x000C(0x0004)
	float                                              strengthByAccuracy[0x2];                                  // 0x0014(0x0004)
	float                                              strengthByDesiredAngle[0x2];                              // 0x001C(0x0004)
	float                                              strengthFinal[0x2];                                       // 0x0024(0x0004)
	float                                              rawDesiredTurnAmt[0x2];                                   // 0x002C(0x0004)
	float                                              rawDesiredTurnAmtPerSec[0x2];                             // 0x0034(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_BastetPassive.BastetPSVTrackData
// 0x0020
struct FBastetPSVTrackData
{
	class AActor*                                      m_TrackedActor;                                           // 0x0000(0x0008)
	unsigned long                                      m_bIsBleeding : 1;                                        // 0x0008(0x0004)
	unsigned long                                      m_bSpawnFlag : 1;                                         // 0x0008(0x0004)
	TEnumAsByte<EBastetPSVTravelState>                 m_eTravelingState;                                        // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<class ATgCollisionProxy_Bastet_PSV*>        m_TrailProxies;                                           // 0x0010(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgPawn_BastetV2.BastetSphinxVisualData
// 0x0011
struct FBastetSphinxVisualData
{
	class UTgSkeletalMeshComponent*                    m_Mesh;                                                   // 0x0000(0x0008) (ExportObject, Component, EditInline)
	class UTgAnimNodeSlot*                             m_FullBodyNode;                                           // 0x0008(0x0008)
	TEnumAsByte<EBastetSphinxPosition>                 m_eSphinxPosition;                                        // 0x0010(0x0001)
};

// ScriptStruct TgGame.TgAchievement_Hel_StanceKills.HelStanceKillTrackingData
// 0x0010
struct FHelStanceKillTrackingData
{
	class ATgPawn*                                     Pawn;                                                     // 0x0000(0x0008)
	int                                                LightStanceKills;                                         // 0x0008(0x0004)
	int                                                DarkStanceKills;                                          // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgPawn_HelV3Skin.A01SpawnDarkDepFlashEvent
// 0x001C
struct FA01SpawnDarkDepFlashEvent
{
	struct FVector                                     m_vSpawnLoc;                                              // 0x0000(0x000C)
	struct FRotator                                    m_rSpawnRot;                                              // 0x000C(0x000C)
	int                                                m_nFlashTrigger;                                          // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgPawn_Kukulkan.SlipstreamMod
// 0x0008
struct FSlipstreamMod
{
	float                                              fSpeedMod;                                                // 0x0000(0x0004)
	float                                              fDuration;                                                // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDeploy_Odin_Spears_V2.OdinDeferredTarget
// 0x000C
struct FOdinDeferredTarget
{
	class ATgPawn*                                     m_Pawn;                                                   // 0x0000(0x0008)
	unsigned long                                      m_bHasTicked : 1;                                         // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDeploy_Odin_Spears_V2.OdinTouchedTarget
// 0x0018
struct FOdinTouchedTarget
{
	class ATgPawn*                                     m_Pawn;                                                   // 0x0000(0x0008)
	struct FVector                                     m_vLastValidOctogonLoc;                                   // 0x0008(0x000C)
	unsigned long                                      m_bIsTouching : 1;                                        // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgDeploy_Odin_Spears_V2.OdinRingNormal
// 0x0018
struct FOdinRingNormal
{
	struct FVector                                     m_vLocation;                                              // 0x0000(0x000C)
	struct FVector                                     m_vNormal;                                                // 0x000C(0x000C)
};

// ScriptStruct TgGame.TgDevice_Zeus_ForkedLightning.ArcingInfo
// 0x0030
struct FArcingInfo
{
	float                                              DamageMultiplier;                                         // 0x0000(0x0004)
	float                                              ArcTime;                                                  // 0x0004(0x0004)
	float                                              RemainingArcTime;                                         // 0x0008(0x0004)
	int                                                JumpsRemaining;                                           // 0x000C(0x0004)
	class AActor*                                      PreviousArcTarget;                                        // 0x0010(0x0008)
	TArray<class AActor*>                              PreviousTargets;                                          // 0x0018(0x0010) (NeedCtorLink)
	class UTgDeviceFire_Zeus_ForkedLightning*          ArcFiremode;                                              // 0x0028(0x0008)
};

// ScriptStruct TgGame.TgPawn_GuanYuV2.SavedChargeHitV2
// 0x000C
struct FSavedChargeHitV2
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	float                                              HitTime;                                                  // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_GuanYuV2.GuanYuV2UltTarget
// 0x000C
struct FGuanYuV2UltTarget
{
	class ATgPawn*                                     Target;                                                   // 0x0000(0x0008)
	int                                                HitCount;                                                 // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_AnvilOfDawn.ThorLightningTarget
// 0x000C
struct FThorLightningTarget
{
	class AActor*                                      m_Target;                                                 // 0x0000(0x0008)
	int                                                m_nLightningInstance;                                     // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Freya_A01.FreyaExplosionInfo
// 0x000C
struct FFreyaExplosionInfo
{
	class ATgPawn*                                     m_HitPawn;                                                // 0x0000(0x0008)
	int                                                m_nFiringInstance;                                        // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Freya_PSV.ABILITY_HIT_INFO
// 0x0008
struct FABILITY_HIT_INFO
{
	int                                                nDevId;                                                   // 0x0000(0x0004)
	int                                                nFiringInstance;                                          // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPawn_Freya.FreyaExplodingInhand
// 0x0008
struct FFreyaExplodingInhand
{
	int                                                nInhandExplodeDevId;                                      // 0x0000(0x0004)
	int                                                nInhandExplodeFiringInstance;                             // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgAnimNodeBlendList_Bacchus_Inebriation.InebriationLevelInfo
// 0x0004
struct FInebriationLevelInfo
{
	float                                              Percentage;                                               // 0x0000(0x0004) (Edit)
};

// ScriptStruct TgGame.TgDeployable_Hercules_HercSmash.HercSmashHitInfo
// 0x001C
struct FHercSmashHitInfo
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	struct FVector                                     HitLocation;                                              // 0x0008(0x000C)
	float                                              TimeStamp;                                                // 0x0014(0x0004)
	unsigned long                                      bInKnockupArea : 1;                                       // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgPawn.CannotTouchInfo
// 0x000C
struct FCannotTouchInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	float                                              TimeToReTouch;                                            // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgProj_Hercules_Boulder.BoulderHitInfo
// 0x000C
struct FBoulderHitInfo
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	int                                                numHits;                                                  // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_Neith_BrokenWeave.WeaveSpawnInfo
// 0x0010
struct FWeaveSpawnInfo
{
	class ATgDeployable_Neith_BrokenWeave*             Weave;                                                    // 0x0000(0x0008)
	class ATgPawn*                                     Source;                                                   // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgPawn_Aphrodite.SoulMateLinkInfo
// 0x003C
struct FSoulMateLinkInfo
{
	class AActor*                                      LinkActor;                                                // 0x0000(0x0008)
	class UTgSpecialFx*                                Fx;                                                       // 0x0008(0x0008)
	class UMaterialInstanceConstant*                   MIC;                                                      // 0x0010(0x0008)
	struct FVector                                     SourceLocation;                                           // 0x0018(0x000C)
	struct FVector                                     TargetLocation;                                           // 0x0024(0x000C)
	float                                              fDetachLength;                                            // 0x0030(0x0004)
	float                                              fOpacity;                                                 // 0x0034(0x0004)
	unsigned long                                      bBlink : 1;                                               // 0x0038(0x0004)
};

// ScriptStruct TgGame.TgAchievement_NeZha_TwosACrowd.BounceData
// 0x000C
struct FBounceData
{
	class ATgPawn*                                     HitPawn;                                                  // 0x0000(0x0008)
	float                                              HitCount;                                                 // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_NeZha.UniverseRingTossDamageTracker
// 0x000C
struct FUniverseRingTossDamageTracker
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	int                                                HitCount;                                                 // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_NeZha.WindFireWheelsQteStatus
// 0x0020
struct FWindFireWheelsQteStatus
{
	int                                                HitTiming;                                                // 0x0000(0x0004)
	float                                              FadeEndTime;                                              // 0x0004(0x0004)
	float                                              CurrentEnergy;                                            // 0x0008(0x0004)
	int                                                HitStatus;                                                // 0x000C(0x0004)
	struct FVector                                     ScreenLoc;                                                // 0x0010(0x000C)
	unsigned long                                      bShown : 1;                                               // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgPawn_Chronos.RewindInfo
// 0x0024
struct FRewindInfo
{
	float                                              fTimestamp;                                               // 0x0000(0x0004)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C)
	float                                              fHealth;                                                  // 0x001C(0x0004)
	float                                              fMana;                                                    // 0x0020(0x0004)
};

// ScriptStruct TgGame.TgPawn_ZhongKui.FierceGlareInfo
// 0x0028
struct FFierceGlareInfo
{
	class UTgSkeletalMeshComponent*                    Mesh;                                                     // 0x0000(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     vLocation;                                                // 0x0008(0x000C)
	unsigned long                                      bGoToBag : 1;                                             // 0x0014(0x0004)
	unsigned long                                      bIsMovable : 1;                                           // 0x0014(0x0004)
	float                                              fStartDistance;                                           // 0x0018(0x0004)
	float                                              fTimeActive;                                              // 0x001C(0x0004)
	float                                              fReturnTime;                                              // 0x0020(0x0004)
	float                                              fMoveWeight;                                              // 0x0024(0x0004)
};

// ScriptStruct TgGame.TgPawn_ZhongKui.FierceGlareHealInfo
// 0x0010
struct FFierceGlareHealInfo
{
	float                                              fHealTime;                                                // 0x0000(0x0004)
	class UTgDeviceFire*                               HealMode;                                                 // 0x0004(0x0008)
	unsigned long                                      bEnergyOnly : 1;                                          // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgSkelCon_ZhongKui_BagGrowth.BagGrowthDef
// 0x0030
struct FBagGrowthDef
{
	float                                              fMinScale;                                                // 0x0000(0x0004) (Edit)
	float                                              fMaxScale;                                                // 0x0004(0x0004) (Edit)
	float                                              fAbsoluteMinScale;                                        // 0x0008(0x0004) (Edit)
	float                                              fAbsoluteMaxScale;                                        // 0x000C(0x0004) (Edit)
	float                                              fEmptyBagScale;                                           // 0x0010(0x0004) (Edit)
	float                                              fGrowthPerDemon;                                          // 0x0014(0x0004) (Edit)
	float                                              fGrowthCoefficient;                                       // 0x0018(0x0004) (Edit)
	float                                              fDampeningCoefficient;                                    // 0x001C(0x0004) (Edit)
	float                                              fGrowthImpulse;                                           // 0x0020(0x0004) (Edit)
	float                                              fGrowthImpulseDecay;                                      // 0x0024(0x0004) (Edit)
	float                                              fShrinkImpulse;                                           // 0x0028(0x0004) (Edit)
	float                                              fShrinkImpulseDecay;                                      // 0x002C(0x0004) (Edit)
};

// ScriptStruct TgGame.TgPawn_Thanatos.LowHealthInfo
// 0x0014
struct FLowHealthInfo
{
	class UTgSpecialFx*                                LowHealthFx;                                              // 0x0000(0x0008)
	float                                              fBearing;                                                 // 0x0008(0x0004)
	class AActor*                                      Target;                                                   // 0x000C(0x0008)
};

// ScriptStruct TgGame.TgPawn_Thanatos.KillBallInfo
// 0x0028
struct FKillBallInfo
{
	class UTgSkeletalMeshComponent*                    Mesh;                                                     // 0x0000(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     vLocation;                                                // 0x0008(0x000C)
	unsigned long                                      bIsMovable : 1;                                           // 0x0014(0x0004)
	float                                              fStartDistance;                                           // 0x0018(0x0004)
	float                                              fTimeActive;                                              // 0x001C(0x0004)
	float                                              fReturnTime;                                              // 0x0020(0x0004)
	float                                              fMoveWeight;                                              // 0x0024(0x0004)
};

// ScriptStruct TgGame.TgAhMuzenCabSwarmInstance.InfectedInfo
// 0x000C
struct FInfectedInfo
{
	class AActor*                                      InfectedTarget;                                           // 0x0000(0x0008)
	float                                              fInfectedUntil;                                           // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_AhMuzenCab.HoneyVictimInfo
// 0x0014
struct FHoneyVictimInfo
{
	int                                                NumStacks;                                                // 0x0000(0x0004)
	class ATgPawn*                                     VictimPawn;                                               // 0x0004(0x0008)
	class UTgDeviceFire*                               HoneyFireMode;                                            // 0x000C(0x0008)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_AhMuzenCabBees.BeeVictimInfo
// 0x0010
struct FBeeVictimInfo
{
	class UTgEffectGroup*                              BeesEG;                                                   // 0x0000(0x0008)
	float                                              fApplyTime;                                               // 0x0008(0x0004)
	float                                              fLastDisarm;                                              // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDevice_NuWa_Passive.CrystalInfo
// 0x0018
struct FCrystalInfo
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	TEnumAsByte<ECRYSTAL_TYPE>                         eType;                                                    // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              fTimer;                                                   // 0x0008(0x0004)
	float                                              fLifeTime;                                                // 0x000C(0x0004)
	class UTgDeviceFire*                               DeviceMode;                                               // 0x0010(0x0008)
};

// ScriptStruct TgGame.TgPawn_NuWa.NuWaCrystalInfo
// 0x0018
struct FNuWaCrystalInfo
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              fTimer;                                                   // 0x0004(0x0004)
	class USkelControlBase*                            SkelCon;                                                  // 0x0008(0x0008)
	struct FName                                       SkelConName;                                              // 0x0010(0x0008)
};

// ScriptStruct TgGame.TgPawn_NuWa.NuWaFormControl
// 0x0018
struct FNuWaFormControl
{
	class USkelControlBase*                            SkelCon;                                                  // 0x0000(0x0008)
	struct FName                                       SkelConName;                                              // 0x0008(0x0008)
	TEnumAsByte<ENUWA_FORM>                            eActiveForm;                                              // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	unsigned long                                      bNotOnIntro : 1;                                          // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgPawn_Chaac.KillMaterialInfo
// 0x0024
struct FKillMaterialInfo
{
	struct FName                                       MaterialParameterName;                                    // 0x0000(0x0008)
	struct FName                                       DisplayGroupName;                                         // 0x0008(0x0008)
	int                                                nActivationLevel;                                         // 0x0010(0x0004)
	float                                              fRampUpTime;                                              // 0x0014(0x0004)
	float                                              fRampDownTime;                                            // 0x0018(0x0004)
	float                                              fCurrentValue;                                            // 0x001C(0x0004)
	unsigned long                                      bActive : 1;                                              // 0x0020(0x0004)
};

// ScriptStruct TgGame.TgPawn_Chaac.ChaacPassiveTracker
// 0x000C
struct FChaacPassiveTracker
{
	class ATgDevice*                                   RefundedDevice;                                           // 0x0000(0x0008)
	int                                                RefundedDeviceFireInstance;                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_Chaac.LevitateVictimInfo
// 0x0010
struct FLevitateVictimInfo
{
	class ATgPawn*                                     VictimPawn;                                               // 0x0000(0x0008)
	struct FVector2D                                   RelativeOffset2D;                                         // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgPawn_Kumbhakarna.VictimCollisionData
// 0x0014
struct FVictimCollisionData
{
	class ATgPawn*                                     KnockedUpVictim;                                          // 0x0000(0x0008)
	struct FVector                                     LastLocation;                                             // 0x0008(0x000C)
};

// ScriptStruct TgGame.TgDevice_Janus_DeathGate.DeathGateHitInfo
// 0x0010
struct FDeathGateHitInfo
{
	class AActor*                                      HitTarget;                                                // 0x0000(0x0008)
	int                                                nFiringInstance;                                          // 0x0008(0x0004)
	int                                                nTimesHit;                                                // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDevice_Janus_A02_V2.DeathGateTargetHits
// 0x000A
struct FDeathGateTargetHits
{
	class AActor*                                      m_aHitTarget;                                             // 0x0000(0x0008)
	unsigned char                                      m_nSinusoidHitCount;                                      // 0x0008(0x0001)
	unsigned char                                      m_nMiddleHitCount;                                        // 0x0009(0x0001)
};

// ScriptStruct TgGame.TgDevice_Janus_A02_V2.DeathGateFiringInstanceTargetHits
// 0x0014
struct FDeathGateFiringInstanceTargetHits
{
	TArray<struct FDeathGateTargetHits>                m_targetHits;                                             // 0x0000(0x0010) (NeedCtorLink)
	int                                                m_nFiringInstance;                                        // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_JanusPassive.JanusPowerScaledAbility
// 0x000C
struct FJanusPowerScaledAbility
{
	class AActor*                                      m_actorPowerScaled;                                       // 0x0000(0x0008)
	int                                                m_nFiringInstance;                                        // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_JanusTransitions.TransitionsEffectGroupInfo
// 0x001C
struct FTransitionsEffectGroupInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	unsigned long                                      bReadyToRemove : 1;                                       // 0x0008(0x0004)
	TArray<class UTgEffectGroup*>                      AppliedEffectGroups;                                      // 0x000C(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgDevice_Serqet_LastBreath.LastBreathExplosionInfo
// 0x0018
struct FLastBreathExplosionInfo
{
	float                                              fDelayLeft;                                               // 0x0000(0x0004)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	class UTgDeviceFire*                               DeviceMode;                                               // 0x0010(0x0008)
};

// ScriptStruct TgGame.TgAchievement_Cabrakan_Tremors.TremorsData
// 0x0010
struct FTremorsData
{
	class ATgPawn*                                     GodPawn;                                                  // 0x0000(0x0008)
	float                                              StartTime;                                                // 0x0008(0x0004)
	float                                              LastTime;                                                 // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgPawn_Nox.ShadowLockInfo
// 0x003C
struct FShadowLockInfo
{
	class AActor*                                      LinkActor;                                                // 0x0000(0x0008)
	class UTgSpecialFx*                                Fx;                                                       // 0x0008(0x0008)
	class UMaterialInstanceConstant*                   MIC;                                                      // 0x0010(0x0008)
	struct FVector                                     SourceLocation;                                           // 0x0018(0x000C)
	struct FVector                                     TargetLocation;                                           // 0x0024(0x000C)
	float                                              fDetachLength;                                            // 0x0030(0x0004)
	float                                              fOpacity;                                                 // 0x0034(0x0004)
	unsigned long                                      bBlink : 1;                                               // 0x0038(0x0004)
};

// ScriptStruct TgGame.TgDevice.ValidTargetInfo
// 0x0010
struct FValidTargetInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	class UTgDeviceFire*                               TargetEffectMode;                                         // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgAchievement_HouYi_Trick.HitsPerBounce
// 0x0010
struct FHitsPerBounce
{
	TArray<class AActor*>                              HitTargets;                                               // 0x0000(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgPawn_HouYiSkin.HouYiPetAnimTypeData
// 0x000C
struct FHouYiPetAnimTypeData
{
	TEnumAsByte<EHouYiPetAnimType>                     m_eAnimTypes[0x8];                                        // 0x0000(0x0001)
	int                                                m_nAnimCount;                                             // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_HouYiSkin.HouYiPetAnimMetaData
// 0x0030
struct FHouYiPetAnimMetaData
{
	struct FHouYiPetAnimTypeData                       m_petAnimTypeData[0x4];                                   // 0x0000(0x000C)
};

// ScriptStruct TgGame.TgPawn_HouYiSkin.HouYiPetInfo
// 0x001B
struct FHouYiPetInfo
{
	struct FPointer                                    m_pAmPetSetup;                                            // 0x0000(0x0008) (Const, Native)
	float                                              m_fPetSpawnSecs;                                          // 0x0008(0x0004) (Const)
	float                                              m_fVisibilityDelay;                                       // 0x000C(0x0004) (Const)
	int                                                m_nBotId;                                                 // 0x0010(0x0004) (Const)
	int                                                m_nMeshId;                                                // 0x0014(0x0004) (Const)
	TEnumAsByte<EHouYiPetType>                         m_ePetType;                                               // 0x0018(0x0001) (Const)
	TEnumAsByte<EHouYiPetEvolution>                    m_ePetEvolution;                                          // 0x0019(0x0001) (Const)
	TEnumAsByte<ETG_EQUIP_POINT>                       m_eEqpSlot;                                               // 0x001A(0x0001) (Const)
};

// ScriptStruct TgGame.TgAchievement_Bellona_Master.TrackedHits
// 0x000C
struct FTrackedHits
{
	unsigned long                                      bHitInHand : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bHitHammer : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bHitScourge : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bHitShield : 1;                                           // 0x0000(0x0004)
	class AActor*                                      Target;                                                   // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgAnimMetaData_BellonaFlagMesh.FlagMeshParameterKeyFrame
// 0x0008
struct FFlagMeshParameterKeyFrame
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit)
	float                                              TargetValue;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgAnimMetaData_BellonaWeaponSetOverride.WeaponSetParameterKeyFrame
// 0x0008
struct FWeaponSetParameterKeyFrame
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit)
	float                                              TargetValue;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_BellonaScourge.HealAdder
// 0x000C
struct FHealAdder
{
	int                                                nDeviceId;                                                // 0x0000(0x0004) (Const)
	int                                                nHitsPerStack;                                            // 0x0004(0x0004) (Const)
	int                                                nTrackedHitCount;                                         // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_BellonaShieldBash.BlockStackAdder
// 0x000C
struct FBlockStackAdder
{
	int                                                nDeviceId;                                                // 0x0000(0x0004) (Const)
	int                                                nHitsPerStack;                                            // 0x0004(0x0004) (Const)
	int                                                nTrackedHitCount;                                         // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_Bellona.WeaponSetInfo
// 0x0004
struct FWeaponSetInfo
{
	TEnumAsByte<EBellonaWeaponSet>                     CurrentWeaponSet;                                         // 0x0000(0x0001)
	TEnumAsByte<EBellonaWeaponSwapState>               SwapState;                                                // 0x0001(0x0001)
	unsigned char                                      Padding[0x2];                                             // 0x0002(0x0001)
};

// ScriptStruct TgGame.TgPawn_Bellona.VisibleWeaponOverrides
// 0x0010
struct FVisibleWeaponOverrides
{
	TEnumAsByte<EBellonaWeaponSet>                     DesiredWeaponSet;                                         // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              fWeight;                                                  // 0x0004(0x0004)
	class UAnimNodeSequence*                           RequestingAnimSeqNode;                                    // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgPawn_Bellona.ShieldBashRepInfo
// 0x0011
struct FShieldBashRepInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	int                                                Rotation;                                                 // 0x000C(0x0004)
	unsigned char                                      Ticker;                                                   // 0x0010(0x0001)
};

// ScriptStruct TgGame.TgPawn_Bellona.VisibleFlagMesh
// 0x000C
struct FVisibleFlagMesh
{
	unsigned long                                      bUseOverlay : 1;                                          // 0x0000(0x0004)
	class UAnimNodeSequence*                           RequestingAnimSeqNode;                                    // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgPawn_AhPuch.Dev3Victim
// 0x000C
struct FDev3Victim
{
	class ATgPawn*                                     VictimPawn;                                               // 0x0000(0x0008)
	int                                                HealStacks;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_Ratatoskr_Dart.PreviousChargeInfo
// 0x0014
struct FPreviousChargeInfo
{
	TArray<class AActor*>                              HitActors;                                                // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              fTimer;                                                   // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgDeviceFire_Ratatoskr_AcornThrowV2.AcornThrowHitData
// 0x0010
struct FAcornThrowHitData
{
	class ATgPawn*                                     HitActor;                                                 // 0x0000(0x0008)
	int                                                numHits;                                                  // 0x0008(0x0004)
	unsigned long                                      hitSpecialApplied : 1;                                    // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgInventoryManager_Ratatoskr.AcornPurchaseInfo
// 0x0010
struct FAcornPurchaseInfo
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	int                                                nItemCount;                                               // 0x0004(0x0004)
	int                                                nUpgradeInvId;                                            // 0x0008(0x0004)
	unsigned long                                      bIsUpgrade : 1;                                           // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgPawn_Ratatoskr.RatatoskrSkinTailBaseColor
// 0x0014
struct FRatatoskrSkinTailBaseColor
{
	int                                                m_nSkinId;                                                // 0x0000(0x0004)
	struct FLinearColor                                m_colorBase;                                              // 0x0004(0x0010)
};

// ScriptStruct TgGame.TgPawn_G72.G72PassiveTarget
// 0x0010
struct FG72PassiveTarget
{
	class ATgCollisionProxy*                           Aura;                                                     // 0x0000(0x0008)
	class AActor*                                      Target;                                                   // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgPawn_Kaldr.KaldrDamageInstance
// 0x000C
struct FKaldrDamageInstance
{
	int                                                nDeviceId;                                                // 0x0000(0x0004)
	int                                                nDeviceInstanceId;                                        // 0x0004(0x0004)
	int                                                nDeviceFiringInstance;                                    // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_Terra.TerraWardstoneFXData
// 0x0010
struct FTerraWardstoneFXData
{
	class ATgPawn*                                     Target;                                                   // 0x0000(0x0008)
	int                                                ActiveStoneCount;                                         // 0x0008(0x0004)
	unsigned long                                      IsActive : 1;                                             // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgAchievement_Camazotz_BatOutOfHell.CamazotzTrackedTargets
// 0x0018
struct FCamazotzTrackedTargets
{
	int                                                FiringInstance;                                           // 0x0000(0x0004)
	int                                                AmmoInstance;                                             // 0x0004(0x0004)
	TArray<class ATgPawn*>                             Targets;                                                  // 0x0008(0x0010) (NeedCtorLink)
};

// ScriptStruct TgGame.TgDeployable_Camazotz_Essence.CamazotzTouchData
// 0x000C
struct FCamazotzTouchData
{
	class ATgPawn_Camazotz*                            Camazotz;                                                 // 0x0000(0x0008)
	float                                              m_fTimeSinceLastDrink;                                    // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDeployable_Thoth_SpeedGlyph.SpeedGlyphImpactFXData
// 0x0014
struct FSpeedGlyphImpactFXData
{
	int                                                Index;                                                    // 0x0000(0x0004)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	int                                                ShooterDevId;                                             // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgPawn_Thoth.SpeedGlyphProjTrackingData
// 0x000C
struct FSpeedGlyphProjTrackingData
{
	int                                                Instigator;                                               // 0x0000(0x0004)
	int                                                Device;                                                   // 0x0004(0x0004)
	int                                                FiringInstance;                                           // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_Thoth.Dev1GodHitBy
// 0x000C
struct FDev1GodHitBy
{
	class ATgPawn*                                     m_HitGod;                                                 // 0x0000(0x0008)
	int                                                m_nHits;                                                  // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_Thoth.SpeedGlyphProjEventData
// 0x000C
struct FSpeedGlyphProjEventData
{
	int                                                ProjId;                                                   // 0x0000(0x0004)
	int                                                Index;                                                    // 0x0004(0x0004)
	int                                                ShooterDevId;                                             // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgAnimNotify_Sound_NikeUltSounds.PSE_Skin_Nike
// 0x0028
struct FPSE_Skin_Nike
{
	int                                                nSkinId;                                                  // 0x0000(0x0004) (Edit)
	int                                                nSkinLevel;                                               // 0x0004(0x0004) (Edit)
	TArray<class USoundCue*>                           SoundCues;                                                // 0x0008(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      bPreventRepeat : 1;                                       // 0x0018(0x0004) (Edit)
	float                                              fCueDuration;                                             // 0x001C(0x0004) (Edit)
	unsigned long                                      bPreventGroupRepeat : 1;                                  // 0x0020(0x0004) (Edit)
	int                                                nCueGroup;                                                // 0x0024(0x0004) (Edit)
};

// ScriptStruct TgGame.TgDevice_Nike_Dev2_V2.ShieldTouchInfo
// 0x000C
struct FShieldTouchInfo
{
	class AActor*                                      m_TouchedActor;                                           // 0x0000(0x0008)
	float                                              m_fTimeRemaining;                                         // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_G84.MirrorImageData
// 0x0010
struct FMirrorImageData
{
	class UTgSkeletalMeshComponent*                    Mesh;                                                     // 0x0000(0x0008) (ExportObject, Component, EditInline)
	class UTgAnimBlendByG84MirrorImageState*           Node;                                                     // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgAchievement_Kuzenbo_TripleTreble.KnockUpHitInfo
// 0x000C
struct FKnockUpHitInfo
{
	class AActor*                                      m_Actor;                                                  // 0x0000(0x0008)
	int                                                m_nKnockUpCount;                                          // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_G86.SeasonInhandRecordData
// 0x0008
struct FSeasonInhandRecordData
{
	int                                                FiringInstance;                                           // 0x0000(0x0004)
	int                                                Season;                                                   // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDeployable_Ganesha_Dev4.DamageInfo
// 0x0010
struct FDamageInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008)
	float                                              TimeToReDamage;                                           // 0x0008(0x0004)
	unsigned long                                      TouchingProxy : 1;                                        // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDevice_Ganesha_Dev2_V2.AppliedEnemyInfo
// 0x000C
struct FAppliedEnemyInfo
{
	class AActor*                                      EnemyTarget;                                              // 0x0000(0x0008)
	unsigned long                                      InSlice : 1;                                              // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_Ganesha.DamageData
// 0x0038
struct FDamageData
{
	class ATgPawn*                                     VictimPawn;                                               // 0x0000(0x0008)
	class ATgPawn*                                     attackerPawn;                                             // 0x0008(0x0008)
	struct FTraceHitInfo                               HitInfo;                                                  // 0x0010(0x0028) (Component)
};

// ScriptStruct TgGame.TgDevice_CuChulainn_Dev2.CuChulainnVentSteamHits
// 0x000C
struct FCuChulainnVentSteamHits
{
	class AActor*                                      mTarget;                                                  // 0x0000(0x0008)
	int                                                nNumHits;                                                 // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_CuChulainn.CuChulainnFerocityData
// 0x0018
struct FCuChulainnFerocityData
{
	unsigned long                                      bWasInitialized : 1;                                      // 0x0000(0x0004)
	float                                              fFerocityPerSecond;                                       // 0x0004(0x0004)
	float                                              fChargeLimit;                                             // 0x0008(0x0004)
	float                                              fBerserkThreshold;                                        // 0x000C(0x0004)
	float                                              fBerserkDelayTime;                                        // 0x0010(0x0004)
	float                                              fBerserkTime;                                             // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgPawn_CuChulainn.CuChulainnFerocityRefundData
// 0x001C
struct FCuChulainnFerocityRefundData
{
	float                                              fFerocityCostPerFire;                                     // 0x0000(0x0004)
	float                                              fFerocityGainPerHit;                                      // 0x0004(0x0004)
	float                                              fFerocityGainedPerMinion;                                 // 0x0008(0x0004)
	unsigned long                                      bDeviceFired : 1;                                         // 0x000C(0x0004)
	int                                                nHitCount;                                                // 0x0010(0x0004)
	int                                                nMinionHitCount;                                          // 0x0014(0x0004)
	float                                              fMaxFerocityGainedPerShot;                                // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgPawn_Artio.ArtioDev4TrackingData
// 0x0008
struct FArtioDev4TrackingData
{
	int                                                nDeviceId;                                                // 0x0000(0x0004)
	int                                                nFiringInstance;                                          // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgProj_Discordia_GoldenAppleOfDiscord.AppleHitInfo
// 0x000C
struct FAppleHitInfo
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	int                                                numHits;                                                  // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDevice_Cerberus_Dev1.TerrifyingVisageHitInfo
// 0x0010
struct FTerrifyingVisageHitInfo
{
	class AActor*                                      HitTarget;                                                // 0x0000(0x0008)
	int                                                nTimesHit;                                                // 0x0008(0x0004)
	int                                                nFiringInstance;                                          // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_God94_Dev2.God94Dev2HealData
// 0x000C
struct FGod94Dev2HealData
{
	int                                                DeviceID;                                                 // 0x0000(0x0004)
	int                                                FiringInstance;                                           // 0x0004(0x0004)
	int                                                nHealCount;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgObject.MultiHitInfo
// 0x0010
struct FMultiHitInfo
{
	class AActor*                                      HitTarget;                                                // 0x0000(0x0008)
	int                                                nTimesHit;                                                // 0x0008(0x0004)
	int                                                nFiringInstance;                                          // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgAchievement_Hera_RoyalAssault.RoyalAssaultData
// 0x000C
struct FRoyalAssaultData
{
	class ATgPawn*                                     HitPawn;                                                  // 0x0000(0x0008)
	float                                              HitCount;                                                 // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_Hera.HeraPolymorphPair
// 0x0008
struct FHeraPolymorphPair
{
	int                                                m_nPawnInstanceId;                                        // 0x0000(0x0004)
	int                                                m_nMeshId;                                                // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Knight_PSV.KnightFireInstanceData
// 0x0014
struct FKnightFireInstanceData
{
	int                                                DeviceID;                                                 // 0x0000(0x0004)
	TArray<int>                                        FiringInstances;                                          // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgPawn_Knight.KnightFiringInstance
// 0x0008
struct FKnightFiringInstance
{
	int                                                nDeviceId;                                                // 0x0000(0x0004)
	unsigned long                                      bHasDamagedGod : 1;                                       // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgTiDiState.TiDiTransition
// 0x0008
struct FTiDiTransition
{
	float                                              m_fInterpTime;                                            // 0x0000(0x0004)
	float                                              m_fTiDiDelta;                                             // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgTiDiState.TiDiSimulatedLinePath
// 0x0041
struct FTiDiSimulatedLinePath
{
	struct FTiDiTransition                             m_Transitions[0x8];                                       // 0x0000(0x0008)
	unsigned char                                      m_nTiDiTransitionCount;                                   // 0x0040(0x0001)
};

// ScriptStruct TgGame.TgDeploy_Wizard_A01.WizardA01LinkInfo
// 0x0054
struct FWizardA01LinkInfo
{
	struct FTiDiSimulatedLinePath                      m_TiDiTransitionRegions;                                  // 0x0000(0x0044)
	struct FVector                                     m_vTargetLocation;                                        // 0x0044(0x000C)
	float                                              m_fTargetColRadius;                                       // 0x0050(0x0004)
};

// ScriptStruct TgGame.TgDeviceForm_Wizard_B02.WizardB02Targeter
// 0x0014
struct FWizardB02Targeter
{
	TEnumAsByte<EWizardB02Position>                    m_ePositionType;                                          // 0x0000(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class ATgSkeletalMeshActor*                        m_MeshIndicator;                                          // 0x0004(0x0008)
	class UTgSpecialFx*                                m_TargetingFx;                                            // 0x000C(0x0008)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Wizard_Passive.WizardChargeBuffInfo
// 0x0005
struct FWizardChargeBuffInfo
{
	int                                                m_nDevId;                                                 // 0x0000(0x0004)
	unsigned char                                      m_nInstanceId;                                            // 0x0004(0x0001)
};

// ScriptStruct TgGame.TgPawn_NPC_Wizard.WizardTypeTracker
// 0x000C
struct FWizardTypeTracker
{
	TEnumAsByte<EWizardType>                           m_wtDefault;                                              // 0x0000(0x0001) (Const)
	TEnumAsByte<EWizardType>                           m_wtCurrent;                                              // 0x0001(0x0001)
	TEnumAsByte<EWizardType>                           m_wtPrevious;                                             // 0x0002(0x0001)
	TEnumAsByte<EWizardType>                           m_wtNext;                                                 // 0x0003(0x0001)
	int                                                m_nForceUpdate;                                           // 0x0004(0x0004)
	unsigned long                                      m_bInTransition : 1;                                      // 0x0008(0x0004)
	unsigned long                                      m_bChangedStance : 1;                                     // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_NPC_Wizard.WizardEqpPair
// 0x0004
struct FWizardEqpPair
{
	TEnumAsByte<ETG_EQUIP_POINT>                       m_eEqpKey;                                                // 0x0000(0x0001) (Const)
	TEnumAsByte<ETG_EQUIP_POINT>                       m_eEqpOverride;                                           // 0x0001(0x0001) (Const)
	unsigned char                                      m_padding[0x2];                                           // 0x0002(0x0001) (Const)
};

// ScriptStruct TgGame.TgPawn_NPC_Wizard.WizardEqpSet
// 0x0010
struct FWizardEqpSet
{
	TArray<struct FWizardEqpPair>                      m_pairs;                                                  // 0x0000(0x0010) (Const, NeedCtorLink)
};

// ScriptStruct TgGame.TgPawn_NPC_Wizard.WizardA03Fx
// 0x0010
struct FWizardA03Fx
{
	class UTgSpecialFx*                                c_EnterFx;                                                // 0x0000(0x0008) (Const)
	class UTgSpecialFx*                                c_ExitFx;                                                 // 0x0008(0x0008) (Const)
};

// ScriptStruct TgGame.TgProj_Wizard_AUTO.WizardAutoVisibilityDelay
// 0x0008
struct FWizardAutoVisibilityDelay
{
	int                                                m_nSkinId;                                                // 0x0000(0x0004)
	int                                                m_nProjId;                                                // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDeployable_Jormungandr_PoisonCloud.ProjSeekLocations
// 0x0018
struct FProjSeekLocations
{
	struct FVector                                     m_vSeekLoc1;                                              // 0x0000(0x000C)
	struct FVector                                     m_vSeekLoc2;                                              // 0x000C(0x000C)
};

// ScriptStruct TgGame.TgDeployable_Jorm_ArcV2.JormArcContainer
// 0x0054
struct FJormArcContainer
{
	struct FInterpCurveVector                          cvSpline;                                                 // 0x0000(0x0014) (NeedCtorLink)
	struct FInterpCurveFloat                           cfRate;                                                   // 0x0014(0x0014) (NeedCtorLink)
	TArray<class ATgSplineLoftActorSpawnable*>         ArcMeshes;                                                // 0x0028(0x0010) (NeedCtorLink)
	float                                              fCurPerc;                                                 // 0x0038(0x0004)
	float                                              fCurInVal;                                                // 0x003C(0x0004)
	struct FVector                                     vRight;                                                   // 0x0040(0x000C)
	class ATgSkeletalMeshActorSpawnable*               masHeadMesh;                                              // 0x004C(0x0008)
};

// ScriptStruct TgGame.TgPawn_Jormungandr.EruptFXIds
// 0x0008
struct FEruptFXIds
{
	int                                                m_nEffect1;                                               // 0x0000(0x0004)
	int                                                m_nEffect2;                                               // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPawn_Jormungandr_WithExtraMesh.JormungandrSecondaryMesh
// 0x0010
struct FJormungandrSecondaryMesh
{
	struct FVector                                     m_vCachedTranslation;                                     // 0x0000(0x000C) (Const)
	int                                                m_nMeshId;                                                // 0x000C(0x0004) (Const)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Set_A04.SetA04StackData
// 0x000C
struct FSetA04StackData
{
	class ATgPawn*                                     m_HitPawn;                                                // 0x0000(0x0008)
	int                                                m_nStacks;                                                // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Set_PSV.SetPSVDamageInstanceData
// 0x0008
struct FSetPSVDamageInstanceData
{
	int                                                m_nDeviceId;                                              // 0x0000(0x0004)
	int                                                m_nFireInstance;                                          // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Set_PSV.SetPSVDamageTimeData
// 0x0008
struct FSetPSVDamageTimeData
{
	int                                                m_nDeviceId;                                              // 0x0000(0x0004)
	float                                              m_fDamageTimeStamp;                                       // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDeployable_Olorun_Dev2.OlorunSun_TrackedPlayerInfo
// 0x000C
struct FOlorunSun_TrackedPlayerInfo
{
	class ATgPawn*                                     m_Player;                                                 // 0x0000(0x0008)
	int                                                m_nTimesHit;                                              // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDeploy_Persephone_A04.PersephoneA04DeployableData
// 0x001C
struct FPersephoneA04DeployableData
{
	int                                                nTetheredPawnId;                                          // 0x0000(0x0004)
	float                                              fTetherAttachProgressPercentage;                          // 0x0004(0x0004)
	class ATgDeploy_Persephone_A04_Bounds*             BoundWallComponent;                                       // 0x0008(0x0008)
	int                                                nHitApplied;                                              // 0x0010(0x0004)
	int                                                nIsImmune;                                                // 0x0014(0x0004)
	int                                                nIsOutOfRange;                                            // 0x0018(0x0004)
};

// ScriptStruct TgGame.TgDeploy_Persephone_A04.PersephoneA04ClientDeployableData
// 0x0018
struct FPersephoneA04ClientDeployableData
{
	int                                                nTetheredPawnId;                                          // 0x0000(0x0004)
	class UTgStaticMeshComponent*                      TetherMeshComponent;                                      // 0x0004(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     vLastValidLocation;                                       // 0x000C(0x000C)
};

// ScriptStruct TgGame.TgDeploy_Persephone_A02.PersephoneA02DeployableData
// 0x000C
struct FPersephoneA02DeployableData
{
	float                                              m_fTime;                                                  // 0x0000(0x0004) (Const)
	class ATgDevice*                                   m_SubDevice;                                              // 0x0004(0x0008)
};

// ScriptStruct TgGame.TgDeploy_Persephone_A02.PersephoneA02Stage3Defaults
// 0x0020
struct FPersephoneA02Stage3Defaults
{
	float                                              m_fVisionRange;                                           // 0x0000(0x0004) (Const)
	float                                              m_fBiteDamageRange;                                       // 0x0004(0x0004) (Const)
	float                                              m_fBiteAttackRange;                                       // 0x0008(0x0004) (Const)
	float                                              m_fMovementRange;                                         // 0x000C(0x0004) (Const)
	float                                              m_fMovementSpeed;                                         // 0x0010(0x0004) (Const)
	float                                              m_fConeAttackAngle;                                       // 0x0014(0x0004) (Const)
	float                                              m_fConeAttackAngleOffset;                                 // 0x0018(0x0004) (Const)
	float                                              m_fChaseTime;                                             // 0x001C(0x0004) (Const)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_PersephonePassive.PersephonePSVTracker
// 0x0008
struct FPersephonePSVTracker
{
	int                                                nDeviceId;                                                // 0x0000(0x0004)
	int                                                nFiringInstance;                                          // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDeploy_Yemoja_A04.YemojaOverlappingActor
// 0x001C
struct FYemojaOverlappingActor
{
	class AActor*                                      m_Actor;                                                  // 0x0000(0x0008)
	struct FVector                                     m_vNormal;                                                // 0x0008(0x000C)
	class ATgCollisionProxy_Yemoja_A04*                m_WallProxy;                                              // 0x0014(0x0008)
};

// ScriptStruct TgGame.TgDeploy_Yemoja_A03.RiptideTouchedPawns
// 0x000C
struct FRiptideTouchedPawns
{
	class ATgPawn*                                     m_Pawn;                                                   // 0x0000(0x0008)
	unsigned long                                      m_bLaunchLocked : 1;                                      // 0x0008(0x0004)
	unsigned long                                      m_bHasLaunched : 1;                                       // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDeploy_Yemoja_A03.CollisionBoxBounds
// 0x000C
struct FCollisionBoxBounds
{
	float                                              m_fLength;                                                // 0x0000(0x0004)
	float                                              m_fWidth;                                                 // 0x0004(0x0004)
	float                                              m_fHeight;                                                // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgDeploy_Yemoja_A04.YemojaWallActorHitInfo
// 0x0010
struct FYemojaWallActorHitInfo
{
	class AActor*                                      m_Actor;                                                  // 0x0000(0x0008)
	class UPrimitiveComponent*                         m_HitComp;                                                // 0x0008(0x0008) (ExportObject, Component, EditInline)
};

// ScriptStruct TgGame.TgDeviceForm_Yemoja_B01.FractureTargeterFx
// 0x000C
struct FFractureTargeterFx
{
	class UTgSpecialFx*                                m_Fx;                                                     // 0x0000(0x0008)
	float                                              m_fScale;                                                 // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Yemoja_PSV.YemojaPipObjective
// 0x0008
struct FYemojaPipObjective
{
	int                                                m_nThreshold;                                             // 0x0000(0x0004)
	unsigned long                                      m_bHasAchieved : 1;                                       // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDeployable_Heimdallr_A04.HeimA04SectionTimings
// 0x000C
struct FHeimA04SectionTimings
{
	float                                              fTotalTime;                                               // 0x0000(0x0004) (Const)
	float                                              fPersistTime;                                             // 0x0004(0x0004) (Const)
	float                                              fOutroTime;                                               // 0x0008(0x0004) (Const)
};

// ScriptStruct TgGame.TgDevice_Heimdallr_PSV.HeidallrPSVTarget
// 0x0009
struct FHeidallrPSVTarget
{
	class ATgPawn*                                     m_pawnTarget;                                             // 0x0000(0x0008) (Const)
	unsigned char                                      m_byPSVStateFlags;                                        // 0x0008(0x0001)
};

// ScriptStruct TgGame.TgDeployable_Heimdallr_A04.HeimA04Meshes
// 0x0040
struct FHeimA04Meshes
{
	class UMeshComponent*                              c_Mesh[0x2];                                              // 0x0000(0x0008) (Const, ExportObject, Component, EditInline)
	class UTgSpecialFx*                                c_BarrierFX;                                              // 0x0010(0x0008) (Const)
	class UTgSpecialFx*                                c_BarrierBreakFX;                                         // 0x0018(0x0008) (Const)
	struct FVector                                     m_vSectionStart;                                          // 0x0020(0x000C) (Const)
	int                                                m_nMeshId[0x2];                                           // 0x002C(0x0004) (Const)
	int                                                m_nBarrierFXId;                                           // 0x0034(0x0004) (Const)
	int                                                m_nBarrierBreakFXId;                                      // 0x0038(0x0004) (Const)
	unsigned long                                      m_bIsVisible : 1;                                         // 0x003C(0x0004) (Const)
};

// ScriptStruct TgGame.TgHeimdallr_A04MeshProcessor.HeimUltMeshMap
// 0x0018
struct FHeimUltMeshMap
{
	class ATgPawn_Heimdallr*                           m_PawnRep;                                                // 0x0000(0x0008)
	TArray<struct FHeimA04Meshes>                      m_UltVisuals;                                             // 0x0008(0x0010) (Component, AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgAchievement_Mulan_TwoForOne.MulanUltimateHitInfo
// 0x0014
struct FMulanUltimateHitInfo
{
	unsigned char                                      m_nFiringInstance;                                        // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<class ATgPawn*>                             m_PawnsHit;                                               // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgMulanEvolutionInterface.MulanEvolutionXPLevels
// 0x000C
struct FMulanEvolutionXPLevels
{
	float                                              m_fEvolution1XPThreshold;                                 // 0x0000(0x0004)
	float                                              m_fEvolution2XPThreshold;                                 // 0x0004(0x0004)
	float                                              m_fEvolution3XPThreshold;                                 // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn_Mulan.MulanA03AnimData
// 0x000C
struct FMulanA03AnimData
{
	TEnumAsByte<EMulanA03AnimState>                    m_eAnimState;                                             // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              m_fGrappleTime;                                           // 0x0004(0x0004)
	int                                                m_nPlayAnim;                                              // 0x0008(0x0004) (Const)
};

// ScriptStruct TgGame.TgDevice_BabaYaga_A02.BabaYagaPotionData
// 0x0028
struct FBabaYagaPotionData
{
	int                                                m_nIngredients[0x3];                                      // 0x0000(0x0004) (Const)
	int                                                m_nTotalIngredients;                                      // 0x000C(0x0004) (Const)
	int                                                m_nSpawningFireMode;                                      // 0x0010(0x0004) (Const)
	int                                                m_nArrayIndex;                                            // 0x0014(0x0004) (Const)
	int                                                m_nPotionId;                                              // 0x0018(0x0004) (Const)
	int                                                m_nBrewerFiringInstance;                                  // 0x001C(0x0004) (Const)
	TEnumAsByte<ETG_EQUIP_POINT>                       m_eEqpPoint;                                              // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	unsigned long                                      m_bEquipped : 1;                                          // 0x0024(0x0004)
};

// ScriptStruct TgGame.TgPawn_BabaYaga.BabaYagaA01FxTrigger
// 0x0014
struct FBabaYagaA01FxTrigger
{
	unsigned char                                      m_byPlayFx;                                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                m_nCustomFilter;                                          // 0x0004(0x0004)
	struct FVector                                     m_vSpawnLoc;                                              // 0x0008(0x000C)
};

// ScriptStruct TgGame.TgCameraModule_Depthzy.DepthzyCameraSetup
// 0x002C
struct FDepthzyCameraSetup
{
	struct FVector                                     m_vAbsoluteOffset;                                        // 0x0000(0x000C)
	struct FVector                                     m_vScaledByZoomOffset;                                    // 0x000C(0x000C)
	float                                              m_fOffsetInterpSpeed;                                     // 0x0018(0x0004)
	float                                              m_fZoomInterpSpeed;                                       // 0x001C(0x0004)
	float                                              m_fZoomStep;                                              // 0x0020(0x0004)
	float                                              m_fZoomMax;                                               // 0x0024(0x0004)
	float                                              m_fZoomMin;                                               // 0x0028(0x0004)
};

// ScriptStruct TgGame.TgDepthzy_IStateMeshProcessor.DepthzyIStateAssetMap
// 0x0018
struct FDepthzyIStateAssetMap
{
	class ATgPawn_Depthzy*                             m_depthzy;                                                // 0x0000(0x0008)
	class UTgMapTracker_Depthzy_IState*                m_mapTracker;                                             // 0x0008(0x0008)
	class UTgMeshPool_Depthzy_IState*                  m_meshPool;                                               // 0x0010(0x0008)
};

// ScriptStruct TgGame.TgDevice_Depthzy_A04_Sub.DepthzyA04AuraTormentTargetTimer
// 0x000C
struct FDepthzyA04AuraTormentTargetTimer
{
	class ATgPawn*                                     m_pawnTarget;                                             // 0x0000(0x0008)
	float                                              m_fTimeTillTormentApplies;                                // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgObject.LinearValueRange
// 0x0008
struct FLinearValueRange
{
	float                                              m_fMin;                                                   // 0x0000(0x0004) (Const)
	float                                              m_fMax;                                                   // 0x0004(0x0004) (Const)
};

// ScriptStruct TgGame.TgPawn_Depthzy.CachedParticleSystem
// 0x0024
struct FCachedParticleSystem
{
	class UParticleSystemComponent*                    m_psc;                                                    // 0x0000(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     m_vTranslation;                                           // 0x0008(0x000C)
	struct FRotator                                    m_rRotation;                                              // 0x0014(0x000C)
	unsigned long                                      m_bAbsoluteTranslation : 1;                               // 0x0020(0x0004)
	unsigned long                                      m_bAbsoluteRotation : 1;                                  // 0x0020(0x0004)
};

// ScriptStruct TgGame.TgDeployable_Tsukuyomi_A03.MoveDamageInfo
// 0x0020
struct FMoveDamageInfo
{
	class ATgDeployable_Tsukuyomi_A03*                 m_a03Deploy;                                              // 0x0000(0x0008) (Const)
	class ATgPawn*                                     m_trackedPawn;                                            // 0x0008(0x0008) (Const)
	struct FVector                                     s_vPreviousLocation;                                      // 0x0010(0x000C)
	float                                              s_fDistanceMoved;                                         // 0x001C(0x0004)
};

// ScriptStruct TgGame.TgDevice_Danzaburou_A01_V2.RicochetTargetingInfoV2
// 0x0028
struct FRicochetTargetingInfoV2
{
	struct FVector                                     m_vTraceStart;                                            // 0x0000(0x000C) (Const)
	struct FVector                                     m_vTraceEnd;                                              // 0x000C(0x000C) (Const)
	float                                              m_fCollisionRadius;                                       // 0x0018(0x0004) (Const)
	int                                                m_nDeployableIndex;                                       // 0x001C(0x0004) (Const)
	int                                                m_nRicochetIndex;                                         // 0x0020(0x0004) (Const)
	unsigned long                                      m_bIsLastRicochet : 1;                                    // 0x0024(0x0004) (Const)
};

// ScriptStruct TgGame.TgDevice_Danzaburou_A01.RicochetTargetingInfo
// 0x0028
struct FRicochetTargetingInfo
{
	struct FVector                                     m_vTraceStart;                                            // 0x0000(0x000C) (Const)
	struct FVector                                     m_vTraceEnd;                                              // 0x000C(0x000C) (Const)
	float                                              m_fDistanceTraveledToStart;                               // 0x0018(0x0004) (Const)
	float                                              m_fMaxCollisionSize;                                      // 0x001C(0x0004) (Const)
	float                                              m_fMinCollisionSize;                                      // 0x0020(0x0004) (Const)
	float                                              m_fMaxRange;                                              // 0x0024(0x0004) (Const)
};

// ScriptStruct TgGame.TgInventoryObject_Listen_Danzaburou_A01_V2.DanzaburouA01HitTrackerInfo
// 0x0018
struct FDanzaburouA01HitTrackerInfo
{
	class AActor*                                      m_actorTracked;                                           // 0x0000(0x0008) (Const)
	float                                              m_fMuliHitDamagePercent;                                  // 0x0008(0x0004)
	int                                                m_nTrackedFiringInstance;                                 // 0x000C(0x0004)
	int                                                m_nRollingHits;                                           // 0x0010(0x0004)
	int                                                m_nBombHits;                                              // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgSkinAssemblyConfig.PackageCookFlagMap
// 0x0020
struct FPackageCookFlagMap
{
	struct FString                                     SkinPackage;                                              // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             PackageFlags;                                             // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgSkinAssemblyConfig.SkinAssemblyPackages
// 0x0014
struct FSkinAssemblyPackages
{
	int                                                nSkinId;                                                  // 0x0000(0x0004)
	TArray<struct FPackageCookFlagMap>                 SkinPackageRefs;                                          // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgSkinAssemblyConfig.BotAssemblyPackages
// 0x0024
struct FBotAssemblyPackages
{
	int                                                nBotId;                                                   // 0x0000(0x0004)
	TArray<struct FSkinAssemblyPackages>               SkinAssemblies;                                           // 0x0004(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FString>                             BotPackageRefs;                                           // 0x0014(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgObject.ButtonPromptData
// 0x0020
struct FButtonPromptData
{
	struct FString                                     promptText;                                               // 0x0000(0x0010) (Edit, AlwaysInit, NeedCtorLink)
	struct FString                                     buttonDisplay;                                            // 0x0010(0x0010) (Edit, AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgObject.sTrainingBotMap
// 0x0008
struct FsTrainingBotMap
{
	int                                                BotID;                                                    // 0x0000(0x0004)
	int                                                TrainingBotID;                                            // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgObject.TgKeyBind
// 0x0058
struct FTgKeyBind
{
	int                                                nGroupNameMsgId;                                          // 0x0000(0x0004)
	int                                                nNameMsgId;                                               // 0x0004(0x0004)
	struct FString                                     sKeyCommand;                                              // 0x0008(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sDefaultKey;                                              // 0x0018(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sKey;                                                     // 0x0028(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sKeyAlternate;                                            // 0x0038(0x0010) (AlwaysInit, NeedCtorLink)
	struct FString                                     sKeyBindText;                                             // 0x0048(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgObject.OffhandAnimation
// 0x0014
struct FOffhandAnimation
{
	struct FName                                       m_OffhandUseType;                                         // 0x0000(0x0008)
	struct FName                                       m_AnimName;                                               // 0x0008(0x0008) (Edit)
	unsigned long                                      m_bFullBody : 1;                                          // 0x0010(0x0004) (Edit)
};

// ScriptStruct TgGame.TgObject.RewardInfo
// 0x0018
struct FRewardInfo
{
	int                                                RequestedReward;                                          // 0x0000(0x0004) (Const)
	int                                                BoostReward;                                              // 0x0004(0x0004)
	int                                                ActualReward;                                             // 0x0008(0x0004)
	int                                                ActualRewardAccum;                                        // 0x000C(0x0004)
	int                                                BoostRewardAccum;                                         // 0x0010(0x0004)
	int                                                ErrorMessage;                                             // 0x0014(0x0004)
};

// ScriptStruct TgGame.TgObject.ObjectiveMICInfo
// 0x0014
struct FObjectiveMICInfo
{
	int                                                MyTeam;                                                   // 0x0000(0x0004)
	float                                              AmountFilled;                                             // 0x0004(0x0004)
	int                                                ObjStatus;                                                // 0x0008(0x0004)
	int                                                IsContested;                                              // 0x000C(0x0004)
	int                                                Flip;                                                     // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgAIController.ThreatStruct
// 0x000C
struct FThreatStruct
{
	class AActor*                                      Threatener;                                               // 0x0000(0x0008)
	float                                              fThreat;                                                  // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgPawn.DeviceEquipSlotPair
// 0x0008
struct FDeviceEquipSlotPair
{
	int                                                nDeviceInstanceId;                                        // 0x0000(0x0004)
	int                                                nEquipSlotValueId;                                        // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgPawn.TGEQUIP_SLOTS_STRUCT
// 0x00F8
struct FTGEQUIP_SLOTS_STRUCT
{
	int                                                SlotIndices[0x1F];                                        // 0x0000(0x0004)
	int                                                MiscItems[0x1F];                                          // 0x007C(0x0004)
};

// ScriptStruct TgGame.TgAnimNodeSequenceByBoneRotation.AnimByRotation
// 0x0014
struct FAnimByRotation
{
	struct FRotator                                    DesiredRotation;                                          // 0x0000(0x000C) (Edit)
	struct FName                                       AnimName;                                                 // 0x000C(0x0008) (Edit)
};

// ScriptStruct TgGame.TgAnimNodeShuffle.TrackedShuffleList
// 0x0020
struct FTrackedShuffleList
{
	struct FString                                     m_strIdentifier;                                          // 0x0000(0x0010) (NeedCtorLink)
	TArray<int>                                        m_nShuffledIndexes;                                       // 0x0010(0x0010) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct TgGame.TgCameraModule_Depthzy_Dead.DepthzyDeadCameraSetup
// 0x0010
struct FDepthzyDeadCameraSetup
{
	float                                              m_fZoom;                                                  // 0x0000(0x0004)
	float                                              m_fOffsetZ;                                               // 0x0004(0x0004)
	float                                              m_fPitchMin;                                              // 0x0008(0x0004)
	float                                              m_fPitchMax;                                              // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.InventoryChangeFlags
// 0x0004
struct FInventoryChangeFlags
{
	unsigned long                                      bDevice : 1;                                              // 0x0000(0x0004)
	unsigned long                                      bComponent : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bEquipped : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bDeviceFailed : 1;                                        // 0x0000(0x0004)
};

// ScriptStruct TgGame.TgPlayerController.TG_LAST_PURCHASE
// 0x0008
struct FTG_LAST_PURCHASE
{
	int                                                nItemId;                                                  // 0x0000(0x0004)
	int                                                nCount;                                                   // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgTimerManager.TGT_REG_LINK
// 0x0018
struct FTGT_REG_LINK
{
	struct FPointer                                    NextLink;                                                 // 0x0000(0x0008)
	class UObject*                                     RegObject;                                                // 0x0008(0x0008)
	class UFunction*                                   RegFunction;                                              // 0x0010(0x0008)
};

// ScriptStruct TgGame.TgTimerManager.TgTimerData
// 0x0030
struct FTgTimerData
{
	int                                                nIndex;                                                   // 0x0000(0x0004)
	unsigned char                                      byTimer;                                                  // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              fStartTime;                                               // 0x0008(0x0004)
	float                                              fRemaining;                                               // 0x000C(0x0004)
	float                                              fTimerTimeDilation;                                       // 0x0010(0x0004)
	unsigned long                                      bRepeat : 1;                                              // 0x0014(0x0004)
	unsigned long                                      bPausedByGame : 1;                                        // 0x0014(0x0004)
	struct FTGT_REG_LINK                               CallbackRegistry;                                         // 0x0018(0x0018)
};

// ScriptStruct TgGame.TgDeploy_Yemoja_B01.FractureStageInfo
// 0x0008
struct FFractureStageInfo
{
	unsigned long                                      m_bWarningActivated : 1;                                  // 0x0000(0x0004)
	float                                              m_fTimeToDeploy;                                          // 0x0004(0x0004)
};

// ScriptStruct TgGame.TgDevice_Xbalanque_PoisonDarts.FanInformation
// 0x0010
struct ATgDevice_Xbalanque_PoisonDarts_FFanInformation
{
	int                                                nFiringInstanceId;                                        // 0x0000(0x0004)
	class AActor*                                      HitActor;                                                 // 0x0004(0x0008)
	int                                                nHits;                                                    // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDevice_Jumong_FanOfArrows.FanInformation
// 0x0010
struct ATgDevice_Jumong_FanOfArrows_FFanInformation
{
	int                                                FanId;                                                    // 0x0000(0x0004)
	class AActor*                                      HitActor;                                                 // 0x0004(0x0008)
	int                                                Hits;                                                     // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDevice_Scylla_Num3.TargetFxInfo
// 0x0010
struct FTargetFxInfo
{
	class ATgPawn*                                     Target;                                                   // 0x0000(0x0008)
	class UTgSpecialFx*                                Fx;                                                       // 0x0008(0x0008)
};

// ScriptStruct TgGame.TgDeviceFire_BabaYaga_A01.CircleData
// 0x0028
struct FCircleData
{
	float                                              m_fRadius;                                                // 0x0000(0x0004)
	float                                              m_fMinRadius;                                             // 0x0004(0x0004)
	float                                              m_fOvalScale;                                             // 0x0008(0x0004)
	unsigned long                                      m_bIsOvalLong : 1;                                        // 0x000C(0x0004)
	struct FVector                                     m_vLocation;                                              // 0x0010(0x000C)
	struct FVector                                     m_vForward;                                               // 0x001C(0x000C)
};

// ScriptStruct TgGame.TgDeviceFire_Cerberus_Dev2.ImpactConeHitCount
// 0x007C
struct FImpactConeHitCount
{
	struct FImpactInfo                                 ImpactInfo;                                               // 0x0000(0x0078) (Component)
	int                                                NumConesHit;                                              // 0x0078(0x0004)
};

// ScriptStruct TgGame.TgDeviceFire_Spline.SplineSegmentData
// 0x003C
struct FSplineSegmentData
{
	class AActor*                                      m_aDamageInstigator;                                      // 0x0000(0x0008)
	class UTgDeviceFire*                               m_FireMode;                                               // 0x0008(0x0008)
	struct FVector                                     m_vCurveStart;                                            // 0x0010(0x000C)
	struct FVector                                     m_vStart;                                                 // 0x001C(0x000C)
	struct FVector                                     m_vEnd;                                                   // 0x0028(0x000C)
	float                                              m_fExtentRadius;                                          // 0x0034(0x0004)
	unsigned long                                      m_bPredicting : 1;                                        // 0x0038(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_Player.AdditionalCalculateHudParams
// 0x0010
struct FAdditionalCalculateHudParams
{
	class ATgRepInfo_TaskForce*                        LocalPCTaskForce;                                         // 0x0000(0x0008)
	unsigned long                                      bIsSpectating : 1;                                        // 0x0008(0x0004)
	unsigned long                                      bPlayerHasTgEffectForm_Xbalanque_ApocalypseShroud : 1;    // 0x0008(0x0004)
	float                                              FOVAngle;                                                 // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgDeviceVolume_Moveable.DVMHitTimeStamp
// 0x000C
struct FDVMHitTimeStamp
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008)
	float                                              fTimestamp;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgGame_Mission.XPTrackingEntry
// 0x000C
struct FXPTrackingEntry
{
	class AController*                                 ControllerEntry;                                          // 0x0000(0x0008)
	float                                              fCurrentXp;                                               // 0x0008(0x0004)
};

// ScriptStruct TgGame.TgGame_Mission.XPTrackingList
// 0x0014
struct FXPTrackingList
{
	TArray<struct FXPTrackingEntry>                    XPList;                                                   // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	int                                                nTaskForce;                                               // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgInterpolatingCameraActor.InterpolatingCameraInfo
// 0x0040
struct FInterpolatingCameraInfo
{
	unsigned long                                      m_bInterpLocation : 1;                                    // 0x0000(0x0004) (Edit)
	unsigned long                                      m_bInterpRotation : 1;                                    // 0x0000(0x0004) (Edit)
	unsigned long                                      m_bInterpFOVAngle : 1;                                    // 0x0000(0x0004) (Edit)
	struct FVector                                     m_BaseLocation;                                           // 0x0004(0x000C) (Edit)
	struct FVector                                     m_TargetLocation;                                         // 0x0010(0x000C) (Edit)
	struct FRotator                                    m_BaseRotation;                                           // 0x001C(0x000C) (Edit)
	struct FRotator                                    m_TargetRotation;                                         // 0x0028(0x000C) (Edit)
	float                                              m_fBaseFOVAngle;                                          // 0x0034(0x0004) (Edit)
	float                                              m_fTargetFOVAngle;                                        // 0x0038(0x0004) (Edit)
	float                                              m_fInterpSpeed;                                           // 0x003C(0x0004) (Edit)
};

// ScriptStruct TgGame.TgInventoryObject.sInventoryReq
// 0x0010
struct FsInventoryReq
{
	unsigned long                                      m_bLevelFail : 1;                                         // 0x0000(0x0004)
	unsigned long                                      m_bSkillFail : 1;                                         // 0x0000(0x0004)
	int                                                m_nSkillLevelReq;                                         // 0x0004(0x0004)
	int                                                m_nSkillIdReq;                                            // 0x0008(0x0004)
	unsigned long                                      m_bFlairFail : 1;                                         // 0x000C(0x0004)
	unsigned long                                      m_bLocationFail : 1;                                      // 0x000C(0x0004)
};

// ScriptStruct TgGame.TgMinimapManager.MiniMapServerEntity
// 0x005C
struct FMiniMapServerEntity
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
	int                                                nIdx;                                                     // 0x002C(0x0004)
	unsigned long                                      bMarked : 1;                                              // 0x0030(0x0004)
	unsigned char                                      bVisibleOnMap;                                            // 0x0034(0x0001)
	unsigned char                                      bVisibleBySentinel;                                       // 0x0035(0x0001)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	unsigned long                                      bVisibleByDetector : 1;                                   // 0x0038(0x0004)
	float                                              fLastPingTime;                                            // 0x003C(0x0004)
	unsigned long                                      bRequireLOS : 1;                                          // 0x0040(0x0004)
	unsigned long                                      bDetector : 1;                                            // 0x0040(0x0004)
	unsigned long                                      bSentinel : 1;                                            // 0x0040(0x0004)
	unsigned char                                      byVisionMask;                                             // 0x0044(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              fHealthPCT;                                               // 0x0048(0x0004)
	float                                              fTimerPCT;                                                // 0x004C(0x0004)
	class AActor*                                      FogOfWarArea;                                             // 0x0050(0x0008)
	unsigned long                                      FogOfWarAreaRevealed : 1;                                 // 0x0058(0x0004)
};

// ScriptStruct TgGame.TgRepInfo_TaskForce.sPredefinedLevelDeployInfo
// 0x0010
struct FsPredefinedLevelDeployInfo
{
	int                                                m_Id;                                                     // 0x0000(0x0004)
	struct FVector                                     m_Location;                                               // 0x0004(0x000C)
};

// ScriptStruct TgGame.TgSpecialFxLightManager.TgFxLight
// 0x0014
struct FTgFxLight
{
	struct FPointer                                    m_FxEmitter;                                              // 0x0000(0x0008)
	class UTgSpecialFx*                                m_OwnerSpecialFx;                                         // 0x0008(0x0008)
	float                                              m_Score;                                                  // 0x0010(0x0004)
};

// ScriptStruct TgGame.TgTitanForgeTools.TgReplicatedBool
// 0x0004
struct FTgReplicatedBool
{
	int                                                r_nTruthVal;                                              // 0x0000(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
