//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main(){
    char ch;


    // prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is a vowel.\n", ch);
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is a consonant.\n", ch);
    }


    else
    {
        printf("%c is not an alphabet.\n", ch);
    } 
    return 0;
       

}