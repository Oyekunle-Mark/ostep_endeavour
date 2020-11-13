//
// Created by Oyekunle Oloyede on 13/11/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    printf("The parent process id is %d\n", (int) getpid());
    int x = 100;
    printf("Before fork, x is %d\n", x);

    int cid = fork();

    if (cid < 0) {
        fprintf(stderr, "Error creating fork");
        exit(1);
    } else if (cid == 0) {
        printf("In child process (%d), x is %d\n", (int) getpid(), x);
        x = -23;
        printf("In child process, new value of x is %d\n", x);
    } else {
        wait(NULL);
        printf("In parent process, x is %d\n", x);
        x = 5330;
        printf("In parent process, new value of x is %d\n", x);
    }

    return EXIT_SUCCESS;
}
