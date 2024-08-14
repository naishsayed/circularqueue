#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int rear = -1, front = -1;
int Q[SIZE];

void enqueue();
void dequeue();
void isFull();
void isEmpty();

int main()
{
    int choice, k;
    do
    {
        printf("Perform Operations on Queue:-\n");
        printf("1. Enqueue\n2. Dequeue\n3. isFull\n4. isEmpty\n5. Exit\n");

        printf("Enter the choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            isFull();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid Choice!");
        }

        printf("\nEnter '1' to continue: ");
        scanf("%d", &k);
        printf("\n");
    } while (k == 1);
    return 0;
}

void enqueue()
{
    int element;
    printf("Enter the element: ");
    scanf("%d", &element);

    if (rear == SIZE - 1)
    {
        printf("Overflow");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    Q[rear] = element;
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Underflow");
    }
    else
    {
        return Q[front];
        front = front + 1;
    }
}

void isFull()
{
    if (rear == SIZE - 1)
    {
        printf("Queue is Full");
    }
    else
    {
        printf("Queue is not full");
    }
}

void isEmpty()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Queue is not Empty");
    }
}
