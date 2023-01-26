class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n  = nums.size();
        int i = 0;
        while(i < n){
            nums.push_back(nums[i]);
            i++;            
        }
        return nums;
    }
};
