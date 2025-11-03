//rite a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1; // for larger factorials

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    }
    // Case 0! = 1
    else if (num == 0) {
        printf("The factorial of 0 is 1.\n");
    }
    else {
        for (int i = 1; i <= num; i++) {
            factorial *= i; 
        }
        printf("The factorial of %d is %llu.\n", num, factorial);
    }

    return 0;
}