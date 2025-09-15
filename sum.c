//Write a program to input two numbers and display their sum.

#include <stdio.h>
int main(){
    int a, b, sum;
    printf("enter a number");// first number 
    scanf("%d", &a);

    printf("enter a number");// second number
    scanf("%d", &b);

    sum = a + b;
    // Displays the sum

    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0; 
}