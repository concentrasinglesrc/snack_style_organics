/*=====================================================================================*/
/**
 * snack_power_mode.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef SSO_PM_H_
#define SSO_PM_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/
#include "sso_power_mode_types.h"
/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported X-Macros
 *=====================================================================================*/

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

typedef union SSO_PM
{
    struct SSO_PM_Class _private * _private vtbl;
    struct 
    {
        struct Object Object;
        SSO_PM_Source_T source;
        uint8_t handle_id;
    };
}SSO_PM_T;

typedef struct SSO_PM_Class
{
    struct Class Class;
    void (* _private request)(union SSO_PM * const);
    void (* _private release)(union SSO_PM * const);
    bool (* _private is_active)(union SSO_PM * const);
}SSO_PM_Class_T;
/*=====================================================================================* 
 * Exported Object Declarations
 *=====================================================================================*/
extern SSO_PM_Class_T _private SSO_PM_Class; 
/*=====================================================================================* 
 * Exported Function Prototypes
 *=====================================================================================*/
extern void Populate_SSO_PM(union SSO_PM * const sso_pm, SSO_PM_Source_T const);
extern void SSO_PM_Release_All(void);
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
#endif /*SSO_PM_H_*/
