class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        //map for the diff. and the index
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(target-nums[i])!=mpp.end()){
                //put the diff with index to check with other elemnts
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            //put the index of current element
            mpp[nums[i]]=i;
        }
        return ans;
    }
};
