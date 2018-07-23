class Solution {
    double frac(int n, int d){
        return (double)n/d;
    }
    bool predicate(const vector<int>& A, const int K, const double x, int& count_le, vector<int>& ans) {
        double max_f=1;
        int i=0;
        int j=0;
        while (count_le<=K && i<A.size()) {
            while (count_le<=K && j+1<A.size() && (double)A[j+1]/A[i]<=x) j++;
            count_le+=j-i;
            if ((double)A[j]/A[i]>max_f) {
                max_f=(double)A[j]/A[i];
                ans[0]=A[i];
                ans[1]=A[j];
            }
            i++;
        }
        return count_le>=K;
    }
    public:
    vector<int> kthSmallestPrimeFraction(vector<int>& A, int K) {
        const int n=A.size();
        double lo=1;
        double hi=A[n-1]/A[0];
        K=n*(n-1)/2-K+1;
        vector<int> ans(2);
        while (lo<hi){
            double mid=lo+(hi-lo)/2;
            int count_le=0;
            if (predicate(A,K,mid,count_le,ans)){
                if (count_le==K){
                    break;
                } else {
                    hi=mid;
                }
            } else {
                lo=mid;
            }
        }
        return ans;
    }
};

