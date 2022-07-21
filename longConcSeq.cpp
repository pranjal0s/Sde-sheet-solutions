class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int>arr;
        for(int num:nums){
            arr.insert(num);
        }
        
        int ln=0;
        
        for(int num:nums){
            if(!arr.count(num-1)){
                int crnt_num = num;
                int crnt_ln = 1;
            
            while(arr.count(crnt_num+1)){
                crnt_num+=1;
                crnt_ln+=1;
            }
            ln=max(crnt_ln,ln);
            }
        }
        return ln;
    }
};
