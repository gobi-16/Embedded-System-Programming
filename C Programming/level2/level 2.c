#include <stdio.h>

int main()
{
    int x;
    int y;
    x = 0;
    loop: if(x<10)
    {
        y = x%2;
        if(y!=0)
        {
            printf("%d\n",x);
        }
        x = x+1;
        goto loop;

    }
}
