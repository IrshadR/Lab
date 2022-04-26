#include<stdio.h>
#include<string.h>
void main(){
	char str[50];
	int i;
	printf("Enter any string:");
	gets(str);
	printf("\nThe original string is:%s",str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='A'&&str[i]<='Z'){
	      str[i]=str[i]+32;
	  }
     }
	  printf("\nThe string in lower case:%s",str);
}
