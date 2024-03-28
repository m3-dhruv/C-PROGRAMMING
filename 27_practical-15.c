// write a c program to swap(interchange) 2 numbers, a and b.

#include<stdio.h.>

void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int x = 3, y = 5;

    printf("call by value \n");
    swap(x, y);
    printf("a = %d & b = %d\n", x, y);

    printf("call by reference \n");
    _swap(&x, &y);
    printf("a = %d & b = %d\n", x, y);

    return 0;
}

// call by value
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("a = %d & b = %d\n", a, b);
}

// call by reference
void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;  
    printf("a = %d & b = %d\n", *a, *b); 
}
