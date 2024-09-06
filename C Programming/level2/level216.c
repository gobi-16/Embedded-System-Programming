#include<stdio.h>

int main()
{
    //get number and print the number if it is prime and sum of digit is 14
    int x;
    scanf("%d",&x);
    int i,j,prime,y,last_digit;
    prime = 1;
    j = x;
    y = 0;
    for(i=2;i<x/2;i++)
        {
            if(x%i==0)
            {
                prime = 0;
            }
        }
    while(j!=0)
    {
        y = y+j%10;
        j = j/10;
    }
    if(prime==1&&y==14)
    {
        printf("it is prime and sum is 14");
    }
    else if(prime==1)
    {
        printf("it is prime but sum is not 14");
    }
    else if(y==14)
    {
        printf("it is not prime but sum is 14");
    }
    else
    {
        printf("it is not prime and sum is not 14");
    }
}


