#include<stdio.h>
#include<string.h>
void main(){
	char str1[50],str2[50];
	int i,j=0,k=0;
	printf("Enter any string:");
	gets(str1);
	//Finding length
	while(str1[k]!='\0'){
		k++;
	}
	//Copying in reverse
	for(i=k-1;i>=0;i--){
		str2[j]=str1[i];
		j++;
	}
	printf("The content of second string is:%s",str2);
}
