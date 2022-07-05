#include <stdio.h>
#include "battery_checker.h"

void updateBatteryStatus_ParameterRange(bms_s *Battery_checkcase){
  Battery_checkcase->bms_Parameter.status = FALSE;
  Battery_checkcase->bms_Parameter.min = 0;
  Battery_checkcase->bms_Parameter.max = 45;
  
  (Battery_checkcase + 1)->bms_Parameter.status = FALSE;
  (Battery_checkcase + 1)->bms_Parameter.min = 20;
  (Battery_checkcase + 1)->bms_Parameter.max = 80;
  
  (Battery_checkcase + 2)->bms_Parameter.status = FALSE;
  (Battery_checkcase + 2)->bms_Parameter.min = 0.8;
  (Battery_checkcase + 2)->bms_Parameter.max = 1;
}
