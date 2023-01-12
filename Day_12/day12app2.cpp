class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        int n = nums[0];
        int i = 1;
        int k = 1;

        while(i<n){
            if(nums[i] == m){
                i++;
            }else{
                m = nums[i];
                nums[k++] = nums[i];
                i++;
            }
        }
        return k;
        
    }
};
