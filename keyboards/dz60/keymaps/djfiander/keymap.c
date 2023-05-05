#include QMK_KEYBOARD_H

#define _BL 0
#define _FL 1
#define _RL 2

// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define CTL_D LCTL_T(KC_D)
#define SFT_F LSFT_T(KC_F)
#define HYPER_G HYPR_T(KC_G)

// Right-hand home row mods
#define HYPER_H HYPR_T(KC_H)
#define SFT_J RSFT_T(KC_J)
#define CTL_K RCTL_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BL] = LAYOUT_60_ansi_split_bs_rshift(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRAVE,
		KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
		KC_CAPS, GUI_A,   ALT_S,   CTL_D,   SFT_F,   HYPER_G,    HYPER_H,    SFT_J,   CTL_K,   ALT_L,   GUI_SCLN, KC_QUOT,             KC_ENT,
		KC_NO,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_NO, KC_NO,
		KC_NO,   KC_NO, MO(_FL),                   KC_SPC,                                  MO(_FL),   KC_NO,     KC_APP,   KC_NO),

	[_FL] = LAYOUT_60_ansi_split_bs_rshift(
                _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
		LCTL(KC_LALT),    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, _______, _______, KC_DEL,
		_______,          _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,_______, _______, _______,
                _______,          _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______, _______,          _______, _______,
		_______, _______, _______,                   _______,                                     MO(_RL), _______, _______, _______),

        [_RL] = LAYOUT_60_ansi_split_bs_rshift(
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______,          _______, _______, _______, RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, KC_INS,
		_______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
		_______,          _______, _______, _______, _______, RESET,   _______, _______, _______, _______, _______,          _______, _______,
		_______, _______,          _______,                   _______,                            _______, _______,          _______, _______),

        /* LAYOUT_60_ansi_split_bs_rshift( */
        /*         _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, */
	/* 	_______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, */
	/* 	_______,          _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, */
	/* 	_______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, */
	/* 	_______, _______,          _______,                   _______,                            _______, _______,          _______, _______), */

};
