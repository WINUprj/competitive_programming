#include <bits/stdc++.h>
 
using namespace std;
 
#define ar array
#define ll long long
#define str std::string 

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

vector<int> get_divisor(int a); 

int main(){
    int a; 
    cin >> a; 
    vector<int> val; 
    val = get_divisor(a); 
    for (auto i = val.begin(); i != val.end(); ++i){
        cout << *i << endl; 
    }
}

vector<int> get_divisor(int a){
    vector<int> lower, higher; 
    int i = 1; 
    while (i*i <= a){
        if (a%i == 0){
            lower.push_back(i); 
            if (i != a/i){
                higher.push_back(a/i); 
            }
        }
        ++i; 
    }
    // using stl, we reverse higher one 
    reverse(higher.begin(), higher.end()); 
    lower.insert(lower.end(), higher.begin(), higher.end()); 
    return lower; 
}