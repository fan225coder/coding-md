# Notes for Coding Problems
## Binary Search
Notation:
- `p` is the predicate. In the following, we set `p(a)` implies `p(b)` if `a<b`.
- `lo` is the lower boundary, `hi` is the upper boundary and `mid=lo+(hi-lo)/2` is the mid point
### Basic
|Problem |Type|Note|
|--|:--:|--|
| [leet436 <br>Find&nbsp;Right&nbsp;Interval](leetcode/leet436.cpp)| LB | Sort the start (but keep their original index), and binary search for the end of each interval. `p(mid)`: the `mid`-th largest start is no less than the end of an interval.|
|leet34<br>Search&nbsp;for&nbsp;a&nbsp;Range|LB, UB|Be careful about the case when the array is empty|


