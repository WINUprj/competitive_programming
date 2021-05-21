#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define str std::string 

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

vector<int> trial_division(int n); 

int main(){
    int n; 
    cin >> n; 
    vector<int> res; 
    res = trial_division(n); 
    for (auto i = res.begin(); i != res.end(); ++i)
        cout << *i << endl; 
    cout << "Number of factors: " << res.size() << endl;
}

vector<int> trial_division(int n){
    vector<int> res; 
    while (n%2==0){
        res.push_back(2); 
        n /= 2; 
    }
    int i = 3; 
    while (i*i <= n){
        if (n%i==0){
            res.push_back(i); 
            n /= i; 
        }
        else 
            i += 2; 
    }
    if (n != 1) 
        res.push_back(n); 
    return res; 
}