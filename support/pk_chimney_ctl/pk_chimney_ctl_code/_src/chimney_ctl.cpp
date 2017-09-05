/*==========NA===========================================================================*/
/**
 * chimney_ctl.cpp
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
#include "chimney_ctl.h"

#include "../../../../include/snack_style_gpio.h"
#include "arduino_fwk_dio.h"
/*=====================================================================================* 
 * Standard Includes
 *=====================================================================================*/

/*=====================================================================================* 
 * Local X-Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Local Define Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Local Type Definitions
 *=====================================================================================*/

/*=====================================================================================* 
 * Local Object Definitions
 *=====================================================================================*/
static Chimney_State_T Chim_State = CHIMNEY_OPEN;
/*=====================================================================================* 
 * Exported Object Definitions
 *=====================================================================================*/

/*=====================================================================================* 
 * Local Function Prototypes
 *=====================================================================================*/

/*=====================================================================================* 
 * Local Inline-Function Like Macros
 *=====================================================================================*/

/*=====================================================================================* 
 * Local Function Definitions
 *=====================================================================================*/

/*=====================================================================================* 
 * Exported Function Definitions
 *=====================================================================================*/
void chim::Init(void)
{
   arduino::Init_DIO(SNACK_GPIO_DC_MOTOR_H, ARDUINO_DIO_OUTPUT_MODE);
   arduino::Init_DIO(SNACK_GPIO_DC_MOTOR_L, ARDUINO_DIO_OUTPUT_MODE);
   chim::Set_State(Chim_State);
}
void chim::Set_State(Chimney_State_T state)
{
   switch(state)
   {
   case CHIMNEY_OPEN:
      Chim_State = state;
      arduino::Set_DIO(SNACK_GPIO_DC_MOTOR_H, true );
      arduino::Set_DIO(SNACK_GPIO_DC_MOTOR_L, false);
      break;

   case CHIMNEY_CLOSED:
      Chim_State = state;
      arduino::Set_DIO(SNACK_GPIO_DC_MOTOR_H, false);
      arduino::Set_DIO(SNACK_GPIO_DC_MOTOR_L, true );
      break;

   default: break;
   }
}

Chimney_State_T chim::Get_State(void)
{
   return Chim_State;
}
void chim::Shut(void)
{
   chim::Set_State(CHIMNEY_OPEN);
   arduino::Init_DIO(SNACK_GPIO_DC_MOTOR_H, ARDUINO_DIO_INPUT_MODE);
   arduino::Init_DIO(SNACK_GPIO_DC_MOTOR_L, ARDUINO_DIO_INPUT_MODE);
}
/*=====================================================================================* 
 * chimney_ctl.cpp
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/
