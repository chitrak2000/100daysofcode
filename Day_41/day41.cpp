class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        long int ans = nums[0] ^ nums[1];
        for(int i = 2; i < nums.size(); i++){
            ans = ans ^ nums[i];
        }
        return ans;
        
    }
}

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0; 
        int r = nums.size() - 1;
        while(l< r){
            int mid = l + (r - l)/2;
            if((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
                l = mid + 1;
            else
                r = mid;
        }
        return nums[l];
    }
};
