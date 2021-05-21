#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define str std::string 

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve(){
	int n;cin>>n; 
	// reduce n to 1 optimally 
	int m=1; 
	while (n%2==0) {
		n/=2; 
		m*=2; 
	} 
	int x=1; 
	for (int i=2;i*i<=n;i++){
		if (n%i==0){
			x = 0; 
		} 
	} 
	if ((n==1 && m!=2)||(x && n!= 1 && m==2))
		cout << "FastestFinger" << endl; 
	else
		cout << "Ashishgup" << endl;
}


int main() {
	int t;cin >> t; 
	while (t--) solve(); 
}
