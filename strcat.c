#include <stdio.h>
char* my_strcat(char x[],char y[]);
int main()
{
    char a[]="yusuf";
    char b[]="yigit";
    printf("a+b= \t %s ",my_strcat(a,b));
    return 0;
}
char* my_strcat(char x[],char y[]){
    int i,j;
    for(i=0;x[i]!='\0';i++);
    for(j=0;y[j]!='\0';j++)
    x[i+j]=y[j];
    x[i+j]='\0';
    return x;
}
