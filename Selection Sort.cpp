#include <bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini_idx])
                mini_idx = j;
        }

        if (mini_idx != i)
        {
            swap(arr[mini_idx], arr[i]);

            cout << "After iteration " << i + 1 << ": ";
            for (int k = 0; k < n; k++)
            {
                cout << arr[k] << " ";
            }
            cout << "\n";
        }
    }
}

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Initial array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    Selection_Sort(arr, n);

    cout << "\nSorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


