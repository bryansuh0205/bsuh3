#include <stdio.h>
#include <problem5make.h>
int main(){
	/* opens the midterm2.txt file as write  */
	FILE* fp;
	char* filename="Midterm2.txt";
	fp=fopen(filename, "w");
	/* writes the output to the file */
	fprintf(fp, "\nchar= %d, word=%d, line=%d\n", charCount(filename), wordCount(filename), lineCount(filename));
	fclose(fp);
	/* pritns out to the terminal */
	printf("\nchar=%d, word=%d, line=%d\n", charCount(filename), wordCount(filename), lineCount(filename));	
	return 0;
}
