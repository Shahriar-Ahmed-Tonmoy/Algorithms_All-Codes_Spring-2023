#include<stdio.h>

int main()
{
    int a,b,c;
    int *num1, *num2, *num3;
    num1 = &a;
    num2 = &b;
    num3 = &c;
    printf("Enter three numbers: \n");
    printf("========================\n");
    scanf("%d %d %d", num1, num2, num3);

    int sum = *num1 + *num2 + *num3;
    printf("summation is = %d", sum);
}
