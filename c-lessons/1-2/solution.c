//
// Created by Vadim Klimovich on 02.03.2024.
//


#include <stddef.h>
#include <string.h>
#include "solution.h"


int stringStat(const char *string, size_t multiplier, int *count) {
    *count = *count + 1;
    return strlen(string) * (int) multiplier;
}
