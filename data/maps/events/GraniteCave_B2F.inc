GraniteCave_B2F_MapObjects:: @ 838BFEC
	object_event 1, MAP_OBJ_GFX_ITEM_BALL, 0, 4, 0, 4, 0, 3, 1, 0, 0, 0, 0, 0, 0, GraniteCave_B2F_EventScript_1B17BA, FLAG_ITEM_GRANITE_CAVE_B2F_1, 0, 0
	object_event 2, MAP_OBJ_GFX_ITEM_BALL, 0, 29, 0, 4, 0, 3, 1, 0, 0, 0, 0, 0, 0, GraniteCave_B2F_EventScript_1B17C7, FLAG_ITEM_GRANITE_CAVE_B2F_2, 0, 0
	object_event 3, MAP_OBJ_GFX_BREAKABLE_ROCK, 0, 5, 0, 14, 0, 3, 1, 17, 0, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_11, 0, 0
	object_event 4, MAP_OBJ_GFX_BREAKABLE_ROCK, 0, 3, 0, 14, 0, 3, 1, 17, 0, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_12, 0, 0
	object_event 5, MAP_OBJ_GFX_BREAKABLE_ROCK, 0, 2, 0, 16, 0, 3, 1, 17, 0, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_13, 0, 0
	object_event 6, MAP_OBJ_GFX_BREAKABLE_ROCK, 0, 7, 0, 12, 0, 3, 1, 17, 0, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_14, 0, 0
	object_event 7, MAP_OBJ_GFX_BREAKABLE_ROCK, 0, 4, 0, 22, 0, 3, 1, 17, 0, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_15, 0, 0
	object_event 8, MAP_OBJ_GFX_BREAKABLE_ROCK, 0, 6, 0, 22, 0, 3, 1, 17, 0, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_16, 0, 0
	object_event 9, MAP_OBJ_GFX_BREAKABLE_ROCK, 0, 3, 0, 21, 0, 3, 1, 17, 0, 0, 0, 0, 0, S_BreakableRock, FLAG_TEMP_17, 0, 0

GraniteCave_B2F_MapWarps:: @ 838C0C4
	warp_def 29, 13, 3, 2, MAP_GRANITE_CAVE_B1F
	warp_def 28, 21, 3, 3, MAP_GRANITE_CAVE_B1F
	warp_def 8, 5, 3, 4, MAP_GRANITE_CAVE_B1F
	warp_def 12, 3, 3, 5, MAP_GRANITE_CAVE_B1F
	warp_def 29, 2, 3, 6, MAP_GRANITE_CAVE_B1F

GraniteCave_B2F_MapBGEvents:: @ 838C0EC
	bg_hidden_item_event 28, 6, 3, ITEM_EVERSTONE, FLAG_HIDDEN_ITEM_30
	bg_hidden_item_event 15, 11, 3, ITEM_EVERSTONE, FLAG_HIDDEN_ITEM_31

GraniteCave_B2F_MapEvents:: @ 838C104
	map_events GraniteCave_B2F_MapObjects, GraniteCave_B2F_MapWarps, 0x0, GraniteCave_B2F_MapBGEvents
