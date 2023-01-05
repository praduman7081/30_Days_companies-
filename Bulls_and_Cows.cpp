// 299. LeetCode Prablem
// https://leetcode.com/problems/bulls-and-cows/
class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.size();
        int sec[10] = {0};
        int gue[10] = {0};
        int bulls = 0;
        int cows = 0;
        for(int i=0; i<n; i++){
            if(secret[i] == guess[i]){
                bulls++;
            }
            else{
                
                sec[secret[i]-'0']++;
                gue[guess[i]-'0']++;
            }
        }
        for(int i=0; i<10; i++){
             cows += min(sec[i],gue[i]);
        }

        string res = to_string(bulls) + 'A' + to_string(cows) + 'B';

       return res;
    }
};