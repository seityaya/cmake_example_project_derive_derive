// Author                 : Seityagiya Terlekchi
// Contacts               : terlekchiseityaya@gmail.com
// Creation Date          : 2025.01
// License Link           : https://spdx.org/licenses/LGPL-2.1-or-later.html
// SPDX-License-Identifier: LGPL-2.1-or-later
// Copyright © 2025-2025 Seityagiya Terlekchi. All rights reserved.

#include "my_calc_derive.h"
#include "stdio.h"

int main(int argc, char* argv[]) {
    (void)(argc);
    (void)(argv);

    if (my_calculator_derive('+', 1, 2) != 3) {
        printf("Test + Failure\n");
        return -1;
    }
    if (my_calculator_derive('-', 3, 2) != 1) {
        printf("Test - Failure\n");
        return -1;
    }
    if (my_calculator_derive('*', 1, 2) != 2) {
        printf("Test * Failure\n");
        return -1;
    }
    if (my_calculator_derive('/', 4, 2) != 2) {
        printf("Test / Failure\n");
        return -1;
    }
    if (my_calculator_derive('%', 3, 2) != 1) {
        printf("Test %% Failure\n");
        return -1;
    }
    if (my_calculator_derive('@', 3, 2) != -1) {
        printf("Test @ Failure\n");
        return -1;
    }
    printf("Test my_calc_derive Passed!\n");
    return 0;
}
