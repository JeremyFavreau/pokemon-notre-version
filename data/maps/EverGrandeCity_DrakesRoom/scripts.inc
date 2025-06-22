EverGrandeCity_DrakesRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesRoom_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
	.byte 0

@ Unused, Drake uses Sidneys identical OnWarp for some reason
EverGrandeCity_DrakesRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_DrakesRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 3, EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 4
	releaseall
	end

EverGrandeCity_DrakesRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_DrakesRoom_EventScript_CloseDoor
	end

EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_DrakesRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_DrakesRoom_EventScript_Drake::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, EverGrandeCity_DrakesRoom_EventScript_Rematch
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_DRAKE, EverGrandeCity_DrakesRoom_Text_Defeat
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
	end

EverGrandeCity_DrakesRoom_EventScript_Rematch::
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeechRematch, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_DRAKE_2, EverGrandeCity_DrakesRoom_Text_Defeat
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
	end

EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesRoom_EventScript_Defeated::
	setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
	special Script_TryGainNewFanFromCounter
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesRoom_Text_IntroSpeech:
	.string "Hey, you. You're finally awake.\p"
	.string "You were trying to cross the border, right?\p"
	.string "Walked right into that Imperial\n"
	.string "ambush, same as us, and that\n"
	.string "thief over there.\p"
	.string "Damn you Stormcloaks.\p"
	.string "Skyrim was fine until you came along.\p"
	.string "Empire was nice and lazy.\p"
	.string "If they hadn't been looking for you,\n"
	.string "I could've stolen that horse\n"
	.string "and be halfway to Hammerfell.\p"
	.string "You there. You and me\n"
	.string "we shouldn't be here.\p"
	.string "It's these Stormcloaks the Empire wants.\p"
	.string "We're all brothers and sisters\n"
	.string "in binds now, thief.\p"
	.string "Shut up back there!\p"
	.string "And what's wrong with him, huh?\p"
	.string "Watch your tongue.\p"
	.string "You're speaking to Ulfric Stormcloak,\n"
	.string "the true High King.\p"
	.string "Ulfric? The Jarl of Windhelm?\n"
	.string "You're the leader of the rebellion.\p"
	.string "But if they've captured you...\p"
	.string "Oh gods, where are they taking us?\p"
	.string "I don't know where we're going,\n"
	.string "but Sovngarde awaits.\p"
	.string "No, this can't be happening.\n"
	.string "This isn't happening.\p"
	.string "Hey, what village are you from,\n"
	.string "horse thief?\p"
	.string "Why do you care?\n"
	.string "A Nord's last thoughts should be\n"
	.string "be of home. Rorikstead. \p"
	.string "I'm... I'm from Rorikstead.$"

EverGrandeCity_DrakesRoom_Text_Defeat:
	.string "Superb, it should be said.$"

EverGrandeCity_DrakesRoom_Text_PostBattleSpeech:
	.string "Have you heard of the critically\n"
	.string "acclaimed MMORPG Final Fantasy XIV?\p"
	.string "With an expanded free trial\n"
	.string "which you can play through the\n"
	.string "entirety of A Real Reborn\p"
	.string "And the award-winning\n"
	.string "Heavensward expansion\p"
	.string "AND Stormblood up to\n"
	.string "level 70 for free with no\n"
	.string "restrictions on playtime?$"

EverGrandeCity_DrakesRoom_Text_IntroSpeechRematch:
	.string "Hey, you. You're finally awake.\p"
	.string "You were trying to cross the border, right?\p"
	.string "Walked right into that Imperial\n"
	.string "ambush, same as us, and that\n"
	.string "thief over there.\p"
	.string "Damn you Stormcloaks.\p"
	.string "Skyrim was fine until you came along.\p"
	.string "Empire was nice and lazy.\p"
	.string "If they hadn't been looking for you,\n"
	.string "I could've stolen that horse\n"
	.string "and be halfway to Hammerfell.\p"
	.string "You there. You and me\n"
	.string "we shouldn't be here.\p"
	.string "It's these Stormcloaks the Empire wants.\p"
	.string "We're all brothers and sisters\n"
	.string "in binds now, thief.\p"
	.string "Shut up back there!\p"
	.string "And what's wrong with him, huh?\p"
	.string "Watch your tongue.\p"
	.string "You're speaking to Ulfric Stormcloak,\n"
	.string "the true High King.\p"
	.string "Ulfric? The Jarl of Windhelm?\n"
	.string "You're the leader of the rebellion.\p"
	.string "But if they've captured you...\p"
	.string "Oh gods, where are they taking us?\p"
	.string "I don't know where we're going,\n"
	.string "but Sovngarde awaits.\p"
	.string "No, this can't be happening.\n"
	.string "This isn't happening.\p"
	.string "Hey, what village are you from,\n"
	.string "horse thief?\p"
	.string "Why do you care?\n"
	.string "A Nord's last thoughts should be\n"
	.string "be of home. Rorikstead. \p"
	.string "I'm... I'm from Rorikstead.\p"
	.string "This time I'm even more prepared!$"
