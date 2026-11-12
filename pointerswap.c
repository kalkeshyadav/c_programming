#include <stdio.h>
int main()
{
    int a;
    int *p, **q;
    scanf("%d", &a);
    p = &a;
    q = &p;
    printf("a is :%d\n",a);
    printf("q is :%d", **q);
}