//Write a program to swap two numbers using a third variable.


#include <stdio.h>
#include <math.h>

int main(){
 int num1, num2, temp;

 printf("Enter two integers :");
 scanf("%d %d", &num1, &num2);

 // Displays the number before swapping
 printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);


 // swapping logic using a third variable 
 temp = num1;
 num1 = num2;
 num2 = temp;


 // displays the number after swapping
 printf("After swapping: num1 = %d , num2 = %d", num1 , num2);

 return 0;

}