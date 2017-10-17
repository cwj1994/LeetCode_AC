/*
#27_Remove_Element
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        int j=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==val)
                continue;
            else
            {
                nums[j]=nums[i];
                j++;
            }
        }
        return j;

    }
};

