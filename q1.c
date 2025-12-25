#include<stdio.h>
int main(){
    // User given sides
    int a,b;
    printf("Write Side of a: ");
    scanf("%d", &a);
    printf("Write Side of b: ");
    scanf("%d", &b);

    // Calculation Perimeter of rectangle with user given sides
    int sum = 2*(a+b);

    printf("Rectangle Perimeter is: %d", sum);
    return 0;
}