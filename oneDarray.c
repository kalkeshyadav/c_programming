#include <stdio.h>
int main()
{
    int i;
    int a[10];
    printf("elemets are:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}