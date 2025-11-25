#include "outset_scene.h"

/**
 * Header Child Day (Default)
*/
SceneCmd outset_scene_header00[] = {
    SCENE_CMD_COL_HEADER(&outset_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, outset_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x00, NA_BGM_FIELD_LOGIC),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x01, 0x00, LIGHT_MODE_TIME),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, outset_scene_header00_lightSettings),
    SCENE_CMD_SPAWN_LIST(outset_scene_header00_entranceList),
    SCENE_CMD_PLAYER_ENTRY_LIST(1, outset_scene_header00_playerEntryList),
    SCENE_CMD_END(),
};

RomFile outset_scene_roomList[] = {
    { (uintptr_t)_outset_room_0SegmentRomStart, (uintptr_t)_outset_room_0SegmentRomEnd },
};

ActorEntry outset_scene_header00_playerEntryList[] = {
    // Link / Spawn point
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { -40, -230, -72 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ (0x0F00 | ((0xFF & 0x00FF)))
    },
};

Spawn outset_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

EnvLightSettings outset_scene_header00_lightSettings[4] = {
    // Default Settings (Dawn)
    {
        {    70,    45,    57 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   180,   154,   138 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    20,    20,    60 },   // Diffuse1 Color
        {   140,   120,   100 },   // Fog Color
        BLEND_RATE_AND_FOG_NEAR(1, 993), // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Default Settings (Day)
    {
        {   105,    90,    90 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   255,   255,   240 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    50,    50,    90 },   // Diffuse1 Color
        {   100,   100,   120 },   // Fog Color
        BLEND_RATE_AND_FOG_NEAR(1, 996), // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Default Settings (Dusk)
    {
        {   120,    90,     0 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   250,   135,    50 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    30,    30,    60 },   // Diffuse1 Color
        {   120,    70,    50 },   // Fog Color
        BLEND_RATE_AND_FOG_NEAR(1, 995), // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Default Settings (Night)
    {
        {    40,    70,   100 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {    20,    20,    35 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    50,    50,   100 },   // Diffuse1 Color
        {     0,     0,    30 },   // Fog Color
        BLEND_RATE_AND_FOG_NEAR(1, 992), // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
};

SurfaceType outset_scene_polygonTypes[1] = {
    { SURFACETYPE0(0, 0, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
};

Vec3s outset_scene_vertices[4] = {
    {   -340,   -230,    228 },
    {    260,   -230,    228 },
    {    260,   -230,   -372 },
    {   -340,   -230,   -372 },
};

CollisionPoly outset_scene_polygons[2] = {
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 230 },
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 230 },
};

CollisionHeader outset_scene_collisionHeader = {
    { -340, -230, -372 },
    { 260, -230, 228 },
    ARRAY_COUNT(outset_scene_vertices), outset_scene_vertices,
    ARRAY_COUNT(outset_scene_polygons), outset_scene_polygons,
    outset_scene_polygonTypes,
    NULL,
    0, NULL
};

