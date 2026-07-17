#include<stdio.h>
int main ( ){
    int n = 5; 
    for(int i = 1 ; i <= 2*n-1; i++){
        int star = i;
        if(i>n){
            star = 2*n - i;
        }
        for(int j = 1 ; j <=star;j++){
            if(i%2==0){
                printf("_");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}