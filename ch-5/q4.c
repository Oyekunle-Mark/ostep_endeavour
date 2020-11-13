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
        char *myArgs[2];
        myArgs[0] = "ls";
        myArgs[1] = NULL;
        execvp(myArgs[0], myArgs);
    } else {
        wait(NULL);
    }

    return EXIT_SUCCESS;
}
