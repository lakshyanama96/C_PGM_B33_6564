//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){
    int num;

    printf("Enter the Number: ");
    scanf("%d", &num);

    if(num >= 0){
         if(num == 0)
         printf("The number is zero\n");
         printf("The number is positive\n");
    }
    else{
        printf("The number is negative\n");
    }
    return 0;
}