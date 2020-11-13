//
// Created by Oyekunle Oloyede on 13/11/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int cid = fork();

    if (cid < 0) {
        fprintf(stderr, "Fork failed.");
        exit(1);
    } else if (cid == 0) {
        puts("Hello!");
    } else {
        for (int i = 0; i < 1000000; ++i);
        puts("Goodbye!");
    }

    return EXIT_SUCCESS;
}
