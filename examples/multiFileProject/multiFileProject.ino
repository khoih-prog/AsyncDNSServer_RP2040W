/****************************************************************************************************************************
  multiFileProject.ino
  AsyncDNSServer_RP2040W is an Async DNS_Server library for the RP2040W with CYW43439 WiFi

  Based on and modified from ESPAsyncDNSServer Library (https://github.com/devyte/ESPAsyncDNSServer)
  Built by Khoi Hoang https://github.com/khoih-prog/AsyncDNSServer_RP2040W
*****************************************************************************************************************************/

// To demo how to include files in multi-file Projects

#if !( defined(ARDUINO_RASPBERRY_PI_PICO_W) )
  #error For RASPBERRY_PI_PICO_W only
#endif

#define ASYNC_DNS_SERVER_RP2040W_VERSION_MIN_TARGET      "AsyncDNSServer_RP2040W v1.0.0"
#define ASYNC_DNS_SERVER_RP2040W_VERSION_MIN             1000000

#include "multiFileProject.h"

// To be included only in main(), .ino with setup() to avoid `Multiple Definitions` Linker Error
#include <AsyncDNSServer_RP2040W.h>        // https://github.com/khoih-prog/AsyncDNSServer_RP2040W

void setup()
{
  Serial.begin(115200);

  while (!Serial && millis() < 5000);

  Serial.println("\nStart multiFileProject on ");
  Serial.println(BOARD_NAME);
  Serial.println(ASYNC_DNS_SERVER_RP2040W_VERSION);

#if defined(ASYNC_DNS_SERVER_RP2040W_VERSION_MIN)

  if (ASYNC_DNS_SERVER_RP2040W_VERSION_INT < ASYNC_DNS_SERVER_RP2040W_VERSION_MIN)
  {
    Serial.print("Warning. Must use this example on Version equal or later than : ");
    Serial.println(ASYNC_DNS_SERVER_RP2040W_VERSION_MIN_TARGET);
  }

#endif

  Serial.print("You're OK now");
}

void loop()
{
  // put your main code here, to run repeatedly:
}
