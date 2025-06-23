EverGrandeCity_PokemonLeague_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

EverGrandeCity_PokemonLeague_1F_OnTransition:
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
	call_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
	end

EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor::
	setobjectxyperm LOCALID_LEAGUE_GUARD_1, 9, 2
	setobjectxyperm LOCALID_LEAGUE_GUARD_2, 10, 2
	return

EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEAGUE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_IS_CHAMPION, EverGrandeCity_PokemonLeague_1F_Pokemart_Ext
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_PokemonLeague_1F_Pokemart_Ext::
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart_Extended
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
EverGrandeCity_PokemonLeague_1F_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_VENUSAURITE
  .2byte ITEM_CHARIZARDITE_X
  .2byte ITEM_CHARIZARDITE_Y
  .2byte ITEM_BLASTOISINITE
  .2byte ITEM_BEEDRILLITE
  .2byte ITEM_PIDGEOTITE
  .2byte ITEM_ALAKAZITE
  .2byte ITEM_SLOWBRONITE
  .2byte ITEM_GENGARITE
  .2byte ITEM_PINSIRITE
  .2byte ITEM_GYARADOSITE
  .2byte ITEM_AERODACTYLITE
  .2byte ITEM_AMPHAROSITE
  .2byte ITEM_STEELIXITE
  .2byte ITEM_SCIZORITE
  .2byte ITEM_HERACRONITE
  .2byte ITEM_HOUNDOOMINITE
  .2byte ITEM_TYRANITARITE
  .2byte ITEM_SCEPTILITE
  .2byte ITEM_BLAZIKENITE
  .2byte ITEM_SWAMPERTITE
  .2byte ITEM_GARDEVOIRITE
  .2byte ITEM_SABLENITE
  .2byte ITEM_MAWILITE
  .2byte ITEM_AGGRONITE
  .2byte ITEM_MEDICHAMITE
  .2byte ITEM_MANECTITE
  .2byte ITEM_SHARPEDONITE
  .2byte ITEM_CAMERUPTITE
  .2byte ITEM_ALTARIANITE
  .2byte ITEM_BANETTITE
  .2byte ITEM_ABSOLITE
  .2byte ITEM_GLALITITE
  .2byte ITEM_SALAMENCITE
  .2byte ITEM_METAGROSSITE
  .2byte ITEM_LOPUNNITE
  .2byte ITEM_GARCHOMPITE
  .2byte ITEM_LUCARIONITE
  .2byte ITEM_ABOMASITE
  .2byte ITEM_GALLADITE
  .2byte ITEM_AUDINITE
	.2byte ITEM_TM01
	.2byte ITEM_TM02
	.2byte ITEM_TM03
	.2byte ITEM_TM04
	.2byte ITEM_TM05
	.2byte ITEM_TM06
	.2byte ITEM_TM07
	.2byte ITEM_TM08
	.2byte ITEM_TM09
	.2byte ITEM_TM10
	.2byte ITEM_TM11
	.2byte ITEM_TM12
	.2byte ITEM_TM13
	.2byte ITEM_TM14
	.2byte ITEM_TM15
	.2byte ITEM_TM16
	.2byte ITEM_TM17
	.2byte ITEM_TM18
	.2byte ITEM_TM19
	.2byte ITEM_TM20
	.2byte ITEM_TM21
	.2byte ITEM_TM22
	.2byte ITEM_TM23
	.2byte ITEM_TM24
	.2byte ITEM_TM25
	.2byte ITEM_TM26
	.2byte ITEM_TM27
	.2byte ITEM_TM28
	.2byte ITEM_TM29
	.2byte ITEM_TM30
	.2byte ITEM_TM31
	.2byte ITEM_TM32
	.2byte ITEM_TM33
	.2byte ITEM_TM34
	.2byte ITEM_TM35
	.2byte ITEM_TM36
	.2byte ITEM_TM37
	.2byte ITEM_TM38
	.2byte ITEM_TM39
	.2byte ITEM_TM40
	.2byte ITEM_TM41
	.2byte ITEM_TM42
	.2byte ITEM_TM43
	.2byte ITEM_TM44
	.2byte ITEM_TM45
	.2byte ITEM_TM46
	.2byte ITEM_TM47
	.2byte ITEM_TM48
	.2byte ITEM_TM49
	.2byte ITEM_TM50
	.2byte ITEM_TM51
	.2byte ITEM_TM52
	.2byte ITEM_TM53
	.2byte ITEM_TM54
	.2byte ITEM_TM55
	.2byte ITEM_TM56
	.2byte ITEM_TM57
	.2byte ITEM_TM58
	.2byte ITEM_TM59
	.2byte ITEM_TM60
	.2byte ITEM_TM61
	.2byte ITEM_TM62
	.2byte ITEM_TM63
	.2byte ITEM_TM64
	.2byte ITEM_TM65
	.2byte ITEM_TM66
	.2byte ITEM_TM67
	.2byte ITEM_TM68
	.2byte ITEM_TM69
	.2byte ITEM_TM70
	.2byte ITEM_TM71
	.2byte ITEM_TM72
	.2byte ITEM_TM73
	.2byte ITEM_TM74
	.2byte ITEM_TM75
	.2byte ITEM_TM76
	.2byte ITEM_TM77
	.2byte ITEM_TM78
	.2byte ITEM_TM79
	.2byte ITEM_TM80
	.2byte ITEM_TM81
	.2byte ITEM_TM82
	.2byte ITEM_TM83
	.2byte ITEM_TM84
	.2byte ITEM_TM85
	.2byte ITEM_TM86
	.2byte ITEM_TM87
	.2byte ITEM_TM88
	.2byte ITEM_TM89
	.2byte ITEM_TM90
	.2byte ITEM_TM91
	.2byte ITEM_TM92
	.2byte ITEM_TM93
	.2byte ITEM_TM94
	.2byte ITEM_TM95
	.2byte ITEM_TM96
	.2byte ITEM_TM97
	.2byte ITEM_TM98
	.2byte ITEM_TM99
	.2byte ITEM_TM100
	.2byte ITEM_TM101
	.2byte ITEM_TM102
	.2byte ITEM_TM103
	.2byte ITEM_TM104
	.2byte ITEM_TM105
	.2byte ITEM_TM106
	.2byte ITEM_TM107
	.2byte ITEM_TM108
	.2byte ITEM_TM109
	.2byte ITEM_TM110
	.2byte ITEM_TM111
	.2byte ITEM_TM112
	.2byte ITEM_TM113
	.2byte ITEM_TM114
	.2byte ITEM_TM115
	.2byte ITEM_TM116
	.2byte ITEM_TM117
	.2byte ITEM_TM118
	.2byte ITEM_TM119
	.2byte ITEM_TM120
	.2byte ITEM_TM121
	.2byte ITEM_TM122
	.2byte ITEM_TM123
	.2byte ITEM_TM124
	.2byte ITEM_TM125
	.2byte ITEM_TM126
	.2byte ITEM_TM127
	.2byte ITEM_TM128
	.2byte ITEM_TM129
	.2byte ITEM_TM130
	.2byte ITEM_TM131
	.2byte ITEM_TM132
	.2byte ITEM_TM133
	.2byte ITEM_TM134
	.2byte ITEM_TM135
	.2byte ITEM_TM136
	.2byte ITEM_TM137
	.2byte ITEM_TM138
	.2byte ITEM_TM139
	.2byte ITEM_TM140
	.2byte ITEM_TM141
	.2byte ITEM_TM142
	.2byte ITEM_TM143
	.2byte ITEM_TM144
	.2byte ITEM_TM145
	.2byte ITEM_TM146
	.2byte ITEM_TM147
	.2byte ITEM_TM148
	.2byte ITEM_TM149
	.2byte ITEM_TM150
	.2byte ITEM_TM151
	.2byte ITEM_TM152
	.2byte ITEM_TM153
	.2byte ITEM_TM154
	.2byte ITEM_TM155
	.2byte ITEM_TM156
	.2byte ITEM_TM157
	.2byte ITEM_TM158
	.2byte ITEM_TM159
	.2byte ITEM_TM160
	.2byte ITEM_TM161
	.2byte ITEM_TM162
	.2byte ITEM_TM163
	.2byte ITEM_TM164
	.2byte ITEM_TM165
	.2byte ITEM_TM166
	.2byte ITEM_TM167
	.2byte ITEM_TM168
	.2byte ITEM_TM169
	.2byte ITEM_TM170
	.2byte ITEM_TM171
	.2byte ITEM_TM172
	.2byte ITEM_TM173
	.2byte ITEM_TM174
	.2byte ITEM_TM175
	.2byte ITEM_TM176
	.2byte ITEM_TM177
	.2byte ITEM_TM178
	.2byte ITEM_TM179
	.2byte ITEM_TM180
	.2byte ITEM_TM181
	.2byte ITEM_TM182
	.2byte ITEM_TM183
	.2byte ITEM_TM184
	.2byte ITEM_TM185
	.2byte ITEM_TM186
	.2byte ITEM_TM187
	.2byte ITEM_TM188
	.2byte ITEM_TM189
	.2byte ITEM_TM190
	.2byte ITEM_TM191
	.2byte ITEM_TM192
	.2byte ITEM_TM193
	.2byte ITEM_TM194
	.2byte ITEM_TM195
	.2byte ITEM_TM196
	.2byte ITEM_TM197
	.2byte ITEM_TM198
	.2byte ITEM_TM199
	.2byte ITEM_TM200
	.2byte ITEM_TM201
	.2byte ITEM_TM202
	.2byte ITEM_TM203
	.2byte ITEM_TM204
	.2byte ITEM_TM205
	.2byte ITEM_TM206
	.2byte ITEM_TM207
	.2byte ITEM_TM208
	.2byte ITEM_TM209
	.2byte ITEM_TM210
	.2byte ITEM_TM211
	.2byte ITEM_TM212
	.2byte ITEM_TM213
	.2byte ITEM_TM214
	.2byte ITEM_TM215
	.2byte ITEM_TM216
	.2byte ITEM_TM217
	.2byte ITEM_TM218
	.2byte ITEM_TM219
	.2byte ITEM_TM220
	.2byte ITEM_TM221
	.2byte ITEM_TM222
	.2byte ITEM_TM223
	.2byte ITEM_TM224
	.2byte ITEM_TM225
	.2byte ITEM_TM226
	.2byte ITEM_TM227
	.2byte ITEM_TM228
	.2byte ITEM_TM229
	pokemartlistend

	.align 2
