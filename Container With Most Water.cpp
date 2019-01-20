/*
                Foysol Ahmed Shuvo
              Metropolitan University, Sylhet


Problem Description: Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.
Input: [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: consider 2 and last number from given array.

Solution Idea: First of all you take each index from you'r string, than just check after the each index you get the maximum length of string. the string carry only distinct character.
Complexity: O(n^2)

Note: I have a O(n) solution for this problem. (using stack)
*/



class Solution {
public:
    int maxArea(vector<int>& height) {

        int i, len, j, ans = 0;
        len = height.size();

        for(i=0; i<len; i++) {
            for(j=i+1; j<len; j++) {
                int mn = min(height[i], height[j]);
                ans = max(ans, ((j-i)*mn));
            }
        }
        return(ans);
    }
};
