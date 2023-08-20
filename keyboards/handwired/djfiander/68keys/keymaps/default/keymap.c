#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FL 1
#define _RL 2

// mod-tap keys
#define CTL_CAPS LCTL_T(KC_CAPS)
#define CTL_APP  LCTL_T(KC_APP)
#define CTL_ESC  LCTL_T(KC_ESC)
#define FL_CAPS  LT(_FL, KC_CAPS)
#define MEH_APP  MEH_T(KC_APP)
#define CTL_ENT RCTL_T(KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _BL: (Base Layer) Default Layer
     * ,----------------------------------------------------------------.
     * |GEsc| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |Del |
     * |----------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |Home|
     * |----------------------------------------------------------------|
     * |Ctrl/Caps|A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |PgUp|
     * |----------------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | Up|PgDn|
     * |----------------------------------------------------------------|
     * | Fn |Alt |Win |        Space          |Alt|Win| Fn |Lef|Dow|Rig |
     * `----------------------------------------------------------------'
     */
    [_BL] = LAYOUT_65_ansi(
        KC_GRAVE,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME,
        CTL_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,        CTL_ENT,  KC_PGUP,
        SC_LSPO,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC, KC_UP,   KC_PGDN,
        FL_CAPS, KC_LGUI,   KC_LALT,                            KC_SPC,                    KC_RALT, KC_RGUI, MEH_APP, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* Keymap _FL: Function Layer
     * ,----------------------------------------------------------------.
     * |   | F1|F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del    |Ins |
     * |----------------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |PrtScn|  |  |    |End |
     * |----------------------------------------------------------------|
     * |       |  |   |   |   |   | <-|Up | Dn| ->|   |   |        |    |
     * |----------------------------------------------------------------|
     * | Meh |   |   |   |   |Home|PgUp|PgDn |End|   |   |Meh |    |    |
     * |----------------------------------------------------------------|
     * |    | _RL |    |                       |   |_RL|    |   |  |    |
     * `----------------------------------------------------------------'
     */
    [_FL] = LAYOUT_65_ansi(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_INS,
        LCTL(KC_LALT), _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, _______, _______, _______, KC_END,
        _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______,          _______, _______,
        KC_MEH,          _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______, KC_MEH, _______, _______,
        _______, _______, _______,                   _______,                            _______,  _______, _______,  _______, _______, MO(_RL)),

    /* Keymap _RL: Reset Layer
     * ,----------------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |    |
     * |----------------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |      |  |  |    |    |
     * |----------------------------------------------------------------|
     * |      |   |   |   |   |   |   |    |    |   | |   |        |    |
     * |----------------------------------------------------------------|
     * |        |   |   |   |   | RESET||   |   |   |   |      |   |    |
     * |----------------------------------------------------------------|
     * |    |    |    |                       |   |   |    |   |   |    |
     * `----------------------------------------------------------------'
     */
    [_RL] = LAYOUT_65_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, \
        _______,          _______, _______, _______, _______, QK_BOOT,   _______,   _______, _______, _______, _______,         _______, _______, _______, \
        _______, _______, _______,                   _______,                            _______, _______,         _______,  _______, _______, _______),

    /* Keymap _XL: X Layer
     * ,----------------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |    |
     * |----------------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |      |  |  |    |    |
     * |----------------------------------------------------------------|
     * |      |   |   |   |   |   | Hm|PgDn|PgUp|End| |   |        |    |
     * |----------------------------------------------------------------|
     * |        |   |   |   |   |     | |   |   |   |   |      |   |    |
     * |----------------------------------------------------------------|
     * |    |    |    |                       |   |   |    |   |   |    |
     * `----------------------------------------------------------------'
     */
    /* [_PL] = LAYOUT_65_ansi( */
    /*     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  \ */
    /*     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \ */
    /*     _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______, _______,          _______,          _______, \ */
    /*     _______,          _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______,         _______, _______, _______, \ */
    /*     _______, _______, _______,                   _______,                            _______, _______,         _______,  _______, _______, _______), */

};
