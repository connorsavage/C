/**
* Filename: holdit.c
* Description: uses time method to measure number of seconds prompted by user
* Author: Erin Hurlburt and Connor Savage
* Date: October 26, 2021
*/

#include<stdio.h>
#include<time.h>

void getEnter() {
    char enter;
    printf("Take a deep breath and press enter to start your time. \n");
    fflush(stdout);
    getchar();
}

int main() {

    int t;
    getEnter();
    t = time(0);
    printf("Press enter again when you're done.");
    fflush(stdout);
    fflush(stdin);
    getchar();
    t = time(0) -t;
    printf("fun() took %d seconds to execute \n", t);
    fflush(stdout);
    return 0;
}