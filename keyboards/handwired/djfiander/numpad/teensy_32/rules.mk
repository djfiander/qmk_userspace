# MCU name
MCU = MK20DX256
#USE_CHIBIOS_CONTRIB = yes
BOARD = IC_TEENSY_3_1

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
