#include<stdio.h>

int fact(int n);

int main()
{
    printf("Factioral is : %d", fact(5));
    return 0;
}

int fact(int n){
    if(n == 0){
        return 1;
    }
    int factN = fact(n-1) * n;
    return factN;
}