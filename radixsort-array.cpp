#include <iostream>
using namespace std;

int main()
{   int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter the elements:\n";

    int maximum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] > maximum)
        {
            maximum = a[i];
        }
    }

    // Radix Sort
    for (int divisor = 1; maximum / divisor > 0; divisor = divisor * 10)
    {
        int bucket[10][n];
        int count[10] = {0};

        // Put elements into buckets
        for (int i = 0; i < n; i++)
        {
            int digit = (a[i] / divisor) % 10;

            bucket[digit][count[digit]] = a[i];
            count[digit]++;
        }

        // Collect elements from buckets
        int index = 0;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < count[i]; j++)
            {
                a[index] = bucket[i][j];
                index++;
            }
        }
    }

    cout << "\nSorted array:\n";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
