
[leet-medium]: .README/leet-medium.png "Medium"
[leet-easy]: .README/leet-easy.png "Easy"
[leet-hard]: .README/leet-medium.png "Hard"

# Binary Search
1. Search Space and Predicate:
    * In the following, we consider the same "search space" `A` and predicate `p` as in this [Topcoder tutorial](https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search):
      * the space `A` (usually an array) is sorted in an increasing order by the binary relation `<`, and
      * the predicate `p` on the space `A` has the property that `p(i)` implies `p(i)` if `i<j` where `i` and `j` are index of element in `A` and `p(i)` indicates the predicate is true (`~p(i)` indicates the predicate is false).
2. Binary Search Types:
   * `first_true`: find the smallest `i` such that `p(i)`. Some special cases:
      * `first_ge` ([lower_bound](http://www.cplusplus.com/reference/algorithm/lower_bound/)) finds the *first* element *greater than or equal to* the target `t` (`p(i)` if `A[i]>=t`).
      * `first_gt` ([upper_bound](http://www.cplusplus.com/reference/algorithm/upper_bound/)) finds the *first* element *strictly greater* than the target `t` (`~p(i)` if `A[i]>t`).
   * `last_false`: find the largest `i` such that `~p(i)`. Some special cases:
      * `last_le` finds the *last* element *less than or equal to* the target `t` (`p(i)` if `A[i]<=t`).
## Being Bug-Free:
`lo` is the lower boundary, `hi` is the upper boundary and `mid=lo+(hi-lo)/2` is the mid point
   * check if `A` is empty before you start the search (**test case**: empty `A`).
   * how to set `mid` (**test case**: `A` contains two elements, and `~p(0)` and `p(1)`).
   * when search finishes, check again if the predicate is true (**test case**: `p(i)` for all `i`, or `~p(i)` for all `i`)
## Coding Problems:
### Basic
|Problem|Type|Note|Predicate|
|--|--|--|--|
| ![][leet-medium][leet436](leetcode/leet436.cpp)<br/>[Find Right Interval](https://leetcode.com/problems/find-right-interval/description/)| `first_ge` | Sort intervals by the `start`, but keep their original index. LB binary search the `end` of each interval.| `p(i)`: the `i`-th largest `start` is no less than the `end` of the target interval.|
| [leet34](leetcode/leet34.cpp)![<br>][leet-medium][Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/)|1.`first_ge`+`first_gt` <br>2.`first_ge`+`last_le`| | |
| [leet278](leetcode/leet278.cpp)![<br>][leet-easy][First Bad Version](https://leetcode.com/problems/first-bad-version/description/)|`first_true`| | `p` being `isBadVersion`|

# Bit

