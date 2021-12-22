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
