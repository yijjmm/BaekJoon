#include <stdio.h>
//https://www.acmicpc.net/problem/10952

int main(){
    int a, b;
    
    for (;;){
        scanf("%d %d", &a, &b);
        if (a+b != 0){
            printf("%d\n", a+b);
        }
        else
            return 0;
        
    }
    
    return 0;
}
