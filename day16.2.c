#include <stdio.h>

int main() {
    int number, reversedNumber = 0, originalNumber, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number; 

    
    while (number != 0) {
        remainder = number % 10; 
        reversedNumber = reversedNumber * 10 + remainder; 
    }

    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome number.\n", originalNumber);
    } else {
        printf("%d is not a palindrome number.\n", originalNumber);
    }

    return 0;
}