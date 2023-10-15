//source : https://tlx.toki.id/problems/toki-exercise-1/P03
#include <iostream>
#include <climits>
using namespace std;
int truk[6];
int minimum(int a[]){
    int maks = INT_MIN;
    for (int i = 0; i < 6; i++){
        if (maks < a[i]){
            maks = a[i];
        }
    }
    return maks;
}
int maksimum(int a[]){
    int minim = INT_MAX;
    for (int i = 0; i < 6; i++){
        if (minim > a[i]){
            minim = a[i];
        }
    }
    return minim;
}
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    for (int i = 0; i < 6; i++){
        cin >> truk[i];
        if (i % 2 != 0){
            truk[i] -= 1;
        }
        
    }
    int MIN_TRUK = maksimum(truk);
    int MAX_TRUK = minimum(truk);
    int bayaran = 0;
    for (int i = MIN_TRUK; i <= MAX_TRUK; i++){
        int truks = 0;
        if (truk[0] <= i and i <= truk[1]){
            truks++;
        }
        if (truk[2] <= i and i <= truk[3]){
            truks++;
        }
        if (truk[4] <= i and i <= truk[5]){
            truks++;
        }
        
        /*Ngitung Duid*/
        if (truks == 1){
            bayaran += A;
            
        }else if (truks == 2){
            bayaran += (B * 2 );
            
        }else if (truks == 3){
            bayaran += (C * 3);
            
        }
        
    }
    cout << bayaran;
    
}
