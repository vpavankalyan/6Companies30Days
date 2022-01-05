class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int indx1 = 0;
        int indx2 = 0;
        int s = nums.size();
        int total = 0;
        int len = INT_MAX;
        while (indx2 < s) {
            total += nums[indx2];
            indx2++;
            while (total >= target) {
                len = min(len, indx2 - indx1);
                total -= nums[indx1];
                indx1++;
            }
        }
        if(len == INT_MAX) 
            return 0;
        return len;
    }
};