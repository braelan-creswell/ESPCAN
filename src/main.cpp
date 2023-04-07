#include <Arduino.h>
#include <CAN.h> //Arduino CAN Library
#include <OBD9141.h> //K-Line Diagnostic Library

#include "boardconfig.h"
#include "vref.h"

void setup() {
  Serial.begin(115200); //Serial for debug or other purposes
  Serial.println("Starting ESP32 CAN OBD2 Interface");
  Serial.println("Firmware Version: " + String(FIRMWARE_VERSION));
  Serial.println("Hardware Version: " + String(HARDWARE_VERSION));
  Serial.println("Battery Voltage: " + String(getBatteryVoltage()));
}

void loop() {
  // put your main code here, to run repeatedly:
}