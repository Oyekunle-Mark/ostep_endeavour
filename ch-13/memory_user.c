//
// Created by Oyekunle Oloyede on 23/11/2020.
//
#include <stdio.h>
#include <stdlib.h>

#define KILOBYTE 1024

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        fprintf(stderr, "No command line arguments provided");
        exit(1);
    }

    char *ptr = malloc((int) argv(1) * KILOBYTE * KILOBYTE);

    for (int i; i < sizeof(ptr); ++i)
        printf("%d - %c", i, ptr[i]);

    return 0;
}
