class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        int n=strs.size();
        for(int i=1; i<n; i++){
            int j;
            for(j=0; j<min(ans.size(), strs[i].size()); j++) if(ans[j]!=strs[i][j]) break;
            ans.resize(j);
        }
        return ans;
    }
};
