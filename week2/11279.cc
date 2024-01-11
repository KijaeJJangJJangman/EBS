#include <iostream>
#include <queue>
#include <vector>
using namespace std;
priority_queue<int,vector<int>,less<int>> pq;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for(int i = 0 ; i < n;i++){
        int a;
        cin >> a;
        if(a == 0){
            if(pq.empty()){
                cout << "0" << "\n";
            }
            else{
                cout << pq.top() << "\n";
                pq.pop();
            }
        }else{
            pq.push(a);
        }
    }
    return 0;
}