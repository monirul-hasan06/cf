#include<stdio.h>
    int main(){
        int N;
        scanf("%d", &N);
        int arr[N];
        for(int i=0; i<N; i++){
            scanf("%d", &arr[i]);
        }
        int count =0;
        for(int i=0; i<N; i++){
            if(arr[i]==1){
                count++;
            }
        }
        if(count!=0){
            printf("HARD");
        }else{
            printf("EASY");
        }
        return 0;
    }