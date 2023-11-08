#include<stdio.h>
int even_odd(int);
int main()
{
    int a;
    printf("Enter an integer number:\n");
    scanf("%d", &a);
    if(a%2 == 0)
        printf("it's an even number");
    else
        printf("it's an odd number");
}
int even_odd(int x)
{
    int y;
    x=y;
    return(y%2 == 0);
}
