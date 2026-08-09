// Last updated: 09/08/2026, 12:35:42
class Solution {
public:
    int countValidPrefixes(string s) {
        int ans = 0;
        int count0 = 0;
        int count1 = 0;
        int n = 0;
        for(auto it:s){
            n++;
            if(it == '0') count0++;
            if(it == '1') count1++;

            if(n%2){
                if(abs(count0-count1)==1){
                    ans++;
                }
            }else if(abs(count0-count1) == 0){
                ans++;
            }
        }

        return ans;
    }
};