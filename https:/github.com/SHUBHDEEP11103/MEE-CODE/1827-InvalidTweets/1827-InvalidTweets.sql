-- Last updated: 15/08/2026, 07:02:46
# Write your MySQL query statement below
select tweet_id 
from Tweets
where length(content) > 15;