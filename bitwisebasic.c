#include <stdio.h>
int main()
{
    int n,pos;
    scanf("%d%d",&n,&pos);
    int m=2<<pos;
    int num =n | (m);
    printf("set :%d\n",num);
     int n1 =n ^ (m);
    printf("toggle: %d\n",n1);
     int n2 =n & (m);
    printf("get :%d\n",n2);
     int n3 =n & ~ (m);
    printf("clear :%d\n",n3);
   }

