#include <stdio.h>

int main()
{
    char name[50];
    int age;

    printf("what is your age?");
    scanf("%d",&age);

    printf("what is your name?");
    scanf("%s",name);
    
    printf("your age is: %d\n",age);
    printf("your name is: %s\n",name);
    
    return 0;
}