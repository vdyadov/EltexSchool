#include <stdio.h>
#include <string.h>

#define MAX_SIZE 5

int main (void){

	int matr[MAX_SIZE][MAX_SIZE];
	int c = 1;
	
	//memset(matr, 5, MAX_SIZE * MAX_SIZE);

	for (int i = 0; i < MAX_SIZE; ++i){
		for (int j = 0; j < MAX_SIZE; ++j)
			matr[i][j] = 1;
	}

	for (int i = 0; i < MAX_SIZE; ++i){
		for (int j = 0; j < (MAX_SIZE - c); ++j)
			matr[i][j] = 0;
		c++;
	}

	for (int i = 0; i < MAX_SIZE; ++i){
        for (int j = 0; j < MAX_SIZE; ++j){
            printf("%d ", matr[i][j]);
        }
        printf("\n");
    }


	return 0;
}
