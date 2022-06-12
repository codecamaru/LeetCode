/* 
242. Valid Anagram
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
*/


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
