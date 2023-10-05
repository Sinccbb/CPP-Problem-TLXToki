//https://tlx.toki.id/problems/troc-32/A
#include <iostream>
#define usd using namespace std;
#define im int main()
#define r0 return 0;
#define o cout
#define i cin
#define n int
#define y and
#define p or
usd
im{
    n N, A, B, C;
    i >> N >> A >> B >> C;

    if( ((N % A == 0) y (N % B != 0)) p (N % C == 0)){
        o << "YES";
    }else{
        o << "NO";
    }
     
    r0
}
