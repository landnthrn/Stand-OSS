#pragma once

#include <soup/tunables.hpp>

// shop_controller

inline SOUP_TUNABLE(uint32_t, GLOBAL_UNK_GAME_STATE_XMAS) =									33776; // return 739;

// am_contact_requests

inline SOUP_TUNABLE(uint32_t, GLOBAL_CONTACT_TIMEOUT) =										2686090 + 4356 + 257;
inline SOUP_TUNABLE(uint32_t, GLOBAL_CONTACT_TIMEOUT_SIZE) =								2;
inline SOUP_TUNABLE(uint32_t, GLOBAL_CONTACT_TIMEOUT_MECHANIC) =							7;

// freemode

#pragma region Broadcast Data
#define GPBD_FM_2 1882572
#define GPBD_Interactions 4514608
#define GPBD_FM 1845250
#define GPBD_MissionName 1873411
#define GPBD_Kicking 1873924
#define GPBD_SCTV 1927920
#define GPBD_FM_HeistPlanning 1877158
#define g_AMC_playerBD 2700170
#define GPBD_FM_3 1892653
#define GlobalplayerBD 2658291
#define GPBD_FM_4 1912395
#define GSBD 2649159
#define GSBD_BlockB 2650423
#define GSBD_BlockC 2652579
#define GSBD_MissionsShared 2625811
#define GSBD_MissionRequest 2655290
#define GSBD_MissionList 2655947
#define GSBD_ExclusionAreas 2656157
#define GSBD_ActivitySelector 2656382
#define GSBD_Betting 2657304
#define GSBD_HoldUp 2657885
#define GSBD_SyncedInteractions 4515281
#define GSBD_FM 1835511
#define GSBD_Kicking 1877125
#define GSBD_HeistPlanning 1935536
#define GSBD_PropertyInstances 1943442
#define GSBD_FM_events 1922477
#define GSBD_FM_events2 2658056
#define GPBD_CasinoHeist 1976315
#define GSBD_RandomEvents 1882120
#define GPBD_HeistIsland 1980733
#define GPBD_NetHeistPlanningGeneric 1979868
#define GPBD_Flow 1983167
#pragma endregion Broadcast Data

#define GlobalServerBD_FM GSBD_FM

inline SOUP_TUNABLE(uint32_t, GLOBAL_ATOMIZER_XMAS_TINT) =									104869;			// (joaat("component_raypistol_varmod_xmas18"), joaat("weapon_raypistol"), -1)
inline SOUP_TUNABLE(uint32_t, GLOBAL_PRIVATE_SESSION_OFFSET) =								746; // NETWORK::NETWORK_SESSION_GET_PRIVATE_SLOTS() > 0
#define GLOBAL_PRIVATE_SESSION																g_sTransitionSessionData + GLOBAL_PRIVATE_SESSION_OFFSET
inline SOUP_TUNABLE(uint32_t, GLOBAL_TRANSITION_STATE) =									1575018;			// NETWORK::NETWORK_TRANSITION_ADD_STAGE(iVar2
inline SOUP_TUNABLE(uint32_t, GLOBAL_DISABLE_DRIPFEED) =									2708544;

#define GLOBAL_NEW_SESSION_UNK1 GLOBAL_UNK_GAME_STATE_XMAS
inline SOUP_TUNABLE(uint32_t, GLOBAL_NEW_SESSION_UNK2) =									1574630;
inline SOUP_TUNABLE(uint32_t, GLOBAL_NEW_SESSION_UNK3) =									1575037;
inline SOUP_TUNABLE(uint32_t, GLOBAL_NEW_SESSION_SCTV) =									2698539;

inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_UNKBETTINGIDX) =							97 + 28;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_CONTROL_TYPE) =							97 + 29;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_GANGCALLOWNER) =							/* iGangCallOwnerBitset */ 141;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_GANGCALLTARGET) =							/* iGangCallTargetID */ 142;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_GANGCALLSEENRUNNING) =						/* iGangCallSeenRunning */ 143;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_RP) =										198 + 1;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_RANK) =									198 + 6;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_WALLET) =									198 + 3;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_KD) =										198 + 26;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_KILLS) =									198 + 28;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_DEATHS) =									198 + 29;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_FAVOURITE_STATION) =						198 + 53; // mpply_most_favorite_station
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_PROSTITUTES_FREQUENTED) =					198 + 54;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_LAP_DANCES_BOUGHT) =						198 + 55;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_MONEY) =									198 + 56;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_FAVOURITE_VEHICLE) =						198 + 58;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_FAVOURITE_WEAPON) =						198 + 59;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_APTID) =									260 + 39; // bParam0, bParam1, 1, 0) && !
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_BUNKER_ID_BASE) =							260 + 205; // [5 /*13*/]
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_BUNKER_ID_SIZE) =							13;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_BUNKER_ID_OFFSET) =						5;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_FACILITY_ID) =								260 + 310; // 0 if none owned
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_NIGHTCLUB_ID) =							260 + 364; // CLUB_PAY_MAX

inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_VEHBITSET1) =								260 + 376;		// == 646)
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_VEHBITSET1_RCBANDITO) =					29;

inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_VEHBITSET2) =								260 + 439 + 2;	// == 742)
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_VEHBITSET2_MINITANK) =						16;

inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_VEHBITSET3) =								260 + 439 + 3;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYER_STAT_VEHBITSET3_RCPV) =							6;

inline SOUP_TUNABLE(uint32_t, g_events_sGBWorkData) =										11;
inline SOUP_TUNABLE(uint32_t, g_events_sGBWorkData_iModelHideBitset) =						392;
inline SOUP_TUNABLE(uint32_t, eMH_MODEL_HIDE_BITSET_CrashSite2_activate_weather) =			9;

inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_netID_PV) =								38;		// VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(iVar7) != 0)
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_BLIP) =									76;		// == 122 || Global_
#define GLOBAL_PLAYERSTATUS2_OTRBITSET GLOBAL_PLAYERSTATUS2_BLIP + 2
#define GLOBAL_PLAYERSTATUS2_BLIPVEHTYPE GLOBAL_PLAYERSTATUS2_BLIP + 3
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_OTR1) =									/* bOffTheRadar */ 214; // GB_PIM_GHOST
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_interiorCurrent) =						249;		// INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != Global_
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_iCurrentShop) =							250;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_iCurrentHoldUp) =						251;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_MENTALSTATE) =							272;		// (133, fVar1, -1, 1);
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_SPECTATING) =							273;		// mpply_can_spectate
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_INT_ID) =								325 + 8;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_INT_INST) =								325 + 9;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_BITSET1) =								429;		// ORB_REMOT2
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_BITSET1_ORBITALKIL) =					0;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_CAYOPERICOFLAGS) =						447;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_IMANI_OUTOFSIGHT_FLAGS) =				461;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS2_IMANI_OUTOFSIGHT_POS) =					462;

inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_BOSS) =											0;
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_FLAGS) =											4;
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_MEMBERS) =											12;
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_NEXT_BOSS) =										27;
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_MISSION) =											33;
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_bossLimo) =										76; // != 0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_NAME) =											106; // see below
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_LANG) =											122; //  = LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_BANNED_SINCE) =									182; // mpply_vipgameplaydisabledtimer
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_MHBITSET) = /* iModelHideBitset */					206;
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_NAME_CEO_COPY) =									343;
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_NAME_MC_COPY) =									359;
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_TYPE) =											433; // -1 = none, 0 = org, 1 = mc // "Player_Goon"
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_TYPE_COPY) =										470;

inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_FLAGS_INVITEACCEPTED) =							7;
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_FLAGS_NOVOTEKICK3) =								9;
inline SOUP_TUNABLE(uint32_t, GLOBAL_ORG_FLAGS_NOVOTEKICK4) =								20;

#define GLOBAL_CEO_COLOUR_TO_SLOT															GLOBAL_CEO_COLOURS_BASE + 0
#define GLOBAL_CEO_COLOUR_BOSS_TO_SLOT														GLOBAL_CEO_COLOURS_BASE + 11
#define GLOBAL_CEO_COLOUR_SLOTS																GLOBAL_CEO_COLOURS_BASE + 44
inline SOUP_TUNABLE(uint32_t, GLOBAL_CEO_COLOUR_SLOTS_SIZE) =								2;
inline SOUP_TUNABLE(uint32_t, GLOBAL_CEO_COLOUR_SLOT_BOSS) =								0;
inline SOUP_TUNABLE(uint32_t, GLOBAL_CEO_COLOUR_SLOT_COLOUR) =								1;

inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS1_MPINFOSTATE) =							68;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS1_TAG) =									241 + 136; // SET_MP_GAMER_TAG_VISIBILITY
inline SOUP_TUNABLE(uint32_t, GLOBAL_PLAYERSTATUS1_TAG_TYPING) =							16;

