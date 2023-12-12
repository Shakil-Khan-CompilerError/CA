#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1);
    vector<int> R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r, int iteration) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m, iteration + 1);
        mergeSort(arr, m + 1, r, iteration + 1);

        merge(arr, l, m, r);

        if (iteration <= 4) {
            cout << "Iteration " << iteration << ": ";
            for (int i = 0; i <= r; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}

void printArray(const vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {10, 11, 9, 5, 6, 3};

    cout << "Original array: ";
    printArray(arr);

    mergeSort(arr, 0, arr.size() - 1, 1);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
