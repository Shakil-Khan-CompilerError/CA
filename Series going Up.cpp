#include <bits/stdc++.h>
using namespace std;

int Sum_Series_Up(int m, int n, int total_Sum = 0)
{
    if (m == n)
    {
        return total_Sum + n * n;
    }
    else
    {
        return Sum_Series_Up(m, n - 1, total_Sum + n * n);
    }
}

int main()
{

    int m,n;
    cout<<"Enter a value of m : ";
    cin>>m;
    cout<<"Enter a value of n Steps : ";
    cin>>n;
    int totall = Sum_Series_Up(m, n);
    cout << "The Total Sum of Series is : " << totall << endl;

    return 0;
}
