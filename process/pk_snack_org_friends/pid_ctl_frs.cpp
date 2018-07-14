/*=====================================================================================*/
/**
 * pid_ctl_frs.cpp
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
#include "../../../support/atmel_asf/pk_arduino_fwk_code/_inc/arduino_fwk_clk.h"
#include "../../../support/axial_fan_ctl/pk_axial_fan_ctl_user/axial_fan_ctl.h"
#include "../../../support/heater_resistor_ctl/pk_heater_ctl_user/heater_ctl.h"
#include "../../../support/pid_controller/pk_pid_ctl_code/_inc/pid_ctl_ext.h"
#include "../../../support/temp_sensor/pk_temp_monitor_user/temp_monitor.h"
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
Fix32_T pid::Get_PID_CTL_CHANNEL_FAN_DOOR()
{
   return static_cast<Fix32_T>(PID_CTL_FIX32_PARSE_FACTOR*temp_mon::Get_Temperature() );
}
Fix32_T pid::Get_PID_CTL_CHANNEL_HEATER()
{
   return static_cast<Fix32_T>(PID_CTL_FIX32_PARSE_FACTOR*temp_mon::Get_Temperature() );
}

void pid::Put_PID_CTL_CHANNEL_FAN_DOOR(const Fix32_T uout)
{
   uint8_t fan_out = (uout/PID_CTL_FIX32_PARSE_FACTOR);
   fan::Set_Output(fan_out);
}

void pid::Put_PID_CTL_CHANNEL_HEATER(const Fix32_T uout)
{
   uint8_t pwm_out = (uout/PID_CTL_FIX32_PARSE_FACTOR);
   heater::Set_Output(pwm_out);
}


uint32_t pid::Get_Sample_Time(void)
{
   return arduino::Get_Clk();
}
/*=====================================================================================* 
 * pid_ctl_frs.cpp
 *=====================================================================================*
 * Log History
 *
 *=====================================================================================*/

