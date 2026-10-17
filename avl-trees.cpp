// #include <iostream>
// using namespace std;

// class Node
// {
//     public:
//     Node* left;
//     Node* right;
//     Node* parent;
   
//     int data;
//     int height;

//     Node () {}
//     Node (int d)
//     {
//         data = d;
//     }
// };

// Node* createnode(int &value)
// {
//     Node* newNode = new Node(value);
//     return newNode;
// }

// Node* rightrotate (Node* &current);
// Node* leftrotate (Node* &current);


// int getheight(Node* current)
// {
//     if (current == NULL)
//     {
//         return -1;
//     }
//     else
//     {
//         // updateheight(current);
//         return current->height;
//     }
// }

// void updateheight (Node* &current)
// {
//     current->height = 1 + max(getheight(current->left), getheight(current->right));
// }

// int getbalancefactor(Node* current)
// {
//     if (current == NULL)
//         return 0;

//     return getheight(current->left) - getheight(current->right);
// }

// Node* rightrotate(Node* &current) //will be in case of LEFT-LEFT
// {
//     Node* templeft = current->left;
//     Node* templeftright = current->left->right;

//     templeft -> right = current;
//     templeftright -> parent = current;
//     current->left = templeftright;
//     current->parent = templeft;

//     updateheight(current);
//     updateheight(templeft);

//     return current;

// }

// Node* leftrotate(Node* &current) //WILL BE IN CASE OF RIGHT RIGHT
// {
//     Node* tempright = current->right;
//     Node* temprightleft = current->right->left;

//     tempright -> left = current;
//     temprightleft -> parent = current;
//     current->right = temprightleft;
//     current -> parent = tempright;

//     updateheight(current);
//     updateheight(tempright);
// }

// Node* insertion(Node* root, int value)
// {
   
//     if (root == NULL)
//         return new Node(value);

//     if (value < root->data)
//         root->left = insertion(root->left, value);

//     else if (value > root->data)
//         root->right = insertion(root->right, value);

//     else
//         return root;  

//     updateheight(root);
// //find balance factor
//     int bf = getbalancefactor(root);

    
//     if (bf > 1 && value < root->left->data)
//         return rightrotate(root);

   
//     if (bf < -1 && value > root->right->data)
//         return leftrotate(root);


//     if (bf > 1 && value > root->left->data)
//     {
//         root->left = leftrotate(root->left);
//         return rightrotate(root);
//     }

//     // RL case
//     if (bf < -1 && value < root->right->data)
//     {
//         root->right = rightrotate(root->right);
//         return leftrotate(root);
//     }

//     return root;
// }



// bool checkAVL (Node* &root)
// {
//     if (root == NULL)
//     {
//         cout << "Yes it's AVL" << endl;
//     }

//     int bf = getbalancefactor (root);

//     if (bf>1 || bf<-1)
//     {
//         return false;
//     }
//     else
//     {
//        return checkAVL (root->left) && checkAVL(root->right);

//     }

// }

// int main ()
// {
//     Node* root = NULL;
//     Node* current = root;

//     insertion(root, 25);
//     insertion(root, 36);
//     insertion(root, 91);
//     insertion(root, 83);
//     insertion(root, 2);
//     insertion(root, 17);
//     insertion(root, 14);
//     insertion(root, 50);
//     insertion(root, 6);
//     insertion(root, 62);

//     checkAVL(root);
//     return 0;
// }


#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
public:
    Node* left;
    Node* right;
    Node* parent;

    int data;
    int height;

    Node()
    {
        data = 0;
        height = 0;
        left = NULL;
        right = NULL;
        parent = NULL;
    }

    Node(int d)
    {
        data = d;
        height = 0;
        left = NULL;
        right = NULL;
        parent = NULL;
    }
};

int getheight(Node* current)
{
    if (current == NULL)
        return -1;

    return current->height;
}

void updateheight(Node* current)
{
    current->height = 1 + max(
        getheight(current->left),
        getheight(current->right)
    );
}

int getbalancefactor(Node* current)
{
    if (current == NULL)
        return 0;

    return getheight(current->left) -
           getheight(current->right);
}

Node* rightrotate(Node* current)
{
    Node* templeft = current->left;
    Node* templeftright = templeft->right;

    templeft->right = current;
    current->left = templeftright;

    if (templeftright != NULL)
        templeftright->parent = current;

    templeft->parent = current->parent;
    current->parent = templeft;

    updateheight(current);
    updateheight(templeft);

    return templeft;
}

Node* leftrotate(Node* current)
{
    Node* tempright = current->right;
    Node* temprightleft = tempright->left;

    tempright->left = current;
    current->right = temprightleft;

    if (temprightleft != NULL)
        temprightleft->parent = current;

    tempright->parent = current->parent;
    current->parent = tempright;

    updateheight(current);
    updateheight(tempright);

    return tempright;
}

Node* insertion(Node* root, int value)
{
    if (root == NULL)
        return new Node(value);

    if (value < root->data)
    {
        root->left = insertion(root->left, value);
        root->left->parent = root;
    }
    else if (value > root->data)
    {
        root->right = insertion(root->right, value);
        root->right->parent = root;
    }
    else
    {
        return root;
    }

    updateheight(root);

    int bf = getbalancefactor(root);

    // LL case
    if (bf > 1 && value < root->left->data)
        return rightrotate(root);

    // RR case
    if (bf < -1 && value > root->right->data)
        return leftrotate(root);

    // LR case
    if (bf > 1 && value > root->left->data)
    {
        root->left = leftrotate(root->left);
        root->left->parent = root;
        return rightrotate(root);
    }

    // RL case
    if (bf < -1 && value < root->right->data)
    {
        root->right = rightrotate(root->right);
        root->right->parent = root;
        return leftrotate(root);
    }

    return root;
}

bool checkAVL(Node* root)
{
    if (root == NULL)
        return true;

    int bf = getbalancefactor(root);

    if (bf > 1 || bf < -1)
        return false;

    return checkAVL(root->left) &&
           checkAVL(root->right);
}

int main()
{
    Node* root = NULL;

    root = insertion(root, 25);
    root = insertion(root, 36);
    root = insertion(root, 91);
    root = insertion(root, 83);
    root = insertion(root, 2);
    root = insertion(root, 17);
    root = insertion(root, 14);
    root = insertion(root, 50);
    root = insertion(root, 6);
    root = insertion(root, 62);

    if (checkAVL(root))
        cout << "Yes, it's an AVL tree." << endl;
    else
        cout << "No, it's not an AVL tree." << endl;

    return 0;
}
