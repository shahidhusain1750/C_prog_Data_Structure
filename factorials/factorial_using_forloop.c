// w.a.p program to print factorial using for loop.
#include <stdio.h>
int main()
{
    int fact = 1;
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial of n is %d\n", fact);
    return 0;
}