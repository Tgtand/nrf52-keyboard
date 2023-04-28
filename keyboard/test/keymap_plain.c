/*
Copyright (C) 2018,2019 Jim Jiang <jim@lotlab.org>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"
#include "keyboard_fn.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
		KC_ESC, KC_TAB, KC_CAPS, KC_LSFT, KC_LCTL, 
		KC_1, KC_Q, KC_A, KC_LGUI, 
		KC_2, KC_W, KC_S, KC_Z, 
		KC_3, KC_E, KC_D, KC_X, KC_LALT, 
		KC_4, KC_R, KC_F, KC_C, 
		KC_5, KC_T, KC_G, KC_V, KC_SPC, 
		KC_6, KC_Y, KC_H, KC_B, 
		KC_7, KC_U, KC_J, KC_N, KC_LSFT, 
		KC_8, KC_I, KC_K, KC_M, 
		KC_9, KC_O, KC_L, KC_COMM, KC_LALT, 
		KC_0, KC_P, KC_SCLN, KC_DOT, KC_FN1, 
		KC_MINS, KC_LBRC, KC_SLSH, KC_LEFT, 
		KC_EQL, KC_RBRC, KC_ENT, KC_UP, KC_DOWN, 
		KC_BSLS, KC_QUOT, KC_1, KC_RGHT, 
		KC_BSPC, KC_PSTE, KC_5, KC_2, KC_0, 
		KC_GRV, KC_9, KC_6, KC_3, KC_DEL),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_QUOT, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};
const action_t fn_actions[] = {
    /* Poker Layout */
    ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    ACTION_FUNCTION(KEYBOARD_CONTROL), // sleep
    ACTION_FUNCTION(SWITCH_DEVICE) // switch between usb and ble
};

