#include<stdio.h>

int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    int i,prime;
    prime = 1;
    while(x>100)
    {
        x = x/10;

    }
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            prime = 0;
        }
    }
    if(prime==0)
    {
        printf("not prime");
    }
    else
    {
        printf("prime");
    }
}
