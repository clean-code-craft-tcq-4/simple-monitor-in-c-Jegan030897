#include <stdio.h>

#define TRUE   1
#define FALSE  0

enum batteryStatus
{
  TEMPERATURE_RANGE = 0,
  SOC_RANGE,
  CHARGE_RATE,
  MAX_PARAMETERS
}bms_e;

typedef struct
{
  int status;
  float min;
  float max;
}bms_s;
