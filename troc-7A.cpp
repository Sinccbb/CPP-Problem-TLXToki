// source : https://tlx.toki.id/problems/troc-7/A
#include <iostream>
#include <algorithm>
using namespace std;
int negara[10];
int main(){
    int N, indonesia;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> negara[i];
    }
    cin >> indonesia;
    for (int i = 0; i < N; i++){
        if (negara[i] == indonesia){
            cout << i+1;
            break;
        }
        
    }
    return 0;
}
