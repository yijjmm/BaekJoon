//https://www.acmicpc.net/problem/2446

#include <stdio.h>

int main(){

int i, j, k, l, n;
scanf("%d", &n);

for (i=0; i<n; i++)
{

    for (j=0; j<i; j++)
    {
        printf(" ");
    }
    for (k=0; k<2*(n-i)-1; k++)
    {
        printf("*");
    }

    printf("\n");
}

for (i=0; i<n-1; i++)
{

    for (j=0; j<n-i-2; j++)
    {
        printf(" ");
    }
    for (k=0; k<2*(i+1)+1; k++)
    {
        printf("*");
    }
  
    printf("\n");
}
return 0;
}
