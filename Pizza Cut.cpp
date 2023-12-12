#include <bits/stdc++.h>
using namespace std;

int cut(int n)
{
    if(n==1)
        return 2;
    else
        return n+ cut(n-1);
}
int main()
{
    int n;
    cout<<"Enter a Number of cuts : ";
    cin>>n;

    cout<<"Maximum Number of pieces : "<<cut(n)<<endl;

}

