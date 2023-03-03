#include<bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int, vector<int>> q1; // This works as a max heap.
    priority_queue<int, vector<int>, greater<int>> q2; // This works as a min heap. The std::greater<_> is actually a comparator that only signifies '>' and then is used to order the queue acordingly.
    q1.push(23);
    q1.push(33);
    q1.push(11);
    cout << q1.top() << endl;
    q1.pop();
    cout << q1.top() << endl;
    return 0;
}
