/*
Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/

#include<stdio.h>
#include<math.h>

int main(){

    int marks;

    // prompt the user to enter the marks
    printf("Enter the marks (0-100):");
    scanf("%d", &marks );


    if(marks < 60)
    {
        printf("Your grade is F");
    }

    else if(marks >= 60 && marks <= 69) 
    {
        printf("Your grade is D");
    }

    else if(marks >=70 && marks <= 79)
    {
        printf("Your grade is C");
    }

    else if(marks >= 80 && marks <= 89)
    {
        printf("Your grade is B");
    }

    else if(marks >= 90 && marks <= 100)
    {
        printf("Your grade is A");
    } 
     
    else
    {
        printf("Invalid marks");
    }
    return 0;

}