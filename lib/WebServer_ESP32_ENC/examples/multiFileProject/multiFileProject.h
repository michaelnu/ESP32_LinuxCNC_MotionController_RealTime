/****************************************************************************************************************************
  multiFileProject.h
  For Ethernet shields using ESP32_ENC (ESP32 + ENC28J60)

  WebServer_ESP32_ENC is a library for the ESP32 with Ethernet ENC28J60 to run WebServer

  Based on and modified from ESP8266 https://github.com/esp8266/Arduino/releases
  Built by Khoi Hoang https://github.com/khoih-prog/WebServer_ESP32_ENC
  Licensed under GPLv3 license
*****************************************************************************************************************************/

// To demo how to include files in multi-file Projects

#pragma once

#define _ETHERNET_WEBSERVER_LOGLEVEL_       1

// Can be included as many times as necessary, without `Multiple Definitions` Linker Error
#include "WebServer_ESP32_ENC.hpp"
