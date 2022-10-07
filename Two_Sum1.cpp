/*
1. Two Sum - Easy
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/
class Solution {
public:
  // I first tryed this nlogn cost approach -> beats 25.56% in runtime and 96.71% in memory
  vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        bool founded = false;
        for(int i = 0; i < nums.size() && !founded; i++){
            if(nums[i] >= 0){ int needed = target - nums[i]; }
            else{ int needed = target + nums[i]; }
            for(int j = i+1; j < nums.size() && !founded; j++){
                if(nums[i] + nums[j] == target){ founded = true; result = {i,j}; }
            }
        }
        return result;
    }
  
  // then I tried something different -> beats 94.13% in runtime and 46.15% in memory
    vector<int> twoSum2(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> m;
        for(int i = 0; i < nums.size(); i++){
            if(m.find(target - nums[i]) != m.end()){
                result.push_back(i);
                result.push_back(m[target - nums[i]]);
                return result;
            }else{
                m[nums[i]] = i;
            }
        }return result;
    }
};
