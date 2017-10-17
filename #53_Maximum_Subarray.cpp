/*
53. Maximum Subarray
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int start=0,end=0;//标记开始和结束位置
        int n=nums.size();
        vector<int> dp;//动态规划记录表
        int temp=0;
        dp.push_back(nums[0]);//把第一个数添加到表中
        int Max=dp[0];//最大值设置为第一个数
        for(int i=1;i<n;i++)
        {
            if(dp[i-1]<=0)
            {
                dp.push_back(nums[i]);//若前项小于零则全部舍弃
                temp=i;//将标志未设置为当前位置
            }
            else
            {
                dp.push_back(nums[i]+dp[i-1]);//将新的数加入
            }
            if(dp[i]>Max)
            {
                Max=dp[i];
                start=temp;
                end=i;
            }
        }
        return Max;
    }
};
