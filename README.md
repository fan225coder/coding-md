# Notes for Coding Problems
## Binary Search
Notation:
- In the following, we always consider an array sorted in an increasing order by the binary relation `<`
- `p` is the predicate as in this [Topcoder tutorial](https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search), i.e., `p(a)` implies `p(b)` if `a<b`.
- LB stands for lower bound. It corresponds the binary search used to find the first element *greater than or equal to* the query.
- UB stands for upper bound. It corresponds the binary search used to find the first element *strictly greater* than the query.
- `lo` is the lower boundary, `hi` is the upper boundary and `mid=lo+(hi-lo)/2` is the mid point
### Basic
|Problem|Type|Note|Predicate|
|--|:--:|--|--|
| [leet436 <br>](leetcode/leet436.cpp)[Find&nbsp;Right&nbsp;Interval](https://leetcode.com/problems/find-right-interval/description/)| LB | Sort intervals by the `start`, but keep their original index. LB binary search the `end` of each interval.| `p(i)`: the `i`-th largest `start` is no less than the `end` of the query interval.|
|leet34<br>Search&nbsp;for&nbsp;a&nbsp;Range|LB, UB|Be careful about the case when the array is empty| |


