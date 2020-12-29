/* almost same as C is, so will write some essential parts */

/* Brief notes: 
register storage class: store variable inside the storage instead of memory (to have a quicker access)
*/

// basic imports 
// builtin version of math.h
#include <cmath>
#include <cstdlib>
#include <ctime> 
#include <iostream>
#include <string> 

using namespace std; 
// enumerated types 
enum color {red, green, blue} c; 

int main(){
    c = blue;
    // string type is supported (control similar to one with python)
    string a = "hello"; 
    // this will print out 2 
    cout << c << endl; 
    return 0; 
}
