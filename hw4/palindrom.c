#include <stdio.h>
#include <string.h>
int main(){
	char input[50];
	printf("enter palindrome: ");
	scanf("%s",input);
	if(palindrome(input)==1){
		printf("is palindrome\n");
	}
	else{
		printf("is not a palindrome\n");
	}
	return 0;
}
int palindrome(char *input){
	int len=0;
	while(input[len]!='\0'){
		len++;
		tolower(input[len]);
	}
	int begin;
	int end=len-1;
	int mid=len/2;
	for (begin=0;begin<mid;begin++){
		if(input[begin]!=input[end]){
			return 0;
		}
		end--;
	}
	if(begin==mid){
		return 1;
	}
	
}
