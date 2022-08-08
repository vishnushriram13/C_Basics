#include<stdio.h>
int main()
{
    int inp;
    int dig;
    //int nod=0; //
    printf("Enter a number:");
    scanf("%d",&inp);
    while(inp>0){
        dig=inp%10;
        printf("lsd: %d\n",dig);
        inp=inp/10;
       // nod= nod + 1; // 
         
    }
}


/*#include<stdio.h>
int main()
{
    int inp;
    int dig;
    int nod=0; 
    printf("Enter a number:");
    scanf("%d",&inp);
    for(inp;inp>0,dig=inp%10;nod++){
        printf("lsd: %d\n",dig);
        inp=inp/10;
  }
}*/

