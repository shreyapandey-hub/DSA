class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int left = 0;
        int zeroCount = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            // Agar current element 0 hai
            if (nums[right] == 0) {
                zeroCount++;
            }

            // Allowed k se zyada zeroes hain
            while (zeroCount > k) {

                if (nums[left] == 0) {
                    zeroCount--;
                }

                left++;
            }

            // Maximum valid window
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};