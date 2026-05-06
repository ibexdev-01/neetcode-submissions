class Solution {
public:
    bool validPalindrome(string s) {
     int l = 0;
        int r = s.length() - 1;

        while (l < r) {
            if (s[l] != s[r]) {
                // Mismatch found! 
                // We have two chances: skip l OR skip r.
                
                // 1. Check by skipping l (l+1 to r)
                int i1 = l + 1, j1 = r;
                bool skipL = true;
                while (i1 < j1) {
                    if (s[i1++] != s[j1--]) {
                        skipL = false;
                        break;
                    }
                }
                
                // 2. Check by skipping r (l to r-1)
                int i2 = l, j2 = r - 1;
                bool skipR = true;
                while (i2 < j2) {
                    if (s[i2++] != s[j2--]) {
                        skipR = false;
                        break;
                    }
                }
                
                return skipL || skipR;
            }
            l++;
            r--;
        }
        
        return true; // Already a palindrome
    
        
    }
};