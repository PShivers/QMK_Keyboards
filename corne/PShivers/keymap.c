// /*
// Copyright 2019 @foostan
// Copyright 2020 Drashna Jaelre <@drashna>

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// */

#include QMK_KEYBOARD_H

#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_LAYER0] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_DEL, KC_BSPC, KC_A, KC_R, KC_S, LSFT_T(KC_T), KC_G, KC_M, RSFT_T(KC_N), KC_E, KC_I, KC_O, KC_QUOT, KC_LGUI, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, TO(1), KC_LALT, LT(MO(2), KC_ENT), LCTL_T(KC_SPC), LT(MO(4), KC_ENT), MO(3), MO(2)),

    [_LAYER1] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_BSPC, KC_A, KC_S, KC_D, LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, TO(0), KC_LALT, LT(MO(2), KC_ENT), LCTL_T(KC_SPC), LT(MO(4), KC_ENT), MO(3), MO(2)),

    [_LAYER2] = LAYOUT(KC_ESC, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_MEDIA_SELECT, KC_DEL, KC_BSPC, KC_F5, KC_F6, KC_F7, KC_F8, LCTL(KC_GRV), KC_NO, KC_4, KC_5, KC_6, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, KC_CAPS, KC_F1, KC_F2, KC_F3, KC_F4, LCTL(KC_SLSH), KC_0, KC_1, KC_2, KC_3, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, LCTL(LGUI(KC_LEFT)), KC_TRNS, LCTL(LGUI(KC_RIGHT)), KC_NO, KC_NO, KC_TRNS),

    [_LAYER3] = LAYOUT(KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_MINS, KC_SCLN, KC_DEL, KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_EQL, KC_GT, KC_GRV, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_DOT, KC_BSLS, KC_RSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO),

    [_LAYER4] = LAYOUT(KC_NO, KC_NO, KC_WH_U, KC_MS_U, KC_WH_D, KC_NO, KC_NO, KC_PGDN, KC_UP, KC_PGUP, KC_ACL0, KC_ACL1, KC_NO, KC_WH_L, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_R, LCTL(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_RGHT), KC_ACL2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_NO, KC_END, KC_NO, LCA(KC_RGHT), KC_BTN2, KC_BTN3, KC_BTN1, KC_TRNS, KC_NO, KC_NO)

};