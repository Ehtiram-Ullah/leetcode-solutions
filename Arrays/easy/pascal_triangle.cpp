#include <iostream>
#include <vector>
using namespace std;
// problem - https://leetcode.com/problems/pascals-triangle-ii/description/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex+1,1);
        for(int i=1;i<=rowIndex;i++){
            for(int z = i-1;z>0;z--){
                row[z] = row[z-1] + row[z];
            }
        }
        return row;
    }


};
int main()
{
    Solution sol = Solution();
    vector<int> v = sol.getRow(4);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
