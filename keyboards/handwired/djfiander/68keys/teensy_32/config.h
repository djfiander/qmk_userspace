/* The Teensy-specific pinouts */

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
/*                       23, 22, 21, 20, 19 */
#define MATRIX_ROW_PINS {C2, C1, D6, D5, B2}

/*
  This layout keeps groups of pins on the same side of
  the board, so that I can use chunks of ribbon cable.

         0,  1,  2,  3,
         4,  5,  6,  7,
         8,  9, 10, 11, (12 is caps lock indicator)
        14, 15, 16 (Skip LED pin 13)
*/
#define MATRIX_COL_PINS {  \
        B16, B17, D0, A12, \
        A13,  D7, D4,  D2, \
        D3,   C3, C4,  C6, \
        D1,   C0, B0      \
    }

//#define LED_PIN_ON_STATE 1 /* 1 for HIGH (default), 0 for LOW */
#define LED_CAPS_LOCK_PIN C7    /* 12 */

#define UNUSED_PINS {          \
        B3, B1, C8, C9, E1,    \
        B19, A5, C10, C11, E0, \
        B18, A4, C5            \
    }


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
/*                       23, 22, 21, 20, 19 */
#define MATRIX_ROW_PINS {C2, C1, D6, D5, B2}

/*
  This layout keeps groups of pins on the same side of
  the board, so that I can use chunks of ribbon cable.

         0,  1,  2,  3,
         4,  5,  6,  7,
         8,  9, 10, 11, (12 is caps lock indicator)
        14, 15, 16 (Skip LED pin 13)
*/
#define MATRIX_COL_PINS {  \
        B16, B17, D0, A12, \
        A13,  D7, D4,  D2, \
        D3,   C3, C4,  C6, \
        D1,   C0, B0      \
    }

//#define LED_PIN_ON_STATE 1 /* 1 for HIGH (default), 0 for LOW */
#define LED_CAPS_LOCK_PIN C7    /* 12 */

#define UNUSED_PINS {          \
        B3, B1, C8, C9, E1,    \
        B19, A5, C10, C11, E0, \
        B18, A4, C5            \
    }
