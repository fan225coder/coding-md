# Notes for Coding Problems
## Binary Search
Notation:
- $p$ is the predicate, i.e., if $a<b$, then $p(a)⇒p(b)$
- $L$ is the lower boundary, and $R$ is the upper boundary and $M=L+(R-L)/2$ is the mid point
### Basic
|Problem |Type|Note|
|--|:--:|--|
|leet436<br>Find&nbsp;Right&nbsp;Interval|LB|Sort the start (but keep their original index), and binary search for the end of each interval. $p(M)$: the $M^{th}$ largest start is no less than the end of an interval.|
|leet34<br>Search&nbsp;for&nbsp;a&nbsp;Range|LB, UB|Be careful about the case when the array is empty|

