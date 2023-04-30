/* Very Important Question */
#include <bits/stdc++.h>

using namespace std;

vector <int> twosum(vector <int> &a, int &target)
{
    int n = a.size();

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] + a[j] == target)
                return {i + 1, j + 1};
        }
    }
    return {};
}

int main()
{
    vector <int> a = {2, 4, 6, 8, 9 ,10};
    int target = 14;

    for (int &x: twosum(a, target))
    {
        cout << x << " ";
    }
    cout << '\n';
}