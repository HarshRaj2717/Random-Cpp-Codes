#include <bits/stdc++.h>

using namespace std;

bool myCompartor(vector<int> a, vector<int> b)
{
    return a[2] > b[2];
}

int main()
{
    // priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    priority_queue<vector<int>, vector<vector<int>>, function<bool(vector<int>, vector<int>)>> pq(myCompartor);
    pq.push({1, 2, 3});
    pq.push({4, 7, 4});
    pq.push({0, 20000, 50});
    pq.push({500, -11, -2});
    pq.push({1, 2, 3});
    while (!pq.empty())
    {
        for (int i : pq.top())
            cout << i << ' ';
        cout << endl;
        pq.pop();
    }
    return 0;
}