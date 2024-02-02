#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int dp[1000000], s[1000000], n;
    cin >> n;
    int sum;
    for(int i = 0 ; i < n ; i++){
        cin >> s[i];
    }
    dp[0] = s[0];
    for(int i = 1 ; i < n ; i++){
        dp[i] = max(dp[i-1]+s[i],s[i]);
    }
    sum = dp[0];
    for(int i = 1 ; i < n ; i++){
        if(dp[i] >= sum){
            sum = dp[i];
        }
    }
    cout << sum;
    return 0;
}