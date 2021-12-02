/**
* Filename: dec2hex.c
* Description: Converts base 10 decimal number to base 16 hex equivalent
* Author: Erin Hurlburt and Connor Savage
* Date: October 26, 2021
*/

#include<stdio.h>

int main() {
	long int decimalNumber,remainder,quotient;
	int i=1,j,temp;
	char hexadecimalNumber[32];
    int pad = 0;
	printf("Enter any decimal number: ");
    fflush(stdout);
	scanf("%ld",&decimalNumber);
	quotient = decimalNumber;
	while(quotient!=0) {
		temp = quotient % 16;cd
		//To convert integer into character
		if( temp < 10)
		           temp =temp + 48; else
		         temp = temp + 55;
		hexadecimalNumber[i++]= temp;
		quotient = quotient / 16;
	}
	printf("Equivalent hexadecimal value of decimal number %d: ",decimalNumber);
    for (j = i -1 ;j <= 32;j++) {
        printf("%d", 0);
    }
	for (j = i -1 ;j> 0;j--) {
        printf("%c",hexadecimalNumber[j]);
    }
	return 0;
}