#include<stdio.h>
int add(int, int);
int main()
{
    int a,b;
    printf("Enter two integer:\n");
    scanf("%d%d", &a, &b);
    printf("%d+%d = %d\n",a,b,add(a,b));
    return 0;
}
int add(int c, int d)
{
    return(c+d);
}
