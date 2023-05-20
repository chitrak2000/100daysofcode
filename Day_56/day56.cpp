class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //merge two vectors
        //if size is odd return mid element
        //if size is even return average of the middle two elements
        int newSize = nums1.size() + nums2.size();
        vector <int> ans(newSize);
        for(int i = 0; i < nums1.size(); i++){
            ans[i] = nums1[i];
        }
        for(int i = nums1.size(); i < nums1.size() + nums2.size(); i++){
            ans[i] = nums2[i - nums1.size()];

        }

        sort(ans.begin(), ans.end());

        double median = 0;
        if(newSize%2!=0){
            median = ans[(newSize-1)/2];
        }else{
            median = (ans[newSize/2 -1] + ans[newSize/2])/2.0;
        }
        return median;
    }
};
