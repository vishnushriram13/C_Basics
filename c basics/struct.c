/*#include<stdio.h>
struct Vishnu
{
    int x,y;
};
int main()
//using static installization//
{
    struct Vishnu v1 = {5,10};
    v1.x = 20;
    v1.y = 30;
    printf("x*y = %d",v1.x*v1.y);
}*/

/*#include<stdio.h>
struct Vishnu{
    int x, y;
};
int main(){
    // Using Array //
struct Vishnu v[2];
int i;
for(i=0;i<2;i++){
    printf("enter the values for V varibles: ");
    scanf("%d %d",&v[i].x, &v[i].y);
}
    v[2].x = v[0].x + v[1].y;
    v[2].y = v[0].y + v[1].x;
    //printf("the values are: %d %d",v[2].x, v[2].y);//

    for(i=0;i<3;i++){
    printf("V[%d] (x,y): %d,%d\n",i,v[i].x,v[i].y);}

}*/



//eg of ascii//

#include<stdio.h>
int main()
{
    for(int i = 0;i<128;i++){
        printf("ASCII:%d => %c\n",i,i);
    }
}

/*#include <stdio.h>

int main()
{
	int x;

	// Prints address of x
	printf("%p", &x);

}*/

/*#include <stdio.h>
 
 int main()
{
    // A normal float variable
    float Var = 10.5;
 
    // A pointer variable that holds address of var.
    float *c = &Var;
 
    // This line prints value at address stored in ptr.
    // Value stored is value of variable "var"
    printf("Value of Var = %f\n", *c);
 
    // The output of this line may be different in different
    // runs even on same machine.
    printf("Address of Var = %p\n", c);
 
    // We can also use ptr as lvalue (Left hand
    // side of assignment)
    *c = 20.5; // Value at address is now 20
 
    // This prints 20
    printf("After doing *ptr = 20.5, *ptr is %f\n", *c);
 
    return 0;
}*/







