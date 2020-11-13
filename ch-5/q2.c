//
// Created by Oyekunle Oloyede on 13/11/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    FILE *fp = fopen("test.txt", "w+");
    printf("The parent process id is %d\n", (int) getpid());

    int cid = fork();

    if (cid < 0) {
        fprintf(stderr, "Fork failed");
        exit(1);
    } else if (cid == 0) {
        fputs("Line from child process\n", fp);
    } else {
        wait(NULL);
        fputs("Line from parent process\n", fp);
    }

    return EXIT_SUCCESS;
}
