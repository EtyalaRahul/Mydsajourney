class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k=nums.size();

        int ans=(k*(k+1)) / 2 ;
        int sum=0;
        for (int i=0;i<nums.size();i++){
            sum = sum + nums[i];
        }
        return abs(sum-ans);
    }
};