inline SOUP_TUNABLE(uint32_t, GLOBAL_LEAVE_ORG_OFFSET) =									3988 + 226; // "GBTER_BIG", global being set to 6
#define GLOBAL_LEAVE_ORG																	MPGlobalsAmbience + GLOBAL_LEAVE_ORG_OFFSET

inline SOUP_TUNABLE(uint32_t, GLOBAL_RESPAWN_BITSET) =										/* GLOBAL_RESPAWN_DATA + */ 756; // SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("TimerBars");

inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_PLATE_STYLE) =										0;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_PLATE_TEXT) =										1;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_PRIMARY_COLOUR) =									5;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_SECONDARY_COLOUR) =								6;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_PEARL_COLOUR) =									7;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_WHEEL_COLOUR) =									8;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_MODS_ARR) =										9;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_MODS_VAR_ARR) =									59;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_MODS_VAR_CUSTOM_FRONT_TYRES) =						0;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_MODS_VAR_CUSTOM_BACK_TYRES) =						1;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_TYRE_SMOKE_R) =									62;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_TYRE_SMOKE_G) =									63;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_TYRE_SMOKE_B) =									64;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_WINDOW_TINT) =										65;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_MODEL) =											66;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_WHEEL_TYPE) =										69;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_CUSTOM_R) =										71;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_CUSTOM_G) =										72;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_CUSTOM_B) =										73;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_NEON_R) =											74;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_NEON_G) =											75;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_NEON_B) =											76;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_FLAGS) =											77;

inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_FLAGS_CUSTOM_PRIMARY_COLOUR) =						13;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_FLAGS_CUSTOM_SECONDARY_COLOUR) =					12;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_FLAGS_NEON_FRONT) =								28;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_FLAGS_NEON_BACK) =									29;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_FLAGS_NEON_LEFT) =									30;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_FLAGS_NEON_RIGHT) =								31;

inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_ENVEFF_SCALE) =									80;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_INTERIOR_COLOUR) =									97;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_ROOF_LIVERY) =										98;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_DASHBOARD_COLOUR) =								99;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_TYRES_MODE) =										102;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_INSURANCE) =										/* iVehicleBS */ 104;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_INSURANCE_OUT_GARAGE) =							/* MP_SAVED_VEHICLE_OUT_GARAGE */ 0;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_INSURANCE_DESTROYED) =								/* MP_SAVED_VEHICLE_DESTROYED */ 1;
inline SOUP_TUNABLE(uint32_t, GLOBAL_PVS_INSURANCE_INSURED) =								/* MP_SAVED_VEHICLE_INSURED */ 2;

inline SOUP_TUNABLE(uint32_t, GLOBAL_FMBNR_SIZE) =											80;
inline SOUP_TUNABLE(uint32_t, GLOBAL_FMBNR_STYLE) =											1;
inline SOUP_TUNABLE(uint32_t, GLOBAL_FMBNR_STATE) =											2;
inline SOUP_TUNABLE(uint32_t, GLOBAL_FMBNR_HEADLINE) =										21;
inline SOUP_TUNABLE(uint32_t, GLOBAL_FMBNR_SUBTEXT) =										8;
inline SOUP_TUNABLE(uint32_t, GLOBAL_FMBNR_CUSTOMTEXT_1) =									25;
inline SOUP_TUNABLE(uint32_t, GLOBAL_FMBNR_CUSTOMTEXT_2) =									61;
inline SOUP_TUNABLE(uint32_t, GLOBAL_FMBNR_CUSTOMTEXT_3) =									57;
inline SOUP_TUNABLE(uint32_t, GLOBAL_FMBNR_CUSTOMINT_1) =									3;
inline SOUP_TUNABLE(uint32_t, GLOBAL_FMBNR_CUSTOMINT_2) =									5;
inline SOUP_TUNABLE(uint32_t, GLOBAL_FMBNR_PLAYER_1) =										17;

inline SOUP_TUNABLE(uint32_t, iGangCallCurrentOwnerPlayer) =								106;
inline SOUP_TUNABLE(uint32_t, iGangCallCurrentTargetPlayer) =								109;

#define GlobalServerBD_FM_currentBounties													GlobalServerBD_FM + 4
inline SOUP_TUNABLE(uint32_t, GlobalServerBD_FM_currentBounties_size) =						3;