EverGrandeCity_PokemonLeague_1F_Pokemart_Extended:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_BRIGHT_POWDER
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_QUICK_CLAW
	.2byte ITEM_SOOTHE_BELL
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_AMULET_COIN
	.2byte ITEM_CLEANSE_TAG
	.2byte ITEM_SMOKE_BALL
	.2byte ITEM_FOCUS_BAND
	.2byte ITEM_LUCKY_EGG
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_SHELL_BELL
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_LIGHT_CLAY
	.2byte ITEM_LIFE_ORB
	.2byte ITEM_POWER_HERB
	.2byte ITEM_FOCUS_SASH
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_IRON_BALL
	.2byte ITEM_LAGGING_TAIL
	.2byte ITEM_DESTINY_KNOT
	.2byte ITEM_BLACK_SLUDGE
	.2byte ITEM_GRIP_CLAW
	.2byte ITEM_STICKY_BARB
	.2byte ITEM_SHED_SHELL
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_EVIOLITE
	.2byte ITEM_FLOAT_STONE
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_AIR_BALLOON
	.2byte ITEM_RED_CARD
	.2byte ITEM_RING_TARGET
	.2byte ITEM_BINDING_BAND
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_ASSAULT_VEST
	.2byte ITEM_SAFETY_GOGGLES
	.2byte ITEM_ADRENALINE_ORB
	.2byte ITEM_TERRAIN_EXTENDER
	.2byte ITEM_PROTECTIVE_PADS
	.2byte ITEM_THROAT_SPRAY
	.2byte ITEM_EJECT_PACK
	.2byte ITEM_HEAVY_DUTY_BOOTS
	.2byte ITEM_BLUNDER_POLICY
	.2byte ITEM_ROOM_SERVICE
	.2byte ITEM_UTILITY_UMBRELLA
	.2byte ITEM_VENUSAURITE
  .2byte ITEM_CHARIZARDITE_X
  .2byte ITEM_CHARIZARDITE_Y
  .2byte ITEM_BLASTOISINITE
  .2byte ITEM_BEEDRILLITE
  .2byte ITEM_PIDGEOTITE
  .2byte ITEM_ALAKAZITE
  .2byte ITEM_SLOWBRONITE
  .2byte ITEM_GENGARITE
  .2byte ITEM_PINSIRITE
  .2byte ITEM_GYARADOSITE
  .2byte ITEM_AERODACTYLITE
  .2byte ITEM_AMPHAROSITE
  .2byte ITEM_STEELIXITE
  .2byte ITEM_SCIZORITE
  .2byte ITEM_HERACRONITE
  .2byte ITEM_HOUNDOOMINITE
  .2byte ITEM_TYRANITARITE
  .2byte ITEM_SCEPTILITE
  .2byte ITEM_BLAZIKENITE
  .2byte ITEM_SWAMPERTITE
  .2byte ITEM_GARDEVOIRITE
  .2byte ITEM_SABLENITE
  .2byte ITEM_MAWILITE
  .2byte ITEM_AGGRONITE
  .2byte ITEM_MEDICHAMITE
  .2byte ITEM_MANECTITE
  .2byte ITEM_SHARPEDONITE
  .2byte ITEM_CAMERUPTITE
  .2byte ITEM_ALTARIANITE
  .2byte ITEM_BANETTITE
  .2byte ITEM_ABSOLITE
  .2byte ITEM_GLALITITE
  .2byte ITEM_SALAMENCITE
  .2byte ITEM_METAGROSSITE
  .2byte ITEM_LOPUNNITE
  .2byte ITEM_GARCHOMPITE
  .2byte ITEM_LUCARIONITE
  .2byte ITEM_ABOMASITE
  .2byte ITEM_GALLADITE
  .2byte ITEM_AUDINITE
	.2byte ITEM_TM01
	.2byte ITEM_TM02
	.2byte ITEM_TM03
	.2byte ITEM_TM04
	.2byte ITEM_TM05
	.2byte ITEM_TM06
	.2byte ITEM_TM07
	.2byte ITEM_TM08
	.2byte ITEM_TM09
	.2byte ITEM_TM10
	.2byte ITEM_TM11
	.2byte ITEM_TM12
	.2byte ITEM_TM13
	.2byte ITEM_TM14
	.2byte ITEM_TM15
	.2byte ITEM_TM16
	.2byte ITEM_TM17
	.2byte ITEM_TM18
	.2byte ITEM_TM19
	.2byte ITEM_TM20
	.2byte ITEM_TM21
	.2byte ITEM_TM22
	.2byte ITEM_TM23
	.2byte ITEM_TM24
	.2byte ITEM_TM25
	.2byte ITEM_TM26
	.2byte ITEM_TM27
	.2byte ITEM_TM28
	.2byte ITEM_TM29
	.2byte ITEM_TM30
	.2byte ITEM_TM31
	.2byte ITEM_TM32
	.2byte ITEM_TM33
	.2byte ITEM_TM34
	.2byte ITEM_TM35
	.2byte ITEM_TM36
	.2byte ITEM_TM37
	.2byte ITEM_TM38
	.2byte ITEM_TM39
	.2byte ITEM_TM40
	.2byte ITEM_TM41
	.2byte ITEM_TM42
	.2byte ITEM_TM43
	.2byte ITEM_TM44
	.2byte ITEM_TM45
	.2byte ITEM_TM46
	.2byte ITEM_TM47
	.2byte ITEM_TM48
	.2byte ITEM_TM49
	.2byte ITEM_TM50
	.2byte ITEM_TM51
	.2byte ITEM_TM52
	.2byte ITEM_TM53
	.2byte ITEM_TM54
	.2byte ITEM_TM55
	.2byte ITEM_TM56
	.2byte ITEM_TM57
	.2byte ITEM_TM58
	.2byte ITEM_TM59
	.2byte ITEM_TM60
	.2byte ITEM_TM61
	.2byte ITEM_TM62
	.2byte ITEM_TM63
	.2byte ITEM_TM64
	.2byte ITEM_TM65
	.2byte ITEM_TM66
	.2byte ITEM_TM67
	.2byte ITEM_TM68
	.2byte ITEM_TM69
	.2byte ITEM_TM70
	.2byte ITEM_TM71
	.2byte ITEM_TM72
	.2byte ITEM_TM73
	.2byte ITEM_TM74
	.2byte ITEM_TM75
	.2byte ITEM_TM76
	.2byte ITEM_TM77
	.2byte ITEM_TM78
	.2byte ITEM_TM79
	.2byte ITEM_TM80
	.2byte ITEM_TM81
	.2byte ITEM_TM82
	.2byte ITEM_TM83
	.2byte ITEM_TM84
	.2byte ITEM_TM85
	.2byte ITEM_TM86
	.2byte ITEM_TM87
	.2byte ITEM_TM88
	.2byte ITEM_TM89
	.2byte ITEM_TM90
	.2byte ITEM_TM91
	.2byte ITEM_TM92
	.2byte ITEM_TM93
	.2byte ITEM_TM94
	.2byte ITEM_TM95
	.2byte ITEM_TM96
	.2byte ITEM_TM97
	.2byte ITEM_TM98
	.2byte ITEM_TM99
	.2byte ITEM_TM100
	.2byte ITEM_TM101
	.2byte ITEM_TM102
	.2byte ITEM_TM103
	.2byte ITEM_TM104
	.2byte ITEM_TM105
	.2byte ITEM_TM106
	.2byte ITEM_TM107
	.2byte ITEM_TM108
	.2byte ITEM_TM109
	.2byte ITEM_TM110
	.2byte ITEM_TM111
	.2byte ITEM_TM112
	.2byte ITEM_TM113
	.2byte ITEM_TM114
	.2byte ITEM_TM115
	.2byte ITEM_TM116
	.2byte ITEM_TM117
	.2byte ITEM_TM118
	.2byte ITEM_TM119
	.2byte ITEM_TM120
	.2byte ITEM_TM121
	.2byte ITEM_TM122
	.2byte ITEM_TM123
	.2byte ITEM_TM124
	.2byte ITEM_TM125
	.2byte ITEM_TM126
	.2byte ITEM_TM127
	.2byte ITEM_TM128
	.2byte ITEM_TM129
	.2byte ITEM_TM130
	.2byte ITEM_TM131
	.2byte ITEM_TM132
	.2byte ITEM_TM133
	.2byte ITEM_TM134
	.2byte ITEM_TM135
	.2byte ITEM_TM136
	.2byte ITEM_TM137
	.2byte ITEM_TM138
	.2byte ITEM_TM139
	.2byte ITEM_TM140
	.2byte ITEM_TM141
	.2byte ITEM_TM142
	.2byte ITEM_TM143
	.2byte ITEM_TM144
	.2byte ITEM_TM145
	.2byte ITEM_TM146
	.2byte ITEM_TM147
	.2byte ITEM_TM148
	.2byte ITEM_TM149
	.2byte ITEM_TM150
	.2byte ITEM_TM151
	.2byte ITEM_TM152
	.2byte ITEM_TM153
	.2byte ITEM_TM154
	.2byte ITEM_TM155
	.2byte ITEM_TM156
	.2byte ITEM_TM157
	.2byte ITEM_TM158
	.2byte ITEM_TM159
	.2byte ITEM_TM160
	.2byte ITEM_TM161
	.2byte ITEM_TM162
	.2byte ITEM_TM163
	.2byte ITEM_TM164
	.2byte ITEM_TM165
	.2byte ITEM_TM166
	.2byte ITEM_TM167
	.2byte ITEM_TM168
	.2byte ITEM_TM169
	.2byte ITEM_TM170
	.2byte ITEM_TM171
	.2byte ITEM_TM172
	.2byte ITEM_TM173
	.2byte ITEM_TM174
	.2byte ITEM_TM175
	.2byte ITEM_TM176
	.2byte ITEM_TM177
	.2byte ITEM_TM178
	.2byte ITEM_TM179
	.2byte ITEM_TM180
	.2byte ITEM_TM181
	.2byte ITEM_TM182
	.2byte ITEM_TM183
	.2byte ITEM_TM184
	.2byte ITEM_TM185
	.2byte ITEM_TM186
	.2byte ITEM_TM187
	.2byte ITEM_TM188
	.2byte ITEM_TM189
	.2byte ITEM_TM190
	.2byte ITEM_TM191
	.2byte ITEM_TM192
	.2byte ITEM_TM193
	.2byte ITEM_TM194
	.2byte ITEM_TM195
	.2byte ITEM_TM196
	.2byte ITEM_TM197
	.2byte ITEM_TM198
	.2byte ITEM_TM199
	.2byte ITEM_TM200
	.2byte ITEM_TM201
	.2byte ITEM_TM202
	.2byte ITEM_TM203
	.2byte ITEM_TM204
	.2byte ITEM_TM205
	.2byte ITEM_TM206
	.2byte ITEM_TM207
	.2byte ITEM_TM208
	.2byte ITEM_TM209
	.2byte ITEM_TM210
	.2byte ITEM_TM211
	.2byte ITEM_TM212
	.2byte ITEM_TM213
	.2byte ITEM_TM214
	.2byte ITEM_TM215
	.2byte ITEM_TM216
	.2byte ITEM_TM217
	.2byte ITEM_TM218
	.2byte ITEM_TM219
	.2byte ITEM_TM220
	.2byte ITEM_TM221
	.2byte ITEM_TM222
	.2byte ITEM_TM223
	.2byte ITEM_TM224
	.2byte ITEM_TM225
	.2byte ITEM_TM226
	.2byte ITEM_TM227
	.2byte ITEM_TM228
	.2byte ITEM_TM229
	pokemartlistend

