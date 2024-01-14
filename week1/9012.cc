#include <iostream>
#include <stack>
using namespace std;
string check(string str){
    stack<char> s;
    for(int i = 0 ; i < str.length() ; i++){
        if(str[i] == '('){
            s.push(str[i]);
        }else if(str[i] == ')'){
            if(s.empty()){
                return "NO";
            }else{
                s.pop(); 
            }
        }
    }
    if(s.empty()){
        return "YES";
    }else{
        return "NO";
    }
}

int main(){
    int n;
    cin >> n;
    string a;
    for(int i = 0 ; i < n ; i++){
        cin >> a;
        cout << check(a) << endl;
    }
    return 0;
}