// Copyright 2022 Jon (@jonathanblair)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define PRODUCT Sound Voltex Controller

//#define encLeftA C5
//#define encLeftB C4
//#define encRightA D0
//#define encRightB D1

#define ENCODERS_PAD_A {C5, D0}
#define ENCODERS_PAD_B {C4, D1}

#define ENCODER_RESOLUTION 1

//led pin on different pin than kicad schematic for now because kicad pin is also the HWB pin
#define RGB_DI_PIN B7
//#define RGB_CI_PIN B7saa
#define RGBLED_NUM 15
//#define RGBLIGHT_HUE_STEP 1

#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_SNAKE 2
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT 3
#define RGBLIGHT_EFFECT_TWINKLE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CUSTOMTEST

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
