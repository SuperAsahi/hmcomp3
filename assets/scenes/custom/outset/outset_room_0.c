#include "outset_scene.h"

/**
 * Header Child Day (Default)
*/
SceneCmd outset_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&outset_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_END(),
};

RoomShapeNormal outset_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(outset_room_0_shapeDListsEntry),
    outset_room_0_shapeDListsEntry,
    outset_room_0_shapeDListsEntry + ARRAY_COUNT(outset_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry outset_room_0_shapeDListsEntry[1] = {
    { outset_room_0_shapeHeader_entry_0_opaque, NULL }
};

Gfx outset_room_0_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(outset_room_0_dl_Floor_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx outset_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-340, -230, 228}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-340, -230, 228}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-340, -230, -372}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-340, -230, -372}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {260, -230, 228}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {260, -230, 228}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {260, -230, -372}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {260, -230, -372}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx outset_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-340, -230, 228}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {260, -230, 228}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {260, -230, -372}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-340, -230, -372}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx outset_room_0_dl_Floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(outset_room_0_dl_Floor_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_outset_room_0_dl_floor_mat_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_LIGHTING | G_FOG | G_CULL_BACK | G_SHADE | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_CK_NONE | G_TP_PERSP | G_CYC_2CYCLE | G_TF_BILERP | G_PM_NPRIMITIVE | G_CD_MAGICSQ | G_TC_FILT | G_AD_NOISE | G_TT_NONE | G_TL_TILE | G_TD_CLAMP),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF2 | G_AC_NONE | G_RM_FOG_SHADE_A | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsSPEndDisplayList(),
};

Gfx outset_room_0_dl_Floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(outset_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_outset_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(outset_room_0_dl_Floor_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

