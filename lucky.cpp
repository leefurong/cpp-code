#include<iostream>
using namespace std;
string to_s(int a, int n){
    string result="";
    while(a!=0){
        result = (char)(a%n+'0') + result;
        a/=n;
    }
    return result;
}
bool haveZero(string s){
    for(int i=0; i<s.size(); i++){
        if (s[i]=='0'){
            return true;
        }
    }
    return false;
}
bool haveZero(int a, int n){
    return haveZero(to_s(a, n));
}
bool lucky(int a){
    for (int i=5; i<=9; i+=2){
        if (haveZero(a, i)){
            return false;
        }
    }
    return true;
}
int main(){
    int a, b;
    cin >> a>>b;
    int total=0;
    for(int i=a; i<=b; i++){
        if (lucky(i)){
            total++;
        }
    }
    cout << total;
}