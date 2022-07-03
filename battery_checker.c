#include <stdio.h>
#include <assert.h>
#include "battery_checker.h"

bms_s battery_checkcase[MAX_PARAMETERS];

void updateBatteryStatus_ParameterRange(void){
  battery_checkcase[TEMPERATURE_RANGE].bms_Parameter = {FALSE, 0, 45};
  battery_checkcase[SOC_RANGE].bms_Parameter = {FALSE, 20, 80};
  battery_checkcase[CHARGE_RATE].bms_Parameter = {FALSE, 1, 0.8};  
}

int battery_status(bms_e parametersToBe_checked, float checkValue)
{
    if((checkValue > battery_checkcase[parametersToBe_checked].min) &&
      (checkValue < battery_checkcase[parametersToBe_checked].max)) {
        return battery_checkcase[parametersToBe_checked].status = TRUE;
    }
}

int main() {
  updateBatteryStatus_ParameterRange();
  assert(battery_status(TEMPERATURE_RANGE, 25));
  assert(battery_status(SOC_RANGE, 50));
  assert(battery_status(CHARGE_RATE, 1));
}
