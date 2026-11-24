#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<31;i++)
    {
        if((n>>i)&1){
            printf("lowest:%d",i);
            break;
        }
    }
}