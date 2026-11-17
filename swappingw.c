#include<stdio.h>  
int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping: a=%d b=%d",a,b);
}