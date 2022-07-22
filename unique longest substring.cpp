class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> ptr(256,-1);
        int l=0,r=0,n=s.size(),len=0;
        while(r<n){
            if(ptr[s[r]]!=-1)
                l=max(ptr[s[r]]+1,l);
                ptr[s[r]]=r;
                len=max(len,r-l+1);
                r++;
        }
        return len;
    
    }
};
