class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        int max = nums[nums.size() - 1]; 
        int second_max = INT_MIN, third_max = INT_MIN;
        bool found_second = false, found_third = false;
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < max) {
                second_max = nums[i];
                found_second = true;
                break;
            }
        }
        for (int i = nums.size() - 3; i >= 0; i--) {
            if (nums[i] < second_max) {
                third_max = nums[i];
                found_third = true;
                break;
            }
        }

        return found_third ? third_max : max;
    }
};
