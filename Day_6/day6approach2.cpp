class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int count  = 0;
        while(count < costs.size() && costs[count]<=coins ){
            coins = count - costs[count];
            count++;
        }
        return count;

    }
};
