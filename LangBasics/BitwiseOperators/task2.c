#include <stdio.h>

int main (void){

	unsigned int num = 0xAABBCCDD;
	
	printf("first number = 0x%X\n", num);
	
	num = num & 0xFF00FFFF;
	num = num | 0xAAEECCDD;
	
	printf("final number = 0x%X\n", num);

	return 0;
}
