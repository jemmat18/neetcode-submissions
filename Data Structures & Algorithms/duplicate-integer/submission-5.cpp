class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (int counter = 0; counter <nums.size(); counter++)
        {
            for(int counter_2 = counter+1; counter_2 < nums.size(); counter_2++)
            {
                if(nums[counter_2]==nums[counter])
                    return true;
            }
        }
            return false;
    }
};