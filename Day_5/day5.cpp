class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int count;
        int array[1000];
        if(arr.size() == 2){
            return false;
        }
        for(int i = 0; i < arr.size(); i++){
            count = 0;
            for(int j = 0 ;j< arr.size(); j++){
                if((arr[i] ^ arr[j]) == 0){
                    count++;
                }   
            }
            array[i] = count;
        }
        for(int i = 0; i<arr.size(); i++){
            for(int j = 1; j < arr.size(); j++){
                 if(array[i] == array[j] && arr[i] != arr[j]){
                    return false;   
                }   
            }
        }   
        return true;
        
    }
};
