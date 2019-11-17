#include <stdio.h>
//https://www.acmicpc.net/problem/2920

int main()
{
	int i, a[8];
	int des = 0, asc = 0;

	for (i=0; i<8; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i=0; i<7; i++)
	{
		if (a[i] > a[i+1])
		{
			des++;
		}
		else if (a[i] < a[i+1])
		{
			asc++;
		}
	}

	if (des == 7)
		printf("descending\n");
	else if (asc == 7)
		printf("ascending\n");
	else
		printf("mixed\n");

    return 0;
}
