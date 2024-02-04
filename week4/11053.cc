#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    int dp[1001];
    int a[1001];
    int ans = 0;
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
    for(int i = 1 ; i <= n ; i++){
        dp[i] = 1;
        for(int j = i-1 ; j >= 1 ; j--){
            if(a[i] > a[j]){
                dp[i] = max(dp[i],dp[j] + 1);
            }
        }
        ans = max(ans,dp[i]);
    }
    cout << ans;
    return 0;
}