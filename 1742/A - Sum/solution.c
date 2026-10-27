#include<stdio.h>
    int main(){
        int T;
        scanf("%d", &T);
        while(T--){
        int A,B,C;
        scanf("%d %d %d", &A, &B, &C);
 
        if(A == B + C || B == A + C || C == A + B){
            printf("YES
");
        }else{
            printf("NO
");
        }
        }
 
        return 0;
    }