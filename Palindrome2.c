#include<stdio.h>
#include<string.h>
void main(){
	char str[50],i,count=0,k=0,mid;
	printf("Enter any string:");
	gets(str);
	//Finding length
	while(str[k]!='\0'){
		k++;
	}
	mid=k/2;
	//comparision
	for(i=0;i<mid;i++){
		if(str[i]==str[k-1-i]||(str[i]+32)==str[k-1-i]||(str[i]-32)==str[k-1-i]){
		count++;
	}
	}
	
	if(mid==count){
		printf("\nPalindrome");
	}else{
		printf("\nNot palindrome");
	}
}