@ The door guards only check for FLAG_BADGE06_GET because Winonas badge is the only one that can be skipped
@ Its assumed the player has the remaining badges
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
	lockall
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_ge VAR_TEMP_0, 11, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
	call_if_le VAR_TEMP_0, 8, EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
	waitmessage
	delay 120
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges
	closemessage
	applymovement LOCALID_LEAGUE_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
	applymovement LOCALID_LEAGUE_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
	waitmovement 0
	delay 10
	playfanfare MUS_OBTAIN_BADGE
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
	waitmessage
	waitfanfare
	closemessage
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_1
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_2
	setflag FLAG_ENTERED_ELITE_FOUR
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight::
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
	waitmovement 0
	return

EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft::
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
	waitmovement 0
	return

EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges::
	playse SE_FAILURE
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_GoForth::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight:
	walk_down
	walk_left
	walk_in_place_faster_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft:
	walk_down
	walk_right
	walk_in_place_faster_up
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay:
	walk_left
	walk_in_place_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay:
	walk_right
	walk_in_place_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges:
	.string "Beyond this point, only those TRAINERS\n"
	.string "who have collected all the GYM BADGES\l"
	.string "are permitted to enter.\p"
	.string "TRAINER, let us confirm that you have\n"
	.string "all the GYM BADGES.$"

EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges:
	.string "You haven't obtained all the BADGES.\p"
	.string "If you're bound for the POKéMON\n"
	.string "LEAGUE, you must return with them.$"

EverGrandeCity_PokemonLeague_1F_Text_GoForth:
	.string "TRAINER! Believe in yourself and your\n"
	.string "POKéMON, and go forth!$"

