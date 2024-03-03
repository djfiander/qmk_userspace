#include QMK_KEYBOARD_H

//layer names
#define BASE  0
#define FUNC  1
#define PAGE  2
#define RESET 3

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)
#define HOME_G MEH_T(KC_G)

// Right-hand home row mods
#define HOME_H MEH_T(KC_H)
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

// Complicated key shortcuts
#define CTL_ALT LCTL(KC_LALT)
#define FUNCL   MO(FUNC)
#define PAGEL   MO(PAGE)
#define RESETL  MO(RESET)
#define FL_CAPS LT(FUNC, KC_CAPS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE] = LAYOUT_60_ansi(
		KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,  KC_MINS,  KC_EQL,   KC_BSPC,
		KC_TAB,    KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,  KC_LBRC,  KC_RBRC, KC_BSLS,
		KC_LCTL,    KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN,  KC_QUOT,       CTL_ENT,
		SC_LSPO,     KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH,            SC_RSPC,
		TL_LOWR, KC_LGUI, ALT_ESC,                  KC_SPC,                   ALT_ESC, KC_RGUI, MEH_APP,    TL_UPPR),

	[FUNC] = LAYOUT_60_ansi(
        _______,    KC_F1,      KC_F2,    KC_F3,      KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,     KC_INS,
		CTL_ALT,      _______,      _______,  _______,   _______,   _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_PSCR, _______, _______, _______,
		_______,        _______,     _______,   _______,   _______,   _______, KC_LEFT,  KC_DOWN,  KC_UP,  KC_RIGHT,  _______,_______,      _______,
        _______,    _______, _______, _______      , _______, _______, _______, _______, _______, _______, _______,          _______,
		_______, _______, _______,                   _______,                                     _______, _______, _______, _______),

    [PAGE] = LAYOUT_60_ansi(
        _______,    KC_F1,      KC_F2,    KC_F3,      KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,     KC_DEL,
		CTL_ALT,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
		_______,          _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______,          _______,
		_______, _______,          _______,                   _______,                            _______, _______,          _______, _______),
    [RESET] = LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______,          _______, _______, EE_CLR, RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
		_______,          _______, _______, _______, _______, QK_BOOT,   _______, _______, _______, _______, _______,          _______,
		_______, _______,          _______,                   _______,                            _______, _______,          _______, _______),

    /* LAYOUT_60_ansi( */
    /*         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, */
	/* 	_______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, */
	/* 	_______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, */
	/* 	_______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, */
	/* 	_______, _______,          _______,                   _______,                            _______, _______,          _______, _______), */

};
