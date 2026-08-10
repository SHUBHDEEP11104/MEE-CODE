// Last updated: 10/08/2026, 21:44:24
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int n = height.size();
5        int maxi = INT_MIN; 
6        int i = 0;
7        int j = n-1;
8        
9        while(i<j){
10            int water = (min(height[i],height[j]) * (j-i));
11            maxi = max(maxi,water);
12            if(height[i]>=height[j]){
13                j--;
14            }else{
15                i++;
16            }
17        }
18        return maxi;
19    }
20};