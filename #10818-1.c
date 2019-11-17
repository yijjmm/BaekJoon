#include <stdio.h>
//https://www.acmicpc.net/problem/10818

int main()
{
	int n, i, temp, max, min;

	scanf("%d", &n);
	scanf("%d", &temp);

	max = temp; min = temp;

	for (i=1; i<n; i++)
	{
		scanf("%d", &temp);
		if (min > temp)
		{
			min = temp;
		}
		else if (max < temp)
		{
			max = temp;
		}
	}

	printf("%d %d\n", min, max);
    return 0;
}
