#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>  //1.사칙연산 선택 2.a와b입력 3.계산결과 출력

int get_integer();
int plus(a, b);
int minus(a, b);
int multiply(a, b);
int divide(a, b);

int main(void)
{
	int choice, a, b;
	int i;
	while(1)
	{
			printf("사칙연산 선택 1:더하기 2:빼기 3:곱하기 4:나누기 -1:종료\n");
			choice = get_integer();
			switch (choice)
			{
				case 1 :
					printf("a입력\n");
					a = get_integer();
					printf("b입력\n");
					b = get_integer();
					printf("값: %d\n", plus(a, b));
					break;
				case 2 :
					printf("a입력\n");
					a = get_integer();
					printf("b입력\n");
					b = get_integer();
					printf("값: %d\n", minus(a, b));
					break;
				case 3 :
					printf("a입력\n");
					a = get_integer();
					printf("b입력\n");
					b = get_integer();
					printf("값: %d\n", multiply(a, b));
					break;
				case 4 :
					printf("a입력\n");
					a = get_integer();
					printf("b입력\n");
					b = get_integer();
					printf("값: %d\n", divide(a, b));
					break;
				case -1 :
					return 0;

				default :
					printf("잘못입력\n");
				
			}




	}

	return 0;
}


int get_integer()
{
	int n;
	scanf("%d", &n);
	return n;
}



int plus(int x, int y)
{
	return(x + y);
}

int minus(int x, int y)
{
	return(x - y);
}

int multiply(int x, int y)
{
	return(x * y);
}

int divide(int x, int y)
{
	if (y == 0)
	{
		printf("0으로 나눌 수 없습니다\n");
		return 0;
	}
	else
		return(x / y);
}