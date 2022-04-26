#include<stdio.h>
#include<string.h>
void main(){
	char str1[50],str2[50];
	int i=0;
	printf("Enter any string:");
	gets(str1);
	//Copying string
	while(str1[i]!='\0'){
		str2[i]=str1[i];
		i++;
	}
	//Displaying copied string
	printf("\nThe second string is:%s",str2);
	
}
