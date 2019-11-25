//https://www.acmicpc.net/problem/2445

#include <stdio.h>

int main(){

int i, j, k, l, n;
scanf("%d", &n);

for (i=0; i<n; i++)
{

    for (j=0; j<i+1; j++)
    {
        printf("*");
    }
    for (k=0; k<2*(n-i)-2; k++)
    {
        printf(" ");
    }
    for (l=0; l<i+1; l++)
    {
        printf("*");
    }

    printf("\n");
}

for (i=0; i<n-1; i++)
{

    for (j=0; j<n-i-1; j++)
    {
        printf("*");
    }
    for (k=0; k<2*(i+1); k++)
    {
        printf(" ");
    }
    for (l=0; l<n-i-1; l++)
    {
        printf("*");
    }

    printf("\n");
}
return 0;
}
