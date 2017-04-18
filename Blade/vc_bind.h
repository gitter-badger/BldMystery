#ifndef VC_BIND_H

#define VC_BIND_H

#ifdef VC_BIND

#       define EXTERN
#       define NULL_INIT = NULL

#else

#       define EXTERN extern
#       define NULL_INIT

#endif

class gbl_thiscall_methods
{
        virtual void application_load_world(const char *file_name) = 0;
        virtual void application_set_mode(B_Name &mode) = 0;
};

EXTERN gbl_thiscall_methods *ext_methods NULL_INIT;


#undef EXTERN
#undef NULL_INIT

#endif