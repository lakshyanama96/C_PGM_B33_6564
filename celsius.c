#include<stdio.h>
int main(){

float celsius, fahrenheit;
printf("Enter the temperature in celsius:");
scanf("%f", &celsius);


//convert celsius into fahrenheit using this formula
fahrenheit = (celsius * 9.0 / 5.0) + 32.0;


// display the converted temperature upto two decimal places
printf("%.2f celsius = %.2f fahrenheit\n", celsius, fahrenheit);

return 0;
}