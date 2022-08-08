#include<stdio.h>
int main()
{
    int choice,a,b;
    printf("enter the choice:");
    scanf("%d",&choice);
    if(choice<4){
    printf("enter your inputs:");
    scanf("%d %d",&a,&b);
    }
    if(choice==1){
    
        printf("addition of a and b: %d",a+b);
    }
    else if (choice==2){
        printf("subtracted result of a&b: %d",a-b);
    }
    else if (choice==3){
        printf("multiplied value of a&b: %d",a*b) ;
    }
    else if (choice==4){
        printf("divide value of a&b: %d",a/b);
    }
    else {
        printf("the given inputs choice is not the range between 1-4\n");

    }
    




}
