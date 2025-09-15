//Write a program to input two numbers and display their sum, difference, product, and quotient.


#include<stdio.h>
int main(){
 float num1, num2;
 float sum, difference, product, quotient;

 printf("enter the first number");
 scanf("%f", &num1);
 // read the first number

 printf("enter the second number");
 scanf("%f", &num2);
 //read the second number 

 sum = num1 + num2;
 //calculate the sum

 difference = num1 - num2;
 // calculate the difference

 product = num1 * num2;
 // calculate the product

 // check for division by zero before calculating the quotient
 if(num2 != 0)
 {
    quotient = num1 / num2;
     printf("Sum: %.2f\n", sum);
     printf("Difference: %.2f\n", difference);
     printf("Product: %.2f\n", product);
     printf("Quotient: %.2f\n", quotient);
}else {
     printf("Sum: %.2f\n", sum);
     printf("Difference: %.2f\n", difference);
     printf("Product: %.2f\n", product);
     printf("Cannot calculate the quotient: Divison by zero\n");
}
return 0;
}