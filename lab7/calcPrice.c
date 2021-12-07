#include<stdio.h>
int main(){
	int item,quantity;
	double price,total;
	char date[50];
	printf("Enter item number:");
	scanf("%d",&item);
	printf("Enter unit price:");
	scanf("%lf",&price);
	printf("Enter quantity:");
	scanf("%d",&quantity);
	printf("Enter purchase date (mm/dd/yyyy):");
	scanf("%s",&date);
	total=price*quantity;
	printf("Item	Unit Price	QTY  Purchase Date  Total Amount\n");
	printf("%d     $    %.2f       %d   %s	    $     %.2f\n",item,price,quantity,date,total);	
	return 0;
}
