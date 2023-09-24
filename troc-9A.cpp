//source : https://tlx.toki.id/problems/troc-9/A/submissions/1554927
#include <iostream>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio();
    cin.tie();
    
    string namlom;
    cin >> namlom;
    bool check = true;
    int huruf = 0;
    for (int i = 0; i < namlom.length(); i++){
        if (int(namlom[i]) < 65 and int(namlom[i]) > 90){
            check = false;
        }
        if (namlom[i] == 'O'){
            huruf++;
        }
    }
    if (huruf != 1){
        check = false;
    }
    
    if (check)
    {
        cout << "Ya";
    }else{
        cout << "Tidak";
    }
    
    return 0;

}
