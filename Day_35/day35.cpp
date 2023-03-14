//Efficient Approach
class Solution {
public:
    int countOdds(int low, int high) {
        int OneToLow = low/2;
        int OneToHigh = (high + 1)/2;

        return OneToHigh - OneToLow;
    }
};

//Brute Force
class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++){
            if(i&1 == 1){
                count++;
            }
        }
        return count;
    }
};
