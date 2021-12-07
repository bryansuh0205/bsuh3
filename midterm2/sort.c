#include <stdio.h>
int main(){
	int i;
	int size=11;
	double arr[] = {10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56};
	char check;
	for(i = 0; i < size; i++){
		printf("%f ", *(arr + i));
	}
	printf("\ninput A to sort array in ascending order or D for descending: \n");
	scanf("%c", &check);
	sort_numeric(size, arr, check);
	return 0;
}
void sort_numeric(int size, double* arr, char check){
	int i, j;
	double temp;
	if(check == 'A' || check == 'a'){
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
	if(check == 'D' || check == 'd'){
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
	for(i = 0; i < size; i++){
		printf("%f ", *(arr + i));
	}
	printf("\n");
}
