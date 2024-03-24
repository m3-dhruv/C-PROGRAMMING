// write a program to chack to given char is upper case or lower case

# include<stdio.h>

int main()
{
    char ch;
    printf("enter a character :");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("upper case \n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("lower case \n");
    }
    else {
        printf("Not a english letter ");
    }
    
    return 0;
}
