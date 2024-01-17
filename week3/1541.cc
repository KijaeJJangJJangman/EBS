#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int result = 0;
    string num;
    bool isminus = false;

    for(int i = 0 ; i <= s.size() ; i++){
        if(s[i] == '-' || s[i] == '+' || i == s.size()){
            if(isminus){
                result -= stoi(num);
                num = "";
            }else{
                result += stoi(num);
                num = "";
            }
        }else{
            num += s[i];
        }
        if(s[i] == '-'){
            isminus = true;
        }
    }
    cout << result;
    return 0;
}