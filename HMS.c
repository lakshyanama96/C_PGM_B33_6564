//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){
    int hours, totalseconds, minutes, seconds;
    
    
    // Prompt the user to enter the time in seconds
    printf("Enter time in seconds:");
    scanf("%d", &totalseconds);

    hours = totalseconds / 3600;

    minutes = (totalseconds / 3600 ) % 60;
    
    seconds = (totalseconds % 3600 ) % 3600;

    printf("H:M:S - %d:%d:%d \n", hours, minutes, seconds);
    return 0;
    

}