#include <bits/stdc++.h> 

using namespace std; 

typedef string str; 

int main(){
    // hash table with STL 
    unordered_map<int, string> val = {
        {1, "validation"}, 
        {2, "creation"}, 
        {3, "hello"}
    }; 
    cout << val[1] << endl; 
    // array (refer to more detailed operations here: https://docs.microsoft.com/en-us/cpp/standard-library/vector-class?view=msvc-160) 
    vector<int> a; 
    a.push_back(1); // append the value 
    cout << a[0] << endl; 
    // string 
    string b = "hello"; 
    cout << b << endl; 
    return 0; 
}