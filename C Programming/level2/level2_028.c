#include<stdio.h>

int main()
{
    //get two numbers and print LCM
    int max;
    int lcm(int a,int b)
    {
        if(a>b)
            max = a;
        else
            max = b;
        while(1)
        {

            max++;
        }

    }

    int num1,num2,result;
    printf("enter the number 1:");
    scanf("%d",&num1);
    printf("enter the number 2:");
    scanf("%d",&num2);
    result = lcm(num1,num2);
    printf("the LCM of %d and %d:%d",num1,num2,result);

}
