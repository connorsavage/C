#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <inttypes.h>

long long sayHiTimes(long long amount) {

    int count = 0;
    int i;
    for( i = 0; i < amount; i++) {
        fflush(stdout);
        printf("%s", "hello\n");
        count++;
    }
    
    fflush(stdout);
    printf("%d", count);
    return count;
}