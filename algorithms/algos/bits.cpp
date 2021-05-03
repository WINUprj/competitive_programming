/*
You need to review the bitwise operation (review what does every operation means and 
how we can use them in the actual problem settings)
*/
#include <bits/stdc++.h> 
using namespace std; 

typedef string str; 

bool get_bit(int num, int i); 
int set_bit(int num, int i); 
int clear_bit(int num, int i, str type); 
int update_bit(int num, int i, int v); 

int main(){
    int num = 3, i = 2; 
    int res = set_bit(num, i); 
    cout << get_bit(num, i) << endl; 
    cout << res << endl; 
    res = clear_bit(num, i, "through_i"); 
    cout << res << endl; 
    res = update_bit(num, i, 2); 
    cout << res << endl; 
}


bool get_bit(int num, int i){
    // return whether ith bit of num is 1 or not 
    return (num & (1 << i) != 0); 
}


int set_bit(int num, int i){
    // set the ith bit to 1 
    return num | (1 << i); 
}


int clear_bit(int num, int i, str type){
    // clear the ith bit of num (or not)  
    int mask; 
    if (type == "single")
        mask = ~(1 << i);   // single bit clearing 
    else if (type == "through_i")
        mask = (1 << i) - 1;    // from top to i
    else
        mask = ~((1 << (i+1)) - 1);  // from i to 0 
    return num & mask; 
}

int update_bit(int num, int i, int v){
    int mask = ~(1 << i); 
    return (num & mask) | (v << i); 
}