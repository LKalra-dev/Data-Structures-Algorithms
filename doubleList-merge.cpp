// 2 lists are merged and sorted simultaneously (not a MERGE SORT apparently)
#include <iostream>
using namespace std;

void merges(int a[], int b[], int l1, int h1, int l2, int h2, int c[])
{
    int i = l1, j = l2, k = 0;

    while (i <= h1 && j <= h2)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }

        else
        {
            c[k] = b[j];
            j++;
        }

        k++;

        if (i == h1 + 1)
        {
            while (j <= h2)
            {
                c[k] = b[j];
                j++;
                k++;
            }
        }
        else if (j == h2 + 1)
        {
            while (i <= h1)
            {
                c[k] = a[i];
            }
        }
    }
}

int main()
{
    int l1, l2, h1, h2;
    cout << "Define the lower and higher limits of list 1 and then list 2 respectively." << endl;
    cin >> l1 >> l2 >> h1 >> h2;
    int a[h1 - l1 + 1], b[h2 - l2 + 1], c[h1 + h2];
    cout << "Enter list a" << endl;
    for (int i = l1; i < h1; i++)
    {
        cin >> a[i];
        cout << endl;
    }

    cout << "Enter list b" << endl;

    for (int i = l2; i < h2; i++)
    {
        cin >> b[i];
        cout << endl;
    }

    merges(a, b, l1, h1, l2, h2, c);

    for (int i = 0; i<((h1+h2)-(l1+l2)+2); i++)
    {
        cout << c[i] << endl;
    }


    return 0;
}
