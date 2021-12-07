#include <stdio.h>

int main(){
	char array[]="";
	FILE *input=fopen("input.txt","w");
	fclose(input);
	int len = sizeof(input);
	printf("%d",len);
	return 0;
}

