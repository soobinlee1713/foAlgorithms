#include <stdio.h>

int main()
{
	int i, sum;
	for (i = 1, sum = 0; i <= 100; i++)
	{
		sum = sum + i;

	}
	printf("합은 :%d\n", sum);
	return 0;
}

