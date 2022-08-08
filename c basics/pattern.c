// Floyd's triangle//

#include<stdio.h>
int main()
/*{

int row,i,j,num;

printf("enter the length: ");
scanf("%d", &row);
num = 1;

for (i=1;i<=row;i++)
{
 for (j=1;j<=i;j++)
 {
  printf("%d ",num++);
 }
  printf("\n");
}
return 0;
}*/

/*{
int row,i,j,space;
printf("enter the row: ");
scanf("%d", &row);
for (i=1;i<=row;i++)
{
    for(space=1;space<=row-i;space++)
    {
        printf("  ");
    }
    for(j=1;j<=2*i-1;j++)
    {
        printf("* ");
    } 
    printf("\n");
}
return 0;
}*/

{
  int i,j,row,space;
  printf("enter the rows: ");
  scanf("%d",&row);
  for(i=1;i<=row;i++)
  {
    for (space=1;space<=row-i;space++)
    {
        printf("  ");
    }
      for(j=1;j<=2*i-1;j++)
      {
       printf("* ");
      }
    printf("\n");
  }
  return 0;
}



























