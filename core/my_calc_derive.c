// Author                 : Seityagiya Terlekchi
// Contacts               : terlekchiseityaya@gmail.com
// Creation Date          : 2025.01
// License Link           : https://spdx.org/licenses/LGPL-2.1-or-later.html
// SPDX-License-Identifier: LGPL-2.1-or-later
// Copyright © 2025-2025 Seityagiya Terlekchi. All rights reserved.

#include "my_calc.h"
#include "my_math.h"

int my_calculator_derive(char op, int a, int b) {
    switch (op) {
    case '+':
        return my_sum(a, b);
    case '-':
        return my_dif(a, b);
    case '*':
        return my_mul(a, b);
    case '/':
        return my_div(a, b);
    case '%':
        return my_mod(a, b);
    default:
        return my_calculator(op, a, b);
    }
}
