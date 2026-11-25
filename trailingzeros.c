#include<stdio.h>
int main()
{
    int n,pos=0;
    printf("number:");
    scanf("%d",&n);
    while((n&1)==0){
        n=n>>1;
        pos++;
    }
    printf("count:%d",pos);
}