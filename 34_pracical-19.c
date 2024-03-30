// create a string firstname and lastname to store details of user & print all the characters using loop.

#include<stdio.h>

void printString(char arr[]);

int main()
{
    char fname[] = "Dhruv";
    char lname[] = "Panchal";
    printString(fname);
    printString(lname);
    return 0;
}

void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}