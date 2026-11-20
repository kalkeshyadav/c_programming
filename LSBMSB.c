#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n & 128){
        printf("MSB\n");
    }
    else{
        printf("not MSB\n");
    }
    if(n &1){
        printf("LSB\n");
    }
    else{
        printf("not LSB\n");
    }
}