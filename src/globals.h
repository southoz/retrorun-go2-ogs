#pragma once

enum RETRORUN_CORE_TYPE
{
    RETRORUN_CORE_UNKNOWN = 0,
    RETRORUN_CORE_ATARI800,
    RETRORUN_CORE_MGBA
};

extern RETRORUN_CORE_TYPE Retrorun_Core;
extern bool Retrorun_UseAnalogStick;
extern bool opt_triggers_right;
extern bool opt_triggers_left;
