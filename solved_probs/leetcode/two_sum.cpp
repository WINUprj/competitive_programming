#include <bits/stdc++.h>  
using namespace std; 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = sizeof(nums)/sizeof(int); 
        if (size < 1){
            return; 
        }
        vector<int> res(2); 
        for (int i=0; i < size-1; i++){
            int temp = nums[i]; 
            for (int j=i+1; j < size; j++){
                if (nums[j] == temp){
                    res[0] = i; 
                    res[1] = j; 
                }
            }
        }
        return res; 
    }
};

int main(){
    Solution sol = Solution();
    // sample inputs 
    vector<int> sample{2,7,11,15}; 
    int target = 9; 
    vector<int> result(2); 
    result = sol.twoSum(sample, target);
    
    for (int i=0; i < 2; i++){
        cout << result[i] << endl; 
    }
    return 0; 
}