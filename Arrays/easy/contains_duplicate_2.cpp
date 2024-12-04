#include <iostream>
#include <map>
#include <vector>
using namespace std;


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp = {};
     
        for(int i=0;i<nums.size();++i){
            mp[nums[i]] = abs(mp[nums[i]]-i);
            if(mp[nums[i]]<=k){
                return true;
            }else{
                mp[nums[i]] = i;
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