#include <stdio.h>
#include <assert.h>
#include "battery_checker.h"

bms_s battery_checkcase[MAX_PARAMETERS];

int battery_status(bms_e parametersToBe_checked, float checkValue)
{
    if((checkValue > battery_checkcase[parametersToBe_checked].bms_Parameter.min) &&
      (checkValue < battery_checkcase[parametersToBe_checked].bms_Parameter.max)) {
        return battery_checkcase[parametersToBe_checked].bms_Parameter.status = TRUE;
    }
}

int main() {
  updateBatteryStatus_ParameterRange(&battery_checkcase);
  assert(battery_status(TEMPERATURE_RANGE, 25));
  assert(battery_status(SOC_RANGE, 50));
  assert(battery_status(CHARGE_RATE, 0.9));
}
