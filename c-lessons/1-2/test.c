//
// Created by Vadim Klimovich on 02.03.2024.
//

#include <stdio.h>
#include <stddef.h>
#include "solution.h"

int main(void) {
    int count = 0;
    size_t multi = 10;
    char str[100];

    printf("Введите строку для проверки до 100 символов:\n");
    scanf("%s", str);
    printf("func res: %d\n", stringStat(str, multi, &count));
    printf("count: %d\n", count);

    return 0;
}
