#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements are:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", arr[i]);
    }
    for (i = 1; i <= n; i++)
    {
        sum = sum + arr[i];
    }
    printf("\n%d", sum);
}