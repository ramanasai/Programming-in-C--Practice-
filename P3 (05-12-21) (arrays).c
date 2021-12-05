#include<stdio.h>

int get_last(int input[], size_t length) {
	return input[length - 1];
}

int get_first(int input[], size_t length){
	return input[0];
}

int main(){
	// Declaring arrays.
	int a[]={21,23,23,43,53,32};
	
	// Finding all the elements in the array list.
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
		printf("The List of array[%d] is %d\n",i,a[i]);

	// Finding out the size of the array.
	printf("Size of Array : %d\n",sizeof(a));
	
	// Finding out the size of the array menthod 2.
	size_t s1= sizeof(a);
	printf("Size of Array S1: %d\n",s1);
	
	// Finding out the length of the array.
	size_t l = sizeof(a)/sizeof(a[0]);
	printf("Length is : %d\n",l);
	
	// Finding out the range of the array.
	printf("Range is : 0-%d\n",l-1);

	// Finding out the last element in the array.
	int last = get_last(a, l);
	printf("last element is : %d\n",last);

	// Finding out the last element in the array method 2.
	printf("method 2 last element is : %d\n",a[(sizeof(a)/sizeof(a[0]))-1]);

	// Finding out the first element in the array.
	printf("First element is : %d\n",a[0]);

	// Finding out the first element in the array method 2.
	int first = get_first(a, l);
	printf("first element is method 2: %d\n",first);
}