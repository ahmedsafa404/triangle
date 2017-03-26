#include<stdio.h>

int main(){

    int input;

    printf("Enter a Value : ");
    scanf("%d",&input);

    for(int i = 1; i <= input; i++){
        for(int j = 1; j <= i;j++){

            printf("*",j);

        }
            printf("\n");
    }
    for(int i = input; i >=1; i--){
        for(int j = 1; j <= i; j++){

            printf("*",j);

        }
            printf("\n");


    }

    return 0;



}
