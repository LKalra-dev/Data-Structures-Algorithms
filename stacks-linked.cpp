#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node () {}

    Node (int d, Node* n)
    {
        data = d;
        next = n;
    }

    void push (Node* &top, int value)
    {
        Node* newNode = new Node(value, NULL);

        newNode->next = top;
        top = newNode;
    }

    void pop (Node* &top)
    {
        if (top == NULL)
        {
            cout << "stack underflow" << endl;
        }
        
        Node* temp = top;
        top=top->next;
        delete temp;
    }

    void display(Node* &top)
   {
    Node* mover = top;
    while (mover!=NULL)
    {
        cout << mover->data << "\t";
        mover = mover->next;
    }
   }  
};



int main ()
{
    Node* top = NULL;
    Node play;
    play.push(top, 50);
    play.push(top, 35);
    play.push(top, 91);
    play.push(top, 88);
    play.push(top, 0);
    play.push(top, 72);

    play.pop(top);
    play.pop(top);
    play.pop(top);
    play.push(top, 35);

    play.display(top);


    return 0;
}