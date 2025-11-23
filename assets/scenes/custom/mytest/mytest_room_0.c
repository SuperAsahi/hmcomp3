#include "mytest_scene.h"

/**
 * Header Child Day (Default)
*/
SceneCmd mytest_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&mytest_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_END(),
};

RoomShapeNormal mytest_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(mytest_room_0_shapeDListsEntry),
    mytest_room_0_shapeDListsEntry,
    mytest_room_0_shapeDListsEntry + ARRAY_COUNT(mytest_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry mytest_room_0_shapeDListsEntry[1] = {
    { mytest_room_0_shapeHeader_entry_0_opaque, NULL }
};

Gfx mytest_room_0_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(mytest_room_0_dl_Floor_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx mytest_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-300, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-300, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-300, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-300, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx mytest_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-300, -120, 300}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {300, -120, 300}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {300, -120, -300}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-300, -120, -300}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx mytest_room_0_dl_Floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(mytest_room_0_dl_Floor_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_mytest_room_0_dl_floor_mat_layerOpaque[] = {
	gsSPLoadGeometryMode(G_CULL_BACK | G_FOG | G_SHADING_SMOOTH | G_SHADE | G_ZBUFFER | G_LIGHTING),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_TP_PERSP | G_TC_FILT | G_TL_TILE | G_TD_CLAMP | G_AD_NOISE | G_PM_NPRIMITIVE | G_TT_NONE | G_CK_NONE | G_CD_MAGICSQ | G_TF_BILERP | G_CYC_2CYCLE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2 | G_ZS_PIXEL | G_AC_NONE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsSPEndDisplayList(),
};

Gfx mytest_room_0_dl_Floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(mytest_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_mytest_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(mytest_room_0_dl_Floor_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

