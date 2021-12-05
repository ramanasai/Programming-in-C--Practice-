#include<stdio.h>

int cal(int y){
	const int current_year = 2021;
	return current_year - y;
}

int main(void){
	int a;
	printf("Enter the birth year : \n");
	scanf("%d",&a);
	printf("%u",cal(a));
}