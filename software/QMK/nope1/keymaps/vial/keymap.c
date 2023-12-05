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

enum custom_keycodes {
    MIDI_CC20 = SAFE_RANGE,
	MIDI_CC21,
	MIDI_CC22,
	MIDI_CC23,
	MIDI_CC24,
	MIDI_CC25,
	MIDI_CC26,
	MIDI_CC85,
	MIDI_CC86,
	MIDI_CC88,
	MIDI_CC89,
	MIDI_CC90,
	MIDI_CC102,  
	MIDI_CC103,
	MIDI_CC104,
	MIDI_CC105,
	MIDI_CC106,
	MIDI_CC107,
	MIDI_CC108,
	MIDI_CC109,
	MIDI_CC110,
	MIDI_CC111,
	MIDI_CC112,
	MIDI_CC117,
	MIDI_CC118,
	MIDI_CC119,
};

#define MIDI_CC_OFF 0
#define MIDI_CC_ON  127

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MIDI_CC20:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 20, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 20, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC21:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 21, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 21, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC22:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 22, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 22, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC23:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 23, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 23, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC24:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 24, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 24, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC25:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 25, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 25, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC26:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 26, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 26, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC85:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 85, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 85, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC86:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 86, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 86, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC88:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 88, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 88, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC89:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 89, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 89, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC90:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 90, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 90, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC102:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 102, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 102, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC103:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 103, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 103, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC104:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 104, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 104, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC105:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 105, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 105, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC106:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 106, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 106, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC107:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 107, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 107, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC108:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 108, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 108, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC109:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 109, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 109, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC110:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 110, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 110, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC111:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 111, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 111, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC112:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 112, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 112, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC117:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 117, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 117, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC118:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 118, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 118, MIDI_CC_OFF);
            }
            return true;
		case MIDI_CC119:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 119, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 119, MIDI_CC_OFF);
            }
            return true;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ortho_5x10(
  MIDI_CC105,	MIDI_CC103, MIDI_CC104, MIDI_CC119,	MIDI_CC118, MIDI_CC20,  MIDI_CC21,	MIDI_CC22,	MIDI_CC23,	MIDI_CC102,     
  MIDI_CC106,	MIDI_CC107, MIDI_CC108, MIDI_CC26,  MIDI_CC24,  MI_E5,  	MI_D5,  	MI_C5,  	MI_B4,  	MI_A4,
  MIDI_CC112,	MIDI_CC109,	MIDI_CC110, MIDI_CC111,	MIDI_CC85,  MIDI_CC25,  MIDI_CC88,  MIDI_CC86,	MIDI_CC89, 	MIDI_CC90,
  MI_F3,		MI_Ab3,		MI_Bb3, 	MI_Db4, 	MI_Eb4,		MI_Gb4,		MI_Ab4,		MI_Bb4,		MI_Db5,		MI_Eb5,
  MI_F3,		MI_F3,		MI_G3,  	MI_A3,  	MI_B3,  	MI_C4,  	MI_D4,  	MI_E4,  	MI_F4,  	MI_G4
  ),
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
/*
void housekeeping_task_user(void) { 
    rgblight_setrgb_at(RGB_ORANGE, 0);
    rgblight_setrgb_at(RGB_WHITE, 18);
	rgblight_setrgb_at(RGB_PURPLE, 19);
    rgblight_setrgb_at(RGB_PINK, 37);
	rgblight_setrgb_at(RGB_ORANGE, 38);
    rgblight_setrgb_at(RGB_WHITE, 56);
	
}
*/
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_1, KC_2), ENCODER_CCW_CW(KC_3, KC_4), ENCODER_CCW_CW(KC_5, KC_6), ENCODER_CCW_CW(KC_7, KC_8) },
};
#endif

//midi_send_cc(&midi_device, midi_config.channel, 80, 30);