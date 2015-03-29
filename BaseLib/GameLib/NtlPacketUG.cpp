#include "stdafx.h"
#include "NtlPacketUG.h"

const char * s_packetName_UG[] =
{
	DECLARE_PACKET_NAME( UG_PING ),
	DECLARE_PACKET_NAME( UG_GAME_ENTER_REQ ),
	DECLARE_PACKET_NAME( UG_GAME_LEAVE_REQ ),
	DECLARE_PACKET_NAME( UG_AUTH_KEY_FOR_COMMUNITY_SERVER_REQ ),
	DECLARE_PACKET_NAME( UG_ENTER_WORLD ),
	DECLARE_PACKET_NAME( UG_SERVER_COMMAND ),

	DECLARE_PACKET_NAME( UG_CHAR_READY_FOR_COMMUNITY_SERVER_NFY ),
	DECLARE_PACKET_NAME( UG_CHAR_READY_TO_SPAWN ),
	DECLARE_PACKET_NAME( UG_CHAR_READY ),
	DECLARE_PACKET_NAME( UG_CHAR_MOVE ),
	DECLARE_PACKET_NAME( UG_CHAR_DEST_MOVE ),
	DECLARE_PACKET_NAME( UG_CHAR_CHANGE_HEADING ),
	DECLARE_PACKET_NAME( UG_CHAR_MOVE_SYNC ),
	DECLARE_PACKET_NAME( UG_CHAR_CHANGE_DIRECTION_ON_FLOATING ),
	DECLARE_PACKET_NAME( UG_CHAR_FOLLOW_MOVE ),
	DECLARE_PACKET_NAME( UG_CHAR_DASH_KEYBOARD ),
	DECLARE_PACKET_NAME( UG_CHAR_DASH_MOUSE ),
	DECLARE_PACKET_NAME( UG_CHAR_JUMP ),
	DECLARE_PACKET_NAME( UG_CHAR_JUMP_END ),
	DECLARE_PACKET_NAME( UG_CHAR_FALLING ),
	DECLARE_PACKET_NAME( UG_CHAR_TOGG_SITDOWN ),
	DECLARE_PACKET_NAME( UG_CHAR_TOGG_FIGHTING ),
	DECLARE_PACKET_NAME( UG_CHAR_TOGG_RUNNING ),
	DECLARE_PACKET_NAME( UG_CHAR_TARGET_SELECT ),
	DECLARE_PACKET_NAME( UG_CHAR_TARGET_INFO ),
	DECLARE_PACKET_NAME( UG_CHAR_TARGET_FACING ),
	DECLARE_PACKET_NAME( UG_CHAR_ATTACK_BEGIN ),
	DECLARE_PACKET_NAME( UG_CHAR_ATTACK_END ),
	DECLARE_PACKET_NAME( UG_CHAR_CHARGE ),
	DECLARE_PACKET_NAME( UG_CHAR_BLOCK_MODE ),
	DECLARE_PACKET_NAME( UG_CHAR_TELEPORT_REQ ),
	DECLARE_PACKET_NAME( UG_CHAR_BIND_REQ ),
	DECLARE_PACKET_NAME( UG_CHAR_REVIVAL_REQ ),								// ��Ȱ ��û
	DECLARE_PACKET_NAME( UG_CHAR_SERVER_CHANGE_REQ ),
	DECLARE_PACKET_NAME( UG_CHAR_CHANNEL_CHANGE_REQ ),
	DECLARE_PACKET_NAME( UG_CHAR_EXIT_REQ ),
	DECLARE_PACKET_NAME( UG_GAME_EXIT_REQ ),
	DECLARE_PACKET_NAME( UG_CHAR_AWAY_REQ ),
	DECLARE_PACKET_NAME( UG_CHAR_KEY_UPDATE_REQ ),
	DECLARE_PACKET_NAME( UG_CHAR_DIRECT_PLAY_ACK ),
	DECLARE_PACKET_NAME( UG_CHAR_KNOCKDOWN_RELEASE_NFY ),
	DECLARE_PACKET_NAME( UG_CHAR_SKILL_REQ ),

	DECLARE_PACKET_NAME( UG_SKILL_TARGET_LIST ),
	DECLARE_PACKET_NAME( UG_SKILL_LEARN_REQ ),
	DECLARE_PACKET_NAME( UG_SKILL_UPGRADE_REQ ),
	DECLARE_PACKET_NAME( UG_SKILL_RP_BONUS_SETTING_REQ ),
	DECLARE_PACKET_NAME( UG_HTB_START_REQ ),
	DECLARE_PACKET_NAME( UG_HTB_LEARN_REQ ),
	DECLARE_PACKET_NAME( UG_HTB_FORWARD_REQ ),
	DECLARE_PACKET_NAME( UG_HTB_RP_BALL_USE_REQ ),

	DECLARE_PACKET_NAME( UG_BUFF_DROP_REQ ),

	DECLARE_PACKET_NAME( UG_ITEM_MOVE_REQ ),
	DECLARE_PACKET_NAME( UG_ITEM_MOVE_STACK_REQ ),
	DECLARE_PACKET_NAME( UG_ITEM_DELETE_REQ ),
	DECLARE_PACKET_NAME( UG_ITEM_EQUIP_REPAIR_REQ ),
	DECLARE_PACKET_NAME( UG_ITEM_PICK_REQ ),
	DECLARE_PACKET_NAME( UG_ITEM_REPAIR_REQ ),
	DECLARE_PACKET_NAME( UG_ITEM_USE_REQ ),
	DECLARE_PACKET_NAME( UG_ITEM_UPGRADE_REQ ),
	DECLARE_PACKET_NAME( UG_ITEM_IDENTIFY_REQ ),

	DECLARE_PACKET_NAME( UG_ZENNY_PICK_REQ ),

	DECLARE_PACKET_NAME( UG_SHOP_START_REQ ),
	DECLARE_PACKET_NAME( UG_SHOP_BUY_REQ ),
	DECLARE_PACKET_NAME( UG_SHOP_SELL_REQ ),
	DECLARE_PACKET_NAME( UG_SHOP_END_REQ ),
	DECLARE_PACKET_NAME( UG_SHOP_SKILL_BUY_REQ ),

	DECLARE_PACKET_NAME( UG_PARTY_CREATE_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_DISBAND_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_INVITE_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_INVITE_CHARID_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_INVITE_CHAR_NAME_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_RESPONSE_INVITATION ),
	DECLARE_PACKET_NAME( UG_PARTY_LEAVE_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_KICK_OUT_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_CHANGE_LEADER_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_OPEN_CHARM_SLOT_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_CLOSE_CHARM_SLOT_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_REGISTER_VICTIM_ITEM_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_UNREGISTER_VICTIM_ITEM_REQ ),

	DECLARE_PACKET_NAME( UG_PARTY_REGISTER_VICTIM_ZENNY_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_UNREGISTER_VICTIM_ZENNY_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_DECLARE_ZENNY_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_ACTIVATE_CHARM_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_DEACTIVATE_CHARM_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_CHANGE_ZENNY_LOOTING_METHOD_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_CHANGE_ITEM_LOOTING_METHOD_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_INVEST_ZENNY_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_INVEN_ITEM_RANK_SET_REQ ),

	DECLARE_PACKET_NAME( UG_BANK_START_REQ ),
	DECLARE_PACKET_NAME( UG_BANK_MOVE_REQ ),
	DECLARE_PACKET_NAME( UG_BANK_MOVE_STACK_REQ ),
	DECLARE_PACKET_NAME( UG_BANK_END_REQ ),
	DECLARE_PACKET_NAME( UG_BANK_ZENNY_REQ ),
	DECLARE_PACKET_NAME( UG_BANK_BUY_REQ ),
	DECLARE_PACKET_NAME( UG_BANK_ITEM_DELETE_REQ ),

	DECLARE_PACKET_NAME( UG_SCOUTER_INDICATOR_REQ ),
	DECLARE_PACKET_NAME( UG_SCOUTER_PREDICT_REQ ),
	DECLARE_PACKET_NAME( UG_SCOUTER_EQUIP_CHECK_REQ ),
	DECLARE_PACKET_NAME( UG_SCOUTER_CHIP_REMOVE_ALL_REQ ),

	DECLARE_PACKET_NAME( UG_SOCIAL_ACTION ),

	DECLARE_PACKET_NAME( UG_TS_CONFIRM_STEP_REQ ),
	DECLARE_PACKET_NAME( UG_TS_UPDATE_STATE ),
	DECLARE_PACKET_NAME( UG_TS_EXCUTE_TRIGGER_OBJECT ),

	DECLARE_PACKET_NAME( UG_QUEST_ITEM_MOVE_REQ ),
	DECLARE_PACKET_NAME( UG_QUEST_ITEM_DELETE_REQ ),
	DECLARE_PACKET_NAME( UG_QUEST_GIVEUP_REQ ),
	DECLARE_PACKET_NAME( UG_QUEST_SHARE ),
	DECLARE_PACKET_NAME( UG_QUEST_OBJECT_VISIT_REQ ),

	DECLARE_PACKET_NAME( UG_FREEBATTLE_CHALLENGE_REQ ),
	DECLARE_PACKET_NAME( UG_FREEBATTLE_ACCEPT_RES ),

	DECLARE_PACKET_NAME( UG_QUICK_SLOT_UPDATE_REQ ),
	DECLARE_PACKET_NAME( UG_QUICK_SLOT_DEL_REQ ),

	DECLARE_PACKET_NAME( UG_PET_DISMISS_PET_REQ ),

	DECLARE_PACKET_NAME( UG_TRADE_START_REQ ),							
	DECLARE_PACKET_NAME( UG_TRADE_OK_RES ),								
	DECLARE_PACKET_NAME( UG_TRADE_ADD_REQ ),                            
	DECLARE_PACKET_NAME( UG_TRADE_DEL_REQ ),			
	DECLARE_PACKET_NAME( UG_TRADE_MODIFY_REQ ),
	DECLARE_PACKET_NAME( UG_TRADE_ZENNY_UPDATE_REQ ),					
	DECLARE_PACKET_NAME( UG_TRADE_END_REQ ),							
	DECLARE_PACKET_NAME( UG_TRADE_CANCEL_REQ ),		
	DECLARE_PACKET_NAME( UG_TRADE_DENY_REQ ),	

	DECLARE_PACKET_NAME( UG_GUILD_CREATE_REQ ),
	DECLARE_PACKET_NAME( UG_GUILD_INVITE_REQ ),

	DECLARE_PACKET_NAME( UG_TUTORIAL_HINT_UPDATE_REQ ),
	DECLARE_PACKET_NAME( UG_TUTORIAL_WAIT_CANCEL_REQ ),
	DECLARE_PACKET_NAME( UG_TUTORIAL_PLAY_QUIT_REQ ),

	DECLARE_PACKET_NAME( UG_TIMEQUEST_ROOM_LIST_REQ ),
	DECLARE_PACKET_NAME( UG_TIMEQUEST_ROOM_INFO_REQ ),
	DECLARE_PACKET_NAME( UG_TIMEQUEST_ROOM_JOIN_REQ ),
	DECLARE_PACKET_NAME( UG_TIMEQUEST_ROOM_LEAVE_REQ ),
	DECLARE_PACKET_NAME( UG_TIMEQUEST_ROOM_TELEPORT_REQ ),

	DECLARE_PACKET_NAME( UG_RANKBATTLE_INFO_REQ ),
	DECLARE_PACKET_NAME( UG_RANKBATTLE_JOIN_REQ ),
	DECLARE_PACKET_NAME( UG_RANKBATTLE_LEAVE_REQ ),

	DECLARE_PACKET_NAME( UG_RANKBATTLE_ROOM_LIST_REQ ),
	DECLARE_PACKET_NAME( UG_RANKBATTLE_ROOM_INFO_REQ ),
	DECLARE_PACKET_NAME( UG_RANKBATTLE_ROOM_CREATE_REQ ),
	DECLARE_PACKET_NAME( UG_RANKBATTLE_ROOM_LEAVE_REQ ),
	DECLARE_PACKET_NAME( UG_RANKBATTLE_ROOM_CHALLENGE_REQ ),
	DECLARE_PACKET_NAME( UG_RANKBATTLE_ROOM_MATCH_CANCEL_REQ ),

	DECLARE_PACKET_NAME( UG_DRAGONBALL_CHECK_REQ ),
	DECLARE_PACKET_NAME( UG_DRAGONBALL_REWARD_REQ ),

	DECLARE_PACKET_NAME( UG_PRIVATESHOP_CREATE_REQ ),// [6/28/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_EXIT_REQ ),// [6/28/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_OPEN_REQ ),// [6/28/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_CLOSE_REQ ),// [6/28/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_ITEM_GET_REQ ),// [6/29/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_ITEM_INSERT_REQ ),// [6/29/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_ITEM_UPDATE_REQ ),// [6/29/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_ITEM_DELETE_REQ ),// [6/29/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_ITEM_BUYING_REQ ),// [6/29/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_ENTER_REQ ),// [6/29/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_LEAVE_REQ ),// [6/29/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_ITEM_SELECT_REQ ),// [7/19/2007 SGpro]
	
	DECLARE_PACKET_NAME( UG_MAIL_START_REQ ),
	DECLARE_PACKET_NAME( UG_MAIL_SEND_REQ ),
	DECLARE_PACKET_NAME( UG_MAIL_READ_REQ ),
	DECLARE_PACKET_NAME( UG_MAIL_DEL_REQ ),
	DECLARE_PACKET_NAME( UG_MAIL_RETURN_REQ ),
	DECLARE_PACKET_NAME( UG_MAIL_RELOAD_REQ ),
	DECLARE_PACKET_NAME( UG_MAIL_LOAD_REQ ),
	DECLARE_PACKET_NAME( UG_MAIL_ITEM_RECEIVE_REQ ),
	DECLARE_PACKET_NAME( UG_MAIL_LOCK_REQ ),
	DECLARE_PACKET_NAME( UG_MAIL_MULTI_DEL_REQ ),

	DECLARE_PACKET_NAME( UG_PRIVATESHOP_BUSINESS_REQUEST_REQ ),// [10/17/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_BUSINESS_CONSENT_RES ),// [10/17/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_BUSINESS_WAITTIMEOUT_NFY ),// [10/17/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_BUSINESS_PRICEFLUCTUATIONS_REQ ),// [10/17/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_BUSINESS_IMMEDIATE_ITEM_BUYING_REQ ),// [10/17/2007 SGpro]
	DECLARE_PACKET_NAME( UG_PRIVATESHOP_BUSINESS_CANCEL_REQ ),// [10/17/2007 SGpro]

	DECLARE_PACKET_NAME( UG_PORTAL_START_REQ ),
	DECLARE_PACKET_NAME( UG_PORTAL_ADD_REQ ),
	DECLARE_PACKET_NAME( UG_PORTAL_REQ ),

	DECLARE_PACKET_NAME( UG_WAR_FOG_UPDATE_REQ ),
	DECLARE_PACKET_NAME( UG_GUILD_FUNCTION_ADD_REQ ),
	DECLARE_PACKET_NAME( UG_GUILD_GIVE_ZENNY ),

	DECLARE_PACKET_NAME( UG_GUILD_BANK_START_REQ),							// GUILD Warehouse ������ �ε�
	DECLARE_PACKET_NAME( UG_GUILD_BANK_MOVE_REQ),							// GUILD Warehouse �� ������ �̵�
	DECLARE_PACKET_NAME( UG_GUILD_BANK_MOVE_STACK_REQ),						// GUILD Warehouse �� ���þ����� �̵�
	DECLARE_PACKET_NAME( UG_GUILD_BANK_END_REQ),							// GUILD Warehouse �� �ݴ´�.
	DECLARE_PACKET_NAME( UG_GUILD_BANK_ZENNY_REQ),							// GUILD Warehouse �� ���� Ȥ�� �����Ѵ�.
	DECLARE_PACKET_NAME( UG_GUILD_CREATE_MARK_REQ),
	DECLARE_PACKET_NAME( UG_GUILD_CHANGE_MARK_REQ),

	DECLARE_PACKET_NAME( UG_CROSSFIRE_REQ ),

	DECLARE_PACKET_NAME( UG_BANK_LOAD_REQ ),
	DECLARE_PACKET_NAME( UG_GUILD_CHANGE_NAME_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_SHARETARGET_REQ ),

	DECLARE_PACKET_NAME( UG_RIDE_ON_BUS_REQ ),
	DECLARE_PACKET_NAME( UG_RIDE_OFF_BUS_REQ ),

	DECLARE_PACKET_NAME( UG_TRANSFORM_CANCEL_REQ ),
	DECLARE_PACKET_NAME( UG_SHOP_ITEM_IDENTIFY_REQ ),

	DECLARE_PACKET_NAME( UG_DICE_ROLL_REQ ),

	DECLARE_PACKET_NAME( UG_BUDOKAI_JOIN_INDIVIDUAL_REQ ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_LEAVE_INDIVIDUAL_REQ ),

	DECLARE_PACKET_NAME( UG_BUDOKAI_JOIN_TEAM_INFO_REQ ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_JOIN_TEAM_REQ ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_LEAVE_TEAM_REQ ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_LEAVE_TEAM_MEMBER_REQ ),

	DECLARE_PACKET_NAME( UG_BUDOKAI_JOIN_INFO_REQ ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_JOIN_STATE_REQ ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_MUDOSA_INFO_REQ ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_MUDOSA_TELEPORT_REQ ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_PARTY_MAKER_REQ ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_SOCIAL_ACTION ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_PRIZEWINNER_NAME_REQ ),
//	DECLARE_PACKET_NAME( UG_BUDOKAI_PRIZEWINNER_TEAM_NAME_REQ ),

	DECLARE_PACKET_NAME( UG_BUDOKAI_GM_BUDOKAI_SERVER_ENTER_REQ ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_GM_BUDOKAI_SERVER_LEAVE_REQ ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_GM_MATCH_PROGRESS_INFO_REQ ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_GM_MATCH_ARENA_ENTER_REQ ),
	DECLARE_PACKET_NAME( UG_BUDOKAI_GM_MATCH_ARENA_LEAVE_REQ ),

	DECLARE_PACKET_NAME( UG_SCOUTER_TURN_ON ),	
	DECLARE_PACKET_NAME( UG_SCOUTER_TURN_OFF ),
	DECLARE_PACKET_NAME( UG_SCOUTER_ITEM_SELL_REQ ),

	DECLARE_PACKET_NAME( UG_SHOP_EVENTITEM_START_REQ ),// [7/15/2008 SGpro]
	DECLARE_PACKET_NAME( UG_SHOP_EVENTITEM_BUY_REQ ), // [7/11/2008 SGpro]
	DECLARE_PACKET_NAME( UG_SHOP_EVENTITEM_END_REQ ),// [7/15/2008 SGpro]

	DECLARE_PACKET_NAME( UG_SHOP_GAMBLE_BUY_REQ ), // [7/11/2008 SGpro]

	DECLARE_PACKET_NAME( UG_PARTY_DIFF_CHANGE_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_DUNGEON_INIT_REQ ),
	DECLARE_PACKET_NAME( UG_SKILL_INIT_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_CHARM_DICE_ROLL_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_INVEN_LOCK_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_INVEN_RESET_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_INVEN_ACCEPTED_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_INVEN_GIVE_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_INVEN_DICE_START_REQ ),
	DECLARE_PACKET_NAME( UG_PARTY_INVEN_DICE_ROLL_REQ ),

	DECLARE_PACKET_NAME( UG_TELEPORT_CONFIRM_REQ ),

	DECLARE_PACKET_NAME( UG_HOIPOIMIX_ITEM_CHECK_REQ ),
	DECLARE_PACKET_NAME( UG_HOIPOIMIX_ITEM_MAKE_REQ ),
	DECLARE_PACKET_NAME( UG_HOIPOIMIX_ITEM_MAKE_EP_REQ ),
	DECLARE_PACKET_NAME( UG_HOIPOIMIX_ITEM_MACHINE_MAKE_REQ ),
	DECLARE_PACKET_NAME( UG_HOIPOIMIX_ITEM_MACHINE_DEL_REQ ),
	DECLARE_PACKET_NAME( UG_HOIPOIMIX_JOB_SET_REQ ),
	DECLARE_PACKET_NAME( UG_HOIPOIMIX_JOB_RESET_REQ ),

	DECLARE_PACKET_NAME( UG_VEHICLE_DIRECT_PLAY_CANCEL_NFY ),
	DECLARE_PACKET_NAME( UG_VEHICLE_ENGINE_START_REQ ),
	DECLARE_PACKET_NAME( UG_VEHICLE_ENGINE_STOP_REQ ),
	DECLARE_PACKET_NAME( UG_VEHICLE_END_REQ ),
	DECLARE_PACKET_NAME( UG_VEHICLE_STUNT_NFY ),
	DECLARE_PACKET_NAME( UG_VEHICLE_FUEL_REMOVE_NFY ),

	DECLARE_PACKET_NAME( UG_DOJO_CREATE_REQ ),
	DECLARE_PACKET_NAME( UG_DOJO_DELETE_REQ ),
	DECLARE_PACKET_NAME( UG_DOJO_FUNCTION_ADD_REQ ),
	DECLARE_PACKET_NAME( UG_DOJO_BANK_HISTORY_REQ ),
	DECLARE_PACKET_NAME( UG_DOGI_CREATE_REQ ),								// ��������
	DECLARE_PACKET_NAME( UG_DOGI_CHANGE_REQ ),								// ��������
	DECLARE_PACKET_NAME( UG_GUILD_DOGI_CREATE_REQ ),						// GUILD��������
	DECLARE_PACKET_NAME( UG_GUILD_DOGI_CHANGE_REQ ),						// GUILD��������
	DECLARE_PACKET_NAME( UG_DOJO_SCRAMBLE_REQ ),							// ������Ż�� ��û
	DECLARE_PACKET_NAME( UG_DOJO_SCRAMBLE_RESPONSE_REQ ),					// ������Ż�� ��û�� ���� ����
	
	DECLARE_PACKET_NAME( UG_SHOP_NETPYITEM_START_REQ ),
	DECLARE_PACKET_NAME( UG_SHOP_NETPYITEM_BUY_REQ ),
	DECLARE_PACKET_NAME( UG_SHOP_NETPYITEM_END_REQ ),

	DECLARE_PACKET_NAME( UG_WORLD_MAP_STATUS ),

	DECLARE_PACKET_NAME( UG_DOJO_NPC_INFO_REQ ),

	DECLARE_PACKET_NAME( UG_GAMEGUARD_AUTH_ANSWER_RES ),
	DECLARE_PACKET_NAME( UG_GAMEGUARD_HACK_INFO_NFY ),

	DECLARE_PACKET_NAME( UG_SKILL_CASTING_CANCELED_NFY ),

	DECLARE_PACKET_NAME( UG_PET_ATTACK_TARGET_NFY ),

	DECLARE_PACKET_NAME( UG_DURATION_ITEM_BUY_REQ ),
	DECLARE_PACKET_NAME( UG_DURATION_RENEW_REQ ),

	DECLARE_PACKET_NAME( UG_CASHITEM_START_REQ ),
	DECLARE_PACKET_NAME( UG_CASHITEM_END_REQ ),
	DECLARE_PACKET_NAME( UG_CASHITEM_MOVE_REQ ),
	DECLARE_PACKET_NAME( UG_CASHITEM_USE_REQ ),	
	DECLARE_PACKET_NAME( UG_CASHITEM_HLSHOP_START_REQ ),
	DECLARE_PACKET_NAME( UG_CASHITEM_HLSHOP_END_REQ ),
	DECLARE_PACKET_NAME( UG_CASHITEM_BUY_REQ ),

	DECLARE_PACKET_NAME( UG_BUDOKAI_PRIZEWINNER_TEAM_NAME_REQ ),
	DECLARE_PACKET_NAME( UG_GMT_UPDATE_REQ ),		

	DECLARE_PACKET_NAME( UG_CHAR_LOC_AFTER_KNOCKDOWN_NFY ),
	DECLARE_PACKET_NAME( UG_CHAR_LOC_AFTER_SLIDING_NFY ),
	DECLARE_PACKET_NAME( UG_CHAR_LOC_AFTER_PUSH_NFY ),
};


//------------------------------------------------------------------
//
//------------------------------------------------------------------
const char * NtlGetPacketName_UG(WORD wOpCode)
{
	if( wOpCode < UG_OPCODE_BEGIN )
	{
		return "NOT DEFINED PACKET NAME : OPCODE LOW";
	}

	if( wOpCode > UG_OPCODE_END )
	{
		return "NOT DEFINED PACKET NAME : OPCODE HIGH";
	}

	int nIndex = wOpCode - UG_OPCODE_BEGIN;
	if( nIndex >= _countof( s_packetName_UG ) )
	{
		return "OPCODE BUFFER OVERFLOW";
	}

	return s_packetName_UG[ nIndex ];
}
