/****************************************************************************************************************************
  AsyncDNSServer_RP2040W.hpp
   
  AsyncDNSServer_RP2040W is an Async DNS_Server library for the RP2040W with CYW43439 WiFi
  
  Based on and modified from ESPAsyncDNSServer Library (https://github.com/devyte/ESPAsyncDNSServer)
  Built by Khoi Hoang https://github.com/khoih-prog/AsyncDNSServer_RP2040W
  
  Version: 1.0.0
  
  Version Modified By   Date      Comments
  ------- -----------  ---------- -----------
  1.0.0   K Hoang      14/08/2022 Initial coding for RP2040W with CYW43439 WiFi  
  *****************************************************************************************************************************/

#pragma once
  
#ifndef ASYNC_DNS_SERVER_RP2040W_HPP
#define ASYNC_DNS_SERVER_RP2040W_HPP

#include <AsyncUDP_RP2040W.hpp>
#include "AsyncDNSServer_RP2040W_Debug.h"

/////////////////////////////////////////////////

#define DNS_QR_QUERY        0
#define DNS_QR_RESPONSE     1
#define DNS_OPCODE_QUERY    0

enum class AsyncDNSReplyCode : unsigned char
{
  NoError             = 0,
  FormError           = 1,
  ServerFailure       = 2,
  NonExistentDomain   = 3,
  NotImplemented      = 4,
  Refused             = 5,
  YXDomain            = 6,
  YXRRSet             = 7,
  NXRRSet             = 8
};

class AsyncDNSServer
{
  public:
    AsyncDNSServer();
    void setErrorReplyCode(const AsyncDNSReplyCode &replyCode);
    void setTTL(const uint32_t ttl);

    // Returns true if successful, false if there are no sockets available
    bool start(const uint16_t port, const String &domainName, const IPAddress &resolvedIP);
    
    // stops the DNS server
    void stop();

  private:
    AsyncUDP _udp;
    uint16_t _port;
    String _domainName;
    unsigned char _resolvedIP[4];
    uint32_t _ttl;
    AsyncDNSReplyCode _errorReplyCode;

    void processRequest(AsyncUDPPacket &packet);
    void replyWithIP(AsyncUDPPacket &packet);
    void replyWithCustomCode(AsyncUDPPacket &packet);
};

#endif    // ASYNC_DNS_SERVER_RP2040W_HPP
