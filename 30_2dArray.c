#include<stdio.h>

int main()
{
    // 2 * 3    
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 80;
    marks[0][2] = 70;

    marks[1][0] = 70;
    marks[1][1] = 80;
    marks[1][2] = 90;

    printf("%d\n", marks[0][0]);
    return 0;
}
