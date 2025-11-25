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
extern SurfaceType pikmin_scene_polygonTypes[2];
extern Vec3s pikmin_scene_vertices[61];
extern CollisionPoly pikmin_scene_polygons[63];
extern CollisionHeader pikmin_scene_collisionHeader;
extern SceneCmd pikmin_room_0_header00[];
extern Gfx pikmin_room_0_shapeHeader_entry_0_opaque[];
extern u64 pikmin_room_0_dl_grass00_rgba16_rgba16[];
extern u64 pikmin_room_0_dl_grass01_rgba16_rgba16[];
extern u64 pikmin_room_0_dl_landing_rgba16_rgba16[];
extern Vtx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_vtx_0[78];
extern Gfx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_tri_0[];
extern Vtx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_vtx_1[4];
extern Gfx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque_tri_1[];
extern Gfx mat_pikmin_room_0_dl_grass_layerOpaque[];
extern Gfx mat_pikmin_room_0_dl_landing_layerOpaque[];
extern Gfx pikmin_room_0_dl_Mesh_0010_001_mesh_layer_Opaque[];
extern RoomShapeNormal pikmin_room_0_shapeHeader;
extern RoomShapeDListsEntry pikmin_room_0_shapeDListsEntry[1];

#endif
