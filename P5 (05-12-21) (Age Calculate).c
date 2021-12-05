#include<stdio.h>

int cal(int y){
	const int current_year = 2020;
	return current_year - y;
}

int main(void){
	printf("%u",cal(1999));
}