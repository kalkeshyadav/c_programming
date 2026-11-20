#include <stdio.h>
int main()
{
    int n;
    printf("no:");
    scanf("%d", &n);
    if (n &0)
    {
        printf("LSB is set");
    }
    else
    {
        printf("LSB is not set");
    }
}