// g_savedMPGlobalsNew.g_savedMPGlobals[GET_SAVE_GAME_ARRAY_SLOT()]
// Array size doesn't matter because we go into slot 0
inline SOUP_TUNABLE(uint32_t, GLOBAL_SAVE_GAME_ARRAY_SLOT) =								2359296 + 1;
inline SOUP_TUNABLE(uint32_t, GLOBAL_MOST_RECENT_PV_INDEX_OFFSET) =							681 + 2; // && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1)))
#define GLOBAL_MOST_RECENT_PV_INDEX															GLOBAL_SAVE_GAME_ARRAY_SLOT + GLOBAL_MOST_RECENT_PV_INDEX_OFFSET
inline SOUP_TUNABLE(uint32_t, GLOBAL_BOUNTY_TIME_ELAPSED_OFFSET) =							5156 + 13; // >= 2880000)
#define GLOBAL_BOUNTY_TIME_ELAPSED															GLOBAL_SAVE_GAME_ARRAY_SLOT + GLOBAL_BOUNTY_TIME_ELAPSED_OFFSET

inline SOUP_TUNABLE(uint32_t, GSBD_FM_IMPORTANT_ARRAY_OFFSET) =								410 + 4; // GET_RANDOM_INT_IN_RANGE(1, 1000);
#define GSBD_FM_IMPORTANT_ARRAY GSBD_FM + GSBD_FM_IMPORTANT_ARRAY_OFFSET

inline SOUP_TUNABLE(uint32_t, GLOBAL_INTERACT_SIZE) =										19;
inline SOUP_TUNABLE(uint32_t, GLOBAL_INTERACT_iSceneId) =									3;

inline SOUP_TUNABLE(uint32_t, GPBD_FM_4_SIZE) =												315;
inline SOUP_TUNABLE(uint32_t, GPBD_FM_4_PICKUP_REQUESTS) =									102 + 21; // = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
inline SOUP_TUNABLE(uint32_t, GPBD_FM_4_PICKUP_REQUESTS_SIZE) =								14;

// am_pi_menu

inline SOUP_TUNABLE(uint32_t, GLOBAL_MP_PI_OPEN_OFFSET) =									1023 + 6; // GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPInteraction", false);
#define GLOBAL_MP_PI_OPEN																	MPGlobals + GLOBAL_MP_PI_OPEN_OFFSET
inline SOUP_TUNABLE(uint32_t, GLOBAL_AM_PI_MENU_SUBMENU_CEO) =								27;			// PI_BIK_0_0_Wx1
inline SOUP_TUNABLE(uint32_t, GLOBAL_AM_PI_MENU_SUBMENU_MC) =								54;			// PI_BIK_0_0_Wx2

// appimportexport

inline SOUP_TUNABLE(uint32_t, GLOBAL_VEHICLE_EXPORT_COOLDOWN_OFFSET) =						51; // "SHOW_EXPORT_SCREEN"
#define GLOBAL_VEHICLE_EXPORT_COOLDOWN														GLOBAL_VIP_COOLDOWNS + GLOBAL_VEHICLE_EXPORT_COOLDOWN_OFFSET

// am_mp_drone

inline SOUP_TUNABLE(uint32_t, GLOBAL_NANO_DRONE) =											1964145; //  == 0f)
inline SOUP_TUNABLE(uint32_t, GLOBAL_NANO_DRONE_RANGE_LIMIT) =								11;

