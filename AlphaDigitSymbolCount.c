#include<stdio.h>
#include<string.h>
void main(){
	char str[50];
	int i,AC=0,DC=0,SC=0;
	printf("Enter any string:");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'){
			AC++;
		}else if(str[i]>='0'&&str[i]<='9'){
			DC++;
		}else{
			SC++;
		}
	}
	printf("\nNo of alphabets is:%d",AC);
	printf("\nNo of digits is:%d",DC);
	printf("\nNo of special symbol is:%d",SC);
}
