# Binary Search
1. Predicate:
    * In the following, we consider the same "search" space `A` and predicate `p` as in this [Topcoder tutorial](https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search):
      * the space `A` (usually an array) is sorted in an increasing order by the binary relation `<`, and
      * the predicate `p` on the space `A` has the property that `p(i)` implies `p(i)` if `i<j` where `i` and `j` are index of element in `A` and `p(i)` indicates the predicate is true (`~p(i)` indicates the predicate is false).
2. Binary Search Types:
   * "first true": find the smallest `i` such that `p(i)`:
      * `first_ge` ([lower_bound](http://www.cplusplus.com/reference/algorithm/lower_bound/)) finds the *first* element *greater than or equal to* the target `t` (`p(i)` if `A[i]>=t`).
      * `first_gt` ([upper_bound](http://www.cplusplus.com/reference/algorithm/upper_bound/)) finds the *first* element *strictly greater* than the target `t` (`~p(i)` if `A[i]>t`).
   * "last false": find the largest `i` such that `~p(i)`:
      * `last_le` finds the *last* element *less than or equal to* the target `t` (`p(i)` if `A[i]<=t`).
3. `lo` is the lower boundary, `hi` is the upper boundary and `mid=lo+(hi-lo)/2` is the mid point
## Being Bug-Free:
   * check if `A` is empty before you start the search (test case 1: empty `A`).
   * how to set `mid`
   * when search finishes, check again if the predicate is true (test case 2: `p(i)` for all `i`, or `~p(i)` for all `i`)
## Coding Problems:
### Basic
|Problem|Type|Note|Predicate|
|--|:--|--|--|
| [leet436 <br>](leetcode/leet436.cpp)[Find Right Interval](https://leetcode.com/problems/find-right-interval/description/)| LB | Sort intervals by the `start`, but keep their original index. LB binary search the `end` of each interval.| `p(i)`: the `i`-th largest `start` is no less than the `end` of the query interval.|
| [leet34 <br>](leetcode/leet34.cpp)[Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/)|1. LB+UB <br>2.&nbsp;LB&nbsp;`first_true`+`last_false`|Be careful about the case when the array is empty| |

# Bit

