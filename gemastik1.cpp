//source : https://tlx.toki.id/problems/gemastik-2022-pemrograman-penyisihan/A
#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

ll a,b,c,d;

int main()
{
    cin >> a >> b >> c >> d;
    if (a*d > c*b){
        cout << "lebih besar";
    }else if (a*d < b*c)
    {
        cout << "lebih kecil";
    }else if (a*d == b*c)
    {
        cout << "sama";
    }
    
    
    
    
    return 0;
}
