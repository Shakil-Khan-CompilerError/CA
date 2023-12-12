#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high, int iteration)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);


        if (iteration <= 4)
        {
            cout << "Iteration " << iteration << ": ";
            for (int i = low; i <= high; ++i)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        quickSort(arr, low, pivotIndex - 1, iteration + 1);
        quickSort(arr, pivotIndex + 1, high, iteration + 1);
    }
}

void printArray(const vector<int>& arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {9, 11, 8, 5, 6, 2};

    cout << "Original array: ";
    printArray(arr);

    quickSort(arr, 0, arr.size() - 1, 1);

    cout << "Sorted array is: ";
    printArray(arr);

    return 0;
}
