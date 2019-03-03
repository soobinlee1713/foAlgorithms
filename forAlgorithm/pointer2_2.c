#include <stdio.h>

int main()
{
	int num = 10;
	int *pnum;
	pnum = &num;
	*pnum = 20;
	*pnum += num;
	num = num + 20;
	printf("*pnum의 값: %d\n", *pnum);
	printf("num의 값:%d\n", num);

}

