/*
35. Search Insert Position
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0||nums[n-1]<target)
        {
            return n;
        }
        if(nums[0]>=target)
        {
            return 0;
        }
        int left=0;
        int right=n-1;
        int m;
        while(left<right-1)
        {
            m=left+(right-left>>1);
            if(target>nums[m])
            {
                left=m;
            }
            else
            {
                right=m;
            }
        }
        return right;
    }

};
