#ifndef BEDROOM_SCENE_H
#define BEDROOM_SCENE_H

#include "ultra64.h"
#include "romfile.h"
#include "array_count.h"
#include "sequence.h"
#include "actor_profile.h"
#include "bgcheck.h"
#include "camera.h"
#include "cutscene.h"
#include "cutscene_commands.h"
#include "environment.h"
#include "z_math.h"
#include "object.h"
#include "ocarina.h"
#include "path.h"
#include "player.h"
#include "room.h"
#include "scene.h"

// For older decomp versions
#ifndef SCENE_CMD_PLAYER_ENTRY_LIST
#define SCENE_CMD_PLAYER_ENTRY_LIST(length, playerEntryList) \
    { SCENE_CMD_ID_SPAWN_LIST, length, CMD_PTR(playerEntryList) }
#undef SCENE_CMD_SPAWN_LIST
#define SCENE_CMD_SPAWN_LIST(spawnList) \
    { SCENE_CMD_ID_ENTRANCE_LIST, 0, CMD_PTR(spawnList) }
#endif

#ifndef BLEND_RATE_AND_FOG_NEAR
#define BLEND_RATE_AND_FOG_NEAR(blendRate, fogNear) (s16)((((blendRate) / 4) << 10) | (fogNear))
#endif

extern SceneCmd bedroom_scene_header00[];
extern RomFile bedroom_scene_roomList[];
extern u8 _bedroom_room_0SegmentRomStart[];
extern u8 _bedroom_room_0SegmentRomEnd[];
extern ActorEntry bedroom_scene_header00_playerEntryList[];
extern Spawn bedroom_scene_header00_entranceList[];
extern EnvLightSettings bedroom_scene_header00_lightSettings[4];
extern Vec3s bedroom_scene_camPosData[];
extern BgCamInfo bedroom_scene_bgCamInfo[];
extern SurfaceType bedroom_scene_polygonTypes[21];
extern Vec3s bedroom_scene_vertices[348];
extern CollisionPoly bedroom_scene_polygons[308];
extern CollisionHeader bedroom_scene_collisionHeader;
extern SceneCmd bedroom_room_0_header00[];
extern Gfx bedroom_room_0_shapeHeader_entry_0_opaque[];
extern Gfx bedroom_room_0_shapeHeader_entry_0_transparent[];
extern u64 bedroom_room_0_dl__126C3B26_c_ci4[];
extern u64 bedroom_room_0_dl__126C3B26_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__52A12A91_c_ci4[];
extern u64 bedroom_room_0_dl__52A12A91_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__3D79A74A_c_i8[];
extern u64 bedroom_room_0_dl__48817356_c_ci8[];
extern u64 bedroom_room_0_dl__48817356_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__6C7D8997_c_ci4[];
extern u64 bedroom_room_0_dl__6C7D8997_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__359B37DA_c_ci4[];
extern u64 bedroom_room_0_dl__359B37DA_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__4498498B_c_ci4[];
extern u64 bedroom_room_0_dl__4498498B_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__2DCE7959_c_ci4[];
extern u64 bedroom_room_0_dl__2DCE7959_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__50AD3A49_c_ci4[];
extern u64 bedroom_room_0_dl__50AD3A49_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__8C30E84_c_ci4[];
extern u64 bedroom_room_0_dl__8C30E84_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__14AEFAE7_c_ci4[];
extern u64 bedroom_room_0_dl__14AEFAE7_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__1C58A437_c_ci4[];
extern u64 bedroom_room_0_dl__1C58A437_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__34A26379_c_ci4[];
extern u64 bedroom_room_0_dl__34A26379_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__358D11CB_c_ci4[];
extern u64 bedroom_room_0_dl__358D11CB_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__478FECDD_orig_ia8[];
extern u64 bedroom_room_0_dl__45445EA0_c_ci8[];
extern u64 bedroom_room_0_dl__45445EA0_c_pal_rgba16[];
extern u64 bedroom_room_0_dl__8AE28AD_c_ci8[];
extern u64 bedroom_room_0_dl__8AE28AD_c_pal_rgba16[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_cull[8];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_0[40];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_0[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_1[150];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_1[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_2[89];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_2[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_3[32];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_3[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_4[16];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_4[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_5[8];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_5[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_6[48];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_6[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_7[4];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_7[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_8[62];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_8[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_9[32];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_9[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_10[4];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_10[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_11[24];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_11[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_12[16];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_12[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_13[8];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_13[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_14[4];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_14[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_15[4];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_15[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_16[6];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_16[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_17[8];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_17[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_18[10];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_18[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_19[12];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_19[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_vtx_20[12];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque_tri_20[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Transparent_vtx_cull[8];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Transparent_vtx_0[8];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Transparent_tri_0[];
extern Vtx bedroom_room_0_dl_bedroom_mesh_layer_Transparent_vtx_1[8];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Transparent_tri_1[];
extern Gfx mat_bedroom_room_0_dl_tree_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_pipe_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_walls_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_check_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_window_layerTransparent[];
extern Gfx mat_bedroom_room_0_dl_curtains_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_desk_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_drawers_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_dirt_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_fence_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_brick_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_tissue_box_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_sign_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_cd_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_door_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_tissue_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_floor_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_white_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_bg_trees_layerTransparent[];
extern Gfx mat_bedroom_room_0_dl_bg_layerOpaque[];
extern Gfx mat_bedroom_room_0_dl_books_layerOpaque[];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Opaque[];
extern Gfx bedroom_room_0_dl_bedroom_mesh_layer_Transparent[];
extern RoomShapeNormal bedroom_room_0_shapeHeader;
extern RoomShapeDListsEntry bedroom_room_0_shapeDListsEntry[1];

#endif
