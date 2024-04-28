#include <iostream>
#include <algorithm>

using namespace std;

void bubble_sort(int *, int);


int main()
{
    return 0;
}

void bubble_sort(int arr [], int n){
    bool sorted = true;
    while (sorted){
        sorted = false;
        for (int i = 0; i < n-1; ++i){
            if (arr[i] > arr[i+1]){
                sorted = true;
                swap(arr[i], arr[i+1]);
            }
        }
    }
}
