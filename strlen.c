#include <stdio.h>
int my_strlen(char string[]);// declaring prototype the main function
int main()
{
    char string1[]="Sampletext";
     printf("%d",my_strlen(string1));//The my_strlen function calculates the length of string1.
    return 0;
}
int my_strlen(char string[]){ 
    int length=0; 
    for(int i=0;;i++){
        if(string[i]=='\0') break;
        length+=1;
    }
   return length;
}
