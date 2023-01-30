class Solution {
public:
    int tribonacci(int n) {
        vector<int> arr;
        arr.push_back(0);
        arr.push_back(1);
        arr.push_back(1);

        for(int i = 3; i<= n; i++){
            int temp = arr[i - 1] + arr[i - 2] + arr[i - 3];
            arr.push_back(temp);
        }

        return arr[n];
    }
};
