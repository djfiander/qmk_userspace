
#pragma once

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

/* #define QUICK_TAP_TERM 0 */
/* #define TAPPING_TERM 100 */
#define TAPPING_TERM 200

/* Home row mods */
/* Left-hand home row mods */
#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define SFT_D LSFT_T(KC_D)
#define CTL_F LCTL_T(KC_F)

/* Right-hand home row mods */
#define CTL_J RCTL_T(KC_J)
#define SFT_K RSFT_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)


#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

/* Configure tri-layer setup */
#define _QWERTY 0
#define _LOWER  1
#define _RAISE  2
#define _ADJUST 3

#define _TL_LAYER_LOWER_LAYER  _LOWER
#define _TL_LAYER_UPPER_LAYER  _RAISE
#define _TL_LAYER_ADJUST_LAYER _ADJUST
