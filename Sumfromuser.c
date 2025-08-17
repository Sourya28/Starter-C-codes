//4.	Write a C program to add two numbers, take number from user.//
#include <stdio.h>

int main()
{
    int a;
    int b;
    int sum;
    
    printf ("enter the first number");
    scanf ("%d", &a);
    
    printf ("enter the second number");
    scanf ("%d", &b);
    
    sum = a + b;
    printf ("the sum of the two numbers is: %d \n ", sum);

    return 0;
}