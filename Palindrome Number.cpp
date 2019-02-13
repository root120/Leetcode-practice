
/*
                Foysol Ahmed Shuvo
              Metropolitan University, Sylhet


Problem Description: Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
Input: 121
Output: true

Solution Idea: just make it reverse. then check forward and reverse same or not.

*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return(false);
        long long int val = 0, y = (long long int)x;
        while(x/10 != 0)
        {
            val *= 10;
            val += (x%10);
            x /= 10;
        }
        val *= 10;
        val += (x%10);

        if(y == val) return(true);
        else return(false);
    }
};
