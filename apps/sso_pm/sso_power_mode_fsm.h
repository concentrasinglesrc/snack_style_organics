#ifndef SSO_POWER_MODE_FSM_H_
#define SSO_POWER_MODE_FSM_H_

#include "fsm.h"
#include "sso_power_mode_types.h"

#define SSO_PM_FSM_DEF(cb) \
FSM_STATE_DEF(cb, SSO_PM_IDLE_STID, \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_POWER_ACQUIRE_REQ_MID, SSO_PM_IDLE_STID,  SSO_PM_Power_Request_Guard, SSO_PM_Subscribe_Handle) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_POWER_RELEASE_REQ_MID, SSO_PM_IDLE_STID,  SSO_PM_Power_Request_Guard, SSO_PM_Unsubscribe_Handle) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_12VDC_INIT_MID,        SSO_PM_12VDC_STID, SSO_PM_12VDC_Guard,         SSO_PM_Init_12VDC_Source) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_120AC_INIT_MID,        SSO_PM_IDLE_STID,  SSO_PM_120AC_Guard,         SSO_PM_Init_120AC_Source) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_SHUTDOWN_MID,          SSO_PM_SHUT_STID,  SSO_PM_Shut_Guard,          SSO_PM_Shut_All) \
     ) \
FSM_STATE_DEF(cb, SSO_PM_12VDC_STID, \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_POWER_ACQUIRE_REQ_MID, SSO_PM_12VDC_STID, SSO_PM_Power_Request_Guard, SSO_PM_Subscribe_Handle) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_POWER_RELEASE_REQ_MID, SSO_PM_12VDC_STID, SSO_PM_Power_Request_Guard, SSO_PM_Unsubscribe_Handle) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_120AC_INIT_MID,        SSO_PM_120AC_STID, SSO_PM_12VDC_Guard,         SSO_PM_Init_120AC_Source) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_12VDC_SHUT_MID,        SSO_PM_IDLE_STID,  SSO_PM_120AC_Guard,         SSO_PM_Shut_12VDC_Source) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_SHUTDOWN_MID,          SSO_PM_SHUT_STID,  SSO_PM_Shut_Guard,          SSO_PM_Shut_All) \
     ) \
FSM_STATE_DEF(cb, SSO_PM_120AC_STID, \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_POWER_ACQUIRE_REQ_MID, SSO_PM_120AC_STID, SSO_PM_Power_Request_Guard, SSO_PM_Subscribe_Handle) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_POWER_RELEASE_REQ_MID, SSO_PM_120AC_STID, SSO_PM_Power_Request_Guard, SSO_PM_Unsubscribe_Handle) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_120AC_SHUT_MID,        SSO_PM_IDLE_STID,  SSO_PM_120AC_Guard,         SSO_PM_Shut_120AC_Source) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_SHUTDOWN_MID,          SSO_PM_SHUT_STID,  SSO_PM_Shut_Guard,          SSO_PM_Shut_All) \
     ) \
FSM_STATE_DEF(cb, SSO_PM_SHUT_STID, \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_POWER_RELEASE_REQ_MID, SSO_PM_SHUT_STID,  SSO_PM_Power_Request_Guard, SSO_PM_Unsubscribe_Handle) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_12VDC_SHUT_MID,        SSO_PM_IDLE_STID,  SSO_PM_12VDC_Guard,         SSO_PM_Shut_12VDC_Source) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_120AC_SHUT_MID,        SSO_PM_IDLE_STID,  SSO_PM_120AC_Guard,         SSO_PM_Shut_120AC_Source) \
     FSM_TRANSITION_DEF(cb, SSO_PM_INT_SHUTDOWN_MID,          SSO_PM_SHUT_STID,  SSO_PM_Shut_Guard,          SSO_PM_Do_Nothing) \
     ) \

#define SSO_PM_Do_Nothing (NULL)

#ifdef __plusplus
extern "C" {
#endif

#define CQueue_Params SSO_PM_Handle_Req
#include "cqueue.h"
#undef CQueue_Params 

typedef union SSO_PM_FSM
{
    union SSO_PM_FSM_Class _private * _private vtbl;
    struct
    {
        union FSM FSM;
        SSO_PM_Source_T _private active[SSO_PM_MAX_SOURCE];
        SSO_PM_Handle_Req_T _private * _private source; 
        size_t _private n_sources;
    };
	union State_Machine State_Machine;
    struct Object Object;
}SSO_PM_FSM_T;

typedef union SSO_PM_FSM_Class
{
    struct Class Class;
	struct State_Machine_Class State_Machine;
    union FSM_Class FSM;
}SSO_PM_FSM_Class_T;

extern SSO_PM_FSM_Class_T _private SSO_PM_FSM_Class;

extern void Populate_SSO_PM_FSM(union SSO_PM_FSM * const fsm);

#ifdef __plusplus
}
#endif
#endif /*SSO_POWER_MODE_FSM_H_*/
