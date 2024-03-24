// write a program to chack if number is devide by two or not

# include<stdio.h>
# include<math.h>

int main()
{
    int x;
    printf("Enter first number : ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0;
}

// 0 = not devided by 2
// 1 = devided by 2