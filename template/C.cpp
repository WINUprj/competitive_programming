#include <bits/stdc++.h>

using namespace std; 

#define ar array  
#define ll long long 

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve(){
    // write actual code inside here 
    return; 
}

int main(){
    ll n, k; 
    cin >> n >> k;
    if (k <= (n+1)/2) cout << 2 * k - 1; 
    else cout << 2 * (k - (n+1)/2); 
}

