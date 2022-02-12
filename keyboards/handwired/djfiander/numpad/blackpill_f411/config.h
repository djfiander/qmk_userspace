#pragma once

#include "config_common.h"

/*
 * Bad pins:
 *    A8-A12:      USB
 *    B2:          BOOT1
 */
#define MATRIX_COL_PINS \
    { B3, B4, B5 }

#define MATRIX_ROW_PINS \
    { A1, A2, A3, A4 }

#define UNUSED_PINS
