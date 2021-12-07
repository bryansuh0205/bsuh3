#include <stdio.h>
#include <string.h>
/* structure initialization */
struct Form{
	char firstname[20];
	char lastname[20];
	char birth[10];
	char dose[1];
	char dateofprev[10];
	char type[20];
	char zip[10];
};
/* declaring the different functions */
void registration(char* firstname, char* lastname, char* birth, char* dose, char* dateofprev, char* type, char* zip, struct Form *form);

void retrieve(char* firstname, char* lastname, char* birth, char* dose, char* dateofprev, char* type, char* zip);

void printForm(struct Form *form);

void getCode(struct Form form);

int main(){
	char firstname[20], lastname[20], birth[10], dose[1], dateofprev[10], type[20], zip[10];
	/* declares the different forms as type Form */
	struct Form form0; 
	struct Form form1;
	struct Form form2;
	struct Form form3;
	struct Form form4;
	struct Form form5;
	struct Form form6;
	struct Form form7;
	struct Form form8;
	struct Form form9;
	/* calls forth the needed functions */
	retrieve(firstname, lastname, birth, dose, dateofprev, type, zip);
	registration(firstname, lastname, birth, dose, dateofprev, type, zip, &form0);
	printForm(&form0);
	getCode(form0);
	retrieve(firstname, lastname, birth, dose, dateofprev, type, zip);
	registration(firstname, lastname, birth, dose, dateofprev, type, zip, &form1);
	printForm(&form1);
	getCode(form1);
	retrieve(firstname, lastname, birth,dose, dateofprev, type, zip);
	registration(firstname, lastname, birth, dose, dateofprev, type, zip, &form2);
	printForm(&form2);
	getCode(form2);
	retrieve(firstname, lastname, birth, dose, dateofprev, type, zip);
	registration( firstname, lastname, birth, dose, dateofprev, type, zip, &form3);
	printForm(&form3);
	getCode(form3);
	retrieve(firstname, lastname, birth, dose, dateofprev, type, zip);
	registration( firstname, lastname, birth, dose, dateofprev, type, zip, &form4);
	printForm(&form4);
	getCode(form4);
	retrieve( firstname, lastname, birth, dose, dateofprev, type, zip);
	registration( firstname, lastname, birth, dose, dateofprev, type, zip, &form5);
	printForm(&form5);
	getCode(form5);
	retrieve( firstname, lastname, birth, dose,dateofprev, type, zip);
	registration(firstname, lastname, birth, dose, dateofprev, type, zip, &form6);
	printForm(&form6);
	getCode(form6);
	retrieve(firstname, lastname, birth, dose, dateofprev, type, zip);
	registration(firstname, lastname, birth, dose, dateofprev, type, zip, &form7);
	printForm(&form7);
	getCode(form7);
	retrieve(firstname, lastname, birth, dose, dateofprev, type, zip);
	registration(firstname, lastname, birth,dose, dateofprev, type, zip, &form8);
	printForm(&form8);
	getCode(form8);
	retrieve(firstname, lastname, birth, dose, dateofprev, type, zip);
	registration(firstname, lastname, birth, dose, dateofprev, type, zip, &form9);
	printForm(&form9);
	getCode(form9);
	return 0;
}
void registration(char* firstname, char* lastname, char* birth, char* dose, char* dateofprev, char* type, char* zip, struct Form *form){
	/* specifies each definition in the structure */
	strcpy(form->firstname, firstname);
	strcpy(form->lastname, lastname);
	strcpy(form->birth, birth);
	strcpy(form->dose, dose);
	strcpy(form->dateofprev, dateofprev);
	strcpy(form->type, type);
	strcpy(form->zip, zip);
}
void printForm(struct Form *form){
	/* prints each definition */
	printf("first name: %s\n", form->firstname);
	printf("last name: %s\n", form->lastname);
	printf("date of birth: %s\n",form->birth);
	printf("dose number: %s\n", form->dose);
	printf("date of previous dose: %s\n", form->dateofprev);
	printf("type of vaccine: %s\n", form->type);
	printf("zip code: %s\n", form->zip);
}
void retrieve(char* firstname, char* lastname, char* birth, char* dose, char* dateofprev, char* type, char* zip){
	/* gets user input to put into the structure */
	printf("please enter first name:\n");
	scanf("%s", firstname);
	printf("please enter last name:\n");
	scanf("%s", lastname);
	printf("please enter date of birth (mm/dd/yyyy):\n");
	scanf("%s", birth);
	printf("please enter dose number (1 or 2):\n");
	scanf("%s", dose);
	printf("please enter date of previous dose (mm/dd/yyyy):\n");
	scanf("%s", dateofprev);
	printf("please enter the type of vaccine (pfizer, moderna, etc.):\n");
	scanf("%s", type);
	printf("please enter residential zip code:\n");
	scanf("%s", zip);
}
void getCode(struct Form form){
	char code[8], first[20], last[20], birth[10], prev[10], type[20], zip[10]; 
	/* copies contents of structure into arrays */
	strcpy(first, form.firstname);
	strcpy(last, form.lastname);
	strcpy(birth, form.birth);
	strcpy(prev, form.dateofprev);
	strcpy(type, form.type);
	strcpy(zip, form.zip);
	/* uses the different arrays to make the code */
	code[0] = first[0];
	code[1] = last[0];
	code[4] = type[0];
	int len = strlen(zip);
	code[5] = zip[len-3];
	code[6] = zip[len-2];
	code[7] = zip[len-1];
	 
	printf("registration code: %s\n", code);
}

