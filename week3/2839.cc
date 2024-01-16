#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int total = 0,n;
    cin >> n;
    while(n >= 0){
        if(n % 5 == 0){
            total += n/5;
            cout << total;
            return 0;
        }
        n -= 3;
        total += 1;
    }
    cout << "-1";
    return 0;
}