#include<stdio.h>
#include<stdlib.h>
int main()
{
    //char c[]='234';for static 
   //for dynamic// 
    char c[10];
    int x;
    printf("enter the values of string:");
    scanf("%s",c);
    x = atoi(c);
    x = x*5;
    printf("\nint to str: %d",x);

}

//int2str//

/*#include<stdio.h>
int main(){
char b[10];
int x;
printf("Enter the value:");
scanf("%d",&x);
'
sprintf(b,"%d",x);
printf("converted :%s",b);}*/





