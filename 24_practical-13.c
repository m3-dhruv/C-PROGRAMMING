// wite a program to print percentage of 3 sub with function

#include<stdio.h>

int calPer(int maths, int science, int english);

int main()
{
    int maths;
    int science;
    int english;

    printf("Enter marks of maths :");
    scanf("%d", &maths);
    printf("Enter marks of science :");
    scanf("%d", &science);
    printf("Enter marks of english :");
    scanf("%d", &english);

    printf("Percentage is : %d", calPer(maths,science,english));
    return 0;
}

int calPer(int maths, int science, int english){
    return (maths+science+english)/3;
}