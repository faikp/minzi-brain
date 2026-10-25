# Minzi Brain â€” XiaoZhi ESP32 firmware

This repository is based on https://github.com/78/xiaozhi-esp32 and adds a Minzi ESP32-S3 N16R8 board profile with INMP441, MAX98357A and ST7735 128x160 display support.

See [MINZI_HARDWARE.md](MINZI_HARDWARE.md) for the current pin map and limitations.

## Build requirements
The current upstream manifest requires ESP-IDF >= 6.0.1. ESP-IDF 5.3.1 is too old for this upstream revision.

Open the matching ESP-IDF PowerShell environment, then run:
```powershell
idf.py set-target esp32s3
idf.py menuconfig
```
Select **Minzi ESP32-S3 N16R8 + ST7735 128x160** under Target Board, save, then run:
```powershell
idf.py build
```

Do not flash until the build succeeds and the board/display wiring has been checked.
