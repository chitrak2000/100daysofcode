class Solution {
public:
    bool isPalindrome(int x) {
        long int rev_no = 0;
        if(x < 0){
            return false;
        }
        
        int temp = x;
        while(temp != 0){
        int rem = temp%10;
        rev_no = (rev_no * 10) + rem;
        temp = temp/10;
        }
            
        if(x != rev_no){
            return false;
        }
        
     return true;
    }
};