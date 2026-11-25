#include<stdio.h>
int main()
{
    int n,pos=31;
    printf("number:");
    scanf("%d",&n);
    if (n==0)
        {
            pos=32;
        }
    while((n&1)==0 && (n!=0)){    
        n=n>>1;
        pos--;
    }
    printf("zeros:%d",pos);
}