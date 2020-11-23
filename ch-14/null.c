//
// Created by Oyekunle Oloyede on 23/11/2020.
//
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int *ptr = (int *) malloc(sizeof(int));
    ptr = NULL;

    free(ptr);
}
