#include<stdio.h>
// #include<stdlib.h>
int main()
{
    int choice;
    int a, x;

        printf("1 = addition\n2 = division\n");
        printf("Enter a choice:");
        scanf("%d",&choice);
        if(choice<2){;
        printf("Enter 2 values:");
        scanf("%d %d",&a,&x);}
        switch(choice){
        case 1:
        printf("Result : %d\n",a+x);
        break;
        

        case 2:
        printf("Result : %d\n",a/x);
        break;
        

      /*  case 3:
        exit(1);*/

        default:
        printf("Selected choice is not in range");
        break;
        }
    
}