#include <stdio.h>
#define MAX 5
int st[MAX];

int top = -1;

void push(int st[], int val);
void display(int st[]);
int peek(int st[]);
int pop(int st[]);

int main(int argc, char const *argv[])
{
    push(st, 5);
    push(st, 3);
    push(st, 2);
    push(st, 9);
    push(st, 7);
    // push(st, 1);
    display(st);
    printf("Peeked elemnts in Stack are%d\n ", peek(st));
    printf("Popped Elements in stack is %d\n ", pop(st));
    printf("Popped Elements in stack is %d\n ", pop(st));
    printf("Popped Elements in stack is %d\n ", pop(st));
    printf("Popped Elements in stack is %d\n ", pop(st));
    printf("Popped Elements in stack is %d\n ", pop(st));
    printf("Popped Elements in stack is %d\n", pop(st));
    display(st);

    return 0;
}

void push(int st[], int val)
{
    if (top == MAX - 1)
    {
        printf("OverFlow Cundition Stack is full\n");
    }

    else
    {
        top++;
        st[top] = val;
        printf("%d Elements Inserted Successfully\n" + val);
    }
}

void display(int st[])
{
    if (top == -1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        printf("Elements in stack are\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", st[i]);
        }
    }
}

int peek(int st[])
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        return st[top];
    }
}

int pop(int st[])
{
    int val;
    if (top == -1)
    {
        printf("UnderFlow Condition\n");
        return -1;
    }
    else
    {
        val = st[top];
        top--;
        return val;
    }
}