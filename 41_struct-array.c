#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct  student cs[100];
    cs[0].roll = 118;
    cs[0].cgpa = 7.75;
    strcpy(cs[0].name, "dhruv");

    printf("student name = %s\n", cs[0].name);
    printf("student roll no = %d\n", cs[0].roll);
    printf("student cgpa = %f\n", cs[0].cgpa);

    return 0;
}

