//
// Created by Oyekunle Oloyede on 13/11/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    printf("Parent process id: pid(%d)\n", (int) getpid());

    int cid = fork();

    if (cid < 0) {
        fprintf(stderr, "Fork failed.");
        exit(1);
    } else if (cid == 0) {
        close(STDOUT_FILENO);
        printf("Child process id pid(%d)\n", (int) getpid());
    } else {
        wait(NULL);
        printf("Parent process id pid(%d)\n", (int) getpid());
    }

    return EXIT_SUCCESS;
}
