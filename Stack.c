#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int top = -1;
int stack[SIZE];

//[Push Operation Into Stack..]

int push(int val)
{

    if (top == SIZE - 1)
    {
        printf("The Stack Is Over Flow");
        return -1;
    }

    else
    {
        top++;
        stack[top] = val;
        return val;
    }
}

// POP  OPERATION STACK

int pop()
{
    if (top == -1)
    {
        printf("The Stack Is UnderFlow:");
        return -1;
    }

    else
    {
        int val = stack[top];
        top--;
        return val;
    }
}

int peek()
{
    if (top == -1)
    {
        printf("The Stack is Empty");
        return -1;
    }

    else
    {
        return stack[top];
    }
}

int display()
{

    if (top == -1)
    {
        printf("The Stack is Empty:");
        return -1;
    }
    else
    {
        printf("The Stack Element is:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{

    int choice, val;

    while (1)
    {
        printf("<-----The Stack Menu IS:---->");
        printf("\n 1.Push Operation");
        printf("\n 2.Pop Operation ");
        printf("\n 3.Peek Operation");
        printf(" \n 4.Display");
        printf("\n 5.Exit...");

        printf("\nEnter the Choice :");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter the Value Push Stack:");
            scanf("%d", &val);
            push(val);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            exit(1);
            break;

            default :
            printf("Invalid Choice..");
        }
    }
    return 0;
}