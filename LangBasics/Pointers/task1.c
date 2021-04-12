#include <stdio.h>

int main (void){

	unsigned int a = 0xAABBCCDD;
	unsigned char *ptr;
	ptr = (unsigned char *) &a;
	
	ptr += 3;	

	for (int i = 1; i <= 4; ++i){

		printf("%d byte of a = 0x%X\n", i, *ptr);
		ptr--;
	}

	return 0;

}
