
 ///              Foysol Ahmed Shuvo
 ///              Metropolitan University, Sylhet
/*

Problem Description: Given a string, find the length of the longest substring without repeating characters.
Input: "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Solution Idea: First of all you take each index from you'r string, than just check after the each index you get the maximum length of string. the string carry only distinct character.
Complexity: O(n^2)

*/

/// Note: I have a O(n) solution for this problem


class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();

        int a[300];
        int cnt = 0, mx = 0, j, i;

        for(i=0; i<n; i++) {

          memset(a, 0, sizeof(a));

            a[s[i]] = 1;
            cnt = 1;
            for(int j = i+1; j<n; j++) {
                if(a[s[j]] == 0) {
                    cnt++;
                    a[s[j]] = 1;
                } else {
                    break;
                }
            }
            mx = max(mx, cnt);
        }
        return(mx);
    }
};
