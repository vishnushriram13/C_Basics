/*#include<stdio.h>
int main(){
int a[6] = {5,6,8,9,5,2};
int i;
printf("The values are : \n");
for(i=1;i<6;i++)
    printf("Result[%d]: %d\n",i,a[i]);
}*/

//dynamic installization

/*#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the values: \n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]); 
    printf("The given values are : \n");
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);

}*/

/*#include<stdio.h>
int main()
{
    //Using concept of max
    int a[50],i,max;
    printf("Enter the max number of values: ");
    scanf("%d",&max);
    printf("Enter the values: \n");
    for(i=0;i<max;i++)
    scanf("%d",&a[i]); 
    printf("The given values are: \n");
    for(i=0;i<max;i++)
    printf(" %d\t",a[i]);

}*/

#include<stdio.h>
int main()
{
    //my own logic by implementing classroom example 
    int a[12],i,max,n;
    printf("Enter the attendance \n");
    printf("Enter the total strength: ");
    scanf("%d",&max);
    for(i=0;i<max;i++)
    scanf("%d",&a[i]); 
    printf("Attendance List:");
    for(i=0;i<max;i++){
        a[i] = a[i]*10;
    printf(" %d\t\n",a[i]);}
    printf("Enter the presentees:");
    scanf("%d",&n);
    printf("The total number of student present is: %d",n);

}