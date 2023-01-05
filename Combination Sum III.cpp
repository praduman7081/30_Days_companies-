//216. LeetCode Problem
// https://leetcode.com/problems/combination-sum-iii/

class Solution {
private:
      vector<vector<int>> ans;
    
  public: 
 void solve(int k,int sum,int n,vector<int> tmp,int s){
        if(sum == n && k == 0){
            ans.push_back(tmp);
            return;
        }
        if(sum > n)return;
        
        for(int i = s; i <= 9; i++){
            tmp.push_back(i);
            solve(k-1,sum+i,n,tmp,i+1);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        if(k>=n || n==1){
            return ans;
        }
        vector<int> ans2;
        solve(k,0,n,ans2,1);
        return ans;
    }
};