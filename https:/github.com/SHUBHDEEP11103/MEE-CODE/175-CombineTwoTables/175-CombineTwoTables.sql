-- Last updated: 14/08/2026, 23:39:27
# Write your MySQL query statement below
Select Person.firstName, Person.lastName, Address.city, Address.state 
FROM Person
LEFT JOIN Address
ON Person.personId = Address.personId;