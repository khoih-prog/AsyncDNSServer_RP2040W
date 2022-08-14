/****************************************************************************************************************************
  AsyncDNSServer_RP2040W_Debug.h
   
  AsyncDNSServer_RP2040W is an Async DNS_Server library for the RP2040W with CYW43439 WiFi
  
  Based on and modified from ESPAsyncDNSServer Library (https://github.com/devyte/ESPAsyncDNSServer)
  Built by Khoi Hoang https://github.com/khoih-prog/AsyncDNSServer_RP2040W
  
  Version: 1.0.0
  
  Version Modified By   Date      Comments
  ------- -----------  ---------- -----------
  1.0.0   K Hoang      14/08/2022 Initial coding for RP2040W with CYW43439 WiFi
  *****************************************************************************************************************************/

#pragma once

#ifndef ASYNC_DNS_SERVER_RP2040W_DEBUG_H
#define ASYNC_DNS_SERVER_RP2040W_DEBUG_H

#ifdef ASYNC_DNS_RP2040W_DEBUG_PORT
  #define DBG_PORT_ASYNC_DNS      ASYNC_DNS_RP2040W_DEBUG_PORT
#else
  #define DBG_PORT_ASYNC_DNS      Serial
#endif

// Change _ASYNC_DNS_RP2040W_LOGLEVEL_ to set tracing and logging verbosity
// 0: DISABLED: no logging
// 1: ERROR: errors
// 2: WARN: errors and warnings
// 3: INFO: errors, warnings and informational (default)
// 4: DEBUG: errors, warnings, informational and debug

#ifndef _ASYNC_DNS_RP2040W_LOGLEVEL_
  #define _ASYNC_DNS_RP2040W_LOGLEVEL_       0
#endif

/////////////////////////////////////////////////////////

const char ASYNC_DNS_MARK[] = "[ADNS] ";

#define ASYNC_DNS_PRINT_MARK   ASYNC_DNS_PRINT(ASYNC_DNS_MARK)
#define ASYNC_DNS_PRINT_SP     DBG_PORT_ASYNC_DNS.print(" ")

#define ASYNC_DNS_PRINT        DBG_PORT_ASYNC_DNS.print
#define ASYNC_DNS_PRINTLN      DBG_PORT_ASYNC_DNS.println

/////////////////////////////////////////////////////////

#define DNS_LOGERROR(x)         if(_ASYNC_DNS_RP2040W_LOGLEVEL_>0) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINTLN(x); }
#define DNS_LOGERROR0(x)        if(_ASYNC_DNS_RP2040W_LOGLEVEL_>0) { ASYNC_DNS_PRINT(x); }
#define DNS_LOGERROR1(x,y)      if(_ASYNC_DNS_RP2040W_LOGLEVEL_>0) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINT(x); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINTLN(y); }
#define DNS_LOGERROR2(x,y,z)    if(_ASYNC_DNS_RP2040W_LOGLEVEL_>0) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINT(x); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINT(y); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINTLN(z); }
#define DNS_LOGERROR3(x,y,z,w)  if(_ASYNC_DNS_RP2040W_LOGLEVEL_>0) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINT(x); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINT(y); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINT(z); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINTLN(w); }

/////////////////////////////////////////////////////////

#define DNS_LOGWARN(x)          if(_ASYNC_DNS_RP2040W_LOGLEVEL_>1) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINTLN(x); }
#define DNS_LOGWARN0(x)         if(_ASYNC_DNS_RP2040W_LOGLEVEL_>1) { ASYNC_DNS_PRINT(x); }
#define DNS_LOGWARN1(x,y)       if(_ASYNC_DNS_RP2040W_LOGLEVEL_>1) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINT(x); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINTLN(y); }
#define DNS_LOGWARN2(x,y,z)     if(_ASYNC_DNS_RP2040W_LOGLEVEL_>1) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINT(x); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINT(y); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINTLN(z); }
#define DNS_LOGWARN3(x,y,z,w)   if(_ASYNC_DNS_RP2040W_LOGLEVEL_>1) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINT(x); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINT(y); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINT(z); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINTLN(w); }

/////////////////////////////////////////////////////////

#define DNS_LOGINFO(x)          if(_ASYNC_DNS_RP2040W_LOGLEVEL_>2) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINTLN(x); }
#define DNS_LOGINFO0(x)         if(_ASYNC_DNS_RP2040W_LOGLEVEL_>2) { ASYNC_DNS_PRINT(x); }
#define DNS_LOGINFO1(x,y)       if(_ASYNC_DNS_RP2040W_LOGLEVEL_>2) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINT(x); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINTLN(y); }
#define DNS_LOGINFO2(x,y,z)     if(_ASYNC_DNS_RP2040W_LOGLEVEL_>2) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINT(x); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINT(y); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINTLN(z); }
#define DNS_LOGINFO3(x,y,z,w)   if(_ASYNC_DNS_RP2040W_LOGLEVEL_>2) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINT(x); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINT(y); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINT(z); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINTLN(w); }

/////////////////////////////////////////////////////////

#define DNS_LOGDEBUG(x)         if(_ASYNC_DNS_RP2040W_LOGLEVEL_>3) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINTLN(x); }
#define DNS_LOGDEBUG0(x)        if(_ASYNC_DNS_RP2040W_LOGLEVEL_>3) { ASYNC_DNS_PRINT(x); }
#define DNS_LOGDEBUG1(x,y)      if(_ASYNC_DNS_RP2040W_LOGLEVEL_>3) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINT(x); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINTLN(y); }
#define DNS_LOGDEBUG2(x,y,z)    if(_ASYNC_DNS_RP2040W_LOGLEVEL_>3) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINT(x); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINT(y); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINTLN(z); }
#define DNS_LOGDEBUG3(x,y,z,w)  if(_ASYNC_DNS_RP2040W_LOGLEVEL_>3) { ASYNC_DNS_PRINT_MARK; ASYNC_DNS_PRINT(x); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINT(y); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINT(z); ASYNC_DNS_PRINT_SP; ASYNC_DNS_PRINTLN(w); }


/////////////////////////////////////////////////////////

#endif    //ASYNC_DNS_SERVER_RP2040W_DEBUG_H
