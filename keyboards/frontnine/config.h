#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
/*#define VENDOR_ID    n/a*/
#define PRODUCT_ID  0xFEED
#define MANUFACTURER    Evan Cook
#define PRODUCT         front nine

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* key matrix pins */

#define DIRECT_PINS { { F5, F6, D0 }, { B1, B3, C6,} , { B6, F0, B7,} }
