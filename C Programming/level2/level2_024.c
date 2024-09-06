#include<stdio.h>

int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);

    int perfectsquare(num)
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

    int j,count;
    count = 0;
    while(x>=10)
    {
        j = x%100;
        if(perfectsquare(j))
        {
            count++;
        }
        x = x/10;
    }
    printf("total number of perfectly squared numbers:%d",count);
}
