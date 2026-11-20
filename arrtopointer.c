#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    int *p = a;
    printf(":\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}
