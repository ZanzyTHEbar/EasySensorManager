/*
 i2cscan.h - ESP32GreenHouseDIY library
 Copyright (c) 2021 ZanzyTHEbar
 */

#ifndef I2CSCAN_HPP
#define I2CSCAN_HPP
#include <Arduino.h>
#include <Wire.h>

class Scanner
{
public:
    Scanner(void);
    virtual ~Scanner(void);
    void begin();
    void loop();
};
extern Scanner scan;
#endif