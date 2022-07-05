#include <stdio.h>

#define TRUE   1
#define FALSE  0

typedef enum 
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
}bms_PrameterRange;

typedef struct
{
  bms_PrameterRange bms_Parameter;
}bms_s;

extern bms_s battery_checkcase[MAX_PARAMETERS];

void updateBatteryStatus_ParameterRange(void);
