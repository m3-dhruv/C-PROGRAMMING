#include<stdio.h>

int main()
{
    char str[50];
    //gets(str);   outdated and dangerous
    fgets(str, 50, stdin);
    puts(str);
    return 0;
}
