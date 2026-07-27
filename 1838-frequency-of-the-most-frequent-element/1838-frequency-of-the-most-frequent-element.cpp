#include <vector>
#include <algorithm>

class Solution {
public:
    int maxFrequency(std::vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());
        
        int L = 0;
        int max_freq = 0;
        long long window_sum = 0; 
        
        for (int R = 0; R < nums.size(); ++R) {
            window_sum += nums[R];

            while ((long long)(R - L + 1) * nums[R] - window_sum > k) {
                window_sum -= nums[L];
                L++;
            }

            max_freq = std::max(max_freq, R - L + 1);
        }
        
        return max_freq;
    }
};