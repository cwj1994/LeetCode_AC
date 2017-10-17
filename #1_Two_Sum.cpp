/*
1. Two Sum
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        int n=nums.size();
        int i;
        vector<int> res(2);
        for(i=0;i<n;i++)
        {
            if(um.find(target-nums[i])!=um.end())
               {
                   res[0]=i;
                   res[1]=um[target-nums[i]];
                   break;
               }
               else um[nums[i]]=i;
        }
               return res;
    }
};
