// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node* next;

//     Node () {}
//     Node (int d, Node* n)
//     {
//         data = d;
//         next = n;
//     }
//     Node (int d)
//     {
//         data = d;
//     }
    
// };

// int main ()
// {
//     Node* head;
//     Node *newNode = new Node (7, nullptr);
//     head = newNode;

//     Node* mover = head->next;
//     for (int i = 0; i<5; i++)
//     {
//         while (mover->next!=nullptr)
//         {
//             int num;
//             cout << "Enter element to insert." << endl;
//             cin >> num;
//             Node* newNode = new Node (num, nullptr);

//             mover = newNode;
//             mover = mover->next;
//         }
//     }

//     //entering elements completed 
//     // suppose list - 7 15 8 10 9 3
//     mover = head;
//     while (mover->next!=nullptr)
//     {
//         int element;
//         element = mover->data;
//         Node* temp;

//         temp = head;
//         while (temp->next!=nullptr)
//         {
//             if (element == temp->data + mover->data)
//             {
//                 if (temp->data != mover->data)
//                 {
//                     cout << element << endl;
//                 }
//             }
//             temp = temp->next;
//         }
//     }
// }

//REFINED VERSION
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
    int num;

    cout << "Enter first element: ";
    cin >> num;

    Node* head = new Node(num, nullptr);
    Node* mover = head;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element: ";
        cin >> num;

        Node* newNode = new Node(num, nullptr);

        mover->next = newNode;
        mover = mover->next;
    }
    mover = head;
    while (mover != nullptr)
    {
    int element = mover->data;

        Node* temp1 = head;
        bool found = false;

        while (temp1 != nullptr && !found)
        {
            Node* temp2 = temp1->next;

            while (temp2 != nullptr)
            {
                // Make sure the element itself is not being used
                if (temp1 != mover && temp2 != mover)
                {
                    if (element == temp1->data + temp2->data)
                    {
                        cout << element << " = "
                             << temp1->data << " + "
                             << temp2->data << endl;

                        found = true;
                        break;
                    }
                }

                temp2 = temp2->next;
            }
            temp1 = temp1->next;
        }

        mover = mover->next;
    }

    return 0;
}
