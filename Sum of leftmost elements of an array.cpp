#include<iostream>

using namespace std;

int main(){
    int len, left_sum;
    cin >> len;
    
    int arr[len];
    for(int i=0; i<len; i++){
        cin >> arr[i];
    }

    left_sum = 0;
    cout << 0;
    for(int i=1; i<len; i++){
        left_sum = left_sum + arr[i-1];
        cout << " " << left_sum;
    }

    return 0;
}