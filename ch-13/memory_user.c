//
// Created by Oyekunle Oloyede on 23/11/2020.
//
#include <stdio.h>
#include <stdlib.h>

#define KILOBYTE 1024

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        fprintf(stderr, "No command line arguments provided\n");
        exit(1);
    }

    char *argument = argv[1];
    unsigned long size = atoi(argument) * KILOBYTE * KILOBYTE;
    char *ptr = (char *) malloc(size);

    if (ptr == NULL) {
        fprintf(stderr, "Unable to allocate.\n");
        exit(1);
    }

    for (size_t i = 0; i < size; ++i)
        printf("%zu - %d", i, ptr[i]);

    free(ptr);

    return 0;
}
