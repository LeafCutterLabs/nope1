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

extern MidiDevice midi_device;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_5x10(
  KC_P,	KC_I,   KC_O,   KC_MINS,KC_EQL, KC_1,   KC_2,   KC_3,  	KC_4,   KC_SPC,     
  KC_X,	KC_V,   KC_C,   KC_S,   KC_U,   MI_E5,  MI_D5,  MI_C5,  MI_B4,  MI_A4,
  KC_1,	KC_2,	KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,	KC_9, 	KC_0,
  MI_F3,MI_Ab3,	MI_Bb3, MI_Db4, MI_Eb4,	MI_Gb4,	MI_Ab4,	MI_Bb4,	MI_Db5,	MI_Eb5,
  KC_J,	MI_F3,	MI_G3,  MI_A3,  MI_B3,  MI_C4,  MI_D4,  MI_E4,  MI_F4,  MI_G4
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

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [1] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) }
};
#endif

//midi_send_cc(&midi_device, midi_config.channel, 80, 30);