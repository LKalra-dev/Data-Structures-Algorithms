//best method - SELECTION SORT, complexity- O(n);
#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter the elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int minIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[minIndex])
        {
            minIndex = i;
        }
    }

    // Put in at last position
    int temp = a[minIndex];
    a[minIndex] = a[n - 1];
    a[n - 1] = temp;

    cout << "After shifting smallest element to the end:\n";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}