#pragma region ScrUpdate
// maintransition
#define g_SpawnData 2635562
#define g_SpawnData_bDontAskPermission g_SpawnData + 2998
#define GLOBAL_MAINTRANSID 1677452
#define g_TransitionSpawnData 2640098
#define g_TransitionSpawnData_bIgnoreSpawnActivity g_TransitionSpawnData + 18
#define g_sTransitionSessionData 2685150
#define g_sTransitionSessionData_bFmmcLauncherReady g_sTransitionSessionData + 851
#define GLOBAL_NEW_SESSION 1574589
#define GLOBAL_NEW_SESSION_QUIT_TO_SP GLOBAL_NEW_SESSION + 2
#define GLOBAL_CURRENT_SESSION_TYPE 1575043
#define GLOBAL_NEW_SESSION_TYPE GLOBAL_CURRENT_SESSION_TYPE - 1
#define GLOBAL_TRANS_SWITCH_1 1574634
#define GLOBAL_TRANS_SWITCH_2 18
#define GLOBAL_TRANS_SWITCH GLOBAL_TRANS_SWITCH_1 + GLOBAL_TRANS_SWITCH_2
#define GLOBAL_TRANS_CHECK_BYPASS_1 1574656
#define GLOBAL_TRANS_CHECK_BYPASS_2 6
#define GLOBAL_TRANS_CHECK_BYPASS GLOBAL_TRANS_CHECK_BYPASS_1 + GLOBAL_TRANS_CHECK_BYPASS_2
#define GLOBAL_TRANS_FLAGS 2621446
#define GLOBAL_MP_WORLD_STATE 2698693
#define MPGlobalsAmbience_g_bDoorsInited MPGlobalsAmbience + 3696
// am_launcher
#define GLOBAL_AM_LAUNCHER_HOST_DATA 2699984
// am_vehicle_spawn
#define GLOBAL_RECLAIM_DISABLED 1836700
// dialogue_handler
#define GLOBAL_DIAL_TIME 24004
// shop_controller
#define GLOBAL_SP_DESPAWN_BYPASS 4520961
// cellphone_controller
#define GLOBAL_INPUT_PHONE 21577
#define GLOBAL_DISABLE_PHONE 21593
// pi_menu
#define GLOBAL_SP_PI_OPEN 113851
// ingamehud
#define GLOBAL_LOADING_HINT 1576345
// social_controller
#define GLOBAL_AC_BAIL 111601
// timershud
#define GLOBAL_TIMERS 1679103
#define GLOBAL_TIMERS_BI_OFFSET 1163
// freemode
#define GLOBAL_PLAYERREMOTE_BASE /* GPBD_FM_3 */ 1892653
#define GLOBAL_PLAYERREMOTE_SIZE 615
#define GLOBAL_PLAYERREMOTE_BITSET1 1
#define GLOBAL_PLAYERREMOTE_BITSET1_NOVOTEKICK1 0 // Static
#define GLOBAL_PLAYERREMOTE_BITSET1_NOVOTEKICK2 7 // Static
#define GLOBAL_PLAYERREMOTE_ORG 10 // Static
#define GLOBAL_PLAYERREMOTE_SEVERIFY 517
#define GLOBAL_NEW_INVITES 24046
#define GLOBAL_CHAR_SLOT 1574927
#define GLOBAL_VIP_COOLDOWNS 2710963
#define GLOBAL_PASSIVE_KILL_COOLDOWN 1971755
#define GLOBAL_MKII_COOLDOWN 2712160
#define GLOBAL_VOTE_KICK_DATA_BASE 1873924
#define GLOBAL_VOTE_KICK_DATA_SIZE 100
#define GLOBAL_VOTE_KICKED 1877125
#define GLOBAL_VOTE_KICKED_DATA_SIZE 1
#define GLOBAL_DISABLE_VEHICLE_FOCUS 1579265
#define GLOBAL_CLAN_DESCS 1575123
#define GLOBAL_CLAN_DESCS_DATA_SIZE 35
#define GLOBAL_GIVE_WEAPONS 1576473
#define GLOBAL_BLIPS 2647282
#define GLOBAL_FADEOUTDEADBLIP GLOBAL_BLIPS + 373
#define GLOBAL_BLIPSTAGGERCOUNT GLOBAL_BLIPS + 1542
#define GLOBAL_BIGMAP GLOBAL_BLIPS + 1593
#define g_SimpleInteriorData 1950198
#define GLOBAL_LEAVE_INTERIOR g_SimpleInteriorData + 3977
#define GLOBAL_NEW_SESSION_UNK4 1575017
#define GLOBAL_PLAYER_STAT_BASE /* GlobalplayerBD_FM */ 1845250
#define GLOBAL_PLAYER_STAT_SIZE 880
#define GlobalServerBD_FM_events 1922477
#define GLOBAL_SEVERIFY GlobalServerBD_FM_events
#define GLOBAL_PLAYERSTATUS2_BASE /* GlobalplayerBD */ 2658291
#define GLOBAL_PLAYERSTATUS2_SIZE 468
#define GLOBAL_CEO_COLOURS_BASE GSBD + 818
#define GLOBAL_PLAYERSTATUS1_BASE 1677542
#define GLOBAL_IDLE_TIMER_1 1576370
#define GLOBAL_IDLE_TIMER_2 GLOBAL_PLAYERSTATUS1_BASE + 1158
#define GLOBAL_IDLE_TIMER_3 GLOBAL_PLAYERSTATUS1_BASE + 1174
#define GLOBAL_IDLE_TIMER_4 2699662
#define MPGlobalsAmbience 2733002
#define GLOBAL_PEGASUS_VEHICLE MPGlobalsAmbience + 307
#define GLOBAL_AM_AMMO_DROP MPGlobalsAmbience + 538
#define GLOBAL_AM_BOAT_TAXI MPGlobalsAmbience + 539
#define GLOBAL_AM_HELI_TAXI MPGlobalsAmbience + 540
#define MPGlobalsAmbience_bLaunchVehicleDropPersonal MPGlobalsAmbience + 575
#define MPGlobalsAmbience_iVDPersonalVehicleSlot MPGlobalsAmbience + 638
#define MPGlobalsAmbience_bRequestedByOfficePA MPGlobalsAmbience + 642
#define MPGlobalsAmbience_iPVSlotOfficePA MPGlobalsAmbience + 645
#define GLOBAL_AM_BACKUP_HELI MPGlobalsAmbience + 3578
#define GLOBAL_AM_AIRSTRIKE MPGlobalsAmbience + 3579
#define GLOBAL_PASSIVE_COOLDOWN MPGlobalsAmbience + 3586
#define GLOBAL_EVENT_AUDIO_TRIGGERS MPGlobalsAmbience + 3822
#define GLOBAL_EWO_COOLDOWN MPGlobalsAmbience + 5846
#define GLOBAL_DISABLE_DEATH_BARRIERS MPGlobalsAmbience + 5829
#define GLOBAL_RC_PV_MODEL MPGlobalsAmbience + 5842
#define MPGlobals 2673271
#define GLOBAL_PLAYERS_JOINED_BITSET MPGlobals + 1
#define GLOBAL_OTRDEADLINE1 MPGlobals + 58
#define GLOBAL_OTRDEADLINE2 MPGlobals + 60
#define GLOBAL_PV_BLIP MPGlobals + 63
#define GLOBAL_PLAYER_PEGASUS_VEHICLE MPGlobals + 231
#define GLOBAL_RESPAWN_DATA MPGlobals + 1762
#define GLOBAL_FMBNR_BASE MPGlobals + 2591
#define GLOBAL_BST MPGlobals + 3768
#define GLOBAL_PVS 1583765
#define GLOBAL_PVS_ELMSIZE 143
#define g_MPRestrictedInteriorAccessData 1955751
#define g_MPRestrictedInteriorAccessData_iKickOutFromRestrictedInteriorBS g_MPRestrictedInteriorAccessData + 45
#define GLOBAL_BLOCK_C_IMPORTANT_ARRAY GSBD_BlockC + 1485
#define GlobalServerBD_BlockC_g_iAssignedCarMeetParkingSpots GSBD_BlockC + 2669
#define GLOBAL_LBD_PLAYER_COUNT 1836465
// am_pi_menu
#define GLOBAL_AM_PI_MENU_SUBMENU 2712074
#define GLOBAL_AM_PI_MENU_OPTION_ENABLED 2712075
// am_heli_taxi
#define MPGlobalsAmbience_iRequestedHeliByPA MPGlobalsAmbience + 547
// am_mp_drone
#define GLOBAL_NANO_DRONE_NET_TIMER 1964107
#pragma endregion ScrUpdate

