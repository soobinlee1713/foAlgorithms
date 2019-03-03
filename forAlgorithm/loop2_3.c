#include <stdio.h>

int main()
{
	int num;
	int plus = 0;
	int count = 1;
	
	while (count <= 5) 
	{
		printf("%d번째 정수를 입력하세요: \n", count);
		scanf_s("%d", &num);

		if (num < 0)
		{
			num = num*-1;
		}
			plus = plus + num;
			count++;
	}


	printf("다섯 개 정수의 합 : %d\n", plus);

}

