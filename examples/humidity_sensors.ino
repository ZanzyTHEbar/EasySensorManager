/**
 * @file all_sensors.ino
 * @author ZanzyTHEbar (info@h-bat.com)
 * @brief An example of how to use all the classes in the library
 * @version 1.0.0
 * @date 2022-11-09
 *
 * @copyright Copyright (c) 2022
 *
 * @note It is important to note that the defines must be set before the library is included
 */

// Humidity Sensors
#define USE_ALL_SENSORS 1
#define DHTPIN 4
#define USE_DHT11 1
#define USE_DHT22 0
#define USE_DHT21 0
#define USE_DHT_SENSOR 1
#define USE_SHT31_SENSOR 1

// Temperature Sensor
#define ONE_WIRE_BUS 5
#include <ESPSensorManager.h>

Humidity humidity;
TowerTemp temperature;
WaterLevelSensor waterLevelSensor;
Scanner i2cScan;

void setup()
{
    Serial.begin(115200);
    Serial.println("Starting...");
    // Initialize the sensor managers
    humidity.begin();
    temperature.begin();
    waterLevelSensor.begin();
    i2cScan.begin();
}

void loop()
{
    i2cScan.loop(); // I2C Scanner
    // must be called first to update the sensor values
    humidity.readDHT();     // Poll DHT Sensor
    humidity.readSHT31();   // Poll SHT31
    temperature.getTempC(); // Poll DS18B20
    temperature.getTempF(); // Poll DS18B20
    waterLevelSensor.readWaterLevel();

    // Print the sensor values
    Serial.printf("DHT Humidity: %.3f %%\t\n DHT Temp: %.3f (°C)\t\n SHT31 Humidity: %.3f %%\t\n SHT31 Temp: %.3f (°C)\t\n", humidity.result.humidity, humidity.result.temp, humidity.result.humidity_sht31, humidity.result.temp_sht31);
    Serial.printf("DS18B20: %.3f (°C)\t\n", temperature.temp_sensor_results.temp.at(0)); // Print the first temperature sensor
    Serial.printf("Water Level: %.3d L\t\n Water Level Percent: %.3d %%\t\n", waterLevelSensor.result.water_level, waterLevelSensor.result.water_level_percentage);
}