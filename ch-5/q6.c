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
        printf("Child process id pid(%d)\n", (int) getpid());
    } else {
        int statLoc;
        int waitRet = waitpid(cid, &statLoc, WUNTRACED);
        printf("Return value of wait in parent: %d. Stat loc is %d\n", waitRet, statLoc);
    }

    return EXIT_SUCCESS;
}
