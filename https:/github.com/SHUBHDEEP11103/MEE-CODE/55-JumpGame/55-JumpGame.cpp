// Last updated: 15/08/2026, 07:30:01
1class Solution {
2public:
3    bool canJump(vector<int>& nums){
4        int last = 0;
5        int n = nums.size();
6
7        for(int i=0; i<n; i++){
8            if(i>last) return false;
9            last = max(last , nums[i]+i);
10        }
11        return true;
12    }
13};