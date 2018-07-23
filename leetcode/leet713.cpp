class Solution {
    public:
        int numSubarrayProductLessThanK(vector<int>& a, int k) {
            const int n=a.size();
            int count=0;
            int i=0;
            while (i<n && a[i]>=k) i++;
            if (i>=n) return 0;
            int p=1;
            int j=i;
            while (i<n) {
                while (j<n && p*a[j]<k) {
                    p*=a[j];
                    j++;
                }
                j--;
                count+=j-i+1;
                p/=a[i];
                if (i==j) {
                    i++;
                    while (i<n && a[i]>=k) i++;
                    if (i>=n) return count;
                    j=i;
                } else {
                    p/=a[j];
                    i++;
                }
            }
            return count;
        }
};
