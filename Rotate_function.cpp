// 396. LeetCode Problem
// https://leetcode.com/problems/rotate-function/

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        
        int numsSum = 0,f0 = 0;
        for(int i=0; i<n; i++){
           numsSum += nums[i];
           f0 = f0 + i * nums[i];
        }
        
        int maxi = INT_MIN;
        maxi = f0;

        for(int i=1; i<n ; i++){
            f0 = f0 + numsSum - n * nums[n-i];
            maxi = max(maxi,f0);
        }

        // deque<int> dq(nums.begin(),nums.end());
        // for(int i=0; i<n; i++){
        //     int sum = 0;
        //     for(int j =0; j<n; j++){
        //        sum += j * dq[j];
        //     }
        //     maxi = max(maxi,sum);
        //     int temp =  dq.back();
        //     dq.pop_back();
        //     dq.push_front(temp);
        // }

        return maxi;
    }
};