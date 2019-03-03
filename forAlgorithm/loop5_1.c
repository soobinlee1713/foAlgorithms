#include <stdio.h>

int main()
{
	int a, b;

	for (a = 1; a <= 9; a += 3) 
	{
		printf("   %d단\t\t   %d단\t\t   %d단\n", a, a + 1, a + 2);
		for (int b = 1; b <= 9; b++)
		{
			printf("%d * %d = %2d\t", a, b, a*b);
			printf("%d * %d = %2d\t", a + 1, b, (a + 1)*b);
			printf("%d * %d = %2d\n", a + 2, b, (a + 2)*b);
		}
		printf("\n");
	}
	return 0;
}



