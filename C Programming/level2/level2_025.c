#include<stdio.h>

int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);

    int isprime(num)
    {
        int i;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                return 1;
                break;
            }

        }
        return 0;
    }

    int j,count;
    count = 0;
    while(x!=0)
    {
        j = x%10;
        if(isprime(j))
        {
            count++;
        }
        x = x/10;
    }
    printf("total single digit prime number:%d",count);
}
