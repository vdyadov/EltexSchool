#include <stdio.h>
#define SIZE 5

int main(void){
	
	int matr[SIZE][SIZE];
	int ctr = 10;
	
	for (int i = 0; i < SIZE; ++i){
		for (int j = 0; j < SIZE; ++j){
			matr[i][j] = ctr;  
			printf("%d ", matr[i][j]);
			ctr++;
		}
		printf("\n");
	}
	return 0;
}
