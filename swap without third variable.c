// Write a program to swap two numbers without using a third variable.

#include <stdio.h>
 
int main(){
   int a,b;

   printf("Enter the First number: ");
   scanf("%d", &a);

   printf("Enter the second number: ");
   scanf("%d", &b);

   a = a + b;
   b = a - b;
   a = a - b;
    printf("a = %d and b = %d", a, b);
    return 0;    
}