class Solution {
public:
    int climbStairs(int n) {
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        vector<int> ways;
        ways.push_back(1);
        ways.push_back(2);
        for(int i = 2; i<n ; i++){
            ways.push_back(ways[i-1]+ways[i-2]);
        }
        return ways.back();
    }
};
