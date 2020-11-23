//
// Created by Oyekunle Oloyede on 23/11/2020.
//
#include <stdlib.h>

int main(int argc, char *argv[]) {
    const size_t arrSize = 100;
    int *data = (int *) malloc(arrSize * sizeof(int));
    data[100] = 0;

    free(data);

    return 0;
}
