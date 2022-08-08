#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int choice;
    int a,b;
    while(1){
    printf("\nOnly 1=+, 2=%% & 3=exit operations are in choice\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    if(choice<3){
    printf("Enter your inputs:");
    scanf("%d %d",&a,&b);
    }
    switch (choice){
        case 1:
        printf("Addition of a & b: %d",a+b);
        break;
        
        case 2:
        printf("modulo of a & b: %d",a%b);
        break;

        case 3:
        exit(1);

        default:
        printf("Given choice is not valid");
        break;

    }
    }
}

