//HOUSE ROBBER PROBLEM [LEETCODE]
#include<bits/stdc++.h>

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int n = nums.size();
        int memo[n + 1];
        memo[0] = 0;
        memo[1] = nums[0];
        for(int i = 1; i< n; i++)
        {
            int val = nums[i];
            memo[i+1] = max(memo[i], memo[i-1] + val);
        }
        
        return memo[n];
    }
};