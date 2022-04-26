#include<stdio.h>
#include<string.h>
void main(){
	char str[50];
	int i;
	printf("Enter any string:");
	gets(str);
	printf("\nThe original string is:%s",str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='a'&&str[i]<='z'){
	      str[i]=str[i]-32;
	  }
     }
	  printf("\nThe string in Upper case:%s",str);
}
