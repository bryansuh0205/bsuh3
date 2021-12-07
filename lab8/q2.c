#include <stdio.h>

int main()
{

	int letters=0;
	int words=1;
	char character;
	
	printf("Enter a sentence: ");
	while((character=getchar()) != '\n') {
		if (character != ' ') {
			letters++;
		}else
			words++;
	}
	float average = (float)letters/words;
	printf("average word length : %.1f", average);

	return 0;
}
