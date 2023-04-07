#ifndef BOARDCONFIG_H
#define BOARDCONFIG_H

#include <Arduino.h>

//Revision Info
#define FIRMWARE_VERSION "0.0.1"
#define HARDWARE_VERSION "0.0.1"

//Pin GPIO Definitions
#define KLINESLP 4
#define KLINERX 16
#define KLINETX 17
#define J1850TX 18
#define J1850RX 19
#define CANTX GPIO_NUM_25
#define CANRX GPIO_NUM_26
#define VREFADC 34 //VCC--10K--VREFADC--2.7K--GND

#define BLE_SERVICE_UUID    "e0bf7add-8f80-4c51-b4ed-5d136c6c6837" //"19fdde56-369e-4785-bce9-eed84ecb9999" UART service UUID
#define BLE_UUID_RX         "fa446a3a-7a08-4edc-9027-2edd4840bdf2"
#define BLE_UUID_TX         "23aba179-11c7-4ff6-ade5-6e510f75809f"

#define WIFI_SSID "ESPCAN"
#define WIFI_PASS "ESPCANLETMEIN"

#endif