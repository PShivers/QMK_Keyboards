#include QMK_KEYBOARD_H

#define _COLEMAKDH 0
#define _QWERTY 1
#define _NAVIGATION 2
#define _FKEYSNUMPAD 3
#define _SYMBOLS 4

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    SELECTALL,
    COMMENT,
    UNCOMMENT, 
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_COLEMAKDH] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_DEL,
        KC_BSPC, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL, TG(1), KC_LGUI, KC_LALT, MO(3), LCTL_T(KC_SPC), LT(2, KC_ENT), MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
    ),

    [_QWERTY] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL,
        KC_BSPC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL, KC_TRNS, KC_LGUI, KC_LALT, MO(3), LCTL_T(KC_SPC), LT(2, KC_ENT), MO(4), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
    ),

    [_NAVIGATION] = LAYOUT(KC_TAB, KC_NO, KC_WH_U, KC_MS_U, KC_WH_D, KC_NO, KC_NO, KC_PGUP, KC_UP, KC_PGDN, KC_ACL0, KC_ACL1,
        KC_BSPC, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, LCTL(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_RGHT), KC_ACL2,
        KC_CAPS, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_NO, KC_HOME, KC_NO, KC_END, KC_NO, KC_CAPS,
        KC_LCTL, KC_NO, KC_NO, KC_BTN2, KC_BTN3, KC_BTN1, KC_TRNS, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, LCA(KC_RGHT)
    ),

    [_FKEYSNUMPAD] = LAYOUT(KC_ESC, KC_F9, KC_F10, KC_F11, KC_F12, SELECTALL, KC_NO, KC_7, KC_8, KC_9, KC_PPLS, KC_DEL,
        KC_BSPC, KC_F5, KC_F6, KC_F7, KC_F8, UNCOMMENT, KC_NO, KC_4, KC_5, KC_6, KC_PMNS, KC_NO,
        KC_LSFT, KC_F1, KC_F2, KC_F3, KC_F4, COMMENT, KC_NO, KC_1, KC_2, KC_3, KC_PAST, KC_NO,
        KC_NO, KC_NO, LCTL(LGUI(KC_LEFT)), LCTL(LGUI(KC_RGHT)), KC_TRNS, KC_NO, KC_NO, KC_0, KC_PEQL, KC_PDOT, KC_PSLS, KC_NO
    ),

    [_SYMBOLS] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_MINS, KC_SCLN, KC_DEL,
        KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_EQL, KC_GT, KC_GRV,
        KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_DOT, KC_BSLS, KC_RSFT,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO)

};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
    case SELECTALL:
        if (record->event.pressed) {
            SEND_STRING("SELECT * FROM ");
        }
        else {
        }
        break;
    case COMMENT:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("kc"))
        }
        else {

        }
    case UNCOMMENT:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL("ku"))
        }
        else {
        }
    }
    return true;
};

 uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LCTL_T(KC_SPC):
            return TAPPING_TERM + 60;
        case LT(2, KC_ENT):
            return TAPPING_TERM + 60;    
        default:
            return TAPPING_TERM;
    }
}
