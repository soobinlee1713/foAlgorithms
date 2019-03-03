#include <stdio.h>

int main()
{
	int num[] = { 10,20,30,40,50 };
	int *pnum;
	pnum = num;
	printf("배열 num의 두번째 멤버 주소 :%p\n",num+1);
	printf("배열 num의 두 번째 멤버 주소:%p\n",pnum+1);


}

