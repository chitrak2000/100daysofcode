class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> v;
        while(n != 0){
            v.push_back(n%10);
            n = n/10;
        }
        reverse(v.begin(), v.end());
        int sum = 0;
        for(int i = 0; i<v.size(); i++){
            if(i%2 == 0){
                sum += v[i];
            }
        }
        int negsum = 0;
        for(int i = 0; i<v.size(); i++){
            if(i%2 == 1){
                negsum += v[i];
            }
        }
        int result = sum - negsum;
        return result;        
    }
};
