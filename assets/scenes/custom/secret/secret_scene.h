#ifndef SECRET_SCENE_H
#define SECRET_SCENE_H

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

extern SceneCmd secret_scene_header00[];
extern RomFile secret_scene_roomList[];
extern u8 _secret_room_0SegmentRomStart[];
extern u8 _secret_room_0SegmentRomEnd[];
extern ActorEntry secret_scene_header00_playerEntryList[];
extern Spawn secret_scene_header00_entranceList[];
extern EnvLightSettings secret_scene_header00_lightSettings[4];
extern SurfaceType secret_scene_polygonTypes[5];
extern Vec3s secret_scene_vertices[236];
extern CollisionPoly secret_scene_polygons[440];
extern CollisionHeader secret_scene_collisionHeader;
extern SceneCmd secret_room_0_header00[];
extern Gfx secret_room_0_shapeHeader_entry_0_opaque[];
extern u64 secret_room_0_dl_HAKAdanCH_room_0_000149F0_Tex_ia4_ia4[];
extern Vtx secret_room_0_dl_Cube_mesh_layer_Opaque_vtx_cull[8];
extern Vtx secret_room_0_dl_Cube_mesh_layer_Opaque_vtx_0[376];
extern Gfx secret_room_0_dl_Cube_mesh_layer_Opaque_tri_0[];
extern Vtx secret_room_0_dl_Cube_mesh_layer_Opaque_vtx_1[192];
extern Gfx secret_room_0_dl_Cube_mesh_layer_Opaque_tri_1[];
extern Vtx secret_room_0_dl_Cube_mesh_layer_Opaque_vtx_2[36];
extern Gfx secret_room_0_dl_Cube_mesh_layer_Opaque_tri_2[];
extern Vtx secret_room_0_dl_Cube_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx secret_room_0_dl_Cube_001_mesh_layer_Opaque_vtx_0[4];
extern Gfx secret_room_0_dl_Cube_001_mesh_layer_Opaque_tri_0[];
extern Vtx secret_room_0_dl_Plane_mesh_layer_Opaque_vtx_cull[8];
extern Vtx secret_room_0_dl_Plane_mesh_layer_Opaque_vtx_0[4];
extern Gfx secret_room_0_dl_Plane_mesh_layer_Opaque_tri_0[];
extern Gfx mat_secret_room_0_dl_f3dlite_material_005_layerOpaque[];
extern Gfx mat_secret_room_0_dl_f3dlite_material_006_layerOpaque[];
extern Gfx mat_secret_room_0_dl_f3dlite_material_007_layerOpaque[];
extern Gfx mat_secret_room_0_dl_f3dlite_material_008_layerOpaque[];
extern Gfx mat_secret_room_0_dl_f3dlite_material_layerOpaque[];
extern Gfx secret_room_0_dl_Cube_mesh_layer_Opaque[];
extern Gfx secret_room_0_dl_Cube_001_mesh_layer_Opaque[];
extern Gfx secret_room_0_dl_Plane_mesh_layer_Opaque[];
extern RoomShapeNormal secret_room_0_shapeHeader;
extern RoomShapeDListsEntry secret_room_0_shapeDListsEntry[1];

#endif
