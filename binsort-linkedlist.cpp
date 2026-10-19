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
    
    Node* head = NULL;
    Node* mover = NULL;

};

int main ()
{
    int a[8] = {4,2,7,2,3,5,0,6};
    int largest = a[0];

    for (int i = 0; i<8; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    Node bin[largest + 1];

    for (int i = 0; i<8; i++)
    {
        Node* newNode = new Node (a[i], NULL);
        if (bin[a[i]].head == NULL)
        {
            bin[a[i]].head = newNode;
        }
        else 
        {
            bin[a[i]].mover = bin[a[i]].head;
            while (bin[a[i]].mover->next!=NULL)
            {
                bin[a[i]].mover = bin[a[i]].mover -> next;
            }
            bin[a[i]].mover->next = newNode;
        }
    }

    int k = 0;

    for (int i = 0; i<=largest; i++)
    {
        bin[i].mover = bin[i].head;

        while (bin[i].mover != NULL)
        {
            a[k] = bin[i].mover->data;
            k++;
            bin[i].mover = bin[i].mover->next;
        }
    }

    cout << "sorted array - " << endl;

    for (int i = 0; i<8; i++)
    {
        cout << a[i] << endl;
    }

    return 0;

}