#include <stdio.h>

int main()
{

	int a = 1;
	int b = 2;

	(a < b ? a : b) = 3;
	printf("a = %d, b = %d\n",a, b);

	return 0;
}
