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

#ifdef USE_ALL_SENSORS
#define USE_HUMIDITY
#define USE_TEMPERATURE
#define USE_WATERLEVELSENSOR
#define USE_I2CSCANNER
#endif // USE_ALL_SENSORS

#ifdef USE_TEMP_HUM
#define USE_HUMIDITY 1
#define USE_TEMPERATURE 1
#endif // USE_TEMP_HUM

#ifdef USE_HUMIDITY
#include "humidity.hpp"
#endif // USE_HUMIDITY
#ifdef USE_TEMPERATURE
#include "temperature.hpp"
#endif // USE_TEMPERATURE
#ifdef USE_WATERLEVELSENSOR
#include "waterlevelsensor.hpp"
#endif // USE_WATERLEVELSENSOR
#ifdef USE_I2CSCANNER
#include "i2cscan.hpp"
#endif // USE_I2CSCANNER
