// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;

//     Node* parent;
//     Node* left;
//     Node* right;
    
    
//     Node () {}
//     Node (int d)
//     {
//         data = d;
//     }

//     Node* createNode (int value)
// {
//      Node* newNode = new Node(value);
//      return newNode;
// }

// void insertion (Node* &root, int value, Node* current)
// {
//     if (root == NULL)
//      {
//          root = createNode(value);
//          return;
//      }


//      if (value > current->data)
//      {
//         if(current->right == NULL)
//         {
//             current->right = createNode(value);
//         }
//         else
//         {
//             insertion (root, value, current->right);
//             return;
//         }
//      }

//      else if (value < current-> data)
//      {
//         if(current->left == NULL)
//         {
//             current->left = createNode(value);
//         }
//         else
//         { 
//             insertion (root, value, current->left);
//             return;
//         }
//      }
// }

// void createBST (Node* &root, Node* current, int number)
// {
//     //number is number of elements/nodes
//     // cout << "Enter the number of elements." << endl;
//     // cin >> number;

//     int n;
//     for (int i = 1; i <= number; i++)
//     {
//         cout << "Enter element " << i << " :\n";
//         cin >> n;
//         // current = root;
//         insertion (root, n, root);
//     }
// }

// void search (Node* &root, int value, Node* current)
// {
    
//     if (value < current->data)
//     {
//         search (root, value, current->left);
//         return;
//     }

//     else if (value > current->data)
//     {
//         search (root, value, current->right);
//         return;
//     }

//     else if(value == current->data)
//     {
//         cout << "value found!" << endl;
//         cout << current->data << endl;
//     }
    
// }


    
// };



// int main ()
// {
//     Node* root = NULL;
//     Node* current = root;
//     Node BST;
//     BST.createBST(root, current, 10);
//     BST.search(root, 80, current);
    
// }


#include <iostream>
using namespace std;

struct Node
{
    int data;

    Node* parent;
    Node* left;
    Node* right;

    Node() {}

    Node(int d)
    {
        data = d;
        parent = NULL;
        left = NULL;
        right = NULL;
    }

    Node* createNode(int value)
    {
        Node* newNode = new Node(value);
        return newNode;
    }

    void insertion(Node*& root, int value, Node* current)
    {
        if (root == NULL)
        {
            root = createNode(value);
            return;
        }

        if (value > current->data)
        {
            if (current->right == NULL)
            {
                current->right = createNode(value);
            }
            else
            {
                insertion(root, value, current->right);
                return;
            }
        }

        else if (value < current->data)
        {
            if (current->left == NULL)
            {
                current->left = createNode(value);
            }
            else
            {
                insertion(root, value, current->left);
                return;
            }
        }
    }

    void createBST(Node*& root, Node* current, int number)
    {
        int n;

        for (int i = 1; i <= number; i++)
        {
            cout << "Enter element " << i << " :\n";
            cin >> n;

            // Every NEW insertion starts at root
            insertion(root, n, root);
        }
    }

    void search(Node*& root, int value, Node* current)
    {
        if (value < current->data)
        {
            search(root, value, current->left);
            return;
        }

        else if (value > current->data)
        {
            search(root, value, current->right);
            return;
        }

        else
        {
            cout << "value found!" << endl;
            cout << current->data << endl;
        }
    }

    void deletion (Node* &root, Node* current, int value)
    {
        if (value < current->data)
        {
            search(root, value, current->left);
            return;
        }

        else if (value > current->data)
        {
            search(root, value, current->right);
            return;
        }

        else
        {
            cout << "value found!" << endl;
            cout << current->data << endl;
        }

        Node* temp = current;
        if(temp->left == NULL && temp->right== NULL)
        {
            if(temp->parent->left == temp)
            {
                temp->parent->left = NULL;
            }
            else
            {
                temp->parent->right = NULL;
            }
            delete temp;
        }


        else if (temp->left == NULL || temp->right == NULL)
        {
            Node* child;
             
            if(temp->left!= NULL)
            {
                child = temp->left;
            }
            else
            {
                child = temp->right;

            }

            if(temp->parent->left == temp)
            {
                temp->parent->left = child;
                child->parent = temp->parent;
            }
            else
            {
                temp->parent->right = child;
                child->parent = temp->parent;
            }

            delete temp;
        }

        else
        {
            Node* successor = temp->right;
            
            while(successor->left!=NULL)
            {
                successor = successor->left;
            }

            if(successor->right == NULL)
            {
                if(successor->parent->left == successor)
                {
                    successor->parent->left = NULL;
                    temp->data = successor->data;
                }
                else
                {
                    successor->parent->right = NULL;
                    temp->data = successor->data;
                }
                delete temp;
            }
            else
            {
                if(successor->parent->left == successor)
                {
                    successor->parent->left = successor->right;
                    successor->right->parent = successor->parent;
                }
                else
                {
                    successor->parent->right = successor->right;
                    successor->right->parent = successor->parent;
                }
                delete temp;
            }
        }
    }
};

int main()
{
    Node* root = NULL;
    Node* current = root;

    Node BST;

    BST.createBST(root, current, 10);

    BST.search(root, 80, root);

    BST.deletion(root, current, 80);
}