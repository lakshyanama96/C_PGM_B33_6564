// Write a program to calculate the factorial of a number.
#include <stdio.h>

int main()
{
    int num;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // check for negative input
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    
    // check for 0 , 0! =1
    else if ( num == 0)
    {
        printf("The factorial of 0 is 1.\n");
    }


    else
    {
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %d\n", num, factorial);
    }

    return 0;
}