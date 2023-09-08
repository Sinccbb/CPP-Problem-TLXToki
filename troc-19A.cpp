//source : https://tlx.toki.id/problems/troc-19/A
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if ((a*a + b*b + 1) % 4 != 0 ){
        cout << -1;
    }else{
        cout << (a*a + b*b + 1) / 4;
    }
    
    return 0;
}
