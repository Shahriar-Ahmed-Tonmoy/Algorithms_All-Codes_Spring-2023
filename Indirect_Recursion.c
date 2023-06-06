#include<stdio.h>

int n=1;

int odd()
{
    if(n<=10)
    {
        printf("%d ",n+1);
        n++;
        even();
    }
    return;
}

int even()
{
    if(n<=10)
    {
        printf("%d ",n-1);
        n++;
        odd();
    }
    return;
}

int main()
{
    odd();
}
