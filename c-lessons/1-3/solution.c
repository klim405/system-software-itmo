//
// Created by Vadim Klimovich on 02.03.2024.
//
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <dlfcn.h>

int (*secret_func) (int arg);

bool load_library(char *lib_name,  char *func_name) {
    char path[100];
    strcat(path, "./");
    strcat(path, lib_name);
    void *hdl = dlopen(path, RTLD_LAZY);
    if (hdl == NULL)
        return false;

    secret_func = (int (*) (int arg)) dlsym(hdl, func_name);
    if (secret_func == NULL)
        return false;

    return true;
}

int main(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Аргументов должно быть 3!\n");
        return -1;
    }
    if (load_library(argv[1], argv[2])) {
        int res = secret_func(atoi(argv[3]));
        printf("%d\n", res);
    } else {
        printf("Не удалось загрузить библиотеку.\n");
        return -2;
    }
}
