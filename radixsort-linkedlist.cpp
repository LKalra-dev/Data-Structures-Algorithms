//RIGHT NOW - completed only for ones digit, 10s and 100s ke liye aur step repeat karna padega

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node (int d, Node* n)
    {
        data = d;
        next = n;
    }

    
};

int main ()
{
    Node* head = nullptr;
    Node* mover;
    

    int element;
    cout << "Enter 6 elements - " << endl;
    for (int i = 1; i<=6; i++)
    {
        cout << "element " << i << endl;
        cin >> element;
        Node* newNode = new Node(element, nullptr);

        if (head == nullptr)
        {
            head = newNode;
            mover = head;
        }

        else
        {
            while (mover->next!=nullptr)
            {
                mover = mover->next;
            }
            mover->next = newNode;

        }
    }

    cout << "\n\n";
    mover = head;
    
    for (int i =1 ; i<=6; i++)
    {
        cout << mover->data << endl;
        mover = mover->next;
    }

    Node* bucket[10];
    mover = head;

cout << "\nOriginal list:\n";
while (mover != nullptr)
    {
        cout << mover->data << " ";
        mover = mover->next;
    }

    // creating tails of just made buckets..
    Node* tail[10];

    for (int i = 0; i < 10; i++)
    {
        bucket[i] = nullptr;
        tail[i] = nullptr;
    }


    // Distribute nodes according to ones digit
    mover = head;

    while (mover != nullptr)
    {
        Node* nextNode = mover->next;

        int digit = mover->data % 10;

        // Disconnect node from original list
        mover->next = nullptr;

        // If bucket is empty
        if (bucket[digit] == nullptr)
        {
            bucket[digit] = mover;
            tail[digit] = mover;
        }

        // If bucket already contains nodes
        else
        {
            tail[digit]->next = mover;
            tail[digit] = mover;
        }

        mover = nextNode;
    }
    // Join buckets back into one linked list
    head = nullptr;
    mover = nullptr;

    for (int i = 0; i < 10; i++)
    {
        if (bucket[i] != nullptr)
        {
            if (head == nullptr)
            {
                head = bucket[i];
                mover = tail[i];
            }
            else
            {
                mover->next = bucket[i];
                mover = tail[i];
            }
        }
    }
    // display list after ones digit pass
    cout << endl;
    cout << "List after sorting according to ones digit:\n";

    mover = head;

    while (mover != nullptr)
    {
        cout << mover->data << " ";
        mover = mover->next;
    }

    return 0;
}

