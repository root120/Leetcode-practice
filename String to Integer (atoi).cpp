
/*
                Foysol Ahmed Shuvo
              Metropolitan University, Sylhet


Problem Description: Given a string. you will try to convert string to integer. like a atoi function.
Input: "   -42"
Output: -42
Explanation: The first non-whitespace character is '-', which is the minus sign.
             Then take as many numerical digits as possible, which gets 42.

Solution Idea: Check code for understand
Complexity: O(n)

*/


class Solution {
public:
    int myAtoi(string str)
{
    int i = 0;
    long long int ans = 0;
    int len = str.size();
    while(str[i] == ' ') i++;
    bool flag = false;

    if(str[i]=='-' || str[i] == '+')
    {
        if(str[i] == '-')
        flag = true;
        i++;
    }
    for(; i<len; i++)
    {
        if(str[i]>='0' && str[i] <= '9')
        {
            ans *= 10;
            ans += str[i] - '0';
        }
        else break;
        if(flag == false)
        {
            if(ans > INT_MAX)
            {
                return(INT_MAX);
                break;
            }
        }
        else
        {
            if(ans * (-1) < INT_MIN)
            {
                return(INT_MIN);
            }
        }
    }
    if(flag) ans *= -1;

    return(ans);
}
};
