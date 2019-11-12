#include <stdio.h>
int main(){

	int a[9];
	int i, b, max;

	for (i=0; i<9; i++)
	{
		scanf("%d", &a[i]);
	}

	// max = a[0];
	b = 0;

	for (i=1; i<9; i++)
	{
		if (a[b] < a[i])
		{
			// max = a[i];
			b = i;
		}
	}

	printf("%d\n", a[b]);
	printf("%d", b + 1);


    return 0;
}
