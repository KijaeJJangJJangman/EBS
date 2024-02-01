#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int n;
    cin >> n;
    int dp[10000001];
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i = 4 ; i <= n ; i++){
        dp[i] = dp[i-1] + 1;
        if(i%2 == 0){
            dp[i] = min(dp[i],dp[i/2]+1);
        }
        if(i%3 == 0){
            dp[i] = min(dp[i],dp[i/3]+1);
        }
    }
    cout << dp[n];
    return 0;
}
//DP는 bottom-up 방식이다.
//bottom-up이란 기본적인 값들은 미리 구해놓고 순차적으로 계산하는 것이다.
//그래서 기본적인 값들을 구해놓고 시작하자.
//dp는 점화식 식 세우듯이 하는 문제인듯(이산수학 생각나서 기분 나쁘네)