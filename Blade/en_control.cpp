
#include "en_control.h"

/*
................................................................................
................................................................................
................................................................................
................................................................................
*/

/*
* Module:                 Blade.exe
* Entry point:            0x0059650C
* VC++ mangling:          ?StartRecordingDemo@EnControl@@QAEHXZ
*/

#ifdef BLD_NATIVE

int EnControl::StartRecordingDemo()
{
    return 0;
}

#endif


/*
* Module:                 Blade.exe
* Entry point:            0x0059654C
* VC++ mangling:          ?EndRecordingDemo@EnControl@@QAEHPBD@Z
*/

#ifdef BLD_NATIVE

int EnControl::EndRecordingDemo(const char *name)
{
    return 0;
}

#endif


/*
* Module:                 Blade.exe
* Entry point:            0x005967DD
* VC++ mangling:          ?PlayDemo@EnControl@@QAEHPBD@Z
*/

#ifdef BLD_NATIVE

int EnControl::PlayDemo(const char *name)
{
    return 0;
}

#endif
