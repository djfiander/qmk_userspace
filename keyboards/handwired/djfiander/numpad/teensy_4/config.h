/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// TODO: including this causes "error: expected identifier before '(' token" errors
#include <config_common.h>

#define PRODUCT Numpad Teensy 4.1

#define MATRIX_COL_PINS { LINE_PIN2, LINE_PIN3, LINE_PIN4 }
#define MATRIX_ROW_PINS { LINE_PIN9, LINE_PIN10, LINE_PIN11, LINE_PIN12 }

#define UNUSED_PINS

// i2c_master defines
#define I2C1_SCL_PIN LINE_PIN16
#define I2C1_SDA_PIN LINE_PIN17
#define I2C1_SCL_PAL_MODE PAL_MODE_ALTERNATIVE_2
#define I2C1_SDA_PAL_MODE PAL_MODE_ALTERNATIVE_2
