#include<stdio.h>
int  main()
{
    char i[30];
    printf("enter your name:");
    scanf("%[^\n]",i);
    printf("Your name: %s",i) ;
}