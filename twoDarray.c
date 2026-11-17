#include <stdio.h>
int main()
{
    int i, j, m, n;
    printf("rows and columns:");
    scanf("%d %d", &m, &n);
    int a[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("[%d]", a[i][j]);
            }
        }
    }
}
