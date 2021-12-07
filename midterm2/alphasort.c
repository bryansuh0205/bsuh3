#include <stdio.h>
#include <string.h>
int main(){
	int size=8;
	char* arr[8] = {"Systems","Programming","Deep","Learning","Internet","Things","Robotics","Course"};
	char check;
	int i;
	for(i = 0 ; i < size; i++){
		printf("%s ", arr[i]);
	}
	printf("\ninput A to sort array in ascending order or D for descending:\n");
	scanf("%c", &check);
	sort_alphabetic(size, arr, check);
	return 0;
	
}
void sort_alphabetic(int size, char** arr, char check){
	int i, j;
	char* temp;
	if(check == 'A' || check == 'a'){
		for(i = 0; i < size; i++){
			for(j = i + 1; j < size; j++){
				if(strcmp(arr[i], arr[j])  > 0){
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	if(check == 'D' || check == 'd'){
		for(i = 0; i < size; i++){
			for(j = i + 1; j < size; j++){
				if(strcmp(arr[j], arr[i]) >0){
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	for(i = 0; i < size; i++){
		printf("%s ", arr[i]);
	}
	printf("\n");
}
