#include <iostream>
using namespace std;

void push (int stack[], int &top, int value)
{
    if (top == 5)
    {
        cout << "Stack overflow." << endl;
        return;
    }
    else 
    {
        top++;
        stack[top] = value;
    }
}

void pop (int stack[], int &top)
{
    if (top == -1)
    {
        cout << "Stack Underflow." << endl;
    }

    else 
    {
        top--;
    }
}

int main ()
{
    int stack[6];
    int top;
    top = -1;

    push (stack, top, 5);
    push (stack, top, 10);
    push (stack, top, 2);
    push (stack, top, 15);
    push (stack, top, 0);
    push (stack, top, 25);

    pop (stack, top);
    pop (stack, top);

    cout << "List stack prepared till now." << endl;
    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << endl;
    }


    return 0;


}