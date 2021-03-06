//
// Created by Oyekunle Oloyede on 14/11/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

int main() {
    struct timeval start, end;
    const size_t EXECUTION_COUNT = 1000;

    gettimeofday(&start, NULL);

    for (size_t i = 0; i < EXECUTION_COUNT; ++i) {
        read(STDIN_FILENO, NULL, 0);
    }

    gettimeofday(&end, NULL);

    u_int64_t startInMicro = start.tv_sec * 1000000000 + start.tv_usec;
    u_int64_t endInMicro = end.tv_sec * 1000000000 + end.tv_usec;
    u_int64_t averageInMicro = (endInMicro - startInMicro) / EXECUTION_COUNT;

    printf("Time taken for %ld calls is %lld\n", EXECUTION_COUNT, endInMicro - startInMicro);
    printf("Average time for a single system call is %lld microseconds\n", averageInMicro);

//    long seconds = end.tv_sec - start.tv_sec;
//    long micro = ((seconds * 1000000) + end.tv_usec) - start.tv_usec;
//
//    printf("Total time elapsed in microseconds is %ld for %ld calls\n", micro, EXECUTION_COUNT);
//    printf("Average time for a single system call is %ld\n", micro / EXECUTION_COUNT);

    return 0;
}
