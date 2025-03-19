
#include <stdio.h>

int main()
{
	int temp[100];//공통변수

	scanf("%d%d", &temp[0], &temp[1]);//1번 문제

	if (temp[0] >= temp[1])
	{
		temp[0] = temp[0] - temp[1];
		printf("%d", temp[0]);
	}
	else {
		temp[1] = temp[1] - temp[0];
		printf("%d", temp[1]);
	}

	printf("\n");
	printf("\n");

	scanf("%d", &temp[2]);//2번 문제

	if (temp[2] > 0)
	{
		printf("plus");
	}
	else if (temp[2] == 0)
	{
		printf("zero");
	}
	else
	{
		printf("minus");
	}

	printf("\n");
	printf("\n");

	scanf("%d", &temp[3]);//3번 문제

	temp[4] = temp[3] % 4;

	if (temp[4] == 0)
	{
		printf("leap year");
	}
	else
	{
		printf("common year");
	}

	printf("\n");
	printf("\n");


	printf("Number?");//4번 문제
	scanf("%d", &temp[5]);
	

	if (temp[5] == 1)
	{
		printf("dog");
	}
	else if (temp[5] == 2)
	{
		printf("cat");
	}
	else if (temp[5] == 3)
	{
		printf("chick");
	}
	else
	{
		printf("i don't know");
	}

	printf("\n");
	printf("\n");
	
	scanf("%d", &temp[6]);//5번 문제
	
	bool a; //true일 경우 31일
	if ((temp[6]  >= 8 && temp[6] % 2 == 0) || (temp[6] % 2 == 1 && temp[6] <= 7)) //앞문장은 8, 10, 11월 추출, 뒷 문장은 1, 3, 5, 7 추출
	{
		a = true;
	}
	else
	{
		a = false;
	}

	if (temp[6] <= 12)
	{

		if (temp[6] == 2) //2월
		{
			printf("28");
		}
		else if (a == true)
		{
			printf("31");
		}
		else
		{
			printf("30");
		}
	}
	else
	{
		printf("잘못된 숫자 입력");
	}

	return 0;
}



