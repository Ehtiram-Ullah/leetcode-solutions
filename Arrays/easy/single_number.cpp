#include <iostream>
#include <vector>
#include <set>
using namespace std;

//problem url i- https://leetcode.com/problems/single-number/

/*
Problem: 
    Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

    You must implement a solution with a linear runtime complexity and use only constant extra space.

    

    Example 1:

    Input: nums = [2,2,1]
    Output: 1

    Example 2:

    Input: nums = [4,1,2,1,2]
    Output: 4


*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        int ans=0;
        for(int i=0;i<n;++i){
            ans ^= nums[i]; // ^ means XOR
        }
        return ans;
    }
};


int main(){
    Solution sol = Solution();
    vector<int> nums = {4,1,2,1,2};
    cout<<sol.singleNumber(nums)<<endl;
    return 0;
}