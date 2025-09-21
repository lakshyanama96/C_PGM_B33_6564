#include <stdio.h>
int main(){
    int n, sum = 0, i;


    // prompt the user to enter a postive integer value
    printf("Enter a positive number(n):");
    scanf("%d", &n);


    //check if the input is a postive integer
    if (n <= 0){
        printf("Please enter a positive integer.\n");
          return 1;  // indicates an error
    }

     
    // calculate the sum
    for (i = 1; i <= n; i++) {
    sum += i;
    }
    

    // displays the result
    printf("The sum of first %d natural numbers is : %d\n", n, sum);
    return 0;

}