#include <bits/stdc++.h>
using namespace std;

void TOH(int n, char Sour, char Aux, char Des)
{
    if (n == 1)
    {
        cout << "Disk " << n << " moved from " << Sour << " to " << Des << endl;
        return;
    }

    TOH(n - 1, Sour, Des, Aux);
    cout << "Disk " << n << " moved from " << Sour << " to " << Des << endl;
    TOH(n - 1, Aux, Sour, Des);
}
int main()
{
    int n;

    cout << "Enter no of disks: ";
    cin >> n;
    TOH(n, 'A', 'B', 'C');

    return 0;
}
