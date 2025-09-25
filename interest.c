//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main(){
    float principal, rate , time;
    float simple_interest, compound_interest;


    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter the time period in years: ");
    scanf("%f", &time);


    //calculate simple interest
    simple_interest = (principal * rate * time) / 100;


    //calculate compound interest
    compound_interest = principal * pow((1 + rate / 100), time) - principal;


    //displays the result
    printf("Simple interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);
    return 0;
}