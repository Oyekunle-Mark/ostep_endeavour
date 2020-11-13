//
// Created by Oyekunle Oloyede on 13/11/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int fd[2];
    pipe(fd);

    pid_t child1 = fork();

    if (child1 < 0) {
        fprintf(stderr, "Fork failed.");
        exit(1);
    } else if (child1 == 0) {
        char *message = "Child 1 writes to standard output.";

        write(fd[1], message, strlen(message));
        printf("Child 1 (pid: %d) writes to stdout\n", (int)getpid());
    } else {
        printf("Parent process id pid(%d)\n", (int) getpid());

        pid_t child2 = fork();

        if (child2 == 0) {
            char inputStr[100];
            read(fd[0], inputStr, 100);
            printf("Read \"%s\" from standard input in process (pid: %d)\n", inputStr, (int) getpid());
        }
    }

    return EXIT_SUCCESS;
}
