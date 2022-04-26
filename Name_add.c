#include<stdio.h>
#include<string.h>
void main(){
	char name[50],address[50];
	printf("Enter your name:");
	gets(name);
	printf("Enter your address:");
	gets(address);
	printf("Your name is %s\nYour address is %s",name,address);
}
