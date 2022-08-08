/*#include<stdio.h>
int main()
{
    int a ;
    printf("enter the input:");
    scanf("%d",&a);
    if(a>0){
        if(a<=10){
        printf("the entered input is within 0 to 10\n");
    }
    else{
        printf("the entered number is not between the range\n");
    }
    }
}*/

#include<stdio.h>
int main()
{
    int a ;
    printf("enter the input:");
    scanf("%d",&a);
    if(a>0 && a<=10){
        printf("the entered input is within 0 to 10\n");
    }
    else{
        printf("the entered number is not within the range\n");
    }
}