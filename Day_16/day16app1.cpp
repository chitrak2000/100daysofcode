//brute force
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans;
        int count = 0;

        for(int i = 0; i < nums.size();i++){
                if(nums[i] == target){
                    ans = i;
                }else if(target != nums[i]){
                    count++;
                }
        }
        if(count == nums.size()){
            return -1;
        }


        return ans;
    }
};
