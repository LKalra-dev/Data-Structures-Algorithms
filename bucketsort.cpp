#include <iostream>
using namespace std;

// void inserter (int *a, int *b)
// {
//     for(int i=0; i<8; i++)
//     {
//         int index = a[i]/10;
//         int k=0;
//         b[index][k] = a[i];
//         index++;
//     }
// }

int main ()
{
    int a[8] = {29,11,43,25,36,14,7,32};

    int largest = a[0];
    for (int i = 0; i<8; i++)
    {
        if (a[i]>largest)
        {
            largest = a[i];
        }
    }

    int bn = largest / 10;

    int bucket[bn+1][8]={0};

    for(int i=0; i<8; i++)
    {
        int index = a[i]/10;
        int k=0;
        while (bucket[index][k]!=0)
        {
            k++;
        }
        bucket[index][k] = a[i];
    }


}