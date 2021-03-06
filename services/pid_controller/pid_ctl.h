/*=====================================================================================*/
/**
 * arduino_fwk.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef PID_CTL_H_
#define PID_CTL_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/
#include "ipc_types.h"
#include "pid_ctl_uset.h"
#include "pid_ctl_types.h"
#include "pid_driver.h"
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
typedef union PID_Ctl
{
    struct PID_Ctl_Class _private * _private vtbl;
    struct
    {
        struct Object Object;
        PID_Fix32_T _private set_point;
        PID_Fix32_T _private feedback;
        IPC_Clock_T _private sample_tout;
        PID_Fix32_T _private time;
        PID_Fix32_T _private u_out[2];
        PID_Fix32_T _private err[2];
        union PID_Driver _private * _private driver;
    };
}PID_Ctl_T;

typedef struct PID_Ctl_Class 
{
    struct Class Class;
    void (* _private set_point)(union PID_Ctl * const, PID_Fix32_T const);
    void (* _private start)(union PID_Ctl * const, union PID_Driver * const);
    void (* _private stop)(union PID_Ctl * const);
    void (* _private loop)(union PID_Ctl * const, PID_Fix32_T const);
    PID_Fix32_T (* _private feedback)(union PID_Ctl * const);
}PID_Ctl_Class_T;

/*=====================================================================================* 
 * Exported Object Declarations
 *=====================================================================================*/
extern struct PID_Ctl_Class _private PID_Ctl_Class;
/*=====================================================================================* 
 * Exported Function Prototypes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Like Macros
 *=====================================================================================*/
extern void Populate_PID_Ctl(union PID_Ctl * const pid);
/*=====================================================================================* 
 * arduino_fwk.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*PID_CTL_H_*/
