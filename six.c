#include<stdio.h>
int main ( ) {
    int n = 5; 
    for(int i = 1 ; i <= 2*n-1 ; i++){
        int star = n-i+1;
        int space = i-1;
        if(i > n){
            star = i-n+1;
            space = 2*n - i -1;
        }
        for(int j = 1; j <=space;j++){
            printf(" ");
        }
        
        for(int j = 1 ; j <=star;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}