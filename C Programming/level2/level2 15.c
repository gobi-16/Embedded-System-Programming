int main()
{
    int x;
    scanf("%d",&x);
    int count,y;
    int digit(x)
    {
    count = 0;
    while(x!=0)
    {
        x = x/10;
        y = count++;
    }
    }

    int i,j,k;
    i = x%10;
    if(i/2!=0)
    {
        while(count!=0)
        {
            j = j*10;
        }
        k = x-j;
        printf("%d",k);
    }
    else
    {
        printf("%d",x);
    }


}





