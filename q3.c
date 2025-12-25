#include <stdio.h>
int main(){
    // user Given Numbers
    int a, b, c, d;
    printf("Write A numbe Called a: ");
    scanf("%d", &a);
    printf("Write A numbe Called b: ");
    scanf("%d", &b);
    printf("Write A numbe Called c: ");
    scanf("%d", &c);
    printf("Write A numbe Called d: ");
    scanf("%d", &d);

    // a mathemetical term for print average of 3 numbers
    int sum = a+b+c+d;
    int average = sum/4;
    printf("The Average Number is: %d", average);

}