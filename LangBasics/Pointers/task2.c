#include <stdio.h>
  
int main (void){

    unsigned int num = 0xAABBCCDD;
	unsigned char *ptr = (unsigned char *) &num;
	
    printf("first number = 0x%X\n", num);

   	ptr += 2;
	*ptr = 0xEE;

    printf("final number = 0x%X\n", num);

    return 0;
}
