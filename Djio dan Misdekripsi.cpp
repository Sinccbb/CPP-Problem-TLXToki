// src : https://tlx.toki.id/problems/bnpchs-2023-penyisihan/A/submissions/1570317
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, bint = 0;
    char kata[1001];
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> kata[i];
        if (kata[i] == '*'){
            bint++;
        }
        if (bint % 2 == 0)
        {
            if (kata[i] != '*')
            {
                cout << kata[i];
            }
            
        }
        
        
    }
    
    
    return 0;
}
