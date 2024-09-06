#include<stdio.h>

int main()
{
    int x;

    printf("enter the number:");
    scanf("%d",&x);

    int perfectsquare(int num)
    {
        int i;
        i = 1;
        while(i*i<=num)
        {
            if(i*i==num)
            {
                return 1;
                break;
            }
            i++;
        }
        return 0;
    }

    int count,y;
    while(x>=10)
    {
        y = x%100;
        if(perfectsquare(y))
        {
            count++;
        }
        x = x/10;
    }
    printf("%d",count);
}

