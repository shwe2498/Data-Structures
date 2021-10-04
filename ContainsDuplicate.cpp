/* Contains Duplicate
Given an integer array nuts, return true if any value appears at least twice in the array, and return false if every element is distinct.
Input :  nums = {6,7,2,1,7,4,10}
Output : true

Input : nuts = {10,45,23,78}
Output : false
*/
bool containsDuplicate(vector<int>& nums) {
	set<int> distinct;
        for(auto n : nums){
            distinct.insert(n);
        }
        if(distinct.size() == nums.size()){
            return false;
        }
        return true;
}
