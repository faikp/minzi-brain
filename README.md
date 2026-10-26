# Minzi Brain — XiaoZhi ESP32 firmware

This repository is based on [XiaoZhi ESP32](https://github.com/78/xiaozhi-esp32) and adds a board profile for the **ESP32-S3 N16R8** with an **INMP441 microphone**, **MAX98357A I2S amplifier**, and **ST7735 128×160 SPI display**.

See [MINZI_HARDWARE.md](MINZI_HARDWARE.md) for the current pin map and feature limitations.

## Build requirements

- ESP-IDF **6.0.1 or newer** (the component manifest requires `>=6.0.1`).
- ESP-IDF's matching Python environment, CMake, Ninja, and the ESP32-S3 toolchain must be activated in the same terminal.

## Build Minzi firmware

From an activated ESP-IDF PowerShell terminal, change to this repository root and run:

```powershell
python scripts/build.py minzi-s3 --name minzi-s3
```

Use the Python executable belonging to the active ESP-IDF environment if `python` does not point to it. The repository build script selects the ESP32-S3 target, applies the Minzi board configuration, resolves managed components, configures assets, and builds the firmware. Prefer this command over running `idf.py build` directly on a fresh checkout.

The generated firmware build output is under `build\`. **Do not flash until the build completes successfully** and the board/display wiring has been checked.

## Current hardware scope

The current board profile configures Wi-Fi, the INMP441/MAX98357A I2S audio path, the ST7735 display, and the primary button. The servo, WS2812B LEDs, and DS3231 RTC pins are reserved in the hardware notes only; their feature drivers/behaviour are not implemented yet.
