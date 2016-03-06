/*=====================================================================================*/
/**
 * snack_power_mode_types.h
 * author : puch
 * date : Oct 22 2015
 *
 * description : Any comments
 *
 */
/*=====================================================================================*/
#ifndef SNACK_POWER_MODE_TYPES_H_
#define SNACK_POWER_MODE_TYPES_H_
/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/
#include "snack_power_mode_uset.h"
#include "std_def.h"
/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/
#undef PMODE_SOURCE
#define PMODE_SOURCE(src, osc) src,

typedef enum
{
   POWER_MODE_SOURCES_TB
   PMODE_SOURCE_MAX
}PMODE_SOURCES_T;

typedef uint8_t PMode_Sources_T;

#undef PMODE_STATE
#define PMODE_STATE(st) st,
typedef enum
{
   POWER_MODE_STATES_TB
   PMODE_MAX_STATES
}PMODE_STATE_T;
typedef uint8_t PMode_State_T;
/*=====================================================================================* 
 * snack_power_mode_types.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*SNACK_POWER_MODE_TYPES_H_*/
