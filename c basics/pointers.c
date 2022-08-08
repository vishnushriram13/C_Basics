//static pointer//
/*#include<stdio.h>
int main()
{
    int x = 10;
    int *ptr;
    ptr = &x;
    printf("%d is data, address is %p\n",*ptr,ptr);
    *ptr = *ptr + 20;
    printf("after adding: %d",*ptr);
}*/


/*#include<stdio.h>
void main()
{
    int x[] = {2,3,4};
    int *prt,i;
    prt = x;
    for(i=0;i<3;i++,prt++){
        printf("[%d] : index, %d is data, is address: %p\n",i,*prt,prt);
        //prt = prt + 1;
    }

}*/

/*#include<stdio.h>
void main()
{
    int x[] = {2,3,4};
    int *p,i;
    p = x;
    
    for(i=0;i<3;i++,p++){
        printf("[%d] : index, %d is data, is address: %p\n",i,*p,p);
    
    }
}*/


#include<stdio.h>
int main()
{
    char c = 'k';
    int x [] = {10,20,30};
    int i;
    char *ptr;
    int *pt;
    ptr = x;
    pt = &c;
    printf("%c : value, %p : address \n",*pt,pt);
    for(i=0;i<3;i++){
        printf("%d:value, address : %p \n",*ptr,ptr);
        //conversion 
        //ptr = ptr + 4 can be used to print  address jumping for 4 bytes
        ptr = (char*)((int*) ptr+1);
    }
}

