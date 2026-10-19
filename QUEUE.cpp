#include <iostream>
using namespace std;

void enqueue (int queue[], int &rear, int value)
{
    if (rear >= 5)
    {
        cout << "queue overflow" << endl;
        return;
    }

    rear++;
    queue[rear] = value;
}

void dequeue (int queue[], int &front, int &rear)
{
    if (front > rear)
    {
        cout << "Empty queue" << endl;
        return;
    }

    front++;
}

int main ()
{
    int queue[6];
    int front, rear;
    front = 0;
    rear = -1;

    enqueue (queue, rear, 50);
    enqueue (queue, rear, 40);
    enqueue (queue, rear, 30);
    enqueue (queue, rear, 20);
    enqueue (queue, rear, 10);
    enqueue (queue, rear, 0);

    dequeue(queue, front, rear);
    dequeue(queue, front, rear);
    dequeue(queue, front, rear);
    


    cout << "Queue remaining" << endl;
    for (int i = front; i <=rear; i++)
    {
        cout << queue[i] << endl;
    }

    return 0;
}