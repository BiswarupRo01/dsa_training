/*
* This is not the best solution 
* BITWISE OPERATORS provide the best solution.
*/

#include <bits/stdc++.h>
using namespace std;

class Numbers
{
    public:
        int singleNumber (vector <int>& nums) {
            unordered_map <int, int> umap;

            for (auto &x: nums) {
                umap[x] = 0;
            }
            
            for (auto &x: nums) {
                if (umap[x] != 0) {
                    umap[x] += 1; 
                }
                else {
                    umap[x] = 1;
                }
            }


            for (auto i = umap.begin(); i != umap.end(); ++i) {
                if ((*i).second == 1)
                    return (*i).first;
            }
            
            return -1;
        }
};

int main()
{
    vector <int> nums{4,1,2,1,2};

    Numbers ob;
    cout << ob.singleNumber(nums) << '\n';

}