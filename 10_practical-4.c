// write a program to check if a student passed or fail 

# include<stdio.h>

int main()
{
    int marks;
    printf("Enter marks : ");
    scanf("%d", &marks);

    if(marks <= 33){
        printf("Fail \n");
    }
    else if(marks > 33 && marks <= 100){
        printf("Pass \n");
    }
    else{
        printf("invalid marks ");
    }

    return 0;
}
