#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//problem url - https://leetcode.com/problems/majority-element

/*
Problem: 
    Given an array nums of size n, return the majority element.

    The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

    

    Example 1:

    Input: nums = [3,2,3]
    Output: 3
    Example 2:

    Input: nums = [2,2,1,1,1,2,2]
    Output: 2


*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int numsSize = nums.size();
        if(numsSize<=2){
            return nums[0];
        }
        int expectedCnt = nums.size()/2;
        for(int i =0;i<=nums.size()/2;++i){
           int cnt= count(nums.begin(),nums.end(),nums[i]);
           if(cnt>expectedCnt){
            return nums[i];
           }
        }

        return -1;
        
    }
};
int main(){
    Solution sol = Solution();
    vector<int> nums = {2,2,1,1,1,2,2};
    cout<<sol.majorityElement(nums)<<endl;
    return 0;
}