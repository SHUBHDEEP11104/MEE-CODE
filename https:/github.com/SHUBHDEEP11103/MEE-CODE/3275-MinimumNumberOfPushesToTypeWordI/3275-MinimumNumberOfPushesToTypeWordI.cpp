// Last updated: 09/08/2026, 12:36:56
class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int ans = 0;

        int count = 1;
        while(n>0){
            if(n<8){
                ans += n*count;
            }else{
                ans += 8 * count;
            }
            count ++;
            n -= 8;
        }
        return ans;
    }
};