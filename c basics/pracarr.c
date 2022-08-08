/*#include <stdio.h>
int main()
{
    int a[5] = {2,5,6,9,8};
    int i;
    printf("the values are:\n");
    for(i=2;i<5;i++)
    printf("index[%d] : %d\n",i,a[i]);
}*/

#include <stdio.h>
int main()
{
    int a[50],i,max;
    printf("Enter the max number :");
    scanf("%d",&max);
    printf("The values to be entered are:\n");
    for(i=0;i<max;i++)
    scanf("%d",&a[i]);
    printf("The Given values are:\n");
    for(i=0;i<max;i++)
    printf("%d\t",a[i]);
}
