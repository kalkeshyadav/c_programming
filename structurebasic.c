#include<stdio.h>
struct student
{
    int id;
    char name[50];
    float marks;
};
int main()
{
    struct student s1;
    s1.id=101;
    s1.marks=21;
    printf("%d\n%f",s1.id,s1.marks);

}