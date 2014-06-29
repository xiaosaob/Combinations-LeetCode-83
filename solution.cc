// Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.

// For example,
// If n = 4 and k = 2, a solution is:

// [
//   [2,4],
//   [3,4],
//   [2,3],
//   [1,2],
//   [1,3],
//   [1,4],
// ]

class Solution {
public:
    vector<vector<int> > combine(int n, int k) {
        vector<vector<int> > res;
        vector<int> oneCombination;
        helper(n,k,1,oneCombination,res);
        return res;
    }
    
    void helper(int n, int k, int start, vector<int> &oneCombination, vector<vector<int> > &res) {
        
        if(k == 0) {
            res.push_back(oneCombination);
            return;
        }
        if(start > n) return;
        oneCombination.push_back(start);
        helper(n,k-1,start+1,oneCombination, res);
        oneCombination.pop_back();
        
        helper(n,k,start+1,oneCombination,res);
    }
};
