//source : https://tlx.toki.id/problems/troc-17/C
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define mod %
ll SNI = 998244353;
ll isi[200005];
ll pungsi(int x){
	for (int i = 0; i < x; ++i){
		cin >> isi[i];
	}

	ll total = 1;
	ll jawa;
	for (int i = 0; i < x-1; ++i){
		for (int j = i+1; j < x; ++j)
		{
			jawa = isi[i] xor isi[j] mod SNI;
			total = ( jawa * total) mod SNI;
		}
	}

	return total;
}
int main()
{
	int N;
	cin >> N;
	if (N > 2000){
		cout << 0;
	}else{
	cout << pungsi(N);
	}

	return 0;
}
