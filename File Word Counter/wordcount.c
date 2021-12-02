/**
* Filename: wordcount.c
* Description: counts the number of words in a file
* Author: Erin Hurlburt and Connor Savage
* Date: October 26, 2021
*/

#include <stdio.h>
#include <dirent.h>


#define MAX_LEN 1024

int main() {

    char ch;
    int wordCount = 0;
    int in_word = 0;
    char fileName[MAX_LEN];
    FILE *myFile;

    printf("Enter a file name: ");
    fflush(stdout);
    scanf("%s", fileName);


    myFile = fopen(fileName, "r");


    if (myFile == NULL) {
        printf("Could not open the file %s. \n", fileName);
        return 1;
    }


    while ((ch = fgetc(myFile)) != EOF) {

        if (ch == ' ' || ch == '\t' || ch == '\0' || ch == '\n') {
            if (in_word) {
                in_word = 0;
                wordCount++;
            }

        } else {
            in_word = 1;
        }


    }


    printf("Number of words: %d\n", wordCount);



    return 0;
}

