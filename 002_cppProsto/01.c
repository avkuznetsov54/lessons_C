#include <stdio.h>

int main(void)
{
	printf("Size char = %i byte\n", sizeof(char));	// 1 byte
	printf("Size short = %i bytes\n", sizeof(short));		// 2 bytes
	printf("Size int = %i bytes\n", sizeof(int));		// 4 bytes
	printf("Size long long = %i bytes\n\n", sizeof(long long));	// 8 bytes

	char ch = 256;	
	printf("ch = %i\n", ch);	// 0	

	return 0;
}

