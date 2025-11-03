//Write a program to print numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;  
    int i; 

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Check if the entered number is positive
    if (n > 0) {
        printf("Numbers from 1 to %d are:\n", n); 
        
        for (i = 1; i <= n; i++) {
            printf("%d ", i); 
        }
        printf("\n"); 
    } else {
        printf("Please enter a positive integer.\n"); 
    }

    return 0; 
}