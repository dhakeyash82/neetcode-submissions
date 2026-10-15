class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0; // pointer for s
        int j = 0; // pointer for t
        
        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++; // match found, move s pointer
            }
            j++; // always move t pointer
        }
        
        return i == s.length(); // if all chars matched
    }
};