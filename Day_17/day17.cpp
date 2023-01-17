class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right_sum = 0;
        int left_sum = 0;
        
        for(int i = 0; i <= nums.size() - 1; i++){
            right_sum = right_sum + nums[i];
        }
        cout<<right_sum<<endl;

        for(int i = 0; i <= nums.size() - 1; i++){
            right_sum -= nums[i];
            // cout<<i << " "<<right_sum;
            if(right_sum == left_sum){
                return i;
            }else{
                left_sum += nums[i];
                // cout<<" "<< left_sum<<endl;
            }
        }
        return -1;
    }
};
