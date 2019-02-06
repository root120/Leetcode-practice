
/*
                Foysol Ahmed Shuvo
              Metropolitan University, Sylhet


Problem Description: Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.
Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.

Solution Idea: First of all you take each index from given string, than assume each index is middle of your target palindrom. keep mind palindrom length is correct if the length is odd or even. For this condition you must check both of the length.
Complexity: O(n^2)

Note: I have a O(n) solution for this problem. (using Manacher's Algorithm)
*/





class Solution
{
public:
    string longestPalindrome(string s)
    {

        int i, j, len, cnt, st, en, pos;
        string str = "";
        len = s.size();

        for(i=0; i<len; i++)
        {
            cnt = check_palindrom(i-1, i+1, s, 1);
            if(str.size()<cnt)
            {
                str = s[i];
                st = i-1;
                en = i+1;
                pos = 1;
                while(pos<cnt)
                {
                    pos += 2;
                    str = s[st] + str;
                    str += s[en];
                    st--;
                    en++;
                }
            }

            cnt = check_palindrom(i, i+1, s, 0);
            if(str.size()<cnt)
            {
                st = i;
                en = i+1;
                pos = 1;
                str = "";
                while(pos<cnt)
                {
                    pos += 2;
                    str = s[st] + str;
                    str += s[en];
                    st--;
                    en++;
                }
            }
        }
        return(str);
    }

    int check_palindrom(int st, int en, string str, int cnt)
    {
        int len = str.size();

        while(st>=0 && en<len && str[st] == str[en])
        {
            cnt += 2;
            st--;
            en++;
        }
        return cnt;
    }
};
