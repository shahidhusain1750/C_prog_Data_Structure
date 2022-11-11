#include <stdio.h>
#define MAX 5
int qu[MAX];
int first = -1;
int last = -1;
// function declaration
void Insert();
void display();
int peek();
int del();
// enter main function
int main()
{
    Insert();
    Insert();
    Insert();
    Insert();
    Insert();
    display();
    printf("peeked Elements in qu is %d\n", peek());
    printf("del Elements in que is %d\n", del());
    printf("del Elements in que is %d\n", del());
    printf("del Elements in que is %d\n", del());
    printf("del Elements in que is %d\n", del());
    printf("del Elements in que is %d\n", del());
    printf("del Elements in que is %d\n", del());
    // Insert();
    return 0;
}
// function defination
void Insert()
{
    int val;
    printf("Enter a Number\n");
    scanf("%d", &val);
    if (last == MAX - 1)
    {
        printf("OverFlow Condition\n");
    }
    else if (last == -1 && first == -1)
    {
        last = first = 0;
        qu[last] = val;
        printf("%d Inserted succefully\n", val);
    }
    else
    {
        last++;
        qu[last] = val;
        printf("%d Inserted\n", val);
    }
}

void display()
{
    if (first == -1 && last == -1)
    {
        printf("qu is empty\n");
    }
    else
        printf("Elements in qu are\n");
    for (int i = first; i <= last; i++)
    {
        printf("%d\n", qu[i]);
    }
}

int peek()
{
    if (first == -1 && last == -1)
    {
        printf("qu is empty\n");
        return -1;
    }
    else
        return qu[last];
}

int del()
{
    int val;
    if (first == -1 && last == -1)
    {
        printf("UnderFlow Condition\n");
        return -1;
    }
    else
    {
        val = qu[first];
        first++;
        if (first > last)
        {
            first = last = -1;
        }
        return val;
    }
}