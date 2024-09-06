#include <stdio.h>

int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    printf("reverse of number:");
    int y,z;
    y = 0;
    loop: if(x!=0)
    {
        y = x%10;
        x = x/10;
        z = y*10
        printf("%d",y);
        goto loop;
    }


}
