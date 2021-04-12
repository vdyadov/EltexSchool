#include <stdio.h>

int main(void) {
	
	char a = 'A';
	char b = 'B';
	char *ptr1 = &a;
	char **ptr2 = &ptr1;

	printf("*ptr1 = %c\n", *ptr1);
	
	*ptr2 = &b;

	printf("*ptr1 = %c\n", *ptr1);

	return 0;	
}
