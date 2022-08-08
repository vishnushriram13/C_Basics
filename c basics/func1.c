/*#include<stdio.h>
//Model 1: function with no inputs and no outputs means no return value //
//bottom up program model (means definition will be written above main ())
void display(){ //void can be used when there is no return value processed //
    printf("hello world");
}
void main(){
    display();
}*/

//Model 2: function with inputs but no return value//

//         STATIC IN           //

/*#include<stdio.h>
void multi_table(int x)
{
    int i; // loop variable//
    for(i=1;i<=10;i++)
    printf("%d x %d = %d\n",i,x,i*x);
}
void main(){
    multi_table(85);// function call statement//
}*/

//       DYNAMIC IN        //

/*#include<stdio.h>
void multi_table(int x)//int x here is an argument//
{
    int i; // loop variable//
    for(i=1;i<=10000;i++)
    printf("%d x %d = %d\n",i,x,i*x);
}
void main(){
    int n;
    printf("enter the multiplication table:");
    scanf("%d",&n); //dynamic installization//
    multi_table(n);// function call statement//
}*/

// Model 3: Function has no inuput but returns a value//

/*#include<stdio.h>
int addition(){
    int x, y;
    printf("enter two values:");
    scanf("%d %d", &x,&y);
    return x+y;
}
int main(){
    printf("the addition of 2 numbers x and y: %d",addition());
}*/

//Model 4: Function has inputs and returns value//
/*#include<stdio.h>
int multi_table(int x,int y){ 
    // here x and y are local variable//
    return x*y;
}

int addition(int x, int y){
    printf("Enter your values for +:");
    scanf("%d %d",&x,&y);
    return x+y;
}

int main(){
    int a,y;
    //here a and y are local variable//
    printf("enter your value :");
    scanf("%d %d",&a,&y);
    printf("Result: %d\n",multi_table(a,y));
    printf("Result: %d",addition(a,y));
}*/

//MODEL 4.1: Accessing Global variable//
/*#include<stdio.h>
int z; // Z here is a global variable//
void multi(int x,int y){
    z = x*y;
}

// Without return value //
/*void add(int x,int y){
    printf("Enter your values for +:");
    scanf("%d %d",&x,&y);
    z = x+y;
}*/

//with return value //
/*int add(int x,int y){
    printf("Enter your values for +:");
    scanf("%d %d",&x,&y);
    return x+y;
}


int main(){
    int a,b; 
    printf("Enter your values:");
    scanf("%d %d",&a,&b);
    multi(a,b);
    printf("Result: %d\n",z);
    printf("Result: %d",add(a,b));
}*/

//call by reference//
/*#include<stdio.h>
void function(int *x){
    *x = *x*10;
}
int main(){
    int a =10;
   function(&a);
    printf("%d value, %p address:",a,&a);

}*/

//array with pointers in function//
#include<stdio.h>
int size;//global variable
int i;// double global variable
void fun(int *p){
   // int i;
    for(i=0;i<size;i++){
       // printf("%d\t",a[i]);}
    *(p + i) = *(p + i) * 10;
    printf("\n %d\t",*(p + i));}
}

int main(){
int a[10];//i;//
    printf("Enter the max size:");
    scanf("%d",&size);
    printf("Enter the values:\n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("values:");
    fun(a);}


    



