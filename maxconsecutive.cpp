class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int streak=0;
        int cur_streak=0;
        for(int i=0;i<nums.size();i++){
           
            if(nums[i] == 1){
                cur_streak++;
            }
            else{
                cur_streak = 0;
            }
            streak = max(cur_streak,streak);
        }
        return streak;
    }
};
