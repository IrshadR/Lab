#include<stdio.h>
#include<string.h>
void main(){
	char str[50];
	int i,count=0;
	printf("Enter any string:");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'){
			count++;
		}
	}
	printf("\nThe number of vowels in string is %d",count);
}
