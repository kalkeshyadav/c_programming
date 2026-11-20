#include <stdio.h>
int main()
{
    int n;
    printf("no:");
    scanf("%d", &n);
    if (n &0)
    {printf("LSB is set\n");}else{printf("LSB is not set\n");}
    if (n |0)
    {printf("LSB is set\n");}else{printf("LSB is not set\n");}
    if (n ^0)
    {printf("LSB is set\n");}else{printf("LSB is not set\n");}
    printf("%d",~n); 
}
