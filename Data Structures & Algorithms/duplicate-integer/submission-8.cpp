class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hashm;

        for(int counter = 0; counter<nums.size(); counter++)
        {
            if(hashm.find(nums[counter])==hashm.end())
            {
                hashm[nums[counter]] += 1;
            } else {
                return true;
            }
        }
        return false;
    }
};