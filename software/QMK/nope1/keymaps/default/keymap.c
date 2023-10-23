/* Copyright 2018 Yiancar
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_5x10(
  KC_P,	KC_I,   KC_O,   KC_MINS,KC_EQL, KC_1,   KC_2,    KC_3,  KC_4,    KC_SPC,     
  KC_X,	KC_V,   KC_C,   KC_S,   KC_U,   KC_X,   KC_V,    KC_T,  KC_S,    KC_Q,
  KC_1,	KC_2,	KC_3,   KC_4,   KC_5,   KC_6,   KC_7,    KC_8,  KC_9, 	 KC_0,
  KC_B, KC_D, 	KC_F, 	KC_I, 	KC_K,	KC_N,	KC_P,    KC_R,	KC_U, 	 KC_W,
  KC_J,	KC_A,   KC_C,   KC_E,   KC_G,   KC_H,   KC_J,    KC_L,  KC_M,    KC_O
  ),
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
