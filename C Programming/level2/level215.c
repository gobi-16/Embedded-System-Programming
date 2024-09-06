#include<stdio.h>

int main()
{
    int num,count;
    num = 743729;
    count = 0;
    int digit(num)
    {
        while(num!=0)
    {
        num = num/10;
        count++;
    }
    }
    int num1,num2,result,x;
    x = digit(num);
    num2 = 1;
    num1 = num%10;
    if(num1%2!=0)
    {
        while(x!=0)
        {
            num2 = num2*10;
            --x;
        }
        result = num - num2;
        printf("result:%d",result);

    }
    else
    {
        printf("result:%d",num);
    }

}
