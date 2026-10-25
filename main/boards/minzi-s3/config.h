#ifndef _MINZI_S3_BOARD_CONFIG_H_
#define _MINZI_S3_BOARD_CONFIG_H_

#include <driver/gpio.h>

// Audio: INMP441 microphone + MAX98357A I2S amplifier
#define AUDIO_INPUT_SAMPLE_RATE  16000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000
#define AUDIO_I2S_METHOD_SIMPLEX
#define AUDIO_I2S_MIC_GPIO_SCK  GPIO_NUM_4
#define AUDIO_I2S_MIC_GPIO_WS   GPIO_NUM_5
#define AUDIO_I2S_MIC_GPIO_DIN  GPIO_NUM_6
#define AUDIO_I2S_SPK_GPIO_BCLK GPIO_NUM_7
#define AUDIO_I2S_SPK_GPIO_LRCK GPIO_NUM_8
#define AUDIO_I2S_SPK_GPIO_DOUT GPIO_NUM_9

// ST7735 1.8-inch SPI TFT, 128x160
#define DISPLAY_WIDTH  128
#define DISPLAY_HEIGHT 160
#define DISPLAY_CS_PIN   GPIO_NUM_10
#define DISPLAY_MOSI_PIN GPIO_NUM_11
#define DISPLAY_CLK_PIN  GPIO_NUM_12
#define DISPLAY_DC_PIN   GPIO_NUM_13
#define DISPLAY_RST_PIN  GPIO_NUM_14
#define DISPLAY_SPI_MODE 0
#define DISPLAY_OFFSET_X 0
#define DISPLAY_OFFSET_Y 0
#define DISPLAY_MIRROR_X false
#define DISPLAY_MIRROR_Y false
#define DISPLAY_SWAP_XY false
#define DISPLAY_INVERT_COLOR true
#define DISPLAY_RGB_ORDER LCD_RGB_ELEMENT_ORDER_BGR
#define DISPLAY_BACKLIGHT_PIN GPIO_NUM_NC
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false

// Additional Minzi peripherals (drivers/features can be enabled separately)
#define MINZI_SERVO_GPIO     GPIO_NUM_15
#define MINZI_WS2812_GPIO    GPIO_NUM_16
#define MINZI_RTC_SDA_GPIO   GPIO_NUM_17
#define MINZI_RTC_SCL_GPIO   GPIO_NUM_18

// GPIO35-37 are commonly occupied by octal PSRAM on ESP32-S3 N16R8.
// Use GPIO39 for the primary button; do not wire buttons to 35-37 without
// verifying the exact module schematic.
#define BOOT_BUTTON_GPIO GPIO_NUM_39

#endif
