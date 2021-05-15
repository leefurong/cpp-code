// http://www.jzoj.cn/problem.php?id=2009
// 自由落体
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double M, N;
    cin >> M >> N;
    double x = M;

    float a, total=0;
    for (int i=0;  i<N; i++){
        a = M/2;
        total += M * 2;
        M = M/2;
    }
    
    total -= x;

    cout << fixed<<setprecision(2)<<a <<" "<< total;
}