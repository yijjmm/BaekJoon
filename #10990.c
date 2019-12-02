//https://www.acmicpc.net/problem/10990

#include <stdio.h>

int main(){

int n, i, j, k;

scanf("%d", &n);

for (i=0; i<n-1; i++)
{
    printf(" ");
}
    printf("*\n");

for (i=0; i<n-1; i++)
{
    for (j=0; j<n-i-2; j++)
    {
        printf(" ");
    }
    printf("*");

    for (k=0; k<2*i+1; k++)
    {
        printf(" ");
    }
    printf("*");
    printf("\n");
}

return 0;
}
