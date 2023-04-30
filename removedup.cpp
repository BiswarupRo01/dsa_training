#include <bits/stdc++.h>
using namespace std;

namespace {
    unordered_set <int> set1;
    int size;
}

int main()
{
    vector <int> vect{1,2,3,3,3,4,5,5,6,6,6,3,3,5,6,6,7,4,6,7,7,4,45}; 
    for (auto &x: vect) {
        set1.insert(x);
    }

    for (auto &x: set1) {
        cout << x << ' ';
    }
    cout << '\n';

}