/*
                Foysol Ahmed Shuvo
              Metropolitan University, Sylhet


Problem Description: Given a 32-bit signed integer, reverse digits of an integer.
Input: 123
Output: 321

Solution Idea: Simple problem. When you reverse a number just check Integer overflow occur or not.
Complexity: O(log(x))

*/


class Solution {
public:
    int reverse(int x) {
        int val = 0, curr;
        while(x != 0)
        {
            curr = (x%10);
            if(val > INT_MAX/10 || (val == INT_MAX / 10 && curr > 7)) return 0;
            if(val < INT_MIN/10 || (val == INT_MIN / 10 && curr < -8)) return 0;

            val *= 10;
            val += curr;
            x /= 10;
        }
        return (val);
    }
};
