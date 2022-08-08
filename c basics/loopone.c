#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, range;
    printf("Enter your value:");
    scanf("%d",&a);
    printf("Enter your range:" );
    scanf("%d",&range);
    do{
        
        printf("Result: %d\n",a*5);
        a=a+1;
    }while(a<=range); 
    printf("a = %d",a);}
    //printf("A = %d",a); It show where a ends//

    /*#include<stdio.h>
    int main()
    {
        int a, range;

    printf("Iam from loop\n");
    printf("Enter your value:");
    scanf("%d",&a);
    printf("Enter your range:" );
    scanf("%d",&range);
    for(a;a<=range;a++)
        printf("Result: %d\n",a*5);
    
}*/

