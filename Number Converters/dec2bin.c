/**
* Filename: dec2bin.c
* Description: Converts 10 base decimal number to 32 bit binary equivalent
* Author: Erin Hurlburt and Connor Savage
* Date: October 26, 2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int num, char * argv[] ) {
    int decimal;
    char binary[32] = {0};
    int i = 0;
    int j;
    int z = 32;

    printf("Enter any decimal value : ");
    fflush(stdout);
    scanf("%d", &decimal); 

    for (j = 0; j < 32; j++) {
        binary[j] = 0;
    }

    while (decimal != 0) {
        binary[i] = (decimal % 2);
        decimal = decimal / 2;
        i++;
    }

    for (j = j - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

