#include<stdio.h>
#include<string.h>
#pragma GCC diagnostic ignored "-Wformat-zero-length"
int main()
{
    int length;
    char counter[30];

    printf("Enter a word: ");
    gets(counter);
    length = strlen(counter); 

    printf("The word %s has %d chars", counter, length);
    return 0;
}

#pragma GCC diagnostic warning "-Wformat-zero-length"