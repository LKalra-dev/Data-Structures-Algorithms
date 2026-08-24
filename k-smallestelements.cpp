#include <iostream>
using namespace std;

void selectK (int a[], int low, int high, int k)
{
    int pivot = a[low];

    int i = low + 1;
    int j = high;

    while (i <= j)
    {
        if (a[i] > pivot)
        {
            exit;
        }

        if (a[j] < pivot)
        {
            exit;
        }

        if (a[i] > a[j])
        {
            swap (a[i], a[j]);
        }
    }

    swap (pivot, a[j]);

    if (k==(j-1))
    {
        for (int l=0; l<k; l++)
        {
            cout << "k smallest elements - \n" << a[i] << endl; 
        }
    }

    else if (k<(j-1))
    {
        selectK(a, 0, j-1, 4);
    }

    else
    {
        selectK(a, j+1, 7, 4);
    }
}

int main ()
{
    int a[8];
    cout << "Enter elements - " << endl;
    for (int i = 0 ; i<8; i++)
    {
        cout << "element " << i << " = ";
        cin >> a[i];
    }

    selectK(a, 0, 7, 4);

    return 0;
}