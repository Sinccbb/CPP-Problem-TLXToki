#include <bits/stdc++.h>
using namespace std;
int main(){
    int basa_basi_doang_cuy_aslinya_kagak_guna;
    string s;
    cin >> basa_basi_doang_cuy_aslinya_kagak_guna;
    cin >> s;
    auto huruf = unique(s.begin(), s.end());
    s.erase(huruf, s.end());
    cout << s;
    return 0;
}
