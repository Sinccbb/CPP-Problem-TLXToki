//source : https://tlx.toki.id/problems/gemastik-2017-pemrograman-penyisihan/A
#include <iostream>
#include <cstring>
#define ll long long
using namespace std;
int main(){
    ll A[105], B[105];
    memset(A, 0, 105);
    memset(B, 0, 105);
    ll N, sum = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
        cin >> B[i];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            sum += A[i] + B[j];
        }
    }
    cout << sum;
    
    
    
    return 0;
}
