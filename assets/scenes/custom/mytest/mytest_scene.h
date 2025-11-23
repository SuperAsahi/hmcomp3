#ifndef MYTEST_SCENE_H
#define MYTEST_SCENE_H

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

extern SceneCmd mytest_scene_header00[];
extern RomFile mytest_scene_roomList[];
extern u8 _mytest_room_0SegmentRomStart[];
extern u8 _mytest_room_0SegmentRomEnd[];
extern ActorEntry mytest_scene_header00_playerEntryList[];
extern Spawn mytest_scene_header00_entranceList[];
extern EnvLightSettings mytest_scene_header00_lightSettings[4];
extern SurfaceType mytest_scene_polygonTypes[1];
extern Vec3s mytest_scene_vertices[4];
extern CollisionPoly mytest_scene_polygons[2];
extern CollisionHeader mytest_scene_collisionHeader;
extern SceneCmd mytest_room_0_header00[];
extern Gfx mytest_room_0_shapeHeader_entry_0_opaque[];
extern Vtx mytest_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx mytest_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[4];
extern Gfx mytest_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Gfx mat_mytest_room_0_dl_floor_mat_layerOpaque[];
extern Gfx mytest_room_0_dl_Floor_mesh_layer_Opaque[];
extern RoomShapeNormal mytest_room_0_shapeHeader;
extern RoomShapeDListsEntry mytest_room_0_shapeDListsEntry[1];

#endif
