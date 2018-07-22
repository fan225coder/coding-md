# Notes for Coding Problems
## Binary Search
Notation:
- `p` is the predicate. In the following, we set `p(a)` implies `p(b)` if `a<b`.
- `lo` is the lower boundary, `hi` is the upper boundary and `mid=lo+(hi-lo)/2` is the mid point
- LB stands for lower bound. It corresponds the binary search used to find the *first* element *no less* than the query.
### Basic
|Problem|Type|Note|Predicate|
|--|:--:|--|--|
| [leet436 <br>](leetcode/leet436.cpp)[Find&nbsp;Right&nbsp;Interval](https://leetcode.com/problems/find-right-interval/description/)| LB | Sort intervals by the `start`, but keep their original index. LB binary search the `end` of each interval.| `p(i)`: the `i`-th largest `start` is no less than the `end` of the query interval.|
|leet34<br>Search&nbsp;for&nbsp;a&nbsp;Range|LB, UB|Be careful about the case when the array is empty| |


