// Copyright 2026 James Grunewald (@jwgpro)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
// FIXME: Temporary
#include "print.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
    _NUMPAD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // col 10 row 5 is the ThinkVantage key

    [_BASE] = LAYOUT(
      KC_GRV, KC_F1, KC_F2, KC_5, KC_6, KC_EQL, KC_F8, KC_MINS, KC_F9, KC_INS, KC_DEL, KC_PGUP, KC_HOME, KC_NO, KC_NO, KC_LCTL,
      KC_1, KC_2, KC_3, KC_4, KC_7, KC_8, KC_9, KC_0, KC_F10, KC_F12, KC_F11, KC_PGDN, KC_END, KC_PSCR, KC_NO, KC_NO,
      KC_Q, KC_W, KC_E, KC_R, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_NO, KC_VOLU, KC_LGUI, KC_NO, KC_SCRL, KC_NO, KC_NO,
      KC_TAB, KC_CAPS, KC_F3, KC_T, KC_Y, KC_RBRC, KC_F7, KC_LBRC, KC_BSPC, KC_NO, KC_VOLD, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO,
      KC_A, KC_S, KC_D, KC_F, KC_J, KC_K, KC_L, KC_SCLN, KC_BSLS, MO(_FN), KC_MUTE, KC_APP, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_ESC, KC_BSLS, KC_F4, KC_G, KC_H, KC_F6, KC_NO, KC_QUOT, KC_F5, KC_NO, MO(_FN), KC_NO, KC_UP, KC_LALT, KC_NO, KC_NO,
      KC_Z, KC_X, KC_C, KC_V, KC_M, KC_COMM, KC_DOT, KC_NUHS, KC_ENT, KC_NO, KC_NO, KC_WBAK, KC_PAUS, KC_NO, KC_RSFT, KC_RCTL,
      KC_NO, KC_NO, KC_NO, KC_B, KC_N, KC_NO, KC_NO, KC_SLSH, KC_SPACE, KC_RGHT, KC_DOWN, KC_WFWD, KC_LEFT, KC_RALT, KC_NO, KC_NO
    ),
    [_FN] = LAYOUT(
      KC_GRV, KC_F1, KC_F2, KC_5, KC_6, KC_EQL, KC_F8, KC_MINS, KC_F9, KC_INS, KC_DEL, KC_PGUP, KC_BRIU, KC_NO, KC_NO, KC_LCTL,
      KC_1, KC_2, KC_3, KC_4, KC_7, KC_8, KC_9, KC_0, KC_F10, KC_F12, KC_F11, KC_PGDN, KC_BRID, KC_PSCR, KC_NO, KC_NO,
      KC_Q, KC_W, KC_E, KC_R, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_NO, KC_VOLU, KC_LGUI, KC_NO, TG(_NUMPAD), KC_NO, KC_NO,
      KC_TAB, KC_CAPS, KC_F3, KC_T, KC_Y, KC_RBRC, KC_F7, KC_LBRC, KC_BSPC, KC_NO, KC_VOLD, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO,
      KC_A, KC_S, KC_D, KC_F, KC_J, KC_K, KC_L, KC_SCLN, KC_BSLS, KC_NO, KC_MUTE, KC_APP, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_ESC, KC_BSLS, KC_F4, KC_G, KC_H, KC_F6, KC_NO, KC_QUOT, KC_F5, KC_NO, KC_NO, KC_NO, KC_MSTP, KC_LALT, KC_NO, KC_NO,
      KC_Z, KC_X, KC_C, KC_V, KC_M, KC_COMM, KC_DOT, KC_NUHS, KC_ENT, KC_NO, KC_NO, KC_WBAK, KC_PAUS, KC_NO, KC_RSFT, KC_RCTL,
      KC_NO, KC_NO, KC_NO, KC_B, KC_N, KC_NO, KC_NO, KC_SLSH, KC_SPACE, KC_MNXT, KC_MPLY, KC_WFWD, KC_MPRV, KC_RALT, KC_NO, KC_NO
    ),
    [_NUMPAD] = LAYOUT(
      KC_GRV, KC_F1, KC_F2, KC_5, KC_6, KC_EQL, KC_F8, KC_MINS, KC_F9, KC_INS, KC_DEL, KC_PGUP, KC_HOME, KC_NO, KC_NO, KC_LCTL,
      KC_1, KC_2, KC_3, KC_4, KC_KP_7, KC_KP_8, KC_KP_9, KC_0, KC_F10, KC_F12, KC_F11, KC_PGDN, KC_END, KC_PSCR, KC_NO, KC_NO,
      KC_Q, KC_W, KC_E, KC_R, KC_KP_4, KC_KP_5, KC_KP_6, KC_P, KC_NO, KC_NO, KC_VOLU, KC_LGUI, KC_NO, KC_SCRL, KC_NO, KC_NO,
      KC_TAB, KC_CAPS, KC_F3, KC_T, KC_Y, KC_RBRC, KC_F7, KC_LBRC, KC_BSPC, KC_NO, KC_VOLD, KC_NO, KC_NO, KC_NO, KC_LSFT, KC_NO,
      KC_A, KC_S, KC_D, KC_F, KC_KP_1, KC_KP_2, KC_KP_3, KC_SCLN, KC_BSLS, MO(_FN), KC_MUTE, KC_APP, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_ESC, KC_BSLS, KC_F4, KC_G, KC_H, KC_F6, KC_NO, KC_QUOT, KC_F5, KC_NO, MO(_FN), KC_NO, KC_UP, KC_LALT, KC_NO, KC_NO,
      KC_Z, KC_X, KC_C, KC_V, KC_KP_0, KC_COMM, KC_DOT, KC_NUHS, KC_ENT, KC_NO, KC_NO, KC_WBAK, KC_PAUS, KC_NO, KC_RSFT, KC_RCTL,
      KC_NO, KC_NO, KC_NO, KC_B, KC_N, KC_NO, KC_NO, KC_SLSH, KC_SPACE, KC_RGHT, KC_DOWN, KC_WFWD, KC_LEFT, KC_RALT, KC_NO, KC_NO
    )
};

void dip_switch_update_user (uint8_t index, bool active)
{
 switch (index) { 
	 case 0: if (active)  /* Fn key */
			{
				layer_on(_FN);
      }
			else 
			{
				layer_off(_FN);
			} 
		 
		 break;
	 case 1: if (active) {tap_code(KC_B); break;}  /* PWR button */
	 break;
 }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif 
  return true;
}
