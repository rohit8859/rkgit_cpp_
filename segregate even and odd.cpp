#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void segregateEvenOdd(vector<int> &arr) {
    int lo = 0, hi = arr.size() - 1;

    while (lo < hi) {
      
        // Increment lo index while even number 
        // is found at lo
        while (arr[lo] % 2 == 0 && lo < hi)
            lo++;

        // Decrement hi index while odd number 
        // is found at hi
        while (arr[hi] % 2 == 1 && lo < hi)
            hi--;

        if (lo < hi) {
            swap(arr[lo], arr[hi]);
            lo++;
            hi--;
        }
    }
}

int main() {
    vector<int> arr = {12, 34, 45, 9, 8, 90, 3};
    segregateEvenOdd(arr);
    cout << "Array after segregation: ";
    for (int x : arr)
        cout << x << " ";
    return 0;
}
