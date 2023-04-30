// This is the code of zero pair problem in a naive approach
// The time complexity being O(n^2)

#include <iostream>
using namespace std;

namespace {
    int array[] = {2,5,-5,4,7,8,-8};
    int size = sizeof(array) / sizeof(array[0]);
}

int main()
{
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (!(array[i] + array[j]))
                printf("%d, %d\n",array[i],array[j]);
        }
    }
}