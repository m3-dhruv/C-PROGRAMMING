#include<stdio.h>
#include<string.h>

int main()
{ 
    // strlen = count the length
    char name[] = "Dhruv panchal";
    int length = strlen(name);
    printf("Length is : %d\n", length); 

    // strcpy = copy the string 
    char oldstr[] = "oldstr";
    char newstr[] = "newstr";
    strcpy(newstr, oldstr);
    puts(newstr);
    

    // strcat = string concatenation 
    char firststr[100] = "Dhruv ";
    char secondstr[] = "Panchal";
    strcat(firststr, secondstr);
    puts(firststr);


    // strcom = compare the string
    char fstr[] = "Apple";
    char sstr[] = "Banana";
    printf("%d", strcmp(fstr, sstr));
    

    return 0;
}

