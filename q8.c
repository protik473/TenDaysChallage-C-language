/* question : Write a Program to check if ther gicven number is a natural number or not
    (Natural numbers start from 1) */
#include<stdio.h>
int main(){
    int n;
    printf("Write a number n: ");
    scanf("%d", &n);

    if(n>=1){
        printf("This Number is Natural \n");
    }else{
        printf("Number is not an Natural Number \n");
    }
    

    return 0;
}