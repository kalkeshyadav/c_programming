#include <stdio.h>
void hello();
void heee(); // function declaration
int main()
{
    hello(); // function call
    heee();  // function call
    printf("\nhello");
}
void hello() // function definition
{
    printf("hi");
}
void heee()
{
    printf("\nheee");
}