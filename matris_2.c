#include <stdio.h>

int B[4][4];

int main()
{

	for (int i = 0; i < 16; i++)
	{
		B[i/4][i%4] = i+1;
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}

	scanf("%d",&A[0]);
	return 0;
}