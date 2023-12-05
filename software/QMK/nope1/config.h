// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define DEBUG_MATRIX_SCAN_RATE

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP22
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define BACKLIGHT_PWM_CHANNEL RP2040_PWM_CHANNEL_B

#define MIDI_ADVANCED

#define ENCODERS_PAD_A { GP24, GP23, GP28, GP20}
#define ENCODERS_PAD_B { GP25, GP22, GP29, GP21}
#define ENCODER_RESOLUTION 4

#define WS2812_DI_PIN GP15
#define RGB_MATRIX_LED_COUNT 57