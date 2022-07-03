#include <stdio.h>

enum batteryStatus
{
  TEMPERATURE_RANGE = 0,
  SOC_RANGE,
  CHARGE_RATE
}batteryStatus_e;

typedef struct
{
  float min;
  float max;
}batteryStatus_s;
