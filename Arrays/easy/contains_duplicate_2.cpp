#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<nums.size()-1;++i){
            for(int j=(i+1);j<nums.size();j++){
                if(nums[i]==nums[j] && abs(i-j)<=k){
                    return true;
                }
            }

        }
        return false;
    }
};


int main(){
    vector<int> nums = {1,2,3,1,2,3}; 
    int k = 2;
    bool ans = Solution().containsNearbyDuplicate(nums,k);
    cout<<ans;
}