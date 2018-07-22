# Notes for Coding Problems
## Binary Search
1. Predicate:
    * In the following, we consider the same "search" space `A` and predicate `p` as in this [Topcoder tutorial](https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search):
      * the space `A` (usually an array) is sorted in an increasing order by the binary relation `<`, and
      * the predicate `p` on the space `A` has the property that `p(i)` implies `p(i)` if `i<j` where `i` and `j` are index of element in `A` and `p(i)` indicates the predicate is true (`p(i)` indicates the predicate is false).
2. Binary Search Types:
    * `first_true`: find the smallest `i` such that `p(i)` :
      * LB (lower_bound) binary search finds the first element *greater than or equal to* the target `t`, i.e., `p(i)` if `A[i]>=t`.
      * UB (upper_bound) binary search finds the first element *strictly greater* than the target `t`, i.e., `p(i)` if `A[i]>t`.
- `lo` is the lower boundary, `hi` is the upper boundary and `mid=lo+(hi-lo)/2` is the mid point
### Basic
|Problem|Type|Note|Predicate|
|--|:--:|--|--|
| [leet436 <br>](leetcode/leet436.cpp)[Find&nbsp;Right&nbsp;Interval](https://leetcode.com/problems/find-right-interval/description/)| LB | Sort intervals by the `start`, but keep their original index. LB binary search the `end` of each interval.| `p(i)`: the `i`-th largest `start` is no less than the `end` of the query interval.|
| [leet34 <br>](leetcode/leet34.cpp)Search&nbsp;for&nbsp;a&nbsp;Range|LB, UB|Be careful about the case when the array is empty| |


