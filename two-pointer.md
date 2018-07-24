[leet-medium]: .README/leet-medium.png "Medium"
[leet-easy]: .README/leet-easy.png "Easy"
[leet-hard]: .README/leet-medium.png "Hard"

# Two Pointer Technique

## Introduction
Let `A` be an array of size *n* and `B` be an array of size *m*.
We call a space of *O(nm)* pairs `(A[i],B[j])` a *pair space*.
The two pointers refer to the two indices `i` and `j`.
The two pointer technique is used to identify pairs of *target predicate* `p` from the pair space in the linear *O(n+m)* time, instead of the quadratic time *O(nm)*.

The two pointer techinque achieves this efficiency by exploiting a unique structural property of `p`, which allows us to change `i` and `j` "uni-directionally" (no need to reset `j` after changing `i` or vice versa).
For example, in many problems, we see this structural property of `p` in the following form: `p(i,j)` implies both `p(i,j-1)` and `p(i+1,j)`.
With this property, if we move from `(i,j)` such that `p(i,j)` to `(i+1,j)`, we don't need to check if `p` holds for `(i+1,0)`, `(i+1,1)`, ..., `(i+1,j)` because we know that they are all true as `p(i,j)` implies `p(i+1,j)` which in turn implies `p(i+1,0)`, `p(i+1,1)`, ..., `p(i+1,j)`. 
This allows us continue the checking from `p(i+1,j)` without restarting from `j=0` for `i+1`.
Thus, the complexity is reduced from *O(nm)* to *O(n+m)*.

Discovering this strutural property is the key to solve the problem with the two pointer techinque.

## Coding Problems:

|Problem|Pair Space|Value|Predicate `p`|Property |Note|
|--|--|--|--|--|--|
| ![][leet-medium] [leet713](leetcode/leet713.cpp)<br/>[Subarray Product Less Than K](https://leetcode.com/problems/subarray-product-less-than-k/description/)| `(i,j)` s.t. `i<=j`| `sum(i,j)` | `sum(i,j)<K` | `p(i,j)` implies <br/> `p(i,j-1)` and `p(i+1,j)`| |
