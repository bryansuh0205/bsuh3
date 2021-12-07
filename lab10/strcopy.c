#include <stdio.h> 
#include <string.h>
char* strcpy(char* strDest, const char* strSrc){
	if(strDest==NULL){
		return NULL;
	}
	char *ptr = strDest;
	while(*strSrc != '\0'){
		*strDest = *strSrc;
		strDest++;
		strSrc++;
	}
	*strDest='\0';
	return ptr;
}
int main(){
	char word[20], smallest_word[20], largest_word[20];
	printf("Enter word: ");
	scanf("%s", &word);
	strcpy(smallest_word, word);
	strcpy(largest_word, word);
	while(strlen(word)!=4){
		printf("Enter word: ");
		scanf("%s", &word);
		if(strlen(word)<strlen(smallest_word)){
			strcpy(smallest_word,word);
		}
		if(strlen(word)>strlen(largest_word)){
			strcpy(largest_word, word);
		}
	}
	printf("Smallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);
	return 0;
}
