#include<stdio.h>
int main ( ){
    int n = 5 ;
    for(int i= 1 ; i <= 2*n-1; i++){
        int space = n-i ;
        if(i>n){
            space = i-n+1;
        }
        for(int j = 1; j <= space;j++){
            printf(" ");
        }
        for(int j = 1 ; j <=n; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0; 
}