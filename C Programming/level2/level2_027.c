#include<stdio.h>

int main()
{
    int x;

    int sumofdigits(j)
    {
        int y,z;
        y = 0;
        while(j!=0)
        {
            z = j%10;
            y = y+z;
            j = j/10;
        }
        return y;
    }

    int i,count;
    x = 100000;
    count =0;
    for(i=10;i<x;i++)
    {
        if(sumofdigits(i)==14)
            {
                count++;
                printf("%d\n",i);

            }
    }
    printf("total number:%d",count);



}
