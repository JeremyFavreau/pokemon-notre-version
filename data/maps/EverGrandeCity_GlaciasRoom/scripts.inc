EverGrandeCity_GlaciasRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_GlaciasRoom_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_GlaciasRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_OnWarp
	.byte 0

EverGrandeCity_GlaciasRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_GlaciasRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 2, EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 3
	releaseall
	end

EverGrandeCity_GlaciasRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 3, EverGrandeCity_GlaciasRoom_EventScript_CloseDoor
	end

EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_GlaciasRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_GlaciasRoom_EventScript_Glacia::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, EverGrandeCity_GlaciasRoom_EventScript_Rematch
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
	end

EverGrandeCity_GlaciasRoom_EventScript_Rematch::
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeechRematch, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GLACIA_2, EverGrandeCity_GlaciasRoom_Text_Defeat
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
	end

EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_Text_IntroSpeech:
	.string "Bon matin, je suis MAX !\p"
	.string "On est bien ici tu trouves pas ?$"

EverGrandeCity_GlaciasRoom_Text_Defeat:
	.string "Le procédural...$"

EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech:
	.string "Tu peux procéder à la prochaine salle\n"
	.string "pour ton prochain combat.\p"
	.string "Je vais le regarder avec mon popcorn$"

EverGrandeCity_GlaciasRoom_Text_IntroSpeechRematch:
	.string "Bon matin, je suis MAX !\p"
	.string "On est bien ici tu trouves pas ?\p"
	.string "Cette fois je vais te montrer\n"
	.string "ce que je peux vraiment faire !$"
