#include <iostream>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>> pq;
int n,a,total = 0;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a;
        pq.push(a);
    }
    for(int i = n ; i >= 1 ; i--){
        total += pq.top()*i;
        pq.pop();
    }
    cout << total;
    return 0;
}