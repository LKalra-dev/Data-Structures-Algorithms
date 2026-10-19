#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;

    Node(){}
    Node(int d, Node* n)
    {
        data = d;
        next = n;
    }
};

void inserter (Node* &head, int n)
{
    // Node* mover = NULL;
    for (int i = 0; i<n; i++)
    {
        int value;
        cout << "Enter value." << endl;
        cin >> value; 
        Node* newNode = new Node(value, NULL);
        if (head == NULL)
        {
            head = newNode;
            // mover = head;
        }
        else
        {
            Node* mover = head;
            while (mover->next != NULL)
            {
                mover = mover->next;
            }
            mover->next = newNode;
        }
    }
}

void deleter (Node* &head, int value)
{
    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL && temp->data !=value)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Value not found." << endl;
    }

    Node* del = prev->next;
    prev->next = temp->next;
    delete del;
}

void display(Node* &head)
{
    Node* mover = head;
    cout << "Linked list as follows - " << endl;
    while (mover!= NULL)
    {
        cout << mover->data << endl;
        mover = mover->next;
    }
}

int main ()
{
    Node* head = NULL;
    inserter(head, 8);

    deleter(head, 15);
    deleter(head, 30);

    display(head);

    return 0;
}

// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node* next;

//     Node(){}

//     Node(int d, Node* n)
//     {
//         data = d;
//         next = n;
//     }
// };

// void inserter(Node*& head, int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         int value;
//         cout << "Enter value." << endl;
//         cin >> value;

//         Node* newNode = new Node(value, NULL);

//         if(head == NULL)
//         {
//             head = newNode;
//         }
//         else
//         {
//             Node* mover = head;

//             while(mover->next != NULL)
//             {
//                 mover = mover->next;
//             }

//             mover->next = newNode;
//         }
//     }
// }

// void deleter(Node*& head, int value)
// {
//     Node* temp = head;
//     Node* prev = NULL;

//     while(temp != NULL && temp->data != value)
//     {
//         prev = temp;
//         temp = temp->next;
//     }

//     if(temp == NULL)
//     {
//         cout << "Value not found." << endl;
//         return;
//     }

//     if(temp == head)
//     {
//         head = head->next;
//         delete temp;
//         return;
//     }

//     Node* del = temp;
//     prev->next = temp->next;
//     delete del;
// }

// void display(Node* head)
// {
//     Node* mover = head;

//     cout << "Linked list as follows - " << endl;

//     while(mover != NULL)
//     {
//         cout << mover->data << endl;
//         mover = mover->next;
//     }
// }

// int main()
// {
//     Node* head = NULL;

//     inserter(head, 8);

//     deleter(head, 15);
//     deleter(head, 30);

//     display(head);

//     return 0;
// }
