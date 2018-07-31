/*=====================================================================================*/
/**
 * snack_power_mode_wn.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef SNACK_POWER_MODE_WN_H_
#define SNACK_POWER_MODE_WN_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/
#include "sso_power_mode_uset.h"
#include "sso_power_mode_types.h"
#include "worker.h"
/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/
#ifdef __cplusplus
extern "C"
{
#endif
/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/
typedef union SSO_PM_Worker
{
    union SSO_PM_Worker_Class _private * private vtbl;
    union Worker Worker;
    struct Object Object;
}SSO_PM_Worker_T;
typedef union SSO_PM_Worker_Class
{
    struct Class Class;
    union Worker_Class Worker;
}SSO_PM_Worker_Class_T;
/*=====================================================================================*
 * Exported Object Declarations
 *=====================================================================================*/
extern SSO_PM_Worker_Class_T _private SSO_PM_Worker_Class;
/*=====================================================================================* 
 * Exported Function Prototypes
 *=====================================================================================*/
extern void Populate_SSO_PM_Worker(union SSO_PM_Worker * const sso_pm_worker);

#ifdef __cplusplus
}
#endif/*extern "C"*/
/*=====================================================================================* 
 * Exported Function Like Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * snack_power_mode_wn.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*SNACK_POWER_MODE_WN_H_*/