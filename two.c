#include<stdio.h>
int main( ){
    int n = 5 ;
    int start = 1 ;
    int end = n;

    for(int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j <=n; j++){
            if(j==start || j == end){
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