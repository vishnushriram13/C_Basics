#include<stdio.h>
int main()
{
    char c[15];
    int i;
     printf("Enter the name:\n");
     for(i=0;i<7;i++)
     scanf("%c",&c[i]);
     printf("Entered name: %s",c);
     c[i] = '\0';
}