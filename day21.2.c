//Write a program to check if a number is a perfect number.
#include <stdio.h>


int isPerfect(int num) {
    if (num <= 0) { 
        return 0;
    }

    int sum_of_divisors = 0;
    for (int i = 1; i < num; i++) { 
        if (num % i == 0) { 
            sum_of_divisors += i; 
        }
    }

    return (sum_of_divisors == num); 
}

int main() {
    int number;

    printf("Enter a number to check if it's perfect: ");
    scanf("%d", &number);

    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}