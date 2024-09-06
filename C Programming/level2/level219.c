#include<stdio.h>
int even(int num);

int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    int i,j,k,prime;
    k = x/10;
    j = k%100;
    prime = 1;
    for(i=2;i<j;i++)
    {
        if(j%i==0)
        {
            prime = 0;
        }
    }
    if(prime==0)
    {
        printf("%d is not prime number",x);
    }
    else
    {
        printf("%d is a prime number",x);
    }
}
