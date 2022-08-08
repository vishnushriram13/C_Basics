#include<stdio.h>
int main()
{
    char choice;
    int a,b;
    printf("Only + & %% operations are in choice\n");
    printf("enter your choice:");
    scanf("%c",&choice);
    printf("enter your inputs:");
    scanf("%d %d",&a,&b);
    switch (choice){
        case '+':
        printf("Addition of a & b: %d",a+b);
        break;
        
        case '%':
        printf("modulo of a & b: %d",a%b);
        break;

        default:
        printf("given choice is not valid");
        break;
    }
}