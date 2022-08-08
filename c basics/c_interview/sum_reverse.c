// Sum of digits of a number and reverse a number program//

//sum

/*#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter a number: ");
    scanf("%d",&n);

    while(n>0)
    {
      sum = sum + n%10;
      n = n/10;
    }
    printf("sum of digits is %d", sum);
    return 0;
}*/



#include<stdio.h>
int main()
{
  int n, rev = 0;
  printf("enter the number:");
  scanf("%d",&n);
  while(n>0)
  {
    rev = (n % 10) + rev*10;
    n = n/10;
  }
printf("Num in reverse: %d\n",rev);
}