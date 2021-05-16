#include<iostream>
using namespace std;

long long memory[21][21][21];
long long w(long long a, long long b, long long c){
    if (a<=0||b<=0||c<=0){
        return 1;
    }else if (a>20||b>20||c>20){
        return w(20,20,20);
    }else{
        if (memory[a][b][c]){
            return memory[a][b][c];
        }
        if (a<b&&b<c){
            return memory[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
        }else{
            return memory[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
        }
    }
}
int main(){
    while(true){
        long long a,b,c;
        cin >> a>>b>>c;
        if (a==-1&&b==-1&&c==-1){
            break;
        }
        long long ans = w(a,b,c);
        cout << "w("<<a<<", "<<b<<", "<<c<<") = "<< ans<<endl;
    }
}