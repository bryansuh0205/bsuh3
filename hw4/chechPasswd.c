#include <stdio.h>
#include <ctype.h>
int main(){
	char string[10]={' '};
	printf("enter a password:");
	scanf("%s",string);
	if (checkPassword(string)>30){
		printf("The password is unsafe! Please reset.\n");
	}else{
		printf("The password is safe.\n");
	}
	return 0;
}
int checkPassword(char *string){
	int i;
	int check;
	int lower=0;
	int upper=0;
	int num=0;
	int length=sizeof(string)/sizeof(string[0]);
	for(i=0;i<length;i++){
		if(isupper(string[i])){
			upper++;
		}
		if(islower(string[i])){
			lower++;
		}
		if(isdigit(string[i])){
			num++;
		}
	}
	if(upper==0){
		check=check+20;
	}
	if(lower==0){
		check=check+20;
	}
	if(num==0){
		check=check+20;
	}		
	return check;
}
