//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
int main(){
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ( ch >= 'a' && ch <= 'z')
    {
        printf("%c is a Lowercase character.\n", ch);
    }
    
    else if (ch >= 'A' && ch <= 'B')
    {
        printf("%c is a Upercase character.\n", ch);
    }
    
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit.\n",ch);
    }
    
    else
    {
        printf("%c is a Special character.\n", ch);
    }
    return 0;
}