#include <stdio.h>

int main(void)
{
	int num = 10;
	int *p= &num;
	int **pnum = &p;
	printf("num:%d,\t *p : %d,\t **pnum: %d\n", num, *p, **pnum);
	**pnum = 20;
	printf("num : %d,\t *p : %d,\t **pnum : %d\n", num, *p, **pnum);

}

