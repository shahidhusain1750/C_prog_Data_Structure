// w.a.p. to print function using recursion.
#include <stdio.h>
// function declared
int factorial(int n);
// enter main function
int main()
{
    int num, ans;
    printf("Enter a number\n");
    scanf("%d", &num);
    // function call
    ans = factorial(num);
    printf("factorial of given number is %d\n", ans);
    return 0;
}
// function defination
int factorial(int n)
{
    int fact = 1;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
