class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0;
        
        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                j++; // matched character in t
            }
            i++; // always move in s
        }
        
        // characters left in t that were not matched
        return t.length() - j;
    }
};