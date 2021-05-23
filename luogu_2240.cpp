#include<iostream>
using namespace std;

int gold[100][2]={{20, 100}, {0, 120},{10, 60},{15, 45}};
int N=4, T;

double price(int x){
    return gold[x][1]/gold[x][0];
}

int find_max_value(){
    int ans = 0;
    for (int i=0; i<N; i++){
        if (gold[i][0]!=0){
            if (price(i) > price(ans)){
                ans = i;
            }
        }
    }
    return ans;
}
int main(){
    int m = find_max_value();
    cout << m;
    // int total=0;
    // cin >> N >> T;
    // for (int i=0; i<N; i++){
    //     cin >> gold[i][0] >> gold[i][1];
    // }



    // for(){
    //     int bh = find_max_value();
    //     int zhuangduoshao = min(gold[bh][0], T);
    //     gold[bh][0] -= zhuangduoshao;
    //     T -= zhuangduoshao;
        
    //     total += zhuangduoshao * (gold[bh][1]/gold[bh][0]);

    // }
    // cout << total;
}