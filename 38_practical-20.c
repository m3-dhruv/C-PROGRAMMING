// write a function to count the occurrence of vowwls ina string

#include <stdio.h>
#include <string.h>

int countVolves(char str[]);

int main()
{
    char str[100] = "helloWORLD";
    printf("Number of Vowels : %d", countVolves(str));
    return 0;
}

int countVolves(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
         || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    return count;
}