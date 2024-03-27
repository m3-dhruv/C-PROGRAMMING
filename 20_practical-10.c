// wite a program to given number is odd or even usding function

#include<stdio.h>

void odd();
void even();

int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);

    if(n % 2 == 0){
        even();
    }
    else{
        odd();
    }
    
    return 0;
}

void odd(){
    printf("Given number is odd.");
}

void even(){
    printf("Given number is even.");
}
