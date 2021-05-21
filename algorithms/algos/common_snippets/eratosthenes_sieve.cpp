#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define str std::string 

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

tuple<bool, vector<int>> sieve(int n); 

int main(){
    int n; 
    cin >> n; 
    auto [is_prime, table] = sieve(n); 
    // add operations that you want to do 
}

tuple<bool, vector<int>> sieve(int n){
    bool is_prime[n+1] = {true}; 
    is_prime[0] = false; 
    
    for (int i=2; i <= n; i++){
        if (is_prime[i-1]){
            int temp = 2*i; 
            while (temp <= n){
                is_prime[temp-1] = false; 
                ++temp; 
            }
        }
    }
    vector<int> table; 
    for (int i=1; i <= n; i++){
        if (is_prime[i-1])
            table.push_back(i); 
    }
    return {is_prime, table}; 
}