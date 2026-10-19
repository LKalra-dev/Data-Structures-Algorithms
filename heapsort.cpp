#include <iostream>
using namespace std;

void maxheapify (int a[], int n, int i)
{
    int largest = i;
    int lof = 2*i+1;
    int rof = 2*i+2;

    if (lof < n && a[lof]>a[largest])
    {
        largest = lof;
    }

    if (rof < n && a[rof]>a[largest])
    {
        largest = rof;
    }

    if (largest != i)
    {
        swap (a[i], a[largest]);
        maxheapify (a, n, largest);
    }
}

void buildheap (int a[], int n)
{
    for (int i = (n/2) - 1 ; i>=0; i--) //n/2-1 is the last node that is not a leaf node, rest are leaf node, hence don't have children.
    {
        maxheapify(a, n, i);
    }
}

void heapsort (int a[], int n)
{
    buildheap(a,n);
    for (int i = n-1; i>=0; i--)
    {
        swap(a[i], a[0]);
        maxheapify(a, i, 0);
    }
}
    