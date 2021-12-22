#
#
#

ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
  # Include RGB layer capslock indicator
  SRC += djfiander.c
endif

EXTRA_FLAGS += -flto

MOUSEKEY_ENABLE = no
SLEEP_LED_ENABLE= no
NKRO_ENABLE = no		# NKRO breaks caps lock LED status
BACKLIGHT_ENABLE = no
BLUETOOTH_ENABLE = no
AUDIO_ENABLE = no

