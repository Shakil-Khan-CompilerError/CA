#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout <<"Enter Array Size : ";
    cin>>n;

    int arr[n];

    cout<<"Given array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=1;j<n;j++)
    {
        int temp = arr[j];
        int k=j-1;
        while(k>=0 && temp <= arr[k])
        {
            arr[k+1] = arr[k];
            k = k-1;

        }
        arr[k+1] = temp;

        cout << "After step " << j << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

    }
    cout<<"The sorted array is : ";
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
