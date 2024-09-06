#include <stdio.h>

int main()
{
    int x;
    int j,k,l,found;
    printf("enter the number:");
    scanf("%d",&x);
    found = 0;
    while(x>=1000)
    {
        j = x%10000;
        k = x/10;
        l = k%10000;
        if(j%7==0&&j%9==0)
        {
            found =1;
            if(found==1)
            {
              printf("%d",j);
            }
            if(l%7==0&&l%9==0)
            {
              if(l>j)
              {
                found = 1;
                if(found==1)
                {
                  printf("the biggest 4 digit number divisible by 7&9:%d",l);
                }
              }
              else if(l<j)
              {
                found = 2;
                if(found==2)
                {
                   printf("the biggest 4 digit number divisible by 7&9:%d",j);
                }
              }
              else
              {
                found = 0;
                if(found==0)
                  printf("no biggest number divisible by 7&9");
              }
            }
        }
        x = x/10;
    }



}
