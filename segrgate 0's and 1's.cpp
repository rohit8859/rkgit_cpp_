#include <bits/stdc++.h>

using namespace std;
    void segregate0and1(int arr[], int n) {
      int type0 = 0;
      int type1 = n - 1;

      while (type0 < type1) {
        if (arr[type0] == 1) {
          swap(arr[type0], arr[type1]);
          type1--;
        } else {
          type0++;
        }
      }
    }

int main() {
  int n = 5;
  int arr[]={1,0,1,0,1};
  cout << "Before Sorting: ";
  for (int a: arr)
    cout << a << " ";
  cout << endl;
  segregate0and1(arr, n);
  cout << "After Sorting: ";
  for (int a: arr)
    cout << a << " ";
}
