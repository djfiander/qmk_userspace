#
#
#

# Always include this source file, sometimes it'll be empty,
# though.
SRC += djfiander.c

LTO_ENABLE = yes		# Link-time Optimization

EXTRAKEY_ENABLE = no
SLEEP_LED_ENABLE= no
NKRO_ENABLE = no		# NKRO breaks caps lock LED status
#BACKLIGHT_ENABLE = no
AUDIO_ENABLE = no
