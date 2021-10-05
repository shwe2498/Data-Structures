/*
 Maximum subarray
 Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

 A subarray is a contiguous part of an array.
 
 Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
 Output: 6
 Explanation: [4,-1,2,1] has the largest sum = 6.
 */

#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int max_so_far = nums[0];
    int curr_max = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        curr_max = max(nums[i], curr_max + nums[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> nums = {1,2,3,4,5,6,7};
    std::cout << maxSubArray(nums);
    return 0;
}
