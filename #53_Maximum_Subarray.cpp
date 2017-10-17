/*
53. Maximum Subarray
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int start=0,end=0;//��ǿ�ʼ�ͽ���λ��
        int n=nums.size();
        vector<int> dp;//��̬�滮��¼��
        int temp=0;
        dp.push_back(nums[0]);//�ѵ�һ������ӵ�����
        int Max=dp[0];//���ֵ����Ϊ��һ����
        for(int i=1;i<n;i++)
        {
            if(dp[i-1]<=0)
            {
                dp.push_back(nums[i]);//��ǰ��С������ȫ������
                temp=i;//����־δ����Ϊ��ǰλ��
            }
            else
            {
                dp.push_back(nums[i]+dp[i-1]);//���µ�������
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
