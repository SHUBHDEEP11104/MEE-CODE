-- Last updated: 15/08/2026, 07:02:49
# Write your MySQL query statement below
select en.unique_id , e.name 
from Employees e
left join EmployeeUNI en
on e.id = en.id;