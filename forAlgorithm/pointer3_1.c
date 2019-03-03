#include <stdio.h>

int main()
{
	int Arr[] = { 10,20,30,40,50 };
	int *pArr = Arr;
	printf("배열 Arr의 주소 값:%p\n", Arr);
	printf("pArr:%p\n", pArr);
	printf("*pArr: %d\n", *pArr);
	*pArr = 100;
	printf("*pArr: %d \n", *pArr + 1);
	printf("*pArr : %d\n", *(pArr + 1));

}

