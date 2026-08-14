-- Last updated: 14/08/2026, 23:39:22
# Write your MySQL query statement below
SELECT(
    SELECT DISTINCT salary 
    FROM Employee 
    ORDER BY salary DESC
    LIMIT 1 
    OFFSET 1
)as SecondHighestSalary;