/*#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char c;
    fp = fopen("choice.c","r");
    if(fp==NULL){
        printf("No requested file detected\n");
        exit(1);
    }
    else{
        while(1){
        c = fgetc(fp);
        if(c!=EOF)
        printf("%c",c);
    
    else
        break;
        }
        fclose(fp);
    }
}*/

//single input write and append function//
/*#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *f;
f = fopen("input.txt","a");
char c ='i';
fputc(c,f);
printf("successfully char i has been appended at input.txt\n");
fclose(f);}*/




/*#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *f;
int i;
f = fopen("input.txt","w");
char c[20];
printf("Enter your string:\n");
scanf("%s",c);
printf("entered char:%s\n",c);
for(i=0;c[i]!='\0';i++){
fputc(c[i],f);}
fclose(f);}*/


/*#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *f1,*f2;
    f1 = fopen("swap.c","r");
    f2 = fopen("copy.c","w");
    char c;
    while(1){
       c = fgetc(f1);
       if(c!=EOF)
       printf("%c",c);
       fputc(c,f2);
    }
    fclose(f1);
    fclose(f2);
}*/