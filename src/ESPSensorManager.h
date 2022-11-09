/**
 * @brief ESPSensorManager class defines
 *
 * #define DHTPIN
 * #define USE_DHT11
 * #define USE_DHT22
 * #define USE_DHT21
 * #define USE_DHT_SENSOR
 * #define USE_SHT31_SENSOR
 * #define ECHO_PIN
 * #define TRIG_PIN
 * #define RES_RADIUS_1
 * #define RES_HEIGHT
 * #define ONE_WIRE_BUS
 */

#if USE_HUMIDITY
#include "humidity.hpp"
#endif // USE_HUMIDITY
#if USE_TEMPERATURE
#include "temperature.hpp"
#endif // USE_TEMPERATURE
#if USE_WATERLEVELSENSOR
#include "waterlevelsensor.hpp"
#endif // USE_WATERLEVELSENSOR
#if USE_I2CSCANNER
#include "i2cscan.hpp"
#endif // USE_I2CSCANNER

#if USE_TEMP_HUM
#define USE_HUMIDITY 1
#define USE_TEMPERATURE 1
#endif // USE_TEMP_HUM

#if USE_ALL_SENSORS
#define USE_HUMIDITY 1
#define USE_TEMPERATURE 1
#define USE_WATERLEVELSENSOR 1
#define USE_I2CSCANNER 1
#endif // USE_ALL_SENSORS
