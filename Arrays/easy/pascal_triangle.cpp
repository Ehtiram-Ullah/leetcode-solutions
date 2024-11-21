#include <iostream>
#include <vector>
using namespace std;
class Solution {

    //TODO: Solve this
public:
    int f(int n){
        if(n==0){
            return 1;
        }
        return n * f(n-1);
    }
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0){
            return vector<int>{1};
        }
        if(rowIndex==1){
            return vector<int>{1,1};
        }
        if(rowIndex==2){
            return vector<int>{1,2,1};
        }
        vector<int> ans(rowIndex+1);
        ans[0] = 1;
        ans[1]= rowIndex;
        ans[rowIndex-1] = rowIndex;
        ans[rowIndex] = 1;
        for(int i =2;i<=(rowIndex-4)+2;i++){
            int combination = (f(rowIndex)) / (f(i) * f(rowIndex-i));
            ans[i] = combination;
        }

        return ans;
    }
};

int main(){
    Solution sol = Solution();
    vector<int> v =  sol.getRow(33);
    // cout<<v<<endl;

    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}