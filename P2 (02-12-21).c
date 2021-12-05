#include<stdio.h>
int main(){
	int x=1,y=10, z[10];
	int *ptr;
	ptr=&x;
	printf("x = %d \n y= %d\n ", x,y);
	printf("%d\n",ptr);
	printf("%d\n",*ptr);
	y=*ptr;
	printf("%d\n",y);
	x=0;
	printf("x=0");
	printf("%d\n",ptr);
	printf("%d\n",*ptr);
	return 0;
}