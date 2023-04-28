#include <bits/stdc++.h>
using namespace std;

class Candy
{
    public:
        int candy (vector <int>& ratings) {
            int res = 0, n = ratings.size();

            vector <int> left(ratings.size(), 1);
            vector <int> right(ratings.size(), 1);

            for (int i = 1; i < n; ++i) {
                if (ratings[i] > ratings[i - 1])
                    left[i] = left[i - 1] + 1;
            }

            for (int i = n - 2; i >= 0; --i) {
                if (ratings[i] > ratings[i + 1])
                    right[i] = right[i + 1] + 1;
            }

            for (int i = 0; i < n; ++i) {
                res += max(left[i], right[i]);
            }

            return res;
        }
};

int main()
{
    vector <int> ratings{1,2,2};

    Candy ob;
    cout << ob.candy(ratings) << '\n';

}