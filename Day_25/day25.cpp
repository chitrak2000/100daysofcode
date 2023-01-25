class Solution {
public:
    int countPrimes(int n) {
        if(n <= 1) return false;
        int count = 0;
        bool isPrime[n];
	    fill(isPrime, isPrime + n, true);
        for(long long int i=2; i < n; i++){
            if(isPrime[i]){
                count++;
                for(long long int j = i*i; j < n; j = j+i)
                    isPrime[j] = false;
            }
        }
        return count;
    }
};
