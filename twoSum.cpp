/*
 1. Two Sum
 Given an array of integers nums and integer target, return indices of the two numbers such that they add up to target.

Input : nums = [2,7,11,15], target = 9
Output : [0,1]
*/

#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    vector<int> out;
    for(int i = 0; i < nums.size(); i++){
        int diff = target - nums[i];
        if(m.find(diff) != m.end()){
            out.push_back(m.find(diff)->second);
            out.push_back(i);
            break;
        }
        m.insert({nums[i], i});
    }
    return out;
}
