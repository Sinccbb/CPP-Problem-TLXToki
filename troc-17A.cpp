//source : https://tlx.toki.id/problems/troc-17/A
#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio();
    cin.tie();
    int n;
    cin >> n;
    int jumlah = 0, mentahan;
    for (int i = 0; i < n; i++)
    {
        cin >> mentahan;
        jumlah += mentahan;
    }
    for (int i = 0; i < n; i++)
    {
        int pangkat_bomat;
        cin >> pangkat_bomat;
    }
    
    if (jumlah % 2 == 0)
    {
        cout << 0;
    }else {
        cout << 1;
    }
    
    
}