class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_multiset<char> isThere;
        for(int i = 0; i < s.size(); i++){
            isThere.insert(s[i]);
        }
        
        for(int j = 0; j < t.size() ; j++){
            auto it = isThere.find(t[j]);
            if((it == isThere.end())){ return t[j]; }
            else{
                isThere.erase(it);
            }
        }
        return 'c';
    }
};
