// w.a.p.to print factorial of n number to n in function.
#include <stdio.h>
// function decleared
void factorial(int n);

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    // function call
    factorial(num);
    return 0;
}
// function defination
void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial of number is %d\n", fact);
}
