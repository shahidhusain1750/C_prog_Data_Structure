#include <stdio.h>
#define MAX 5

int qu[MAX];

int first = -1;
int last = -1;

void Insert();
void display();
int peek();
int del();

int main(int argc, char const *argv[])
{
    Insert();
    Insert();
    Insert();
    Insert();
    Insert();
    display();
    printf("Peeked Elements in que is %d\n ", peek());
    printf("Popped Elements in que is %d \n", del());
    printf("Popped Elements in que is %d \n", del());
    printf("Popped Elements in que is %d \n", del());
    printf("Popped Elements in que is %d \n", del());
    printf("Popped Elements in que is %d \n", del());
    return 0;
}

void Insert()
{
    int val;

    printf("Enter the values :\n");
    scanf("%d", &val);

    if (last == MAX - 1)
    {
        printf("UnderFlow Condition\n");
    }
    else if (first == -1 && last == -1)
    {
        first = last = 0;
        qu[last] = val;
        printf("%d\n values Inserted succesfully \n", val);
    }
    else
    {
        last++;
        qu[last] = val;
        printf(" %d Inserted\n", val);
    }
}

void display()
{
    if (first == -1 && last == -1)
    {
        printf("que is Empty\n");
    }
    else
    {
        printf("Elements in que are\n");
        for (int i = last; i >= 0; i--)
        {
            printf("%d\n", qu[i]);
        }
    }
}

int peek()
{
    if (first == -1 && last == -1)
    {
        printf("que is empty :");
        return -1;
    }
    return qu[last];
}

int del()
{
    int val;
    if (first == -1 && last == -1)
    {
        printf("UnderFlow Condition\n :");
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