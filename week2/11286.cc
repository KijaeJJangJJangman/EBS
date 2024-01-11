#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
struct cmp{
    bool operator()(int a, int b){
        if(abs(a) == abs(b)){
            return a > b;
        }else{
            return abs(a) > abs(b);
        }
    }
};//절댓값이 더 작은 값에 우선순위를 주고 절댓값이 같다면 더 작은 값에 우선순위를 준다는 뜻
priority_queue<int,vector<int>,cmp> pq;

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