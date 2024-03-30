#include<stdio.h>

int main()
{
    char name[] = {'D','H','R','U','V','\0'}; // first way 
    char _name[] = "Dhruv";              // second way

    printf("%s\n", name);
    printf("%s", _name);
    return 0;
}
