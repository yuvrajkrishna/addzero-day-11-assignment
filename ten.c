#include<stdio.h>
int main ( ){
    int n = 5;
     for(int i = 1; i <= n ; i++){
        int star = 2*i-1;
        for(int j = 1 ; j <= n-i; j++){
            printf(" ");
        }
        for(int j = 1; j <=star;j++){
            if(i==1 || j==1 || j==star){
                printf("*");
            }
            else{
                printf("_");
            }
        }
        printf("\n");
     }
    return 0;
}