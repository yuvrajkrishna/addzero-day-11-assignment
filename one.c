#include<stdio.h>
int main ( ) {
    int n = 9; 
    int print = (n/2)+1;
    // printf("%d",print);
    for(int i = 1 ; i <=n;i++){
        int space = n/2;
        if(i == n/2+1){
            space = 0;
        }
        for(int j=1 ; j<=space;j++){
            printf(" ");
        }
        for(int j = 1 ; j <=2*i-1;j++){
            if(i==1 ||j==1||i == print){
                printf("*");
            }
            else{
                printf("");
            }
        }
        printf("\n");
    }
}