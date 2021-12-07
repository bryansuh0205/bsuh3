#include<stdio.h>
#include<string.h>
int main(){
	char number[23];
	printf("Enter phone number [(999)999-9999] : ");
	scanf("%s",number);
	int j=0,i;
	int len=strlen(number);
	for(j;j<len;j++){
		if(number[j]=='('){
			for(i=j;i<len;i++){
				number[i]=number[i+1];
			}
			len--;
			j--;
		}
		if(number[j]==')'){
			number[j] = '-';
		}
		
	}
	printf("You entered ");
	printf("%s \n",number);
	return 0;
}
