# EasySensorManager

An easy sensor manager for common sensors

This library is a wrapper for common sensors. It is designed to be easy to use and to be able to use multiple sensors at the same time.

This library _only supports `32bit boards`_, or boards that support the `C++ STL`

> **Note**: Migrating to [OneWireNg](https://github.com/pstolarz/OneWireNg) instead of OneWire - stay tuned.

## Supported sensors

- [x] DHT11
- [x] DHT22
- [x] DHT21
- [x] SHT31
- [x] DS18B20 (1-Wire)
- [x] HCR04 (Ultrasonic)
- [x] DS18S20 (1-Wire)
- [x] DS1822 (1-Wire)
- [x] MAX31850 (1-Wire)

There is a built-in `i2C scanner`, so you can easily find the address of your sensor (should it be needed).

## Installation

### Arduino IDE

You can install this library through the Arduino IDE Library Manager.

If you prefer, you can also download this library as a zip file and install it manually.

1. Download the latest release from the [releases page](https://github.com/ZanzyTHEbar/EasySensorManager/releases)
2. Go to the Arduino IDE and open the `Sketch` menu
3. Select `Include Library` -> `Add .ZIP Library...` and select the downloaded zip file

### PlatformIO

You can install this library through the PlatformIO Library Manager.

If you prefer, you can also install this library via the git link, or as a zip file and install it manually.

#### Git

1. Open the `platformio.ini` file in your project
2. Add the following line to the `lib_deps` section:

```ini
lib_deps =
    https://github.com/ZanzyTHEbar/EasySensorManager.git
```

#### Zip

1. Download the latest release from the [releases page](https://github.com/ZanzyTHEbar/EasySensorManager/releases)
2. Unzip the downloaded file
3. Copy the `EasySensorManager` folder to the `lib` folder - or - to the `.pio/libdeps` folder in your project

## Usage

### Basic usage

Please see the [examples](/examples) for more information.

### Advanced usage

## Contribution

If you want to contribute to this project, please read the [contribution guidelines](CONTRIBUTING.md).

Contributions are welcome!

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
