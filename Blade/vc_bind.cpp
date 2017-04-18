#include <bld_system.h>
#include "BBLibc.h"
#define VC_BIND
#include "vc_bind.h"
#include "bld_ext_funcs.h"




void init_thiscall_methods()
{
        int **ptr = new int * [1];
        void **vtbl = new void *[2];
        vtbl[0] = _thiscall_application_load_world;
        vtbl[1] = _thiscall_application_set_mode;
        ext_methods = (gbl_thiscall_methods *)ptr;
}