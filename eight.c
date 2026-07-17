#include<stdio.h>
int main ( ){
    int n = 5 ;
    int start = 1; 
    int end = n*2-1;
    for(int i = 1; i <=n ; i++){
        for(int j =1 ; j <=2*n;j++){
            if(j==start || j==end ||i==n*2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        start++;
        end--;
    }
    return 0 ;
}