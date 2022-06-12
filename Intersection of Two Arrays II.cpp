// Leetcode: 350. Intersection of Two Arrays II

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_multiset<int> ms;
        vector<int> result;
        for(int i = 0; i < nums1.size(); i++){
            ms.insert(nums1[i]);
        }
        for(int j = 0; j < nums2.size(); j++){
            auto checks = ms.find(nums2[j]);
            if(checks != ms.end()){
                result.push_back(*checks);
                ms.erase(checks);
            }
        }
        return result;
    }
};
