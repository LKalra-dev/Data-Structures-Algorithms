#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int d, Node* n)
    {
        data = d;
        next = n;
    }
};

int main()
{
    Node* head = nullptr;
    Node* mover = nullptr;

    int element;

    for (int i = 0; i < 5; i++)
    {
        cin >> element;

        Node* newNode = new Node(element, nullptr);
        if (head == nullptr)
        {
            head = newNode;
        }

        else
        { mover = head;
            while (mover->next != nullptr)
            {
                mover = mover->next;
            }
            mover->next = newNode;
        }
    }

// DISPLAY!!
    cout << "List : ";

    mover = head;
    while (mover != nullptr)
    {
        cout << mover->data << " ";
        mover = mover->next;
    }

// SEARCH IN LIST!
    int target;

    cout << "\nEnter element to search: ";
    cin >> target;
    mover = head;

    while (mover != nullptr)
    {
        if (mover->data == target)
        {
            cout << "Element found";
            break;
        }
        else 
        {
            cout << "Not found";
            break;
        }

        mover = mover->next;
    }

    return 0;
}