#include <iostream>
using namespace std;

void enqueue (int arr[], int &front, int &rear, int size, int value)
{
    if ((rear+1)%size == front)
    {
        cout << "Circular queue has been overflowed" << endl;
        return;
    }

    rear = (rear+1)%size;
    arr[rear] = value;
}

void dequeue (int arr[], int &front, int &rear, int size)
{
    front++;
    if (front > (size-1))
    {
        front = 0;
    }
}

void display (int arr[], int&front, int &rear, int size)
{
    int i = front;
    while (true)
    {
        cout << arr[i] << "\t";
        if(i == rear)
        {
            break;
        }
        
        i = (i+1)%size;
    }
}

int main ()
{
    int size = 6;
    int arr[size]; //will act as queue.
    int front = 0;
    int rear = -1;


    enqueue (arr, front, rear, size, 6);
    enqueue (arr, front, rear, size, 12);
    enqueue (arr, front, rear, size, 24);
    enqueue (arr, front, rear, size, 36);
    enqueue (arr, front, rear, size, 94);
    dequeue (arr, front, rear, size);
    dequeue (arr, front, rear, size);
    enqueue (arr, front, rear, size, 7);
    enqueue (arr, front, rear, size, 6);
    dequeue (arr, front, rear, size);


    display(arr, front, rear, size);

    return 0;
    


}