#include<stdio.h>
#include<string.h>
void main(){
	char str1[50],str2[50];
	int i;
	printf("Enter any string:");
	gets(str1);
	printf("\nThe original string is:%s",str1);
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]>='A'&&str1[i]<='Z'){
	      str2[i]=str1[i]+32;
	  }else if(str1[i]>='a'&&str1[i]<='z'){
	  	str2[i]=str1[i]-32;
	  }
     }
	  printf("\nCopied string is:%s",str2);
}
