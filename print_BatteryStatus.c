#include <stdio.h>

void print_BatteryStatus(bms_s *battery_Status){
  if(Battery_checkcase->bms_Parameter.status == TRUE && (Battery_checkcase+1)->bms_Parameter.status == TRUE
    && (Battery_checkcase+2)->bms_Parameter.status == TRUE){
    printf("BATTERY STATUS: GOOD\n");
  }
  else{
    printf("BATTERY STATUS: NOT OK\n");
  }
}
