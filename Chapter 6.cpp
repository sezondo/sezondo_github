#include <stdio.h>
int main()
{
	int num1 = 0; //자가진단 6번

	while (true)
	{
		printf("1. Korea\n");
		printf("2. USA\n");
		printf("3. Japan\n");
		printf("4. China\n");
		printf("number? ");
		scanf("%d", &num1);

		switch (num1)
		{
		case 1:
			printf("\nkorea\n\n");
			break;
		case 2:
			printf("\nUSA\n\n");
			break;
		case 3:
			printf("\nJapan\n\n");
			break;
		case 4:
			printf("\nChina\n\n");
			break;
		default:
			printf("\nnone\n\n");
			break;

		}
		if (num1 >= 5 || num1 <= 0) break;
	}

	printf("\n");
	printf("\n");

	int num2; //형성평가 1번
	int nnew = 1;
	scanf("%d", &num2);

	while (true)
	{
		printf("%d ", nnew);
		++nnew;
		--num2;

		if (num2 <= 0)
		{
			break;
		}
	}

	printf("\n");
	printf("\n");

	int num3 = 0, odd = 0, even = 0; //형성평가 2번

	while (true)
	{
		scanf("%d", &num3);

		if (num3 == 0)
		{
			printf("odd :  %d\n", odd);
			printf("even :  %d\n", even);
			break;
		}

		if (num3 % 2 == 1)// 홀
		{
			odd++;
		}
		else if (num3 % 2 == 0)//짝
		{
			even++;
		}
	}

	printf("\n");
	printf("\n");

	int num4=0, sum=0, crt = 0;// 형성평가 3번
	double avg = 0;

	while (true)
	{
		scanf("%d", &num4);

		if (num4 > 100)
		{
			printf("sum : %d\n", sum);
			avg = (double)sum / crt;
			printf("avg : %.1f\n", avg);
			break;
		}
		if (num4 <= 100)
		{
			sum += num4;
			++crt;
		}

	}

	printf("\n");
	printf("\n");


	int a=0, b = 0; // 형성평가 4번

	while (true)
	{
		scanf("%d", &a);

		if (a == 0)
		{
			printf("\n%d", b);
			break;
		}

		if (a % 3 == 0 || a % 5 == 0)
		{
			++b;
		}
	}

	printf("\n");
	printf("\n");


	double base=0, height=0, triangleWidth = 0; // 형성평가 5번
	char c = 0;
	bool p = true; // 첫스캔X
	bool pls = true; // 스캔중지

	while (true) {

		if (p == false)// 첫 스캔 사용 금지
		{
			p = true;
			printf("Continue? ");
			scanf(" %c", &c);
			pls = (c == 'y') || (c == 'Y');
		}
		p = false;

		if (pls == false) //탈출
		{
			break;
		}
		pls = false;

		printf("Base = ");
		scanf("%lf", &base);
		printf("Height = ");
		scanf("%lf", &height);

		triangleWidth = base * height / 2;

		printf("Triangle Width = %.1f\n", triangleWidth);
	}
	return 0;
}