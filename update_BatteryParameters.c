#include <stdio.h>
#include "battery_checker.h"

void updateBatteryStatus_ParameterRange(void){
  battery_checkcase[TEMPERATURE_RANGE].bms_Parameter.status = {FALSE, 0, 45};
  battery_checkcase[TEMPERATURE_RANGE].bms_Parameter.min = 0;
  battery_checkcase[TEMPERATURE_RANGE].bms_Parameter.max = 45;
  
  battery_checkcase[SOC_RANGE].bms_Parameter = FALSE;
  battery_checkcase[SOC_RANGE].min = 20;
  battery_checkcase[SOC_RANGE].max = 80;
  
  battery_checkcase[CHARGE_RATE].bms_Parameter = FALSE;  
  battery_checkcase[CHARGE_RATE].min = 0.8;  
  battery_checkcase[CHARGE_RATE].max = 1;
}
