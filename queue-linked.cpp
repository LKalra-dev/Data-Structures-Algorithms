#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node() {}
    Node(int d, Node *n)
    {
        data = d;
        next = n;
    }

    

    void enqueue(Node* &start, Node* &end, int value)
    {
        Node *newNode = new Node(value, NULL);
        if (start == NULL)
        {
            start = newNode;
            end = newNode;
        }
        else
        {
            end->next = newNode;
            end = newNode;
        }
    }

    void dequeue(Node *&start, Node* &end)
    {
        if (start == NULL)
        {
            cout << "Queue underflow" << endl;
            end = NULL;
            return;
        }
        
        Node *temp = start;
        start = start->next;
        delete temp;
    }
};

int main()
{
    Node *start = NULL;
    Node *end = NULL;
    
    Node play;
    play.enqueue(start, end, 20);
    play.enqueue(start, end, 25);
    play.enqueue(start, end, 50);
    play.enqueue(start, end, 0);
    play.enqueue(start, end, 20);
    play.enqueue(start, end, 99);

    play.dequeue(start, end);
    play.dequeue(start, end);
    play.dequeue(start, end);

    return 0;
    
}