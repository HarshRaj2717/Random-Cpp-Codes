#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    
    int Len;
    cin >> Len;
    int arr[Len];

    for (int i = 0; i < Len; i++) {
        cin >> arr[i];
    }

    vector<int> vect_arr(arr, arr+Len);

    reverse(vect_arr.begin(), vect_arr.end());

    for (int i = 0; i < Len; i++) {
        cout << vect_arr[i] << " ";
    }

    cout << endl;


    // Regular method to reverse a string.

    // for (int i = Len-1; i > -1; i--) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    return 0;
}
