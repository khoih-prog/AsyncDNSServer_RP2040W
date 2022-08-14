/****************************************************************************************************************************
  defines.h
  
  AsyncDNSServer_RP2040W is an Async DNS_Server library for the RP2040W with CYW43439 WiFi
  
  Based on and modified from ESPAsyncDNSServer Library (https://github.com/devyte/ESPAsyncDNSServer)
  Built by Khoi Hoang https://github.com/khoih-prog/AsyncDNSServer_RP2040W
 *****************************************************************************************************************************/

#ifndef defines_h
#define defines_h

#if !( defined(ARDUINO_RASPBERRY_PI_PICO_W) )
  #error For RASPBERRY_PI_PICO_W only
#endif

#define ASYNC_DNS_RP2040W_DEBUG_PORT       Serial

// Debug Level from 0 to 4
#define _ASYNC_DNS_RP2040W_LOGLEVEL_       4

#if (_ASYNC_DNS_RP2040W_LOGLEVEL_ > 3)
  #warning Using RASPBERRY_PI_PICO_W with CYW43439 WiFi
#endif

char ssid[] = "your_ssid";        // your network SSID (name)
char pass[] = "12345678";         // your network password (use for WPA, or use as key for WEP), length must be 8+

#endif    //defines_h
