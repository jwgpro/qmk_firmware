// Copyright 2024 George Norton (@george-norton)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define DIGITIZER_MOTION_PIN GP28
#define DIGITIZER_MOTION_PIN_ACTIVE_LOW yes
#define MXT_INVERT_X
#define MXT_SWITCH_XY

#define PROCYON_57_80

// TODO: Tweak these if the sensor tracks poorly
// #define MXT_GAIN 5
// #define MXT_TOUCH_THRESHOLD 18
// #define MXT_TOUCH_HYST 8
// #define MXT_INTERNAL_TOUCH_HYST 4
// #define MXT_INTERNAL_TOUCH_THRESHOLD 10
#define MXT_CHARGE_TIME 10
#define MXT_IDLE_SYNCS_PER_X 20
#define MXT_ACTIVE_SYNCS_PER_X 20
#define MXT_ACTIVE_ACQUISITION_INTERVAL 255 // Free run while active - this enables us to reach a polling rate of around 300Hz

// https://github.com/piontec/qmk_firmware/commit/7b5baef941f07e3d67d28342c10dfc29c77e9ecf
// Increase movement hysteresis for more precision (reduces jitter and small movements)
// Higher values mean finger movements must be larger before cursor moves
#define MXT_MOVE_HYSTERESIS_INITIAL 15 // Increased from default 10
#define MXT_MOVE_HYSTERESIS_NEXT 20    // Increased from Procyon default 16

// https://github.com/foodforarabbit/sofle_procyon/commit/e0496577b81151576606c23cfbf318b7c8d98ccd
// Tap detection: how far the finger can move (in sensor units) during a tap
// and still be recognized as a click. Default is 25, which is too tight --
// slight finger slip during a tap exceeds it and the click is lost.
#define DIGITIZER_MOUSE_TAP_DISTANCE 50

#define I2C1_CLOCK_SPEED 1000000