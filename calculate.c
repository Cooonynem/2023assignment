#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>  //1.��Ģ���� ���� 2.a��b�Է� 3.����� ���

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
			printf("��Ģ���� ���� 1:���ϱ� 2:���� 3:���ϱ� 4:������ -1:����\n");
			choice = get_integer();
			switch (choice)
			{
				case 1 :
					printf("a�Է�\n");
					a = get_integer();
					printf("b�Է�\n");
					b = get_integer();
					printf("��: %d\n", plus(a, b));
					break;
				case 2 :
					printf("a�Է�\n");
					a = get_integer();
					printf("b�Է�\n");
					b = get_integer();
					printf("��: %d\n", minus(a, b));
					break;
				case 3 :
					printf("a�Է�\n");
					a = get_integer();
					printf("b�Է�\n");
					b = get_integer();
					printf("��: %d\n", multiply(a, b));
					break;
				case 4 :
					printf("a�Է�\n");
					a = get_integer();
					printf("b�Է�\n");
					b = get_integer();
					printf("��: %d\n", divide(a, b));
					break;
				case -1 :
					return 0;

				default :
					printf("�߸��Է�\n");
				
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
		printf("0���� ���� �� �����ϴ�\n");
		return 0;
	}
	else
		return(x / y);
}