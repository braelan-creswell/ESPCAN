#include <Arduino.h>
#include "boardconfig.h"
#include "vref.h"

float getBatteryVoltage(void)
{
    float vref = 0;
    float vcc = 0;
    float vbat = 0;
    vref = (float)analogRead(VREFADC); //Read the adc value
    vcc = (vref * 3.3) / 4096.0; //Voltage at the pin
    vbat = vcc * 4.704; //Voltage at top of divider
    return vbat;
}