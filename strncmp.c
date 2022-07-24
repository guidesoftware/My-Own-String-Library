#include <stdio.h>
#define LENGTH 100
int my_strcmp(char s1[],char s2[]);// declaring prototype the main function

int main(void){
	char string1[LENGTH];
	char string2[LENGTH];
	printf("Please enter the 1st and 2nd strings. The two strings must be of equal length.");
	scanf("%s %s",string1,string2);
	printf("%d",my_strcmp(string1,string2)); 
	return 0;
}
int my_strcmp(char s1[],char s2[]){
	
	for(int i=0;;i++)
	{
		if(s1[i] == '\0' && s2[i] == '\0'){
			return 0; // if the string of two arrays (s1,s2) is equal returns zero 
		}
		int a1 = (int) s1[i];
		int a2 = (int) s2[i];
		if(a1>a2) return 1; // if the ASCII value of the first character in string 1 is greater than string 2 returns 1.
		if(a2>a1) return -1;// if the ASCII value of the first character in string 2 is greater than string 1 returns -1.
	}
}