#define GLOBAL_TUNABLE_BASE 262145

#pragma region ScriptGenie_Tunables
#define GLOBAL_TUNABLE_VOTE_KICKS_MULTIPLIER 6
#define GLOBAL_DISABLE_PV_INSURANCE_PAY GLOBAL_TUNABLE_BASE + 137
#define GLOBAL_TUNABLE_SNOW 4413
#define GLOBAL_TUNABLE_LESTER_BOUNTY_CUT 7262
#define GLOBAL_TUNABLE_WARMUP_CHALLENGES 11587
#define GLOBAL_TUNABLE_WARMUP_CRIMINAL_DAMAGE 11763
#define GLOBAL_ORBITAL_CANNON_COOLDOWN 22821
#define GLOBAL_TUNABLE_ALLOW_WEAPONIZED_VEHICLES_IN_PASSIVE_MODE 26820
#define GLOBAL_TUNABLE_LUCKY_WHEEL_ODDS_BASE 26481
#define GLOBAL_TUNABLE_LUCKY_WHEEL_ODDS_2_BASE 26501
#define GLOBAL_TUNABLE_LUCKY_WHEEL_ENABLE_REWARD_BASE 26587
#define GLOBAL_TUNABLE_PEYOTES 26771
#define GLOBAL_TUNABLE_DISABLE_DLC_INTRO_MOVIE 29675
#define GLOBAL_TUNABLE_CARMEET_REP_8_AMOUNT 30953
#define GLOBAL_TUNABLE_CARMEET_REP_8_MULTIPLIER 31055
#define GLOBAL_TUNABLE_BB_TERRORBYTE_DRONE_HEIGHT_LIMIT 24330
#define GLOBAL_KICK_OUT_OF_NIGHTCLUB_WHEN_ARMED GLOBAL_TUNABLE_BASE + 23932
#define GLOBAL_PASSIVE_EXIT_COOLDOWN GLOBAL_TUNABLE_BASE + 26823
#define GLOBAL_KOSATKA_MISSILE_COOLDOWN GLOBAL_TUNABLE_BASE + 29723
#define GLOBAL_KOSATKA_MISSILE_MAX_DISTANCE GLOBAL_TUNABLE_BASE + 29724
#define GLOBAL_CASINO_MAX_LOSS GLOBAL_TUNABLE_BASE + 26827

