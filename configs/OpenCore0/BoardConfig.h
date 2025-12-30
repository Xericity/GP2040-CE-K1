/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2024 OpenStickCommunity (gp2040-ce.info)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "Open_Core_K1"

// Main Pin Mapping
#define GPIO_PIN_12 GpioAction::BUTTON_PRESS_UP
#define GPIO_PIN_10 GpioAction::BUTTON_PRESS_DOWN
#define GPIO_PIN_11 GpioAction::BUTTON_PRESS_RIGHT
#define GPIO_PIN_09 GpioAction::BUTTON_PRESS_LEFT
#define GPIO_PIN_13 GpioAction::BUTTON_PRESS_B1
#define GPIO_PIN_14 GpioAction::BUTTON_PRESS_B2
#define GPIO_PIN_15 GpioAction::BUTTON_PRESS_R2
#define GPIO_PIN_16 GpioAction::BUTTON_PRESS_L2
#define GPIO_PIN_17 GpioAction::BUTTON_PRESS_B3
#define GPIO_PIN_18 GpioAction::BUTTON_PRESS_B4
#define GPIO_PIN_19 GpioAction::BUTTON_PRESS_R1
#define GPIO_PIN_20 GpioAction::BUTTON_PRESS_L1
#define GPIO_PIN_06 GpioAction::BUTTON_PRESS_S1
#define GPIO_PIN_07 GpioAction::BUTTON_PRESS_S2
#define GPIO_PIN_03 GpioAction::BUTTON_PRESS_L3
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_R3
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_A1
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_A2
#define GPIO_PIN_26 GpioAction::BUTTON_PRESS_FN

// Top Switches (Sustain)
#define JSLIDER_ENABLED 1
#define GPIO_PIN_25 GpioAction::SUSTAIN_DP_MODE_LS
#define GPIO_PIN_24 GpioAction::SUSTAIN_DP_MODE_RS

#define SLIDER_SOCD_ENABLED 1
#define GPIO_PIN_23 GpioAction::SUSTAIN_SOCD_MODE_UP_PRIO
#define GPIO_PIN_22 GpioAction::SUSTAIN_SOCD_MODE_SECOND_WIN
#define SLIDER_SOCD_SLOT_DEFAULT SOCD_MODE_NEUTRAL

#define FOCUS_MODE_ENABLED 1
#define GPIO_PIN_21 GpioAction::SUSTAIN_FOCUS_MODE
#define FOCUS_MODE_BUTTON_MASK (GAMEPAD_MASK_S1 | GAMEPAD_MASK_S2 | GAMEPAD_MASK_A1 | GAMEPAD_MASK_A2 | GAMEPAD_MASK_L3 | GAMEPAD_MASK_R3)

// Peripheral Mapping (DANGK1 Hardware)
#define HAS_I2C_DISPLAY 1
#define I2C0_ENABLED 1
#define I2C0_PIN_SDA 0
#define I2C0_PIN_SCL 1
#define DISPLAY_I2C_BLOCK i2c0

#define USB_PERIPHERAL_ENABLED 1
#define USB_PERIPHERAL_PIN_DPLUS 28
#define USB_PERIPHERAL_PIN_DMINUS 29

#define BOARD_LEDS_PIN 8
#define LED_BRIGHTNESS_MAX 50
#define LEDS_PER_PIXEL 2

#define TURBO_ENABLED 1
#define GPIO_PIN_27 GpioAction::BUTTON_PRESS_TURBO

#endif // PICO_BOARD_CONFIG_H_
