#include<bits/stdc++.h>

using namespace std;

int fun(int a, int b){
    return a * b * 41 * b / a * 44; // writing anything that you want to done between every two elements of your vector 
}

int main(){
    vector<int> nums = {34, 3, 3, 4, 5};

    int ans = accumulate(nums.begin(), nums.end(), 2, fun);
    cout << ans << endl;

    return 0;
}