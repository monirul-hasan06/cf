#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int years = 0;
    for (; a <= b; years++) {
        a = a* 3;
        b = b* 2;
    }
    printf("%d
", years);
    return 0;
}