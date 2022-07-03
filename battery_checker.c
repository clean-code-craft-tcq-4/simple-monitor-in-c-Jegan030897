#include <stdio.h>
#include <assert.h>
#include "battery_checker.h"

bms_s battery_checkcase[MAX_PARAMETERS];

void print_batteryStatus(void){
    if((TRUE == battery_checkcase[TEMPERATURE_RANGE].status) && (TRUE == battery_checkcase[SOC_RANGE].status) &&
      (TRUE == battery_checkcase[SOC_RANGE].status))
    {
        printf("Battery Status: Good\n");
    }
    else
    {
        printf("Battery Status: NOT OK\n");
    }
}

void updateBatteryStatus_ParameterRange(void){
  battery_checkcase[TEMPERATURE_RANGE].status = FALSE;
  battery_checkcase[TEMPERATURE_RANGE].min = 0;
  battery_checkcase[TEMPERATURE_RANGE].max = 45;
    
  battery_checkcase[SOC_RANGE].status = FALSE;
  battery_checkcase[SOC_RANGE].min = 20;
  battery_checkcase[SOC_RANGE].max = 80;
        
  battery_checkcase[CHARGE_RATE].status = FALSE;
  battery_checkcase[CHARGE_RATE].min = 1;
  battery_checkcase[CHARGE_RATE].max = 0.8;    
}

int battery_status(bms_e parametersToBe_checked, float checkValue)
{
    if((checkValue < battery_checkcase[parametersToBe_checked].min) &&
      (checkValue > battery_checkcase[parametersToBe_checked].max))
    {
        return battery_checkcase[parametersToBe_checked].status = FALSE;
    }
    else
    {
        return battery_checkcase[parametersToBe_checked].status = TRUE;
    }
}

int main() {
  updateBatteryStatus_ParameterRange();
  
  assert(battery_status(TEMPERATURE_RANGE, 25));
  assert(battery_status(SOC_RANGE, 50));
  assert(battery_status(CHARGE_RATE, 1));
  
  print_batteryStatus();
}
