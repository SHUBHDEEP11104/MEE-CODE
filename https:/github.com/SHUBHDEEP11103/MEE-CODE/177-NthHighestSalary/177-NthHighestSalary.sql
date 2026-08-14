-- Last updated: 14/08/2026, 23:39:20
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  SET N = N-1;
  RETURN (
      # Write your MySQL query statement below.
    SELECT distinct salary 
    FROM Employee 
    ORDER BY salary DESC
    LIMIT 1
    OFFSET N
  );
END