#define GLOBAL_ENABLE_HEIST_MASKS_HALLOWEEN 12109
#define GLOBAL_TURN_ON_HALLOWEEN_VEHICLES 12114
#define GLOBAL_TURN_ON_HALLOWEEN_MASKS 12115
#define GLOBAL_TURN_ON_HALLOWEEN_FACEPAINT 12116
#define GLOBAL_TURN_ON_HALLOWEEN_BOBBLEHEADS 12118
#define GLOBAL_TURN_ON_HALLOWEEN_CLOTHING 12124
#define GLOBAL_TURN_ON_HALLOWEEN_WEAPONS 12125
#define GLOBAL_TURN_ON_HALLOWEEN_HORNS 12126
#define GLOBAL_ENABLE_BIKER_SANCTUS 17455
#pragma endregion ScriptGenie_Tunables

#define REPORT_OFFTHREAD_SG_WRITE false

#include <functional>

#include <soup/Pointerlike.hpp>

namespace Stand
{
#if REPORT_OFFTHREAD_SG_WRITE
	inline thread_local bool g_sgtamper_readonly = false;
#endif

	inline void beginBadSgTamperCodeThatWillLandUsInHell()
	{
#if REPORT_OFFTHREAD_SG_WRITE
		g_sgtamper_readonly = true;
#endif
	}

	inline void endBadSgTamperCodeThatWillLandUsInHell()
	{
#if REPORT_OFFTHREAD_SG_WRITE
		g_sgtamper_readonly = false;
#endif
	}

	class ScriptGlobal : public soup::Pointerlike<ScriptGlobal>
	{
	private:
		uint32_t m_offset;

	public:
		explicit constexpr ScriptGlobal(uint32_t offset) noexcept
			: m_offset(offset)
		{
		}

		constexpr uint32_t offset() const noexcept
		{
			return m_offset;
		}

		[[nodiscard]] bool isAvailable() const noexcept;

		void* addr() const noexcept;

#if REPORT_OFFTHREAD_SG_WRITE
		template <typename T>
		[[nodiscard]] constexpr std::enable_if_t<!std::is_pointer_v<T>, T> get() const noexcept
		{
			g_sgtamper_readonly = true;
			T ret = *as<T*>();
			g_sgtamper_readonly = false;
			return ret;
		}

		template <typename T>
		[[nodiscard]] constexpr std::enable_if_t<std::is_pointer_v<T>&& std::is_const_v<std::remove_pointer_t<T>>, T> get() const noexcept
		{
			g_sgtamper_readonly = true;
			T ret = as<T>();
			g_sgtamper_readonly = false;
			return ret;
		}
#endif

		constexpr ScriptGlobal at(uint32_t a) const noexcept
		{
			return ScriptGlobal(offset() + a);
		}

		constexpr ScriptGlobal at(uint32_t i, uint32_t elm_size) const noexcept
		{
			return at(1 + (i * elm_size));
		}

		void iterate(uint32_t elm_size, const std::function<void(uint32_t, ScriptGlobal&&)>& consumer) const;

		[[nodiscard]] static uint32_t addrToOffset(void* addr);
	};
}
