#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define str std::string 

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve(){
	ll t; 
	cin >> t; 
	vector<int> idx;  
	for (int i=0;i<t;i++){
		char temp; 
		cin >> temp; 
		if (temp == '*')
			idx.push_back(i); 
	} 

	if (idx.size()==0|idx.size()==t){
		cout << 0 << endl; 
		return; 
	} 

	ll mid = idx.size()/2, cnt=0; 
	for (int i=0;i<idx.size();i++)
		cnt += abs(idx[i]-idx[mid]) - abs(i-mid); 
	cout << cnt << endl;
}

int main() {
	int n; 
	cin >> n; 
	while(n--){
		solve(); 
	} 
}
