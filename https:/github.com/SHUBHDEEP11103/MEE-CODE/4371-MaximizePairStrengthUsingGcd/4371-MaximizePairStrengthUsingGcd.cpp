// Last updated: 09/08/2026, 12:35:44
class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long ans = INT_MIN;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j) continue;
                long long den = pow(gcd(nums[i],nums[j]),2);
                long long num = (long long)nums[i]*nums[j];
                ans = max(ans,num/den);
            }
        }
        return ans;
    }
};