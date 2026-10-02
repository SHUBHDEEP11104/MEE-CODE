// Last updated: 03/10/2026, 00:11:46
1class Solution {
2public:
3    int minGroups(vector<vector<int>>& intervals) {
4        vector<int> start_times, end_times;
5
6        // Extract start and end times
7        for (const auto& interval : intervals) {
8            start_times.push_back(interval[0]);
9            end_times.push_back(interval[1]);
10        }
11
12        // Sort start and end times
13        sort(start_times.begin(), start_times.end());
14        sort(end_times.begin(), end_times.end());
15
16        int end_ptr = 0, group_count = 0;
17
18        // Traverse through the start times
19        for (int start : start_times) {
20            if (start > end_times[end_ptr]) {
21                end_ptr++;
22            } else {
23                group_count++;
24            }
25        }
26
27        return group_count;
28    }
29};