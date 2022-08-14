/****************************************************************************************************************************
  AsyncDNSServer_RP2040W.h
   
  AsyncDNSServer_RP2040W is an Async DNS_Server library for the RP2040W with CYW43439 WiFi
  
  Based on and modified from ESPAsyncDNSServer Library (https://github.com/devyte/ESPAsyncDNSServer)
  Built by Khoi Hoang https://github.com/khoih-prog/AsyncDNSServer_RP2040W
  
  Version: 1.0.0
  
  Version Modified By   Date      Comments
  ------- -----------  ---------- -----------
  1.0.0   K Hoang      14/08/2022 Initial coding for RP2040W with CYW43439 WiFi
  ***************************************************************************************************************************/

#pragma once
  
#ifndef ASYNC_DNS_SERVER_RP2040W_H
#define ASYNC_DNS_SERVER_RP2040W_H

/////////////////////////////////////////////////

#if ( defined(ARDUINO_RASPBERRY_PI_PICO_W) )
      
  #if (_ASYNCTCP_RP2040W_LOGLEVEL_ > 2)
    #if defined(ARDUINO_RASPBERRY_PI_PICO_W)
      #warning RASPBERRY_PI_PICO_W board using CYW4343 WiFi selected
    #else
      #warning RP2040-based board selected
    #endif
  #endif

  #if defined(WIFI_USE_RP2040)
    #undef WIFI_USE_RP2040
  #endif
  #define WIFI_USE_RP2040      true
  
  #if (_ASYNCTCP_RP2040W_LOGLEVEL_ > 2)
    #warning Use RP2040 architecture from WiFiWebServer
  #endif

#else

  #error For RASPBERRY_PI_PICO_W board using CYW43439 WiFi only
    
#endif

#if defined(SHIELD_TYPE)
  #undef SHIELD_TYPE
#endif

#define SHIELD_TYPE                          "RP2040W CYW43439 WiFi"

/////////////////////////////////////////////////

#define ASYNC_DNS_SERVER_RP2040W_VERSION            "AsyncDNSServer_RP2040W v1.0.0"

#define ASYNC_DNS_SERVER_RP2040W_VERSION_MAJOR      1
#define ASYNC_DNS_SERVER_RP2040W_VERSION_MINOR      0
#define ASYNC_DNS_SERVER_RP2040W_VERSION_PATCH      0

#define ASYNC_DNS_SERVER_RP2040W_VERSION_INT        1000000

/////////////////////////////////////////////////

#include <AsyncUDP_RP2040W.h>

#include "AsyncDNSServer_RP2040W_Debug.h"

#include "AsyncDNSServer_RP2040W.hpp"
#include "AsyncDNSServer_RP2040W_Impl.h"

#endif    // ASYNC_DNS_SERVER_RP2040W_H
