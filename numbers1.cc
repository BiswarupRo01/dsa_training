/*
* LeetCode Problem 136.
*/

#include <bits/stdc++.h>
using namespace std;

class Number {
    public:
        int singleNumber (vector <int>& nums) {
            int num = 0;

            for (int &x: nums) {
                num ^= x;
            }

            return num;
        }

};

int main() {
    vector <int> nums{4,1,2,1,2};

    Number obj;
    cout << obj.singleNumber(nums);
}