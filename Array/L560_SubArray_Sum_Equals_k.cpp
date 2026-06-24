// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
// A subarray is a contiguous non-empty sequence of elements within an array.

// Example 1:

// Input: nums = [1,1,1], k = 2
// Output: 2

// Example 2:

// Input: nums = [1,2,3], k = 3
// Output: 2

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        long long int current_sum=0;
        unordered_map<long long, int> prefix_sum;

        prefix_sum[0] = 1;

        for(int i=0;i<nums.size();i++){
            current_sum+=nums[i];
            if(prefix_sum.find(current_sum - k) != prefix_sum.end()){
                count+=prefix_sum[current_sum - k];
            }
            prefix_sum[current_sum]++;

        }
    return count;        
    }
};