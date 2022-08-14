# AsyncDNSServer_RP2040W


[![arduino-library-badge](https://www.ardu-badge.com/badge/AsyncDNSServer_RP2040W.svg?)](https://www.ardu-badge.com/AsyncDNSServer_RP2040W)
[![GitHub release](https://img.shields.io/github/release/khoih-prog/AsyncDNSServer_RP2040W.svg)](https://github.com/khoih-prog/AsyncDNSServer_RP2040W/releases)
[![contributions welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat)](#Contributing)
[![GitHub issues](https://img.shields.io/github/issues/khoih-prog/AsyncDNSServer_RP2040W.svg)](http://github.com/khoih-prog/AsyncDNSServer_RP2040W/issues)

<a href="https://www.buymeacoffee.com/khoihprog6" title="Donate to my libraries using BuyMeACoffee"><img src="https://cdn.buymeacoffee.com/buttons/v2/default-yellow.png" alt="Donate to my libraries using BuyMeACoffee" style="height: 50px !important;width: 181px !important;" ></a>
<a href="https://www.buymeacoffee.com/khoihprog6" title="Donate to my libraries using BuyMeACoffee"><img src="https://img.shields.io/badge/buy%20me%20a%20coffee-donate-orange.svg?logo=buy-me-a-coffee&logoColor=FFDD00" style="height: 20px !important;width: 200px !important;" ></a>

---
---

## Table of Contents


* [Why do we need this AsyncDNSServer_RP2040W library](#why-do-we-need-this-AsyncDNSServer_RP2040W-library)
  * [Features](#features)
  * [Why Async is better](#why-async-is-better)
  * [Currently Supported Boards](#currently-supported-boards)
* [Changelog](changelog.md)
* [Prerequisites](#prerequisites)
* [Installation](#installation)
  * [Use Arduino Library Manager](#use-arduino-library-manager)
  * [Manual Install](#manual-install)
  * [VS Code & PlatformIO](#vs-code--platformio)
* [HOWTO Fix `Multiple Definitions` Linker Error](#howto-fix-multiple-definitions-linker-error)
* [HOWTO Setting up the Async DNS Server](#howto-setting-up-the-async-dns-server)
* [Examples](#examples)
	* [ 1. AsyncCaptivePortal](examples/AsyncCaptivePortal)
  * [ 2. AsyncCaptivePortalAdvanced](examples/AsyncCaptivePortalAdvanced) 
  * [ 3. AsyncDNServerFull](examples/AsyncDNServerFull)
  * [ 4. AsyncDNSServer](examples/AsyncDNSServer)
  * [ 5. multiFileProject](examples/multiFileProject)
* [Example AsyncDNSServer](#example-AsyncDNSServer)
  * [1. File AsyncDNSServer.ino](#1-file-AsyncDNSServerino)
  * [2. File defines.h](#2-file-definesh) 
* [Debug](#debug)
* [Troubleshooting](#troubleshooting)
* [Issues](#issues)
* [TO DO](#to-do)
* [DONE](#done)
* [Contributions and Thanks](#contributions-and-thanks)
* [Contributing](#contributing)
* [License](#license)
* [Copyright](#copyright)

---
---

### Why do we need this [AsyncDNSServer_RP2040W library](https://github.com/khoih-prog/AsyncDNSServer_RP2040W)

#### Features

This [AsyncDNSServer_RP2040W library](https://github.com/khoih-prog/AsyncDNSServer_RP2040W) is a fully asynchronous DNSServer library, designed for a trouble-free, multi-connection network environment, for **RASPBERRY_PI_PICO_W using CYW43439 WiFi**.

This library is based on, modified from:

1. [Develo's ESPAsyncDNSServer](https://github.com/devyte/ESPAsyncDNSServer)
2. [AsyncDNSServer_STM32](https://github.com/khoih-prog/AsyncDNSServer_STM32)

to apply the better and faster **asynchronous** feature into **RASPBERRY_PI_PICO_W using CYW43439 WiFi**.


#### Why Async is better

- Using asynchronous network means that you can handle **more than one connection at the same time**
- You are called once the packet is ready
- After a DNS Client connected to this Async DNS server, you are **immediately ready** to handle other connections while the Server is taking care of receiving and responding to the UDP packets in the background.
- You are not required to check in a tight loop() the arrival of the DNS requesting packets to process them.
- **Speed is OMG**

---

### Currently Supported Boards

1. **RASPBERRY_PI_PICO_W with CYW43439 WiFi** using [**arduino-pico core v2.4.0+**](https://github.com/earlephilhower/arduino-pico)

<p align="center">
    <img src="https://github.com/khoih-prog/AsyncDNSServer_RP2040W/blob/main/pics/RP2040W-pinout.svg">
</p>


---
---

## Prerequisites

 1. [`Arduino IDE 1.8.19+` for Arduino](https://github.com/arduino/Arduino). [![GitHub release](https://img.shields.io/github/release/arduino/Arduino.svg)](https://github.com/arduino/Arduino/releases/latest)
 2. [`Earle Philhower's arduino-pico core v2.4.0+`](https://github.com/earlephilhower/arduino-pico) for **RASPBERRY_PI_PICO_W with CYW43439 WiFi**, etc. [![GitHub release](https://img.shields.io/github/release/earlephilhower/arduino-pico.svg)](https://github.com/earlephilhower/arduino-pico/releases/latest)
 3. [`AsyncUDP_RP2040W library v1.0.0+`](https://github.com/khoih-prog/AsyncUDP_RP2040W) for RASPBERRY_PI_PICO_W with CYW43439 WiFi. To install. check [![arduino-library-badge](https://www.ardu-badge.com/badge/AsyncUDP_RP2040W.svg?)](https://www.ardu-badge.com/AsyncUDP_RP2040W)
 
---

### Installation

The suggested way to install is to:

#### Use Arduino Library Manager

The best way is to use `Arduino Library Manager`. Search for `AsyncDNSServer_RP2040W`, then select / install the latest version. You can also use this link [![arduino-library-badge](https://www.ardu-badge.com/badge/AsyncDNSServer_RP2040W.svg?)](https://www.ardu-badge.com/AsyncDNSServer_RP2040W) for more detailed instructions.

### Manual Install

1. Navigate to [AsyncDNSServer_RP2040W](https://github.com/khoih-prog/AsyncDNSServer_RP2040W) page.
2. Download the latest release `AsyncDNSServer_RP2040W-main.zip`.
3. Extract the zip file to `AsyncDNSServer_RP2040W-main` directory 
4. Copy the whole `AsyncDNSServer_RP2040W-main` folder to Arduino libraries' directory such as `~/Arduino/libraries/`.

### VS Code & PlatformIO:

1. Install [VS Code](https://code.visualstudio.com/)
2. Install [PlatformIO](https://platformio.org/platformio-ide)
3. Install [**AsyncDNSServer_RP2040W** library](https://registry.platformio.org/libraries/khoih-prog/AsyncDNSServer_RP2040W) by using [Library Manager](https://registry.platformio.org/libraries/khoih-prog/AsyncDNSServer_RP2040W/installation). Search for AsyncDNSServer_RP2040W in [Platform.io Author's Libraries](https://platformio.org/lib/search?query=author:%22Khoi%20Hoang%22)
4. Use included [platformio.ini](platformio/platformio.ini) file from examples to ensure that all dependent libraries will installed automatically. Please visit documentation for the other options and examples at [Project Configuration File](https://docs.platformio.org/page/projectconf.html)


---
---

### HOWTO Fix `Multiple Definitions` Linker Error

The current library implementation, using `xyz-Impl.h` instead of standard `xyz.cpp`, possibly creates certain `Multiple Definitions` Linker error in certain use cases.

You can include this `.hpp` file

```
// Can be included as many times as necessary, without `Multiple Definitions` Linker Error
#include "AsyncDNSServer_RP2040W.hpp"         //https://github.com/khoih-prog/AsyncDNSServer_RP2040W
```

in many files. But be sure to use the following `.h` file **in just 1 `.h`, `.cpp` or `.ino` file**, which must **not be included in any other file**, to avoid `Multiple Definitions` Linker Error

```
// To be included only in main(), .ino with setup() to avoid `Multiple Definitions` Linker Error
#include "AsyncDNSServer_RP2040W.h"           //https://github.com/khoih-prog/AsyncDNSServer_RP2040W
```

Check the new [**multiFileProject** example](examples/multiFileProject) for a `HOWTO` demo.

Have a look at the discussion in [Different behaviour using the src_cpp or src_h lib #80](https://github.com/khoih-prog/ESPAsync_WiFiManager/discussions/80)


---
---

## HOWTO Setting up the Async DNS Server


```cpp

#include <AsyncDNSServer_RP2040W.h>

const byte DNS_PORT = 53;

IPAddress apIP;

AsyncDNSServer dnsServer;


void setup()
{
  ...
  
  // modify TTL associated  with the domain name (in seconds)
  // default is 60 seconds
  dnsServer.setTTL(300);
  // set which return code will be used for all other domains 
  // (e.g. sending ServerFailure instead of NonExistentDomain will reduce number of queries
  // sent by clients). Default is AsyncDNSReplyCode::NonExistentDomain
  dnsServer.setErrorReplyCode(AsyncDNSReplyCode::ServerFailure);

  // start DNS server for a specific domain name
  dnsServer.start(DNS_PORT, "*", Ethernet.localIP());

  ...
}

void loop() 
{
}

```

---
---


### Examples


 1. [AsyncCaptivePortal](examples/AsyncCaptivePortal)
 2. [AsyncCaptivePortalAdvanced](examples/AsyncCaptivePortalAdvanced)
 3. [AsyncDNServerFull](examples/AsyncDNServerFull) 
 4. [AsyncDNSServer](examples/AsyncDNSServer)
 5. [multiFileProject](examples/multiFileProject)

---

### Example [AsyncDNSServer](examples/AsyncDNSServer)

#### 1. File [AsyncDNSServer.ino](examples/AsyncDNSServer/AsyncDNSServer.ino)


https://github.com/khoih-prog/AsyncDNSServer_RP2040W/blob/c9325a8c6accb27c5df1c7d29a209d2d064cda10/examples/AsyncDNSServer/AsyncDNSServer.ino#L10-L119


#### 2. File [defines.h](examples/AsyncDNSServer/defines.h)

https://github.com/khoih-prog/AsyncDNSServer_RP2040W/blob/c9325a8c6accb27c5df1c7d29a209d2d064cda10/examples/AsyncDNSServer/defines.h#L1-L29


---
---

### Debug

Debug is enabled by default on Serial. To disable, use level 0

```cpp
#define ASYNC_DNS_RP2040W_DEBUG_PORT      Serial

// Use from 0 to 4. Higher number, more debugging messages and memory usage.
#define _ASYNC_DNS_RP2040W_LOGLEVEL_      0
```

You can also change the debugging level from 0 to 4

```cpp
#define ASYNC_DNS_RP2040W_DEBUG_PORT      Serial


// Use from 0 to 4. Higher number, more debugging messages and memory usage.
#define _ASYNC_DNS_RP2040W_LOGLEVEL_    	4
```

---

### Troubleshooting

If you get compilation errors, more often than not, you may need to install a newer version of the [**arduino-pico core**](https://github.com/earlephilhower/arduino-pico)

Sometimes, the library will only work if you update the [**arduino-pico core**](https://github.com/earlephilhower/arduino-pico) core to the latest version because I am using newly added functions.


---
---


### Issues

Submit issues to: [AsyncDNSServer_RP2040W issues](https://github.com/khoih-prog/AsyncDNSServer_RP2040W/issues)

---

## TO DO

 1. Fix bug. Add enhancement


## DONE

 1. Add support to RASPBERRY_PI_PICO_W using CYW43439 WiFi
 2. Add more examples.
 3. Add debugging features.
 
---
---

### Contributions and Thanks

1. Based on and modified from [Develo's ESPAsyncDNSServer Library](https://github.com/devyte/ESPAsyncDNSServer).


<table>
  <tr>
    <td align="center"><a href="https://github.com/devyte"><img src="https://github.com/devyte.png" width="100px;" alt="devyte"/><br/><sub><b>⭐️ Develo</b></sub></a><br/></td>
  </tr> 
</table>

---

### Contributing

If you want to contribute to this project:
- Report bugs and errors
- Ask for enhancements
- Create issues and pull requests
- Tell other people about this library

---

### License

- The library is licensed under [GPLv3](https://github.com/khoih-prog/AsyncDNSServer_RP2040W/blob/main/LICENSE)

---

## Copyright

- Copyright 2016- Develo
- Copyright 2022- Khoi Hoang

