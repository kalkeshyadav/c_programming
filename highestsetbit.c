#include<stdio.h>
int main()
{
    int n,pos=0;
    scanf("%d",&n);
    while(n>1){
        n=n>>1;
        pos++;
    }
    printf("count:%d",pos);
}