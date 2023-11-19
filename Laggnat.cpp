//scr : https://tlx.toki.id/problems/troc-18/B
#include <iostream>
using namespace std;
int main(){
    int m, d;
    cin >> m >> d;   
    if (m > 12){
        cout << "NO";
        goto loncat;
    }    
    if (m <= 6){
        if (m % 2 == 1){
            if (1 <= d <= 31 ){
                cout << "YES";
            }else{
                cout << "NO";
            }
        }else{
            if (m == 2){
                if (1 <= d <= 28){
                    cout << "YES";
                }else{
                    cout << "NO";
                }
            }else{
                if (1 <= d <= 30){
                    cout << "YES";
                }else{
                    cout << "NO";
                }
            }
        }
    }else{
        if (m % 2 == 0){
            if (1 <= d <= 31){
                cout << "YES";
            }else{
                cout << "NO";
            }
        }else{
            if (1 <= d <= 30){
                cout << "YES";
            }else{
                cout << "NO";
            }  
        }
    }
    loncat:
    return 0;
}
