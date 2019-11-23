#include <stdio.h>

int main()
{
	int a = 4;

	int& b = a;

	printf("a = %d, &b = %d\n",a, b);

	b = 5;

	printf("a = %d, &b = %d\n",a, b);	
	
	float& c = 1;

	return 0;
}
