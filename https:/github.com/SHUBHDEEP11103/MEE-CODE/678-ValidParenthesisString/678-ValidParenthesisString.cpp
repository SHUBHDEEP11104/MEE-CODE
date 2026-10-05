// Last updated: 05/10/2026, 22:05:46
1class Solution {
2public:
3    bool checkValidString(string s) {
4        int low = 0, high = 0;
5        for (char c : s) {
6            if (c == '(') {
7                low++;
8                high++;
9            } else if (c == ')') {
10                low--;
11                high--;
12            } else {
13                low--;
14                high++;
15            }
16            if (high < 0) return false;
17            if (low < 0) low = 0;
18        }
19        return low == 0;
20    }
21};