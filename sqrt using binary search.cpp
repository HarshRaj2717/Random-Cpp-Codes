#include<iostream>

using namespace std;

// TODO: Find a way to fid the square roots to certain precesions where the precision is provided by user.
// For eg: Currently giving 10 as input it returns 3 where as it must return 3.16 if precesion=2 is provided.

int findsqrt_ints(int n){
    int s = 0;
    int e = n;
    int m = (s+e)/2;

    while (s<=e){
        if (m*m==n){
        break;
        }
        else if (m*m > n){
        e = m-1;
        }
        else if (m*m < n){
        s = m+1;
        }
        
        m = (s+e)/2;
    }

    return m;
}

int main(){
    int n, pre;
    cout << "Enter the number : ";
    cin >> n;
    // cout << "Enter precision : ";
    // cin >> pre;
    float ans = findsqrt_ints(n);
    cout << ans << "\n";
    return 0;
}