#include<stdio.h>

int main()
{
    int age = 20;
    int *ptr = &age;
    int _age = *ptr;

    printf("%p\n", &age); // address
    printf("%u\n", &age); // address in readable form
    printf("%u\n", &ptr); // address of pointer
    printf("%d\n", _age);
    return 0;
}
 