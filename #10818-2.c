#include <stdio.h>
//https://www.acmicpc.net/problem/10818

int main()
{
	int n, i, max, min;
	int a[1000000];

	scanf("%d", &n);

	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}

	max = 0; min = 0;

	for (i=1; i<n; i++)
	{
		if (a[min] > a[i])
		{
			min = i;
		}
		else if (a[max] < a[i])
		{
			max = i;
		}
	}
	printf("%d %d\n", a[min], a[max]);
    return 0;
}
