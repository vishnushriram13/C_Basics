/*#include<stdio.h>
#include<stdlib.h>
int main(){
int *a;
int i, max;
printf("enter the max elements:");
scanf("%d",&max);
a = (int*)malloc(max*sizeof(int));
printf("enter the values:\n");
for(i=0;i<max;i++)
scanf("%d",&a[i]);
printf("result:\n");
for(i=0;i<max;i++)
printf("%d \t \n",a[i]);
}*/


// malloc //
#include<stdio.h>
#include<stdlib.h>
int *p,max,i;
void fun()
{   
printf("Enter the max elements:");
scanf("%d",&max);
p = (int *)malloc(max*sizeof(int));
printf("Enter the values:\n");
for(i=0;i<max;i++)
scanf("%d",&p[i]);
}
int main()
{
    fun();
    printf("result:\n");
    for(i=0;i<max;i++)
    printf("%d \t",*(p + i)*10);
    }


