#include<stdio.h>


int main()
{
   int x;
   printf("enter the number:");
   scanf("%d",&x);
   int z,y,square;
   square = 0;
   while(x!=0)
   {
       y = x%10;
       if(y%2==0)
       {
           z = y/2;
           if(z%2==0)
            {
                square++;
            }

       }
       x = x/10;
   }
   printf("total perfect 2 square number:%d",square);
}
