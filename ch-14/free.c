//
// Created by Oyekunle Oloyede on 23/11/2020.
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    const size_t arrSize = 100;
    int *data = (int *) malloc(arrSize * sizeof(int));
    free(data);

    printf("%d", data[0]);

    return 0;
}
