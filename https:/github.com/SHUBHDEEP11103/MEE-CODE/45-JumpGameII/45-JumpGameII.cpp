// Last updated: 18/08/2026, 01:19:58
1class Solution {
2public:
3    int jump(vector<int>& nums) {
4        int n = nums.size();
5        int l = 0;
6        int r = 0;
7        int jumps = 0;
8        int farthest = 0;
9        while(r<n-1){
10            int farthest = 0;
11            for(int i=l; i<=r; i++){
12                farthest = max(i+nums[i],farthest);
13            }
14            l = r+1;
15            r = farthest;
16            jumps++;
17        }
18        return jumps;
19    }
20};