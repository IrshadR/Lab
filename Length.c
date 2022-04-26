#include<stdio.h>
#include<string.h>
void main(){
	char name[50];
	int i=0;
	printf("Enter your name:");
	gets(name);
	while(name[i]!='\0'){
		i++;
	}
	printf("The length of string is:%d",i);
}
