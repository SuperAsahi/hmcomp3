#ifndef PIKMIN_SCENE_H
#define PIKMIN_SCENE_H

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

extern SceneCmd pikmin_scene_header00[];
extern RomFile pikmin_scene_roomList[];
extern u8 _pikmin_room_0SegmentRomStart[];
extern u8 _pikmin_room_0SegmentRomEnd[];
extern ActorEntry pikmin_scene_header00_playerEntryList[];
extern Spawn pikmin_scene_header00_entranceList[];
extern EnvLightSettings pikmin_scene_header00_lightSettings[4];
extern SurfaceType pikmin_scene_polygonTypes[11];
extern Vec3s pikmin_scene_vertices[573];
extern CollisionPoly pikmin_scene_polygons[984];
extern CollisionHeader pikmin_scene_collisionHeader;
extern SceneCmd pikmin_room_0_header00[];
extern Gfx pikmin_room_0_shapeHeader_entry_0_opaque[];
extern u64 pikmin_room_0_dl_burn00_rgba16[];
extern u64 pikmin_room_0_dl_HAKAdanCH_room_0_000149F0_Tex_ia4_ia4[];
extern u64 pikmin_room_0_dl_landing_alpha_ci8[];
extern u64 pikmin_room_0_dl_landing_alpha_pal_rgba16[];
extern u64 pikmin_room_0_dl_bark_ci8[];
extern u64 pikmin_room_0_dl_bark_x_bark_pal_rgba16[];
extern u64 pikmin_room_0_dl_stump00_rgba16[];
extern u64 pikmin_room_0_dl_bark01_rgba16[];
extern u64 pikmin_room_0_dl_grass00_rgba16_rgba16[];
extern u64 pikmin_room_0_dl_grass01_rgba16_rgba16[];
extern u64 pikmin_room_0_dl_stump01_ci8[];
extern u64 pikmin_room_0_dl_stump01_x_stump00_pal_rgba16[];
extern u64 pikmin_room_0_dl_stump00_ci8[];
extern u64 pikmin_room_0_dl_wall00_rgba16[];
extern u64 pikmin_room_0_dl_rock_rgba16[];
extern u64 pikmin_room_0_dl_leaves_rgba16[];
extern Vtx pikmin_room_0_dl_burn_mesh_layer_Opaque_vtx_cull[8];
extern Vtx pikmin_room_0_dl_burn_mesh_layer_Opaque_vtx_0[4];
extern Gfx pikmin_room_0_dl_burn_mesh_layer_Opaque_tri_0[];
extern Vtx pikmin_room_0_dl_Cube_mesh_layer_Opaque_vtx_cull[8];
extern Vtx pikmin_room_0_dl_Cube_mesh_layer_Opaque_vtx_0[477];
extern Gfx pikmin_room_0_dl_Cube_mesh_layer_Opaque_tri_0[];
extern Vtx pikmin_room_0_dl_Cube_mesh_layer_Opaque_vtx_1[192];
extern Gfx pikmin_room_0_dl_Cube_mesh_layer_Opaque_tri_1[];
extern Vtx pikmin_room_0_dl_Cube_mesh_layer_Opaque_vtx_2[36];
extern Gfx pikmin_room_0_dl_Cube_mesh_layer_Opaque_tri_2[];
extern Vtx pikmin_room_0_dl_Cube_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx pikmin_room_0_dl_Cube_001_mesh_layer_Opaque_vtx_0[4];
extern Gfx pikmin_room_0_dl_Cube_001_mesh_layer_Opaque_tri_0[];
extern Vtx pikmin_room_0_dl_landing_mesh_layer_Opaque_vtx_cull[8];
extern Vtx pikmin_room_0_dl_landing_mesh_layer_Opaque_vtx_0[4];
extern Gfx pikmin_room_0_dl_landing_mesh_layer_Opaque_tri_0[];
extern Vtx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_vtx_0[445];
extern Gfx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_tri_0[];
extern Vtx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_vtx_1[103];
extern Gfx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_tri_1[];
extern Vtx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_vtx_2[124];
extern Gfx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_tri_2[];
extern Vtx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_vtx_3[100];
extern Gfx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_tri_3[];
extern Vtx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_vtx_4[41];
extern Gfx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_tri_4[];
extern Vtx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_vtx_5[225];
extern Gfx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_tri_5[];
extern Vtx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_vtx_6[25];
extern Gfx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_tri_6[];
extern Gfx mat_pikmin_room_0_dl_burn_layerOpaque[];
extern Gfx mat_pikmin_room_0_dl_f3dlite_material_005_layerOpaque[];
extern Gfx mat_pikmin_room_0_dl_f3dlite_material_006_layerOpaque[];
extern Gfx mat_pikmin_room_0_dl_f3dlite_material_007_layerOpaque[];
extern Gfx mat_pikmin_room_0_dl_f3dlite_material_layerOpaque[];
extern Gfx mat_pikmin_room_0_dl_landing_alpha_layerOpaque[];
extern Gfx mat_pikmin_room_0_dl_bark_layerOpaque[];
extern Gfx mat_pikmin_room_0_dl_stump_layerOpaque[];
extern Gfx mat_pikmin_room_0_dl_grass_layerOpaque[];
extern Gfx mat_pikmin_room_0_dl_stump01_layerOpaque[];
extern Gfx mat_pikmin_room_0_dl_wall00_layerOpaque[];
extern Gfx mat_pikmin_room_0_dl_rock_layerOpaque[];
extern Gfx mat_pikmin_room_0_dl_leaves_layerOpaque[];
extern Gfx pikmin_room_0_dl_burn_mesh_layer_Opaque[];
extern Gfx pikmin_room_0_dl_Cube_mesh_layer_Opaque[];
extern Gfx pikmin_room_0_dl_Cube_001_mesh_layer_Opaque[];
extern Gfx pikmin_room_0_dl_landing_mesh_layer_Opaque[];
extern Gfx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque[];
extern RoomShapeNormal pikmin_room_0_shapeHeader;
extern RoomShapeDListsEntry pikmin_room_0_shapeDListsEntry[1];

#endif
