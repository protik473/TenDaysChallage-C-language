// question : Write a program to check if a gicven number is Armstrong number or not

#include<stdio.h>
int main(){
    int num, original;
    int a,b,c;
    int sum;

    printf("write a 3 digit number: ");
    scanf("%d",&num);

    original = num;

    c = num % 10;   //last number
    num = num /10;
    b = num % 10;   // midel number
    num = num /10;
    a = num;        //first number

    sum = (a*a*a) + (b*b*b) + (c*c*c);

    if (sum == original)
    {
        printf("Number is armstrong \n");
    }else
    {
        printf("number is not an armstrong \n");
    }
    
    
    return 0;
}