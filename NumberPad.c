#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


char* one[5][5] = {
	{"□", "□", "■", "□", "□"},
	{"□", "□", "■", "□", "□"},
	{"□", "□", "■", "□", "□"},
	{"□", "□", "■", "□", "□"},
	{"□", "□", "■", "□", "□"}
};

char* two[5][5] = {
	{"□", "■", "■", "■", "□"},
	{"□", "□", "□", "■", "□"},
	{"□", "■", "■", "■", "□"},
	{"□", "■", "□", "□", "□"},
	{"□", "■", "■", "■", "□"}
};

char* three[5][5] = {
	{"□", "■", "■", "■", "□"},
	{"□", "□", "□", "■", "□"},
	{"□", "■", "■", "■", "□"},
	{"□", "□", "□", "■", "□"},
	{"□", "■", "■", "■", "□"}
};

char* four[5][5] = {
	{"□", "■", "□", "■", "□"},
	{"□", "■", "□", "■", "□"},
	{"□", "■", "■", "■", "□"},
	{"□", "□", "□", "■", "□"},
	{"□", "□", "□", "■", "□"}
};

char* five[5][5] = {
	{"□", "■", "■", "■", "□"},
	{"□", "■", "□", "□", "□"},
	{"□", "■", "■", "■", "□"},
	{"□", "□", "□", "■", "□"},
	{"□", "■", "■", "■", "□"}
};

char* six[5][5] = {
	{"□", "■", "■", "■", "□"},
	{"□", "■", "□", "□", "□"},
	{"□", "■", "■", "■", "□"},
	{"□", "■", "□", "■", "□"},
	{"□", "■", "■", "■", "□"}
};

char* seven[5][5] = {
	{"□", "■", "■", "■", "□"},
	{"□", "□", "□", "■", "□"},
	{"□", "□", "□", "■", "□"},
	{"□", "□", "□", "■", "□"},
	{"□", "□", "□", "■", "□"}
};

char* eight[5][5] = {
	{"□", "■", "■", "■", "□"},
	{"□", "■", "□", "■", "□"},
	{"□", "■", "■", "■", "□"},
	{"□", "■", "□", "■", "□"},
	{"□", "■", "■", "■", "□"}
};

char* nine[5][5] = {
	{"□", "■", "■", "■", "□"},
	{"□", "■", "□", "■", "□"},
	{"□", "■", "■", "■", "□"},
	{"□", "□", "□", "■", "□"},
	{"□", "■", "■", "■", "□"}
};

char* zero[5][5] = {
	{"□", "■", "■", "■", "□"},
	{"□", "■", "□", "■", "□"},
	{"□", "■", "□", "■", "□"},
	{"□", "■", "□", "■", "□"},
	{"□", "■", "■", "■", "□"}
};

int number = 1;
int first, second, third, fourth;
char* numberpad[4][5][5];

int inputNum(int i, int n);
void printNum();

int main(void)
{
	while (number >= 0)
	{
		

		printf("네 자리 정수 입력, 음수 입력 시 종료 : ");
		scanf("%d", &number);

		if (number < 0)
		{
			break;
		}

		first = number / 1000;
		second = (number - first * 1000) / 100;
		third = (number - first * 1000 - second * 100) / 10;
		fourth = (number - first * 1000 - second * 100 - third * 10);


		inputNum(first, 0);
		inputNum(second, 1);
		inputNum(third, 2);
		inputNum(fourth, 3);

		printNum();
	}

	return 0;
}

void printNum()
{
	for (int i = 0; i < 5; i++)
	{
		for (int x = 0; x < 4; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				printf("%s", numberpad[x][i][y]);
			}
		}
		printf("\n");
	}
}


int inputNum(int i, int n)
{
	switch (i)
	{
	case 1:
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				numberpad[n][x][y] = one[x][y];
			}
		}
		break;
	case 2:
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				numberpad[n][x][y] = two[x][y];
			}
		}
		break;
	case 3:
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				numberpad[n][x][y] = three[x][y];
			}
		}
		break;
	case 4:
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				numberpad[n][x][y] = four[x][y];
			}
		}
		break;
	case 5:
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				numberpad[n][x][y] = five[x][y];
			}
		}
		break;
	case 6:
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				numberpad[n][x][y] = six[x][y];
			}
		}
		break;
	case 7:
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				numberpad[n][x][y] = seven[x][y];
			}
		}
		break;
	case 8:
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				numberpad[n][x][y] = eight[x][y];
			}
		}
		break;
	case 9:
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				numberpad[n][x][y] = nine[x][y];
			}
		}
		break;
	case 0:
		for (int x = 0; x < 5; x++)
		{
			for (int y = 0; y < 5; y++)
			{
				numberpad[n][x][y] = zero[x][y];
			}
		}
		break;
	}
}