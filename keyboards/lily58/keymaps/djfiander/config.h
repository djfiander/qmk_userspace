
#pragma once

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

/* Home row mods */
#define TAPPING_TERM 200
#define QUICK_TAP_TERM 0

#ifdef HOLD_ON_OTHER_KEY_PRESS
#undef HOLD_ON_OTHER_KEY_PRESS
#endif

/* Left-hand home row mods */
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)

/* Right-hand home row mods */
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

/* Configure tri-layer setup */
#define _QWERTY 0
#define _LOWER  1
#define _RAISE  2
#define _ADJUST 3

#define _TL_LAYER_LOWER_LAYER  _LOWER
#define _TL_LAYER_UPPER_LAYER  _RAISE
#define _TL_LAYER_ADJUST_LAYER _ADJUST
