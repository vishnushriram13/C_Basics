#include<stdio.h>
// inuputs but no Return value //
void swap(int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
void main()
{
    int a=10,b=15;
    swap(&a,&b);
    printf("x = %d \t y = %d",a,b);
}