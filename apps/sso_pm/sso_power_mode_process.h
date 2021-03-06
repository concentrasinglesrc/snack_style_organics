/**
 * snack_power_mode.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef SSO_POWER_MODE_PROCESS_H_
#define SSO_POWER_MODE_PROCESS_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/
#include "sso_power_mode_fsm.h"
#include "sso_power_mode_uset.h"
#include "sso_power_mode_wn.h"
#include "ipc_types.h"
/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported X-Macros
 *=====================================================================================*/
#define SSO_PM_PROCESS_MAILIST(X) \
SSO_PM_SUBSCRIPTION_MAILIST(X) \
X(SSO_PM_INT_REL_ALL_MID,            sso_pm_release_all) \
X(SSO_PM_INT_POWER_ACQUIRE_REQ_MID,  sso_pm_power_request) \
X(SSO_PM_INT_POWER_RELEASE_REQ_MID,  sso_pm_power_request) \

#define SSO_PM_PROCESS_POPULATE_SUBSCRIPTION(mid, func) mid,
/*=====================================================================================*
 * Exported Define Macros
 *=====================================================================================*/
/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif


#define CHash_Map_Params IPC_MID, SSO_PM_Process
#include "chash_map.h"
#undef CHash_Map_Params

typedef CHash_Map_IPC_MID_SSO_PM_Process_T SSO_PM_Dispatcher_T;
typedef Pair_IPC_MID_SSO_PM_Process_T SSO_PM_Processed_MID_T;
/*=====================================================================================* 
 * Exported Object Declarations
 *=====================================================================================*/
extern IPC_MID_T SSO_PM_Subscription_Mailist [];
extern SSO_PM_Processed_MID_T SSO_Process_List [];
extern SSO_PM_Dispatcher_T SSO_PM_Dispatcher;
extern CQueue_SSO_PM_Handle_Req_T SSO_PM_Handle_Req_Queue;
/*=====================================================================================* 
 * Exported Function Prototypes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Like Macros
 *=====================================================================================*/
#ifdef __cplusplus
}/*extern "C"*/
#endif
/*=====================================================================================* 
 * snack_power_mode.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*SSO_POWER_MODE_PROCESS_H_*/
