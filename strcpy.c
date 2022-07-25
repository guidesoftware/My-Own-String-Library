#include <stdio.h>
char* my_strcpy(char x[],char y[]); // declaring prototype the main function
int my_strlen(char string[]);
int main()
{
    char string1[]="sample";
    char string2[]="text";
    printf("%s",my_strcpy(string1,string2));
    return 0;
}
char* my_strcpy(char x[],char y[]){
     for(int i=0;i<my_strlen(x);i++){
       x[i]=y[i];
    }
    return x;
}
int my_strlen(char string[]){ //The my_strlen function calculates the length of string.
    int length=0; 
    for(int i=0;;i++){
        if(string[i]=='\0') break;
        length+=1;
    }
   return length;
}
