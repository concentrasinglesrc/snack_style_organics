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

/*=====================================================================================*
 * Project Includes
 *=====================================================================================*/
#ifndef TEMP_MONITOR_H_
#define TEMP_MONITOR_H_
/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/
#include <stdint.h>
/*=====================================================================================* 
 * Exported X-Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Define Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Type Declarations
 *=====================================================================================*/
namespace temp_mon{
/*=====================================================================================* 
 * Exported Object Declarations
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Prototypes
 *=====================================================================================*/
extern void Init(void);
extern uint16_t Get_Temperature(void);
extern void Main(void);
extern void Shut(void);
/*=====================================================================================* 
 * Exported Function Like Macros
 *=====================================================================================*/
}/*namespace temp_mon*/
/*=====================================================================================* 
 * arduino_fwk.h
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
#endif /*TEMP_MONITOR_H_*/

