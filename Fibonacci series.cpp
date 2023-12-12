#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibo(n-1)+fibo(n-2));
    }
}
int main()
{
    int n, i=0;
    cout<<"Enter the length of Series : ";
    cin>>n;

    cout<<"The Fibonacci Series is : ";
    while(i < n)
    {
        cout << " " << fibo(i);
        i++;
    }
    cout<<endl;
    return 0;
}
