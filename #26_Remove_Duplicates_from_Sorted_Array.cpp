/*
26. Remove Duplicates from Sorted Array
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        int i=0;
        int j=0;
       for(i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                continue;
            }
            else
            {
                nums[j+1]=nums[i+1];
                j++;
            }
        }
        return j+1;
    }
};
