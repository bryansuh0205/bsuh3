#include<stdio.h>
void split_time(long, int*, int*, int*);
int main(){
	int n,hr,min,sec;
	printf("Enter seconds: ");
	scanf("%d",&n);
	split_time(n,&hr,&min,&sec);
	printf("Converted format: %d hour %d mins %d secs\n",hr,min,sec);
	return 0;
}
void split_time(long total_sec, int *hr, int *min, int *sec){
	int temp;
	*hr=total_sec/3600;
	temp=total_sec % 3600;
	*min=temp/60;
	*sec=temp % 60;
}
