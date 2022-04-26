#include<stdio.h>
#include<string.h>
void main(){
	char name[50];
	int i=0,j;
	printf("Enter your name:");
	gets(name);
	//Finding length of string:
	while(name[i]!='\0'){
		i++;
	}
	//Reverse of string
	for(j=i-1;j>=0;j--){
		printf("%c",name[j]);
	}
	
}
