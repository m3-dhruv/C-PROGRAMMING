//print the sum of n natural numbers also print that numbers

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
         printf("%d\n", i);
    }
    printf("sum is %d\n", sum); 
   
    
    return 0;
}
