#include QMK_KEYBOARD_H

//layer names
#define BASE  0
#define FUNC  1
#define PAGE  2
#define RESET 3

// mod/layer-tap keys
#define CTL_CAPS LCTL_T(KC_CAPS)
#define CTL_APP  LCTL_T(KC_APP)
#define MEH_APP MEH_T(KC_APP)
#define FL_CAPS LT(FUNC, KC_CAPS)
#define CTL_ENT RCTL_T(KC_ENT)

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
#define FUNCL   MO(FUNCTION)
#define PAGEL   MO(PAGE)
#define RESETL  MO(RESET)
/* Ctrl when held, ESC when pressed */
#define CTLESC  MT(KC_LCTL, KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE] = LAYOUT_60_ansi(
		KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,  KC_MINS,  KC_EQL,   KC_BSPC,
		KC_TAB,    KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,  KC_LBRC,  KC_RBRC, KC_BSLS,
		CTLESC,    KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN,  KC_QUOT,       CTL_ENT,
		SC_LSPO,     KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH,            SC_RSPC,
		FL_CAPS, KC_LGUI, KC_LALT,                  KC_SPC,                   KC_RALT, KC_RGUI, MEH_APP,    FL_CAPS),

	[FUNC] = LAYOUT_60_ansi(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
		CTL_ALT,    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, _______, _______, _______,
		_______,          _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
		_______, PAGEL, _______,                   _______,                                     _______, _______, RESETL, _______),

    [PAGE] = LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_INS,
		_______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______,          _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______, _______,
		_______,          _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______,          _______,
		_______, _______,          _______,                   _______,                            _______, _______,          _______, _______),
    [RESET] = LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______,          _______, _______, _______, RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______,
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
