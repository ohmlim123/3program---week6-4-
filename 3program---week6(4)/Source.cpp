#include<stdio.h>
int main()
{
	int N;
	scanf_s("%d", &N);
	for (int i = 1;i <= N;i++)
	{
		for (int a = 1;a <= i-1;a++)
		{
			printf(" ");
		}
		for (int b = N ;b >= i;b--)
		{
			printf("*");
		}
		for (int c = N - 1;c >= i;c--)
		{
			printf("*");
		}
		for (int d = 1;d <= i - 1;d++)
		{
			printf(" ");
		}
		printf("\n");
	}
	for (int j = 1;j <= N-1;j++)
	{
		for (int a = N -2;a >= j;a--)
		{
			printf(" ");
		}
		for (int b = 3;b <= j+2;b++)
		{
			printf("*");
		}
		for (int c=1;c<=j;c++)
		{
			if (c == 1)
			{
				printf("**");
			}
			else
			{
				printf("*");
			}
			
		}
		printf("\n");
	}
}