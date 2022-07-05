#include <stdio.h>
#include "battery_checker.h"

void updateBatteryStatus_ParameterRange(bms_s *Battery_checkcase){
  Battery_checkcase->bms_Parameter->status = FALSE;
  Battery_checkcase->bms_Parameter.min = FALSE;
  Battery_checkcase->bms_Parameter.max = FALSE;
  
  *(Battery_checkcase + 1)->bms_Parameter.status = FALSE;
  *(Battery_checkcase + 1)->bms_Parameter.min = FALSE;
  *(Battery_checkcase + 1)->bms_Parameter.max = FALSE;
  
  *(Battery_checkcase + 2)->bms_Parameter.status = FALSE;
  *(Battery_checkcase + 2)->bms_Parameter.min = FALSE;
  *(Battery_checkcase + 2)->bms_Parameter.max = FALSE;
}
