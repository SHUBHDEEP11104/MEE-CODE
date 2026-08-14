-- Last updated: 14/08/2026, 23:39:06
# Write your MySQL query statement below
SELECT DISTINCT A.num as ConsecutiveNums FROM
Logs A JOIN 
Logs B ON A.id + 1 = B.id
JOIN
Logs C ON A.id + 2 = C.id
WHERE A.num = B.num AND A.num = C.num;