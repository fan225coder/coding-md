class Solution {
    int lower_bound(const vector<int>& a, const int x) {
        int lo=0;
        int hi=a.size()-1;
        while (lo<hi){
            int mid=lo+(hi-lo)/2;
            if (x<=a[mid]) {
                hi=mid;
            } else {
                lo=mid+1;
            }
        }
        return x<=a[lo]?lo:a.size();
    }

    int upper_bound(const vector<int>& a, const int x) {
        int lo=0;
        int hi=a.size()-1;
        while (lo<hi){
            int mid=lo+(hi-lo)/2;
            if (x<a[mid]) {
                hi=mid;
            } else {
                lo=mid+1;
            }
        }
        return x<a[lo]?lo:a.size();
    }

    public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty()) return {-1,-1};
        int first=lower_bound(nums, target);
        if (first>=nums.size() || nums[first]!=target) return {-1,-1};
        int last=upper_bound(nums, target)-1;
        return {first, last};
    }
};
