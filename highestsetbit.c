#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=31;i>=0;i--)
    {
        if(n>>i){
            printf("highest:%d",i);
            break;
        }
    }

}