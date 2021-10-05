/*
 88. Merge sorted array
 You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 resp.

 Merge nums1 and nums2 into a single array sorted in non-decreasing order.

 The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has length of m + n, where the first m elements denotes the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

 Example 1:
 Input : nums1 = [1,2,3,0,0,0] m = 3, nums2 =[2,5,6] n = 3
 Output : [1,2,2,3,5,6]
 */

#include<vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    int nums1_size = m - 1;
    int nums2_size = n - 1;
    int sorted_size = m + n - 1;
    
    while(nums1_size >= 0 && nums2_size >= 0){
        if(nums1[nums1_size] > nums2[nums2_size]){
        nums1[sorted_size--] = nums1[nums1_size--];
    }
    else{
        nums1[sorted_size--] = nums2[nums2_size--];
    }
    }
    while(nums1_size >=0){
        nums1[sorted_size--] = nums1[nums1_size--];
    }
    while(nums2_size >= 0){
        nums1[sorted_size--] = nums2[nums2_size--];
    }
}
