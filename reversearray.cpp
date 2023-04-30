// Reverse array by swapping element

#include <iostream>

using namespace std;

int main()
{
    char array[] = {'M', 'A', 'N', 'G', 'O'};
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0, j = size - 1; i < j; ++i, --j)   // This is actually a nested loop
    {
        char temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    // output
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    cout << "\n";
}