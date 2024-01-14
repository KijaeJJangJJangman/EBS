#include <iostream>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>> pq;


int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    int total = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        pq.push(a);
    }
    while(pq.size() > 1){
        int n1, n2;
        n1 = pq.top();
        pq.pop();
        n2 = pq.top();
        pq.pop();
        total += (n1+n2);
        pq.push(n1+n2);
    }
    cout << total;
    return 0;
}