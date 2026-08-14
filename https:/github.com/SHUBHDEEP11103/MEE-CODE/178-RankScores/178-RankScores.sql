-- Last updated: 14/08/2026, 23:39:14
# Write your MySQL query statement below
select score , dense_rank() over (order by score desc) AS `rank`
from Scores;