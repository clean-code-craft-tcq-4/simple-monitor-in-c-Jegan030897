#include <stdio.h>
#include <assert.h>

int batteryTempRange_check(float temperature) {
    if(temperature < 0 && temperature > 45) {
      printf("Temperature out of range!\n");
      return 0;
    }
}

int batterySOC_outOfRange(float soc) {
    if(soc < 20 || soc > 80) {
      printf("State of Charge out of range!\n");
      return 0;
    }
}

int battery_chagreRate(float chargeRate) {
    if(chargeRate > 0.8) {
      printf("Charge Rate out of range!\n");
      return 0;
    }
}

int main() {
  assert(batteryTempRange_check(25));
  assert(batterySOC_outOfRange(85));
  assert(batterySOC_outOfRange(1));
}
