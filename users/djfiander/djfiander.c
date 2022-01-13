/*
  Random bits of code that support all my keyboards.
 */

#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_LAYERS

// Light LEDs 0 to 2 and 14 to 15 red when caps lock is
// active. Hard to ignore!
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_RED},       // Light 2 LEDs, starting with LED 1
    {14,2, HSV_RED}        // Light 2 LEDs, starting with LED 14
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_capslock_layer
 );

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}
#endif
