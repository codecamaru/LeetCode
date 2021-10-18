class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_multiset<char> ms;
        if(s.size() != t.size()){ return false; }
        for(int i = 0; i < s.size(); i++){
            ms.insert(s[i]);
        }
        for(int j = 0; j < t.size(); j++){
            auto it = ms.find(t[j]);
            if(it == ms.end()){ return false; }
            else{
                ms.erase(it);
            }
        }
        return true;
    }
};
