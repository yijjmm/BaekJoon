//https://www.acmicpc.net/problem/2523

#include <stdio.h>

int main(){

int n, i, j, k;

scanf("%d", &n);

for (i=0; i<n; i++)
{
    for (j=0; j<i+1; j++)
    {
        printf("*");
    }
    // for (k=0; k<n-i-1; k++)
    // {
    //     printf(" ");
    // }
    printf("\n");
}

for (i=0; i<n; i++)
{
    for (j=0; j<n-i-1; j++)
    {
        printf("*");
    }
    // for (k=0; k<i-1; k++)
    // {
    //     printf(" ");
    // }
    printf("\n");
}

return 0;
}
