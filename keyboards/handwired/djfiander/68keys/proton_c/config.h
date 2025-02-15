/* The Proton-C specific pinouts */

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: MCU pins used for columns, left to right
 * ROWS: MCU pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */

#define MATRIX_ROW_PINS {A2, A1, A0, B8, B13}

#define MATRIX_COL_PINS { \
	B7,  B6,  B5,  B4,  B3, \
	B2,  B1,  B0,  A4,  A5, \
	A6,  A7, B12, B11, B10 \
}

#define LED_PIN_ON_STATE 1 /* 1 for HIGH (default), 0 for LOW */
#define LED_CAPS_LOCK_PIN A10
