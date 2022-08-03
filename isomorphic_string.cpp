class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> a(127,130);
        bool f=true;
        for(int i=0;i<s.size();i++)
        {
            if(a[t[i]]==130 && s.find(s[i])==i)
            {
                a[t[i]]=t[i]-s[i];
            }
            else if(a[t[i]]!=t[i]-s[i])
            {
                f=false;break;
            }
        }
        return f;
    }
};
