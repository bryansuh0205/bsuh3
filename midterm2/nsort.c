#include <stdio.h>
#include <stdlib.h>
int main(){
	int *arr, i, size;
	/* gets the size of the arr */
	printf("number of entries(10-30): \n");
	scanf("%d", &size);
	/* allocates the size to the array */
	arr = (int *)malloc(size *sizeof(int));
	printf("\n enter %d desired numbers: \n", size);
	/* scans user input and inserts the value to the array */
	for(i = 0; i < size; i++){
		scanf("%d", (arr+i));
	}
	/* gets user input to decide whether to sort in ascending or descending order */
	char check;
	printf("enter A to sort in ascending order or D for descending: \n");
	scanf("\n%c", &check);
	/* output */
	sort_numeric(size, arr, check);
	return 0;
}
void sort_numeric(int size, int* arr, char check){
	int i, j, temp;
	/* checks to see if user wanted to sort in ascending order */
	if(check == 'A' || check == 'a'){
	/* sorts the array in ascending order */
		for(i = 0; i < size; i++){
			for(j = i + 1; j < size; j++){
				if(*(arr + j) < *(arr + i)){
					temp = *(arr + i);
					*(arr + i) = *(arr + j);
					*(arr + j) = temp;
				}
			}
		}
	}
	/* checks to see if user wanted to sort in descending oder */
	if(check == 'D' || check == 'd'){
	/* sorts the array in descending order */
		for(i = 0; i < size; i++){
			for(j = i + 1; j < size; j++){
				if(*(arr + i) < *(arr + j)){
					temp = *(arr + i);
					*(arr + i) = *(arr + j);
					*(arr + j) = temp;	
				}
			}
		}
	}
	/* prints newly sorted array */
	for(i = 0; i < size; i++){
		printf("%d ", *(arr + i));
	}
	printf("\n");
}
