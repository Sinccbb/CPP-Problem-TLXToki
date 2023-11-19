//src : https://tlx.toki.id/problems/troc-18/B
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n % 2 == 0){
        cout << n*n;
    }else{
        cout << n*n - 1;
    }
    return 0;
}
