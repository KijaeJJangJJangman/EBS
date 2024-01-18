#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n, a, b;
    vector<pair<int,int>> v;
    cin >> n;
    int cnt = 0, time;
    for(int i = 0 ; i < n; i++){
        cin >> a >> b;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(), v.end());
    time = v[0].first;
    cnt++;
    for(int i = 1 ; i < v.size() ; i++){
        if(time <= v[i].second){
            time = v[i].first;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}