class Solution {
public:
    bool isPalindrome(string s) {
    // FIX 1 & 2: Use a temporary string instead of 'erase' to avoid Time Limit Exceeded
    // and handle Case Sensitivity + Symbols at the same time.
    string clean_s = "";
    
    for (int i = 0; i < s.length(); i++) {
        // isalnum checks for letters AND numbers (ignores spaces, commas, etc.)
        if (isalnum(s[i])) {
            // tolower ensures 'A' matches 'a'
            clean_s += tolower(s[i]);
        }
    }
    
    s = clean_s; // Update s to the cleaned version

    string str = s;
    int left = 0, right = str.length() - 1;

    // Your original reverse logic (Works perfectly now)
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
  
    return str == s;
    }
};
