/*=====================================================================================*/
/**
 * chimney_ctl_types.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef CHIMNEY_CTL_TYPES_H_
#define CHIMNEY_CTL_TYPES_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/
#include "std_reuse.h"
/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/
#ifdef __cplusplus
extern "C" {
#endif
/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/
typedef enum
{
   CHIMNEY_OPEN,
   CHIMNEY_CLOSED
}CHIMNEY_STATE_T;

typedef uint8_t Chimney_State_T;

#ifdef __cplusplus
}
#endif
/*=====================================================================================* 
 * chimney_ctl_types.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*CHIMNEY_CTL_TYPES_H_*/
