#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a[101];
    int dp[10001];
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
    dp[0] = 0;
    for(int i = 1 ; i <= k ; i++){
        dp[i] = 10001;
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = a[i] ;  j <= k ; j++){
            dp[j] = min(dp[j], dp[j-a[i]]+1);
        }
    }
    if(dp[k] == 10001){
        cout << "-1";
    }else{
        cout << dp[k];
    }
    return 0;
}

//https://jaemin8852.tistory.com/163