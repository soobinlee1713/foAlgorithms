#include <stdio.h>

int main()
{
	int num;
	int max = 0;
	int min = 0;
	do
	{
		printf("하나의 숫자를 입력하세요(0입력 종료):\n");
		scanf_s("%d", &num);
		
		if (num != 0)
		{
			if (num > max) {
				max = num;
			}
			else if (num < min) {
				min = num;
			}
		}
		
	} while (num != 0); 

	printf("가장 큰 수 : %d\n", max);
	printf("가장 작은 수 : %d \n", min);

}

