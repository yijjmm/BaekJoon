#include <stdio.h>
//https://www.acmicpc.net/problem/1110

int main(){

    int N, M, ten, one;
	int count = 0;
    scanf("%d", &N);
	M = N;

for (;;){
	one = N % 10;
    ten = N / 10;
    N = (one + ten) % 10 + one * 10;
	count++;

	if (N == M){
		printf("%d", count);
		break;
	}
}
    return 0;
}
