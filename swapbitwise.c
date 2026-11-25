#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after \n a:%d \n b:%d",a,b);
}