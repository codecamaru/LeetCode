/*
3. Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without repeating characters.
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        unordered_set<int> st;
        for(int i = 0; i < s.size(); i++){
            for(int j = i; j < s.size(); j++){
                if(st.find(s[j]) == st.end()){
                    st.insert(s[j]);
                    if(max < (j - i + 1)){
                        max = j - i + 1;
                    }
                }
                else{
                    st.erase(st.begin(),st.end());
                    if(max < (j - i)){
                        max = j - i;
                    }
                    break;
                }
            }
        }
        return max;
    }
};
