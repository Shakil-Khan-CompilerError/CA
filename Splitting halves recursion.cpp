#include <bits/stdc++.h>
using namespace std;

int seriesSumSplit(int m, int n)
{
    if (m == n)
    {
        return m * m;
    }
    else
    {
        int mid = (m + n) / 2;
        return seriesSumSplit(m, mid) + seriesSumSplit(mid + 1, n);
    }
}

int main()
{
    int m_value_split = 2;
    int n_value_split = 4;
    int result_split = seriesSumSplit(m_value_split, n_value_split);

    std::cout << "Splitting Halves Result: " << result_split << std::endl;

    return 0;
}
