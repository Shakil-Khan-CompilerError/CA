#include <bits/stdc++.h>
using namespace std;

vector<int> counting_sort(vector<int> a, int div)
{
    vector<int> output(a.size());
    int i, count[10] = {0};
    for(i = 0; i < a.size(); i++)
        count[(a[i] / div) % 10]++;
    for(i = 1; i < 10; i++)
        count[i] += count[i-1];
    for(i = a.size() - 1; i >= 0; i--)
    {
        output[count[(a[i] / div) % 10] - 1] = a[i];
        count[(a[i] / div) % 10]--;
    }
    return output;
}

vector<int> radix_sort(vector<int> &a)
{
    int max = *max_element(a.begin(), a.end());
    for(int div = 1; max / div > 0; div *= 10)
    {
        a = counting_sort(a, div);
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int k = 0; k < n; k++) cin >> a[k];
    vector<int> ans = radix_sort(a);
    for(auto i : ans) cout << i << " ";
    cout << "\n";
    return 0;
}
