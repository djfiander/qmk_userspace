/*
  General configuration stuff that applies to all my keyboards
 */

#ifdef RGBLIGHT_ENABLE
#undef RGBLIGHT_ANIMATIONS
/* hue, sat = (0, 0) == White */
#define RGBLIGHT_DEFAULT_HUE (0)
#define RGBLIGHT_DEFAULT_SAT (0)
#define RGBLIGHT_DEFAULT_VAL (RGBLIGHT_LIMIT_VAL)

#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

#endif /* RGBLIGHT_ENABLE */

#define GRAVE_ESC_ALT_OVERRIDE

/*
 * People keep enabling these, but they're for latching *
 * mechanical capslock keys, which don't even exist anymore.
 */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/*
 * My standard keymaps
 */

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL 0
#define _FL 1
#define _PL 2
#define _RL 3

// mod-tap keys
#define CTL_CAPS LCTL_T(KC_CAPS)
#define CTL_APP  LCTL_T(KC_APP)
#define ALT_ESC  LALT_T(KC_ESC)
#define CTL_ENT  RCTL_T(KC_ENT)
#define CTL_ESC  LCTL_T(KC_ESC)

#define MEH_APP MEH_T(KC_APP)
#define FL_CAPS LT(_FL, KC_CAPS)

#define DJF_ANSI_65 \
{ \
    /* Keymap _BL: (Base Layer) Default Layer \
     * ,----------------------------------------------------------------. \
     * |  ` | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |Del | \
     * |----------------------------------------------------------------| \
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |Home| \
     * |----------------------------------------------------------------| \
     * |Ctrl/ESC |A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|CTL/Ret|PgUp| \
     * |----------------------------------------------------------------| \
     * |Shift/( |  Z|  X|  C|  V|  B|  N|  M|  ,|  .| /|Shift/)| Up|PgDn| \
     * |----------------------------------------------------------------| \
     * | Fn |Win |Alt |        Space          |Alt|Win| Fn |Lef|Dow|Rig | \
     * `----------------------------------------------------------------' \
     */ \
    [_BL] = LAYOUT_65_ansi( \
        KC_GRAVE, KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,  KC_MINS, KC_EQL,   KC_BSPC, KC_DEL, \
        KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,  KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME, \
        KC_LCTL,   KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN,  KC_QUOT,       CTL_ENT, KC_PGUP, \
        SC_LSPO,    KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,   SC_RSPC, KC_UP, KC_PGDN, \
        MO(_FL), KC_LGUI, ALT_ESC,                KC_SPC,             ALT_ESC, KC_RGUI, MEH_APP, KC_LEFT, KC_DOWN, KC_RGHT), \
 \
    /* Keymap _FL: Function Layer \
     * ,----------------------------------------------------------------. \
     * |    | F1|F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del   |Ins | \
     * |----------------------------------------------------------------| \
     * |Ctl-Alt|   |   |   |   |   |   |   |   |   |PrtScn|  |  |  |End | \
     * |----------------------------------------------------------------| \
     * |      |   |   |   |   |   | <-|Up | Dn| ->|   |   |        |    | \
     * |----------------------------------------------------------------| \
     * | PL    |   |   |   |   |Reset| |   |   |   |   |   McL|MsU|McR | \
     * |----------------------------------------------------------------| \
     * |    |    |    |                       | RL| PL|    |MsL|MsD|MsR | \
     * `----------------------------------------------------------------' \
     */ \
    [_FL] = LAYOUT_65_ansi( \
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,  KC_INS, \
        LCTL(KC_LALT), _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, _______, _______, _______, KC_END, \
        _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______,          _______, _______, \
        _______,          _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______,         _______, _______, _______, \
        _______, MO(_PL),  _______,                            _______,                   _______, _______, _______, _______, _______, MO(_RL)), \
 \
    /* Keymap _PL: Paging Layer \
     * ,----------------------------------------------------------------. \
     * |    |   |   |   |   |   |   |   |   |   |   |   |   |      |    | \
     * |----------------------------------------------------------------| \
     * |       |   |   |   |   |   |   |   |   |   |      |  |  |  |    | \
     * |----------------------------------------------------------------| \
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |    | \
     * |----------------------------------------------------------------| \
     * |       |   |   |   |   |     | |   |   |   |   |      |   |    | \
     * |----------------------------------------------------------------| \
     * |    |    |    |                       |   |   |    |   |   |    | \
     * `----------------------------------------------------------------' \
     */ \
    [_PL] = LAYOUT_65_ansi( \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______, _______, _______,           _______, \
        KC_MEH,           _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MEH,  _______, _______, \
        _______, _______, _______,                   _______,                           _______, _______, _______,  _______, _______, _______), \
 \
    /* Keymap _RL: Reset Layer \
     * ,----------------------------------------------------------------. \
     * |    |   |   |   |   |   |   |   |   |   |   |   |   |      |    | \
     * |----------------------------------------------------------------| \
     * |       |   |   |   |   |   |   |   |   |   |      |  |  |  |    | \
     * |----------------------------------------------------------------| \
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |    | \
     * |----------------------------------------------------------------| \
     * |       |   |   |   |   |     | |   |   |   |   |      |   |    | \
     * |----------------------------------------------------------------| \
     * |    |    |    |                       |   |   |    |   |   |    | \
     * `----------------------------------------------------------------' \
     */ \
    [_RL] = LAYOUT_65_ansi( \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  \
        _______, _______, _______, _______, RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, \
        _______,          _______, _______, _______, _______, QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______,                   _______,                            _______, _______, _______,  _______, _______, _______), \
 \
    /* [_PL] = LAYOUT_65_ansi( */ \
    /*     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  \ */ \
    /*     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \ */ \
    /*     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______, \ */ \
    /*     _______,          _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______,         _______, _______, _______, \ */ \
    /*     _______, _______, _______,                   _______,                            _______, _______,         _______,  _______, _______, _______), */ \
}
