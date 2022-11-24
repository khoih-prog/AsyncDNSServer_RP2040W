/****************************************************************************************************************************
  multiFileProject.h
  AsyncDNSServer_RP2040W is an Async DNS_Server library for the RP2040W with CYW43439 WiFi

  Based on and modified from ESPAsyncDNSServer Library (https://github.com/devyte/ESPAsyncDNSServer)
  Built by Khoi Hoang https://github.com/khoih-prog/AsyncDNSServer_RP2040W
*****************************************************************************************************************************/

// To demo how to include files in multi-file Projects

#pragma once

#define _ASYNC_DNS_RP2040W_LOGLEVEL_       1

// Can be included as many times as necessary, without `Multiple Definitions` Linker Error
#include <AsyncDNSServer_RP2040W.hpp>        // https://github.com/khoih-prog/AsyncDNSServer_RP2040W
