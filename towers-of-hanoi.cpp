#include <iostream>
using namespace std;

void TOF(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << source
             << " to " << destination << endl;
        return;
    }

    
    TOF(n - 1, source, destination, auxiliary);

   
    cout << "Move disk " << n << " from "
         << source << " to " << destination << endl;

    
    TOF(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    TOF(n, 'A', 'B', 'C');

    return 0;
}