#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts){
        
        int sum = 0;
        for (int i = 0; i < accounts.size(); i++){
            int temp = 0;
            for (int j = 0; j < accounts[i].size(); j++){
                temp += accounts[i][j];
            }
            sum = max(sum,temp);
        }
        return sum;
    }

};

// Example
/*
int main () {

    vector<vector<int>> accounts = {{1,2,3}, {3,2,1}, {4,1,6}};

    Solution solution;

    cout << "Maximum Wealth: " << solution.maximumWealth(accounts) << endl;

    return 0 ;
}
*/