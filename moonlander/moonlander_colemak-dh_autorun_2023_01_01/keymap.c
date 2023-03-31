//this is the modified source file from zsa oryx. 
//I was attempting to add a button toggle so I could have a kb version of auto move forward in all games. 
//There are build errors when compiling the file.
#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  TOGGLE_BUTTON,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           MU_MOD,         KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           TOGGLE_BUTTON,                                           MU_TOG,         KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      TG(6),          
    KC_BSPACE,      KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           KC_DELETE,                                                                      AU_TOG,         KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_QUOTE,       
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,      
    KC_LCTRL,       TG(1),          KC_LGUI,        KC_LALT,        MO(3),          KC_ESCAPE,                                                                                                      TG(5),          MO(4),          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       
    KC_SPACE,       KC_RCTRL,       KC_ENTER,                       TT(3),          MO(2),          KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,      
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,                                           KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,       
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PGUP,        KC_UP,          KC_PGDOWN,      KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LCTL(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LCTL(KC_RIGHT), KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_TRANSPARENT, KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,LALT(LCTL(KC_RIGHT)),
    KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    LCTL(KC_F4),    ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LGUI(LSFT(KC_S)),KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_CAPSLOCK,    KC_F5,          KC_F6,          KC_F7,          KC_F8,          ST_MACRO_4,     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_ASTG,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          ST_MACRO_5,                                     KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_KP_ASTERISK, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LCTL(KC_LEFT)),LGUI(LCTL(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_EQUAL,       KC_KP_DOT,      KC_KP_SLASH,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET,    KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LPRN,        KC_RPRN,        KC_EQUAL,       KC_RABK,        KC_GRAVE,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, KC_BSLASH,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPACE,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_RSHIFT,                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {105,255,255}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {20,177,225}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {20,177,225}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {85,203,158}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {199,251,215}, {154,255,255}, {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {0,0,0}, {199,243,110}, {154,255,255}, {20,177,225}, {243,222,234}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {243,222,234}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {243,222,234}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {243,222,234}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {85,203,158}, {199,251,215}, {154,255,255}, {154,255,255}, {154,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {20,177,225}, {20,177,225}, {85,203,158}, {243,222,234} },

    [1] = { {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {20,177,225}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {35,255,255}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {20,177,225}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {35,255,255}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {85,203,158}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {154,255,255}, {205,255,255}, {20,177,225}, {20,177,225}, {20,177,225}, {0,0,0}, {0,0,0}, {20,177,225}, {20,177,225}, {205,255,255}, {20,177,225}, {243,222,234}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {243,222,234}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {243,222,234}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {243,222,234}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {85,203,158}, {154,255,255}, {205,255,255}, {205,255,255}, {205,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {20,177,225}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {239,245,230}, {255,220,201}, {239,245,230}, {0,0,0}, {0,0,0}, {255,220,201}, {255,220,201}, {239,245,230}, {0,0,0}, {0,0,0}, {239,245,230}, {255,220,201}, {239,245,230}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {255,220,201}, {255,220,201}, {255,220,201}, {0,0,0}, {255,220,201}, {0,0,0}, {0,0,0}, {0,0,0}, {35,255,255}, {0,0,0}, {0,0,0}, {20,177,225}, {0,0,0}, {3,249,251}, {0,0,0}, {31,255,255}, {255,220,201}, {31,255,255}, {86,249,128}, {0,0,0}, {255,220,201}, {255,220,201}, {0,0,0}, {0,0,255}, {0,0,0}, {31,255,255}, {255,220,201}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {20,177,225}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {165,218,204}, {35,255,255}, {35,255,255}, {35,255,255}, {0,0,0}, {165,218,204}, {205,243,229}, {205,243,229}, {205,243,229}, {0,0,0}, {165,218,204}, {205,243,229}, {205,243,229}, {205,243,229}, {20,177,225}, {165,218,204}, {205,243,229}, {205,243,229}, {205,243,229}, {20,177,225}, {165,218,204}, {205,243,229}, {205,243,229}, {205,243,229}, {105,255,255}, {0,0,0}, {0,0,0}, {165,218,204}, {165,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,0,0}, {205,243,229}, {205,243,229}, {205,243,229}, {0,245,245}, {0,0,0}, {205,243,229}, {205,243,229}, {205,243,229}, {0,245,245}, {0,0,0}, {205,243,229}, {205,243,229}, {205,243,229}, {205,243,229}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {155,255,82}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {155,255,82}, {155,255,82}, {0,0,0}, {0,0,0}, {155,255,82}, {155,255,82}, {0,0,0}, {0,0,0}, {0,0,0}, {155,255,82}, {155,255,82}, {155,255,82}, {0,0,0}, {0,0,0}, {155,255,82}, {155,255,82}, {155,255,82}, {105,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {243,222,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {243,222,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {243,222,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {243,222,234}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [6] = { {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195}, {0,240,195} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_K)) SS_DELAY(100) SS_RCTL(SS_TAP(X_L)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_K)) SS_DELAY(100) SS_LCTL(SS_TAP(X_K)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_K)) SS_DELAY(100) SS_LCTL(SS_TAP(X_P)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_K)) SS_DELAY(100) SS_RCTL(SS_TAP(X_N)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_K)) SS_DELAY(100) SS_LCTL(SS_TAP(X_U)));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_K)) SS_DELAY(100) SS_LCTL(SS_TAP(X_C)));
    }
    break;

    case TOGGLE_BUTTON:
      if (record->event.pressed) {
        static bool is_toggled;
        is_toggled ^= 1;
        if (is_toggled) { 
            register_code(KC_F);
        } else { 
            unregister_code(KC_F);
        }
      }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

