#include<stdio.h>
int main()
{
    int n,ones =0,zeros=0;
    scanf("%d",&n);
    for (int i=0;i<32;i++)
    {
        if ((n&1)==0)
        {
            zeros++;
        }
        else{
            ones++;
        }
        n=n>>1;
    }
    printf("ones:%d\n",ones);
    printf("zeros:%d\n",zeros);
}