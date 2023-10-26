class Solution {
public:

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int m = nums1.size();
        int n = nums2.size();
        vector<int>ans(m+n, 0);
        int mainarr = 0;
        while(i<m && j<n){
            if(nums1[i] <= nums2[j]){
                ans[mainarr++] = nums1[i++];
            }else{
                ans[mainarr++] = nums2[j++];
            }
        }

        while(i<m){
            ans[mainarr++] =nums1[i];
            i++;
        }

        while(j<n){
            ans[mainarr++] = nums2[j];
            j++;
        }

        int a = m+n;
        double res = 0;
        if(a%2 != 0){ // odd
            res = ans[a/2];
        }
        else{
            res =  ans[a/2] + ans[a/2 - 1];
            res = res/2.0;
        }

        return res;

    }
};