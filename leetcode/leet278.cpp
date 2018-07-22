// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // assert(n)
        int lo=1;
        int hi=n;
        while (lo<hi) {
            int mid=lo+(hi-lo)/2;
            if (isBadVersion(mid)) {
                hi=mid;
            } else {
                lo=mid+1;
            }
        }
        // assert(isBadVersion(lo))
        return lo;
    }
};
