#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define str std::string 

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main(){
    int a; 
    cin >> a; 
    cout << "floor: " << a / 2 << endl; 
    a /= 2; 
    ++a; 
    cout << "ceil: " << a << endl; 
}
