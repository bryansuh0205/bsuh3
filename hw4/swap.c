#include <stdio.h>
#include <string.h>
int main(){
	char sen1[]="hello 123";
	char sen2[]="world 456";
	printf("before swap:\n%s\n",sen1);
	printf("%s\n",sen2);
	int i,j=0;
	int len=sizeof(sen1);
	int len2=sizeof(sen2);		
	for(i=0;i<len;i++){
		for(j;j<len2;j++){
			if(isdigit(sen1[i]) && isdigit(sen2[j])){
				numswap(sen1[i],sen2[j]);
				j++;
				break;
			}
		}		
	}
	printf("after swap:\n%s\n",sen1);
	printf("%s\n",sen2);
	return 0;
} 

void numswap(char *a,char *b){
	if(*a!=*b){
		*a=*a+*b;
		*b=*a-*b;
		*a=*a-*b;
	}
}

