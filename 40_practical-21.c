// write a program to store the data of three student

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
    struct  student s1;
    s1.roll = 118;
    s1.cgpa = 7.75;
    strcpy(s1.name, "dhruv");

    printf("student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);


    struct  student s2;
    s2.roll = 119;
    s2.cgpa = 6.75;
    strcpy(s2.name, "dhyan");

    printf("student name = %s\n", s2.name);
    printf("student roll no = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);


    struct  student s3;
    s3.roll = 120;
    s3.cgpa = 7.00;
    strcpy(s3.name, "man");

    printf("student name = %s\n", s3.name);
    printf("student roll no = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);

    return 0;
}

