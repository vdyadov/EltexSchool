#include <stdio.h>

#define MAX_SIZE 5

int main(void){
	
	int arr[MAX_SIZE] = {1,2,3,4,5}; 

	for (int i = MAX_SIZE - 1; i >= 0; --i)
		printf("%d ", arr[i]);

	printf("\n");

	return 0;
}
