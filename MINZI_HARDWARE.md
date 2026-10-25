# Minzi hardware integration notes

## Integrated in this XiaoZhi board profile
- ESP32-S3 N16R8 target
- INMP441 microphone using I2S GPIO 4/5/6
- MAX98357A amplifier using I2S GPIO 7/8/9
- ST7735 128x160 SPI display using GPIO 10/11/12/13/14
- Primary chat/config button on GPIO 39

## Defined for future feature modules
- SG90 servo signal GPIO 15
- WS2812B data GPIO 16
- DS3231 I2C SDA/SCL GPIO 17/18

The upstream XiaoZhi board abstraction does not automatically provide servo, RTC alarm-clock, or WS2812 animation behavior. Those features need dedicated modules and must be tested separately; this board profile only reserves their pin definitions.

## Hardware warning
On common ESP32-S3 N16R8 modules, GPIO 35, 36, and 37 are used by octal PSRAM. Do not connect buttons to these pins unless the exact module schematic confirms they are available. Use GPIO 39 for the primary button in this profile.
