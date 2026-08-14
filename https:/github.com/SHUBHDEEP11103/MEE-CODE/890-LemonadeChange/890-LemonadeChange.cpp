// Last updated: 14/08/2026, 23:37:11
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int ten = 0;
        int five = 0;
        bool ans = true;
        for(auto i : bills){
            if(i==5){
                five ++;
            }
            else if(i == 10){
                if(five <= 0){
                    ans = false;
                    break;
                }
                ten ++;
                five --;
            }
            else if(i == 20){
                if(ten<=0){
                    if(five<3) {
                        ans = false;
                        break;
                    }else{
                        five -= 3;
                    }
                }else{
                    if(five<1){
                        ans = false;
                        break;
                    }else{
                        ten --;
                        five --;
                    }
                }
            }
        }
        return ans;
    }
};