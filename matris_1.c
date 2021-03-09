#include <stdio.h>

int A[16], B[4][4], aktar;

int main()
{
	printf("Sayı girin 16 tane :\n");
	for (int i = 0; i < 16; i++)
	{
		scanf("%d",&A[i]);
	}

	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			if(A[i] <= A[j]){
				aktar = A[i];
				A[i] = A[j];
				A[j] = aktar;
			}
		}
	}

	for (int i = 0; i < 16; i++)
	{
		B[i/4][i%4] = A[i];
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}

	scanf("%d",&aktar);
	return 0;
}