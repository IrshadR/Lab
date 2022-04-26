#include<stdio.h>
#include<string.h>
void main(){
     char str[50],ch;
     int i,count=0;
    printf("Enter any string:");
	gets(str);
	printf("\nThe string is:%s",str);
	printf("\nEnter alphabet to find frequency:");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==ch||str[i]+32==ch||str[i]-32==ch){
			count++;
		}
	}
	if(count==0){
		printf("\n%c is not found in %s",ch,str);
	}else{
		printf("\nThe frequency of %c is %d",ch,count);
	} 
}
