// 172. LeetCode Problem
// https://leetcode.com/problems/factorial-trailing-zeroes/

class Solution {
public:
    int trailingZeroes(int n) {
       if(n == 0){
           return n;
       } 
       int ans =0 ;
       int div = 5;
       int i = 1;
       while(true){
           if(n/pow(div,i) >= 1){
               ans += n/pow(div,i);
           }
           else{
               break;
           }
           i++;
       }

       return ans;
    }
};