//https://www.acmicpc.net/problem/2441

#include <stdio.h>

int main(){

int i, j, k, n;
scanf("%d", &n);

for (i=0; i<n; i++)
{
    for (k=0; k<i; k++)
    {
        printf(" ");
    }
    for (j=0; j<n-i; j++)
    {
        printf("*");
    }
    printf("\n");
}
return 0;
}
